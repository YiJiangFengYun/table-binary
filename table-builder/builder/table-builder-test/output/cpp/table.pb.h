// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: table.proto

#ifndef PROTOBUF_table_2eproto__INCLUDED
#define PROTOBUF_table_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace protobuf {
class Any;
class AnyDefaultTypeInternal;
extern AnyDefaultTypeInternal _Any_default_instance_;
}  // namespace protobuf
}  // namespace google
namespace table {
class Column;
class ColumnDefaultTypeInternal;
extern ColumnDefaultTypeInternal _Column_default_instance_;
class Table;
class TableDefaultTypeInternal;
extern TableDefaultTypeInternal _Table_default_instance_;
class Wrapper;
class WrapperDefaultTypeInternal;
extern WrapperDefaultTypeInternal _Wrapper_default_instance_;
}  // namespace table

namespace table {

namespace protobuf_table_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_table_2eproto

// ===================================================================

class Table : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:table.Table) */ {
 public:
  Table();
  virtual ~Table();

  Table(const Table& from);

  inline Table& operator=(const Table& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Table& default_instance();

  static inline const Table* internal_default_instance() {
    return reinterpret_cast<const Table*>(
               &_Table_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Table* other);

  // implements Message ----------------------------------------------

  inline Table* New() const PROTOBUF_FINAL { return New(NULL); }

  Table* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Table& from);
  void MergeFrom(const Table& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Table* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string description = 2;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // @@protoc_insertion_point(class_scope:table.Table)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  mutable int _cached_size_;
  friend struct protobuf_table_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Column : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:table.Column) */ {
 public:
  Column();
  virtual ~Column();

  Column(const Column& from);

  inline Column& operator=(const Column& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Column& default_instance();

  static inline const Column* internal_default_instance() {
    return reinterpret_cast<const Column*>(
               &_Column_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Column* other);

  // implements Message ----------------------------------------------

  inline Column* New() const PROTOBUF_FINAL { return New(NULL); }

  Column* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Column& from);
  void MergeFrom(const Column& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Column* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string description = 2;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // string type_name = 3;
  void clear_type_name();
  static const int kTypeNameFieldNumber = 3;
  const ::std::string& type_name() const;
  void set_type_name(const ::std::string& value);
  #if LANG_CXX11
  void set_type_name(::std::string&& value);
  #endif
  void set_type_name(const char* value);
  void set_type_name(const char* value, size_t size);
  ::std::string* mutable_type_name();
  ::std::string* release_type_name();
  void set_allocated_type_name(::std::string* type_name);

  // @@protoc_insertion_point(class_scope:table.Column)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr type_name_;
  mutable int _cached_size_;
  friend struct protobuf_table_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Wrapper : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:table.Wrapper) */ {
 public:
  Wrapper();
  virtual ~Wrapper();

  Wrapper(const Wrapper& from);

  inline Wrapper& operator=(const Wrapper& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Wrapper& default_instance();

  static inline const Wrapper* internal_default_instance() {
    return reinterpret_cast<const Wrapper*>(
               &_Wrapper_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Wrapper* other);

  // implements Message ----------------------------------------------

  inline Wrapper* New() const PROTOBUF_FINAL { return New(NULL); }

  Wrapper* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Wrapper& from);
  void MergeFrom(const Wrapper& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Wrapper* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.protobuf.Any contents = 1;
  int contents_size() const;
  void clear_contents();
  static const int kContentsFieldNumber = 1;
  const ::google::protobuf::Any& contents(int index) const;
  ::google::protobuf::Any* mutable_contents(int index);
  ::google::protobuf::Any* add_contents();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >*
      mutable_contents();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >&
      contents() const;

  // @@protoc_insertion_point(class_scope:table.Wrapper)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any > contents_;
  mutable int _cached_size_;
  friend struct protobuf_table_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Table

// string name = 1;
inline void Table::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Table::name() const {
  // @@protoc_insertion_point(field_get:table.Table.name)
  return name_.GetNoArena();
}
inline void Table::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:table.Table.name)
}
#if LANG_CXX11
inline void Table::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:table.Table.name)
}
#endif
inline void Table::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:table.Table.name)
}
inline void Table::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:table.Table.name)
}
inline ::std::string* Table::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:table.Table.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Table::release_name() {
  // @@protoc_insertion_point(field_release:table.Table.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Table::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:table.Table.name)
}

