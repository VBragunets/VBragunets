// Василина Брагунец, 108
#include <boost/filesystem.hpp>  
#include "pbfile.pb.h"
#include <iostream>
#include <fstream>  
#include <string>

namespace fs = boost::filesystem;
using namespace std;

struct Fileinfo {
	string path;
	string hash;
	int size;
	string flag;
};

void savepbuf(string filename, vector<Fileinfo> vec_finfo) {
	nsofdir::ArrFilep flist;
	nsofdir::Filep * file_entry;
	ofstream output(filename, ofstream::binary);
	for (Fileinfo it : vec_finfo) {
		file_entry = flist.add_filep();
		file_entry->set_filepath(it.path);
		file_entry->set_size(it.size);
		file_entry->set_mdsixhash("NULL");

	}
	flist.PrintDebugString();
	flist.SerializeToOstream(&output);
	output.close();
}

void get_dir_list(fs::directory_iterator iterator, vector<Fileinfo> * vec_finfo) {
	Fileinfo finfo;
	for (; iterator != fs::directory_iterator(); ++iterator)
	{
		if (fs::is_directory(iterator->status())) { 
			fs::directory_iterator sub_dir(iterator->path());
			get_dir_list(sub_dir, vec_finfo);

		}
		else
		{
			finfo.path = iterator->path().string();
			replace(finfo.path.begin(), finfo.path.end(), '\\', '/');
			finfo.size = fs::file_size(iterator->path());
			finfo.hash = "NOT YET";
			finfo.flag = 'N';
			vec_finfo->push_back(finfo);
		}

	}
}

int main() {
	ofstream myfile;
	string path, dirpath;
	cout << "Vvedite adres papki:" << endl;
	getline(cin, path);
	vector<Fileinfo> vec_finfo; 
	vector<Fileinfo> vec_finfo_old; 
	fs::directory_iterator home_dir(path); 
	get_dir_list(home_dir, &vec_finfo); 
	savepbuf("filelist.pb", vec_finfo);
	cin.clear();
	fflush(stdin);
	cin.get();
	return 0;
}