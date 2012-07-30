// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: meta.proto

#ifndef PROTOBUF_meta_2eproto__INCLUDED
#define PROTOBUF_meta_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_meta_2eproto();
void protobuf_AssignDesc_meta_2eproto();
void protobuf_ShutdownFile_meta_2eproto();

class Package;
class Package_Location;

// ===================================================================

class Package_Location : public ::google::protobuf::Message {
 public:
  Package_Location();
  virtual ~Package_Location();
  
  Package_Location(const Package_Location& from);
  
  inline Package_Location& operator=(const Package_Location& from) {
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
  static const Package_Location& default_instance();
  
  void Swap(Package_Location* other);
  
  // implements Message ----------------------------------------------
  
  Package_Location* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Package_Location& from);
  void MergeFrom(const Package_Location& from);
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
  
  // required string hostname = 1;
  inline bool has_hostname() const;
  inline void clear_hostname();
  static const int kHostnameFieldNumber = 1;
  inline const ::std::string& hostname() const;
  inline void set_hostname(const ::std::string& value);
  inline void set_hostname(const char* value);
  inline void set_hostname(const char* value, size_t size);
  inline ::std::string* mutable_hostname();
  inline ::std::string* release_hostname();
  
  // optional int32 port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);
  
  // required string distantChunkName = 3;
  inline bool has_distantchunkname() const;
  inline void clear_distantchunkname();
  static const int kDistantChunkNameFieldNumber = 3;
  inline const ::std::string& distantchunkname() const;
  inline void set_distantchunkname(const ::std::string& value);
  inline void set_distantchunkname(const char* value);
  inline void set_distantchunkname(const char* value, size_t size);
  inline ::std::string* mutable_distantchunkname();
  inline ::std::string* release_distantchunkname();
  
  // required string localChunkName = 4;
  inline bool has_localchunkname() const;
  inline void clear_localchunkname();
  static const int kLocalChunkNameFieldNumber = 4;
  inline const ::std::string& localchunkname() const;
  inline void set_localchunkname(const ::std::string& value);
  inline void set_localchunkname(const char* value);
  inline void set_localchunkname(const char* value, size_t size);
  inline ::std::string* mutable_localchunkname();
  inline ::std::string* release_localchunkname();
  
  // @@protoc_insertion_point(class_scope:Package.Location)
 private:
  inline void set_has_hostname();
  inline void clear_has_hostname();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_distantchunkname();
  inline void clear_has_distantchunkname();
  inline void set_has_localchunkname();
  inline void clear_has_localchunkname();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* hostname_;
  ::std::string* distantchunkname_;
  ::std::string* localchunkname_;
  ::google::protobuf::int32 port_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_meta_2eproto();
  friend void protobuf_AssignDesc_meta_2eproto();
  friend void protobuf_ShutdownFile_meta_2eproto();
  
  void InitAsDefaultInstance();
  static Package_Location* default_instance_;
};
// -------------------------------------------------------------------

class Package : public ::google::protobuf::Message {
 public:
  Package();
  virtual ~Package();
  
  Package(const Package& from);
  
  inline Package& operator=(const Package& from) {
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
  static const Package& default_instance();
  
  void Swap(Package* other);
  
  // implements Message ----------------------------------------------
  
  Package* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Package& from);
  void MergeFrom(const Package& from);
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
  
  typedef Package_Location Location;
  
  // accessors -------------------------------------------------------
  
  // optional bytes virtualPath = 1;
  inline bool has_virtualpath() const;
  inline void clear_virtualpath();
  static const int kVirtualPathFieldNumber = 1;
  inline const ::std::string& virtualpath() const;
  inline void set_virtualpath(const ::std::string& value);
  inline void set_virtualpath(const char* value);
  inline void set_virtualpath(const void* value, size_t size);
  inline ::std::string* mutable_virtualpath();
  inline ::std::string* release_virtualpath();
  
  // optional int32 num = 2;
  inline bool has_num() const;
  inline void clear_num();
  static const int kNumFieldNumber = 2;
  inline ::google::protobuf::int32 num() const;
  inline void set_num(::google::protobuf::int32 value);
  
