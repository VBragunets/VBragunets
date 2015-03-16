// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pbfile.proto

#ifndef PROTOBUF_pbfile_2eproto__INCLUDED
#define PROTOBUF_pbfile_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace nsofdir {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pbfile_2eproto();
void protobuf_AssignDesc_pbfile_2eproto();
void protobuf_ShutdownFile_pbfile_2eproto();

class Filep;
class ArrFilep;

// ===================================================================

class Filep : public ::google::protobuf::Message {
 public:
  Filep();
  virtual ~Filep();

  Filep(const Filep& from);

  inline Filep& operator=(const Filep& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Filep& default_instance();

  void Swap(Filep* other);

  // implements Message ----------------------------------------------

  Filep* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Filep& from);
  void MergeFrom(const Filep& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string filepath = 1;
  inline bool has_filepath() const;
  inline void clear_filepath();
  static const int kFilepathFieldNumber = 1;
  inline const ::std::string& filepath() const;
  inline void set_filepath(const ::std::string& value);
  inline void set_filepath(const char* value);
  inline void set_filepath(const char* value, size_t size);
  inline ::std::string* mutable_filepath();
  inline ::std::string* release_filepath();
  inline void set_allocated_filepath(::std::string* filepath);

  // required int32 size = 2;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 2;
  inline ::google::protobuf::int32 size() const;
  inline void set_size(::google::protobuf::int32 value);

  // required string mdsixhash = 3;
  inline bool has_mdsixhash() const;
  inline void clear_mdsixhash();
  static const int kMdsixhashFieldNumber = 3;
  inline const ::std::string& mdsixhash() const;
  inline void set_mdsixhash(const ::std::string& value);
  inline void set_mdsixhash(const char* value);
  inline void set_mdsixhash(const char* value, size_t size);
  inline ::std::string* mutable_mdsixhash();
  inline ::std::string* release_mdsixhash();
  inline void set_allocated_mdsixhash(::std::string* mdsixhash);

  // @@protoc_insertion_point(class_scope:nsofdir.Filep)
 private:
  inline void set_has_filepath();
  inline void clear_has_filepath();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_mdsixhash();
  inline void clear_has_mdsixhash();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* filepath_;
  ::std::string* mdsixhash_;
  ::google::protobuf::int32 size_;
  friend void  protobuf_AddDesc_pbfile_2eproto();
  friend void protobuf_AssignDesc_pbfile_2eproto();
  friend void protobuf_ShutdownFile_pbfile_2eproto();

  void InitAsDefaultInstance();
  static Filep* default_instance_;
};
// -------------------------------------------------------------------

class ArrFilep : public ::google::protobuf::Message {
 public:
  ArrFilep();
  virtual ~ArrFilep();

  ArrFilep(const ArrFilep& from);