// string description = 2;
inline void Table::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Table::description() const {
  // @@protoc_insertion_point(field_get:table.Table.description)
  return description_.GetNoArena();
}
inline void Table::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:table.Table.description)
}
#if LANG_CXX11
inline void Table::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:table.Table.description)
}
#endif
inline void Table::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:table.Table.description)
}
inline void Table::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:table.Table.description)
}
inline ::std::string* Table::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:table.Table.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Table::release_description() {
  // @@protoc_insertion_point(field_release:table.Table.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Table::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:table.Table.description)
}

// -------------------------------------------------------------------

// Column

// string name = 1;
inline void Column::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Column::name() const {
  // @@protoc_insertion_point(field_get:table.Column.name)
  return name_.GetNoArena();
}
inline void Column::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:table.Column.name)
}
#if LANG_CXX11
inline void Column::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:table.Column.name)
}
#endif
inline void Column::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:table.Column.name)
}
inline void Column::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:table.Column.name)
}
inline ::std::string* Column::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:table.Column.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Column::release_name() {
  // @@protoc_insertion_point(field_release:table.Column.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Column::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:table.Column.name)
}

// string description = 2;
inline void Column::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Column::description() const {
  // @@protoc_insertion_point(field_get:table.Column.description)
  return description_.GetNoArena();
}
inline void Column::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:table.Column.description)
}
#if LANG_CXX11
inline void Column::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:table.Column.description)
}
#endif
inline void Column::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:table.Column.description)
}
inline void Column::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:table.Column.description)
}
inline ::std::string* Column::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:table.Column.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Column::release_description() {
  // @@protoc_insertion_point(field_release:table.Column.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Column::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:table.Column.description)
}

// string type_name = 3;
inline void Column::clear_type_name() {
  type_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Column::type_name() const {
  // @@protoc_insertion_point(field_get:table.Column.type_name)
  return type_name_.GetNoArena();
}
inline void Column::set_type_name(const ::std::string& value) {
  
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:table.Column.type_name)
}
#if LANG_CXX11
inline void Column::set_type_name(::std::string&& value) {
  
  type_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:table.Column.type_name)
}
#endif
inline void Column::set_type_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:table.Column.type_name)
}
inline void Column::set_type_name(const char* value, size_t size) {
  
  type_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:table.Column.type_name)
}
inline ::std::string* Column::mutable_type_name() {
  
  // @@protoc_insertion_point(field_mutable:table.Column.type_name)
  return type_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Column::release_type_name() {
  // @@protoc_insertion_point(field_release:table.Column.type_name)
  
  return type_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Column::set_allocated_type_name(::std::string* type_name) {
  if (type_name != NULL) {
    
  } else {
    
  }
  type_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_name);
  // @@protoc_insertion_point(field_set_allocated:table.Column.type_name)
}

// -------------------------------------------------------------------

// Wrapper

// repeated .google.protobuf.Any contents = 1;
inline int Wrapper::contents_size() const {
  return contents_.size();
}
inline void Wrapper::clear_contents() {
  contents_.Clear();
}
inline const ::google::protobuf::Any& Wrapper::contents(int index) const {
  // @@protoc_insertion_point(field_get:table.Wrapper.contents)
  return contents_.Get(index);
}
inline ::google::protobuf::Any* Wrapper::mutable_contents(int index) {
  // @@protoc_insertion_point(field_mutable:table.Wrapper.contents)
  return contents_.Mutable(index);
}
inline ::google::protobuf::Any* Wrapper::add_contents() {
  // @@protoc_insertion_point(field_add:table.Wrapper.contents)
  return contents_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >*
Wrapper::mutable_contents() {
  // @@protoc_insertion_point(field_mutable_list:table.Wrapper.contents)
  return &contents_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >&
Wrapper::contents() const {
  // @@protoc_insertion_point(field_list:table.Wrapper.contents)
  return contents_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace table

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_table_2eproto__INCLUDED