  // optional bytes realFullPath = 3;
  inline bool has_realfullpath() const;
  inline void clear_realfullpath();
  static const int kRealFullPathFieldNumber = 3;
  inline const ::std::string& realfullpath() const;
  inline void set_realfullpath(const ::std::string& value);
  inline void set_realfullpath(const char* value);
  inline void set_realfullpath(const void* value, size_t size);
  inline ::std::string* mutable_realfullpath();
  inline ::std::string* release_realfullpath();
  
  // optional bool isDir = 4;
  inline bool has_isdir() const;
  inline void clear_isdir();
  static const int kIsDirFieldNumber = 4;
  inline bool isdir() const;
  inline void set_isdir(bool value);
  
  // repeated bytes listItem = 5;
  inline int listitem_size() const;
  inline void clear_listitem();
  static const int kListItemFieldNumber = 5;
  inline const ::std::string& listitem(int index) const;
  inline ::std::string* mutable_listitem(int index);
  inline void set_listitem(int index, const ::std::string& value);
  inline void set_listitem(int index, const char* value);
  inline void set_listitem(int index, const void* value, size_t size);
  inline ::std::string* add_listitem();
  inline void add_listitem(const ::std::string& value);
  inline void add_listitem(const char* value);
  inline void add_listitem(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& listitem() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_listitem();
  
  // optional int32 openMode = 6;
  inline bool has_openmode() const;
  inline void clear_openmode();
  static const int kOpenModeFieldNumber = 6;
  inline ::google::protobuf::int32 openmode() const;
  inline void set_openmode(::google::protobuf::int32 value);
  
  // optional int32 mode = 7;
  inline bool has_mode() const;
  inline void clear_mode();
  static const int kModeFieldNumber = 7;
  inline ::google::protobuf::int32 mode() const;
  inline void set_mode(::google::protobuf::int32 value);
  
  // optional int32 Operation = 8;
  inline bool has_operation() const;
  inline void clear_operation();
  static const int kOperationFieldNumber = 8;
  inline ::google::protobuf::int32 operation() const;
  inline void set_operation(::google::protobuf::int32 value);
  
  // optional int32 replicaNo = 9;
  inline bool has_replicano() const;
  inline void clear_replicano();
  static const int kReplicaNoFieldNumber = 9;
  inline ::google::protobuf::int32 replicano() const;
  inline void set_replicano(::google::protobuf::int32 value);
  
  // optional int32 k = 10;
  inline bool has_k() const;
  inline void clear_k();
  static const int kKFieldNumber = 10;
  inline ::google::protobuf::int32 k() const;
  inline void set_k(::google::protobuf::int32 value);
  
  // optional int32 m = 11;
  inline bool has_m() const;
  inline void clear_m();
  static const int kMFieldNumber = 11;
  inline ::google::protobuf::int32 m() const;
  inline void set_m(::google::protobuf::int32 value);
  
  // optional int32 fileSize = 12;
  inline bool has_filesize() const;
  inline void clear_filesize();
  static const int kFileSizeFieldNumber = 12;
  inline ::google::protobuf::int32 filesize() const;
  inline void set_filesize(::google::protobuf::int32 value);
  
  // optional int32 bufsize = 13;
  inline bool has_bufsize() const;
  inline void clear_bufsize();
  static const int kBufsizeFieldNumber = 13;
  inline ::google::protobuf::int32 bufsize() const;
  inline void set_bufsize(::google::protobuf::int32 value);
  
  // optional int32 encodingLib = 14;
  inline bool has_encodinglib() const;
  inline void clear_encodinglib();
  static const int kEncodingLibFieldNumber = 14;
  inline ::google::protobuf::int32 encodinglib() const;
  inline void set_encodinglib(::google::protobuf::int32 value);
  
  // repeated .Package.Location location = 15;
  inline int location_size() const;
  inline void clear_location();
  static const int kLocationFieldNumber = 15;
  inline const ::Package_Location& location(int index) const;
  inline ::Package_Location* mutable_location(int index);
  inline ::Package_Location* add_location();
  inline const ::google::protobuf::RepeatedPtrField< ::Package_Location >&
      location() const;
  inline ::google::protobuf::RepeatedPtrField< ::Package_Location >*
      mutable_location();
  
  // @@protoc_insertion_point(class_scope:Package)
 private:
  inline void set_has_virtualpath();
  inline void clear_has_virtualpath();
  inline void set_has_num();
  inline void clear_has_num();
  inline void set_has_realfullpath();
  inline void clear_has_realfullpath();
  inline void set_has_isdir();
  inline void clear_has_isdir();
  inline void set_has_openmode();
  inline void clear_has_openmode();
  inline void set_has_mode();
  inline void clear_has_mode();
  inline void set_has_operation();
  inline void clear_has_operation();
  inline void set_has_replicano();
  inline void clear_has_replicano();
  inline void set_has_k();
  inline void clear_has_k();
  inline void set_has_m();
  inline void clear_has_m();
  inline void set_has_filesize();
  inline void clear_has_filesize();
  inline void set_has_bufsize();
  inline void clear_has_bufsize();
  inline void set_has_encodinglib();
  inline void clear_has_encodinglib();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* virtualpath_;
  ::std::string* realfullpath_;
  ::google::protobuf::int32 num_;
  bool isdir_;
  ::google::protobuf::RepeatedPtrField< ::std::string> listitem_;
  ::google::protobuf::int32 openmode_;
  ::google::protobuf::int32 mode_;
  ::google::protobuf::int32 operation_;
  ::google::protobuf::int32 replicano_;
  ::google::protobuf::int32 k_;
  ::google::protobuf::int32 m_;
  ::google::protobuf::int32 filesize_;
  ::google::protobuf::int32 bufsize_;
  ::google::protobuf::RepeatedPtrField< ::Package_Location > location_;
  ::google::protobuf::int32 encodinglib_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(15 + 31) / 32];
  