  inline ArrFilep& operator=(const ArrFilep& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ArrFilep& default_instance();

  void Swap(ArrFilep* other);

  // implements Message ----------------------------------------------

  ArrFilep* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ArrFilep& from);
  void MergeFrom(const ArrFilep& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .nsofdir.Filep filep = 1;
  inline int filep_size() const;
  inline void clear_filep();
  static const int kFilepFieldNumber = 1;
  inline const ::nsofdir::Filep& filep(int index) const;
  inline ::nsofdir::Filep* mutable_filep(int index);
  inline ::nsofdir::Filep* add_filep();
  inline const ::google::protobuf::RepeatedPtrField< ::nsofdir::Filep >&
      filep() const;
  inline ::google::protobuf::RepeatedPtrField< ::nsofdir::Filep >*
      mutable_filep();

  // @@protoc_insertion_point(class_scope:nsofdir.ArrFilep)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::nsofdir::Filep > filep_;
  friend void  protobuf_AddDesc_pbfile_2eproto();
  friend void protobuf_AssignDesc_pbfile_2eproto();
  friend void protobuf_ShutdownFile_pbfile_2eproto();

  void InitAsDefaultInstance();
  static ArrFilep* default_instance_;
};
// ===================================================================


// ===================================================================

// Filep

// required string filepath = 1;
inline bool Filep::has_filepath() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Filep::set_has_filepath() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Filep::clear_has_filepath() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Filep::clear_filepath() {
  if (filepath_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filepath_->clear();
  }
  clear_has_filepath();
}
inline const ::std::string& Filep::filepath() const {
  // @@protoc_insertion_point(field_get:nsofdir.Filep.filepath)
  return *filepath_;
}
inline void Filep::set_filepath(const ::std::string& value) {
  set_has_filepath();
  if (filepath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filepath_ = new ::std::string;
  }
  filepath_->assign(value);
  // @@protoc_insertion_point(field_set:nsofdir.Filep.filepath)
}
inline void Filep::set_filepath(const char* value) {
  set_has_filepath();
  if (filepath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filepath_ = new ::std::string;
  }
  filepath_->assign(value);
  // @@protoc_insertion_point(field_set_char:nsofdir.Filep.filepath)
}
inline void Filep::set_filepath(const char* value, size_t size) {
  set_has_filepath();
  if (filepath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filepath_ = new ::std::string;
  }
  filepath_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:nsofdir.Filep.filepath)
}
inline ::std::string* Filep::mutable_filepath() {
  set_has_filepath();
  if (filepath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    filepath_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:nsofdir.Filep.filepath)
  return filepath_;
}
inline ::std::string* Filep::release_filepath() {
  clear_has_filepath();
  if (filepath_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = filepath_;
    filepath_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Filep::set_allocated_filepath(::std::string* filepath) {
  if (filepath_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete filepath_;
  }
  if (filepath) {
    set_has_filepath();
    filepath_ = filepath;
  } else {
    clear_has_filepath();
    filepath_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:nsofdir.Filep.filepath)
}

// required int32 size = 2;
inline bool Filep::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Filep::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Filep::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Filep::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline ::google::protobuf::int32 Filep::size() const {
  // @@protoc_insertion_point(field_get:nsofdir.Filep.size)
  return size_;
}
inline void Filep::set_size(::google::protobuf::int32 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:nsofdir.Filep.size)
}

// required string mdsixhash = 3;
inline bool Filep::has_mdsixhash() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Filep::set_has_mdsixhash() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Filep::clear_has_mdsixhash() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Filep::clear_mdsixhash() {
  if (mdsixhash_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mdsixhash_->clear();
  }
  clear_has_mdsixhash();
}
inline const ::std::string& Filep::mdsixhash() const {
  // @@protoc_insertion_point(field_get:nsofdir.Filep.mdsixhash)
  return *mdsixhash_;
}
inline void Filep::set_mdsixhash(const ::std::string& value) {
  set_has_mdsixhash();
  if (mdsixhash_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mdsixhash_ = new ::std::string;
  }
  mdsixhash_->assign(value);
  // @@protoc_insertion_point(field_set:nsofdir.Filep.mdsixhash)
}
inline void Filep::set_mdsixhash(const char* value) {
  set_has_mdsixhash();
  if (mdsixhash_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mdsixhash_ = new ::std::string;
  }
  mdsixhash_->assign(value);
  // @@protoc_insertion_point(field_set_char:nsofdir.Filep.mdsixhash)
}
inline void Filep::set_mdsixhash(const char* value, size_t size) {
  set_has_mdsixhash();
  if (mdsixhash_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mdsixhash_ = new ::std::string;
  }
  mdsixhash_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:nsofdir.Filep.mdsixhash)
}
inline ::std::string* Filep::mutable_mdsixhash() {
  set_has_mdsixhash();
  if (mdsixhash_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mdsixhash_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:nsofdir.Filep.mdsixhash)
  return mdsixhash_;
}
inline ::std::string* Filep::release_mdsixhash() {
  clear_has_mdsixhash();
  if (mdsixhash_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = mdsixhash_;
    mdsixhash_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Filep::set_allocated_mdsixhash(::std::string* mdsixhash) {
  if (mdsixhash_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete mdsixhash_;
  }
  if (mdsixhash) {
    set_has_mdsixhash();
    mdsixhash_ = mdsixhash;
  } else {
    clear_has_mdsixhash();
    mdsixhash_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:nsofdir.Filep.mdsixhash)
}

// -------------------------------------------------------------------

// ArrFilep

// repeated .nsofdir.Filep filep = 1;
inline int ArrFilep::filep_size() const {
  return filep_.size();
}
inline void ArrFilep::clear_filep() {
  filep_.Clear();
}
inline const ::nsofdir::Filep& ArrFilep::filep(int index) const {
  // @@protoc_insertion_point(field_get:nsofdir.ArrFilep.filep)
  return filep_.Get(index);
}
inline ::nsofdir::Filep* ArrFilep::mutable_filep(int index) {
  // @@protoc_insertion_point(field_mutable:nsofdir.ArrFilep.filep)
  return filep_.Mutable(index);
}
inline ::nsofdir::Filep* ArrFilep::add_filep() {
  // @@protoc_insertion_point(field_add:nsofdir.ArrFilep.filep)
  return filep_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::nsofdir::Filep >&
ArrFilep::filep() const {
  // @@protoc_insertion_point(field_list:nsofdir.ArrFilep.filep)
  return filep_;
}
inline ::google::protobuf::RepeatedPtrField< ::nsofdir::Filep >*
ArrFilep::mutable_filep() {
  // @@protoc_insertion_point(field_mutable_list:nsofdir.ArrFilep.filep)
  return &filep_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace nsofdir

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pbfile_2eproto__INCLUDED
