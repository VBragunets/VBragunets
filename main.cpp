#include <iostream>
#include <fstream>
#include <string>
#include <boost/filesystem.hpp> 
#include "pbfile.pb.h" 
#include "md6/md6.h"

namespace fs = boost::filesystem;
std::string test;

struct Fileinfo {
	std::string path;
	std::string hash;
	int size;
	std::string flag = "Novyi";
};


std::vector<Fileinfo> compare_lists(std::vector<Fileinfo> newfl, std::vector<Fileinfo> oldfl) {
	for (std::vector<Fileinfo>::iterator itnew = newfl.begin(); itnew < newfl.end(); itnew++) {
		
		for (std::vector<Fileinfo>::iterator itold = oldfl.begin(); itold < oldfl.end(); itold++) {
			if ((itnew->path == itold->path) && (itnew->hash == itold->hash)) {
				itnew->flag = "Ne izmenen";
				oldfl.erase(itold);
				break;
			}
			if ((itnew->path == itold->path) && (itnew->hash != itold->hash)) {
				itnew->flag = "Izmenen";
				oldfl.erase(itold);
				break;
			}
		}
	}
	for (std::vector<Fileinfo>::iterator itold = oldfl.begin(); itold < oldfl.end(); itold++) {
		itold->flag = "Udalen";
		newfl.push_back(*itold);
	}
	return newfl;
}


void savepbuf(std::string filename, std::vector<Fileinfo> & vec_finfo) {
	nsofdir::ArrFilep flist;
	nsofdir::Filep * file_entry;
	std::ofstream output(filename, std::ofstream::binary);
	for (Fileinfo it : vec_finfo) {
		file_entry = flist.add_filep();
		file_entry->set_filepath(it.path);
		file_entry->set_size(it.size);
		file_entry->set_mdsixhash(it.hash);

	}
	flist.PrintDebugString();
	flist.SerializeToOstream(&output);
	output.close();
}


void loadpbuf(std::string filename, std::vector<Fileinfo> & vec_finfo) {
	Fileinfo it;
	nsofdir::ArrFilep flist;  
	nsofdir::Filep file_entry;
	std::ifstream input(filename, std::ofstream::binary); 
	flist.ParseFromIstream(&input);  
	input.close();
	file_entry.PrintDebugString();
	for (int i = 0; i < flist.filep_size(); i++) {
		file_entry = flist.filep(i);
		it.path = file_entry.filepath();
		it.size = file_entry.size();
		it.hash = file_entry.mdsixhash();
		vec_finfo.push_back(it);
	}
}

void get_dir_list(fs::directory_iterator iterator, std::vector<Fileinfo> & vec_finfo, Fileinfo & finfo, std::ifstream & ifs) {
	for (; iterator != fs::directory_iterator(); ++iterator)
	{
		if (fs::is_directory(iterator->status())) {
			fs::directory_iterator sub_dir(iterator->path());
			get_dir_list(sub_dir, vec_finfo, finfo, ifs);

		}
		else
		{

			finfo.path = iterator->path().string();
			std::replace(finfo.path.begin(), finfo.path.end(), '\\', '/');
			finfo.size = fs::file_size(iterator->path());
			ifs.open(finfo.path, std::ios_base::binary);
			std::string strifs((std::istreambuf_iterator<char>(ifs)),
				(std::istreambuf_iterator<char>()));
			finfo.hash = md6(strifs);
			ifs.close();
			vec_finfo.push_back(finfo);
		}

	}
}

void print_finfo_vec(std::vector<Fileinfo> vec) {
	for (Fileinfo element : vec) {
		std::cout << element.path << std::endl <<
			element.size << std::endl <<
			element.hash << std::endl <<
			element.flag << std::endl << "***************" << std::endl;
	}
}

int main() {
	std::ofstream myfile;
	std::string path, dirpath;
	Fileinfo finfo;
	std::ifstream ifs;
	std::string checkstatus;
	std::cout << "Vvedite save dlya zapisi faila, check dlya sravneniya" << 
		std::endl << "(check/save)" << std::endl;
	std::cin >> checkstatus;
	std::cin.clear();
	fflush(stdin);
	std::cout << "Put' k papke:" << std::endl;
	std::getline(std::cin, path);
	std::vector<Fileinfo> vec_finfo;
	std::vector<Fileinfo> vec_finfo_old;
	try {
		fs::directory_iterator home_dir(path);
		get_dir_list(home_dir, vec_finfo, finfo, ifs);
	}
	catch (const boost::filesystem::filesystem_error& e) {
		std::cout << "Nepravilnyi put'" << std::endl;
		checkstatus = "null";
	}
	if (checkstatus == "save") {
		savepbuf("filelist.pb", vec_finfo);
		print_finfo_vec(vec_finfo);
	}
	if (checkstatus == "check") {
		loadpbuf("filelist.pb", vec_finfo_old);
		print_finfo_vec(compare_lists(vec_finfo, vec_finfo_old));
	}
	if ((checkstatus != "save") && (checkstatus != "check")) {
		print_finfo_vec(vec_finfo);
	}
	std::cin.clear();
	fflush(stdin);
	std::cin.get();
	return 0;
}