  friend void  protobuf_AddDesc_meta_2eproto();
  friend void protobuf_AssignDesc_meta_2eproto();
  friend void protobuf_ShutdownFile_meta_2eproto();
  
  void InitAsDefaultInstance();
  static Package* default_instance_;
};
// ===================================================================


// ===================================================================

// Package_Location

// required string hostname = 1;
inline bool Package_Location::has_hostname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Package_Location::set_has_hostname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Package_Location::clear_has_hostname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Package_Location::clear_hostname() {
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    hostname_->clear();
  }
  clear_has_hostname();
}
inline const ::std::string& Package_Location::hostname() const {
  return *hostname_;
}
inline void Package_Location::set_hostname(const ::std::string& value) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(value);
}
inline void Package_Location::set_hostname(const char* value) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(value);
}
inline void Package_Location::set_hostname(const char* value, size_t size) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Package_Location::mutable_hostname() {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  return hostname_;
}
inline ::std::string* Package_Location::release_hostname() {
  clear_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hostname_;
    hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 port = 2;
inline bool Package_Location::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Package_Location::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Package_Location::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Package_Location::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 Package_Location::port() const {
  return port_;
}
inline void Package_Location::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
}

// required string distantChunkName = 3;
inline bool Package_Location::has_distantchunkname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Package_Location::set_has_distantchunkname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Package_Location::clear_has_distantchunkname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Package_Location::clear_distantchunkname() {
  if (distantchunkname_ != &::google::protobuf::internal::kEmptyString) {
    distantchunkname_->clear();
  }
  clear_has_distantchunkname();
}
inline const ::std::string& Package_Location::distantchunkname() const {
  return *distantchunkname_;
}
inline void Package_Location::set_distantchunkname(const ::std::string& value) {
  set_has_distantchunkname();
  if (distantchunkname_ == &::google::protobuf::internal::kEmptyString) {
    distantchunkname_ = new ::std::string;
  }
  distantchunkname_->assign(value);
}
inline void Package_Location::set_distantchunkname(const char* value) {
  set_has_distantchunkname();
  if (distantchunkname_ == &::google::protobuf::internal::kEmptyString) {
    distantchunkname_ = new ::std::string;
  }
  distantchunkname_->assign(value);
}
inline void Package_Location::set_distantchunkname(const char* value, size_t size) {
  set_has_distantchunkname();
  if (distantchunkname_ == &::google::protobuf::internal::kEmptyString) {
    distantchunkname_ = new ::std::string;
  }
  distantchunkname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Package_Location::mutable_distantchunkname() {
  set_has_distantchunkname();
  if (distantchunkname_ == &::google::protobuf::internal::kEmptyString) {
    distantchunkname_ = new ::std::string;
  }
  return distantchunkname_;
}
inline ::std::string* Package_Location::release_distantchunkname() {
  clear_has_distantchunkname();
  if (distantchunkname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = distantchunkname_;
    distantchunkname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string localChunkName = 4;
inline bool Package_Location::has_localchunkname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Package_Location::set_has_localchunkname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Package_Location::clear_has_localchunkname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Package_Location::clear_localchunkname() {
  if (localchunkname_ != &::google::protobuf::internal::kEmptyString) {
    localchunkname_->clear();
  }
  clear_has_localchunkname();
}
inline const ::std::string& Package_Location::localchunkname() const {
  return *localchunkname_;
}
inline void Package_Location::set_localchunkname(const ::std::string& value) {
  set_has_localchunkname();
  if (localchunkname_ == &::google::protobuf::internal::kEmptyString) {
    localchunkname_ = new ::std::string;
  }
  localchunkname_->assign(value);
}
inline void Package_Location::set_localchunkname(const char* value) {
  set_has_localchunkname();
  if (localchunkname_ == &::google::protobuf::internal::kEmptyString) {
    localchunkname_ = new ::std::string;
  }
  localchunkname_->assign(value);
}
inline void Package_Location::set_localchunkname(const char* value, size_t size) {
  set_has_localchunkname();
  if (localchunkname_ == &::google::protobuf::internal::kEmptyString) {
    localchunkname_ = new ::std::string;
  }
  localchunkname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Package_Location::mutable_localchunkname() {
  set_has_localchunkname();
  if (localchunkname_ == &::google::protobuf::internal::kEmptyString) {
    localchunkname_ = new ::std::string;
  }
  return localchunkname_;
}
inline ::std::string* Package_Location::release_localchunkname() {
  clear_has_localchunkname();
  if (localchunkname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = localchunkname_;
    localchunkname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Package

// optional bytes virtualPath = 1;
inline bool Package::has_virtualpath() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Package::set_has_virtualpath() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Package::clear_has_virtualpath() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Package::clear_virtualpath() {
  if (virtualpath_ != &::google::protobuf::internal::kEmptyString) {
    virtualpath_->clear();
  }
  clear_has_virtualpath();
}
inline const ::std::string& Package::virtualpath() const {
  return *virtualpath_;
}
inline void Package::set_virtualpath(const ::std::string& value) {
  set_has_virtualpath();
  if (virtualpath_ == &::google::protobuf::internal::kEmptyString) {
    virtualpath_ = new ::std::string;
  }
  virtualpath_->assign(value);
}
inline void Package::set_virtualpath(const char* value) {
  set_has_virtualpath();
  if (virtualpath_ == &::google::protobuf::internal::kEmptyString) {
    virtualpath_ = new ::std::string;
  }
  virtualpath_->assign(value);
}
inline void Package::set_virtualpath(const void* value, size_t size) {
  set_has_virtualpath();
  if (virtualpath_ == &::google::protobuf::internal::kEmptyString) {
    virtualpath_ = new ::std::string;
  }
  virtualpath_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Package::mutable_virtualpath() {
  set_has_virtualpath();
  if (virtualpath_ == &::google::protobuf::internal::kEmptyString) {
    virtualpath_ = new ::std::string;
  }
  return virtualpath_;
}
inline ::std::string* Package::release_virtualpath() {
  clear_has_virtualpath();
  if (virtualpath_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = virtualpath_;
    virtualpath_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 num = 2;
inline bool Package::has_num() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Package::set_has_num() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Package::clear_has_num() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Package::clear_num() {
  num_ = 0;
  clear_has_num();
}
inline ::google::protobuf::int32 Package::num() const {
  return num_;
}
inline void Package::set_num(::google::protobuf::int32 value) {
  set_has_num();
  num_ = value;
}

// optional bytes realFullPath = 3;
inline bool Package::has_realfullpath() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Package::set_has_realfullpath() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Package::clear_has_realfullpath() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Package::clear_realfullpath() {
  if (realfullpath_ != &::google::protobuf::internal::kEmptyString) {
    realfullpath_->clear();
  }
  clear_has_realfullpath();
}
inline const ::std::string& Package::realfullpath() const {
  return *realfullpath_;
}
inline void Package::set_realfullpath(const ::std::string& value) {
  set_has_realfullpath();
  if (realfullpath_ == &::google::protobuf::internal::kEmptyString) {
    realfullpath_ = new ::std::string;
  }
  realfullpath_->assign(value);
}
inline void Package::set_realfullpath(const char* value) {
  set_has_realfullpath();
  if (realfullpath_ == &::google::protobuf::internal::kEmptyString) {
    realfullpath_ = new ::std::string;
  }
  realfullpath_->assign(value);
}
inline void Package::set_realfullpath(const void* value, size_t size) {
  set_has_realfullpath();
  if (realfullpath_ == &::google::protobuf::internal::kEmptyString) {
    realfullpath_ = new ::std::string;
  }
  realfullpath_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Package::mutable_realfullpath() {
  set_has_realfullpath();
  if (realfullpath_ == &::google::protobuf::internal::kEmptyString) {
    realfullpath_ = new ::std::string;
  }
  return realfullpath_;
}
inline ::std::string* Package::release_realfullpath() {
  clear_has_realfullpath();
  if (realfullpath_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = realfullpath_;
    realfullpath_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool isDir = 4;
inline bool Package::has_isdir() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Package::set_has_isdir() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Package::clear_has_isdir() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Package::clear_isdir() {
  isdir_ = false;
  clear_has_isdir();
}
inline bool Package::isdir() const {
  return isdir_;
}
inline void Package::set_isdir(bool value) {
  set_has_isdir();
  isdir_ = value;
}

// repeated bytes listItem = 5;
inline int Package::listitem_size() const {
  return listitem_.size();
}
inline void Package::clear_listitem() {
  listitem_.Clear();
}
inline const ::std::string& Package::listitem(int index) const {
  return listitem_.Get(index);
}
inline ::std::string* Package::mutable_listitem(int index) {
  return listitem_.Mutable(index);
}
inline void Package::set_listitem(int index, const ::std::string& value) {
  listitem_.Mutable(index)->assign(value);
}
inline void Package::set_listitem(int index, const char* value) {
  listitem_.Mutable(index)->assign(value);
}
inline void Package::set_listitem(int index, const void* value, size_t size) {
  listitem_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Package::add_listitem() {
  return listitem_.Add();
}
inline void Package::add_listitem(const ::std::string& value) {
  listitem_.Add()->assign(value);
}
inline void Package::add_listitem(const char* value) {
  listitem_.Add()->assign(value);
}
inline void Package::add_listitem(const void* value, size_t size) {
  listitem_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Package::listitem() const {
  return listitem_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Package::mutable_listitem() {
  return &listitem_;
}

// optional int32 openMode = 6;
inline bool Package::has_openmode() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Package::set_has_openmode() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Package::clear_has_openmode() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Package::clear_openmode() {
  openmode_ = 0;
  clear_has_openmode();
}
inline ::google::protobuf::int32 Package::openmode() const {
  return openmode_;
}
inline void Package::set_openmode(::google::protobuf::int32 value) {
  set_has_openmode();
  openmode_ = value;
}

// optional int32 mode = 7;
inline bool Package::has_mode() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Package::set_has_mode() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Package::clear_has_mode() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Package::clear_mode() {
  mode_ = 0;
  clear_has_mode();
}
inline ::google::protobuf::int32 Package::mode() const {
  return mode_;
}
inline void Package::set_mode(::google::protobuf::int32 value) {
  set_has_mode();
  mode_ = value;
}

// optional int32 Operation = 8;
inline bool Package::has_operation() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Package::set_has_operation() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Package::clear_has_operation() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Package::clear_operation() {
  operation_ = 0;
  clear_has_operation();
}
inline ::google::protobuf::int32 Package::operation() const {
  return operation_;
}
inline void Package::set_operation(::google::protobuf::int32 value) {
  set_has_operation();
  operation_ = value;
}

// optional int32 replicaNo = 9;
inline bool Package::has_replicano() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Package::set_has_replicano() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Package::clear_has_replicano() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Package::clear_replicano() {
  replicano_ = 0;
  clear_has_replicano();
}
inline ::google::protobuf::int32 Package::replicano() const {
  return replicano_;
}
inline void Package::set_replicano(::google::protobuf::int32 value) {
  set_has_replicano();
  replicano_ = value;
}

// optional int32 k = 10;
inline bool Package::has_k() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Package::set_has_k() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Package::clear_has_k() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Package::clear_k() {
  k_ = 0;
  clear_has_k();
}
inline ::google::protobuf::int32 Package::k() const {
  return k_;
}
inline void Package::set_k(::google::protobuf::int32 value) {
  set_has_k();
  k_ = value;
}

// optional int32 m = 11;
inline bool Package::has_m() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Package::set_has_m() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Package::clear_has_m() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Package::clear_m() {
  m_ = 0;
  clear_has_m();
}
inline ::google::protobuf::int32 Package::m() const {
  return m_;
}
inline void Package::set_m(::google::protobuf::int32 value) {
  set_has_m();
  m_ = value;
}

// optional int32 fileSize = 12;
inline bool Package::has_filesize() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Package::set_has_filesize() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Package::clear_has_filesize() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Package::clear_filesize() {
  filesize_ = 0;
  clear_has_filesize();
}
inline ::google::protobuf::int32 Package::filesize() const {
  return filesize_;
}
inline void Package::set_filesize(::google::protobuf::int32 value) {
  set_has_filesize();
  filesize_ = value;
}

// optional int32 bufsize = 13;
inline bool Package::has_bufsize() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Package::set_has_bufsize() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Package::clear_has_bufsize() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Package::clear_bufsize() {
  bufsize_ = 0;
  clear_has_bufsize();
}
inline ::google::protobuf::int32 Package::bufsize() const {
  return bufsize_;
}
inline void Package::set_bufsize(::google::protobuf::int32 value) {
  set_has_bufsize();
  bufsize_ = value;
}

// optional int32 encodingLib = 14;
inline bool Package::has_encodinglib() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Package::set_has_encodinglib() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Package::clear_has_encodinglib() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Package::clear_encodinglib() {
  encodinglib_ = 0;
  clear_has_encodinglib();
}
inline ::google::protobuf::int32 Package::encodinglib() const {
  return encodinglib_;
}
inline void Package::set_encodinglib(::google::protobuf::int32 value) {
  set_has_encodinglib();
  encodinglib_ = value;
}

// repeated .Package.Location location = 15;
inline int Package::location_size() const {
  return location_.size();
}
inline void Package::clear_location() {
  location_.Clear();
}
inline const ::Package_Location& Package::location(int index) const {
  return location_.Get(index);
}
inline ::Package_Location* Package::mutable_location(int index) {
  return location_.Mutable(index);
}
inline ::Package_Location* Package::add_location() {
  return location_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Package_Location >&
Package::location() const {
  return location_;
}
inline ::google::protobuf::RepeatedPtrField< ::Package_Location >*
Package::mutable_location() {
  return &location_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_meta_2eproto__INCLUDED
