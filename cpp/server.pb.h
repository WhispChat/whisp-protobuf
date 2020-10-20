// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_server_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_server_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_server_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_server_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_server_2eproto;
namespace server {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class Status;
class StatusDefaultTypeInternal;
extern StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace server
PROTOBUF_NAMESPACE_OPEN
template<> ::server::Message* Arena::CreateMaybeMessage<::server::Message>(Arena*);
template<> ::server::Status* Arena::CreateMaybeMessage<::server::Status>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace server {

enum Message_MessageType : int {
  Message_MessageType_INFO = 0,
  Message_MessageType_ERROR = 1,
  Message_MessageType_DEBUG = 2,
  Message_MessageType_Message_MessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Message_MessageType_Message_MessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Message_MessageType_IsValid(int value);
constexpr Message_MessageType Message_MessageType_MessageType_MIN = Message_MessageType_INFO;
constexpr Message_MessageType Message_MessageType_MessageType_MAX = Message_MessageType_DEBUG;
constexpr int Message_MessageType_MessageType_ARRAYSIZE = Message_MessageType_MessageType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Message_MessageType_descriptor();
template<typename T>
inline const std::string& Message_MessageType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Message_MessageType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Message_MessageType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Message_MessageType_descriptor(), enum_t_value);
}
inline bool Message_MessageType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Message_MessageType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Message_MessageType>(
    Message_MessageType_descriptor(), name, value);
}
// ===================================================================

class Status PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:server.Status) */ {
 public:
  inline Status() : Status(nullptr) {}
  virtual ~Status();

  Status(const Status& from);
  Status(Status&& from) noexcept
    : Status() {
    *this = ::std::move(from);
  }

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Status& operator=(Status&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Status* internal_default_instance() {
    return reinterpret_cast<const Status*>(
               &_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Status& a, Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Status* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Status* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Status* New() const final {
    return CreateMaybeMessage<Status>(nullptr);
  }

  Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "server.Status";
  }
  protected:
  explicit Status(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_server_2eproto);
    return ::descriptor_table_server_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimestampFieldNumber = 3,
    kNumberConnectionsFieldNumber = 1,
    kMaxConnectionsFieldNumber = 2,
  };
  // .google.protobuf.Timestamp timestamp = 3;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // uint64 number_connections = 1;
  void clear_number_connections();
  ::PROTOBUF_NAMESPACE_ID::uint64 number_connections() const;
  void set_number_connections(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_number_connections() const;
  void _internal_set_number_connections(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 max_connections = 2;
  void clear_max_connections();
  ::PROTOBUF_NAMESPACE_ID::uint64 max_connections() const;
  void set_max_connections(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_max_connections() const;
  void _internal_set_max_connections(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:server.Status)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
  ::PROTOBUF_NAMESPACE_ID::uint64 number_connections_;
  ::PROTOBUF_NAMESPACE_ID::uint64 max_connections_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_server_2eproto;
};
// -------------------------------------------------------------------

class Message PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:server.Message) */ {
 public:
  inline Message() : Message(nullptr) {}
  virtual ~Message();

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Message& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Message* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "server.Message";
  }
  protected:
  explicit Message(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_server_2eproto);
    return ::descriptor_table_server_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Message_MessageType MessageType;
  static constexpr MessageType INFO =
    Message_MessageType_INFO;
  static constexpr MessageType ERROR =
    Message_MessageType_ERROR;
  static constexpr MessageType DEBUG =
    Message_MessageType_DEBUG;
  static inline bool MessageType_IsValid(int value) {
    return Message_MessageType_IsValid(value);
  }
  static constexpr MessageType MessageType_MIN =
    Message_MessageType_MessageType_MIN;
  static constexpr MessageType MessageType_MAX =
    Message_MessageType_MessageType_MAX;
  static constexpr int MessageType_ARRAYSIZE =
    Message_MessageType_MessageType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  MessageType_descriptor() {
    return Message_MessageType_descriptor();
  }
  template<typename T>
  static inline const std::string& MessageType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, MessageType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function MessageType_Name.");
    return Message_MessageType_Name(enum_t_value);
  }
  static inline bool MessageType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      MessageType* value) {
    return Message_MessageType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 2,
    kTimestampFieldNumber = 3,
    kTypeFieldNumber = 1,
  };
  // string content = 2;
  void clear_content();
  const std::string& content() const;
  void set_content(const std::string& value);
  void set_content(std::string&& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  std::string* mutable_content();
  std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // .google.protobuf.Timestamp timestamp = 3;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // .server.Message.MessageType type = 1;
  void clear_type();
  ::server::Message_MessageType type() const;
  void set_type(::server::Message_MessageType value);
  private:
  ::server::Message_MessageType _internal_type() const;
  void _internal_set_type(::server::Message_MessageType value);
  public:

  // @@protoc_insertion_point(class_scope:server.Message)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
  PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_server_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Status

// uint64 number_connections = 1;
inline void Status::clear_number_connections() {
  number_connections_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Status::_internal_number_connections() const {
  return number_connections_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Status::number_connections() const {
  // @@protoc_insertion_point(field_get:server.Status.number_connections)
  return _internal_number_connections();
}
inline void Status::_internal_set_number_connections(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  number_connections_ = value;
}
inline void Status::set_number_connections(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_number_connections(value);
  // @@protoc_insertion_point(field_set:server.Status.number_connections)
}

// uint64 max_connections = 2;
inline void Status::clear_max_connections() {
  max_connections_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Status::_internal_max_connections() const {
  return max_connections_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Status::max_connections() const {
  // @@protoc_insertion_point(field_get:server.Status.max_connections)
  return _internal_max_connections();
}
inline void Status::_internal_set_max_connections(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  max_connections_ = value;
}
inline void Status::set_max_connections(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_max_connections(value);
  // @@protoc_insertion_point(field_set:server.Status.max_connections)
}

// .google.protobuf.Timestamp timestamp = 3;
inline bool Status::_internal_has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != nullptr;
}
inline bool Status::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Status::_internal_timestamp() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = timestamp_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Status::timestamp() const {
  // @@protoc_insertion_point(field_get:server.Status.timestamp)
  return _internal_timestamp();
}
inline void Status::unsafe_arena_set_allocated_timestamp(
    PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:server.Status.timestamp)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Status::release_timestamp() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Status::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:server.Status.timestamp)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Status::_internal_mutable_timestamp() {
  
  if (timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    timestamp_ = p;
  }
  return timestamp_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Status::mutable_timestamp() {
  // @@protoc_insertion_point(field_mutable:server.Status.timestamp)
  return _internal_mutable_timestamp();
}
inline void Status::set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp)->GetArena();
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:server.Status.timestamp)
}

// -------------------------------------------------------------------

// Message

// .server.Message.MessageType type = 1;
inline void Message::clear_type() {
  type_ = 0;
}
inline ::server::Message_MessageType Message::_internal_type() const {
  return static_cast< ::server::Message_MessageType >(type_);
}
inline ::server::Message_MessageType Message::type() const {
  // @@protoc_insertion_point(field_get:server.Message.type)
  return _internal_type();
}
inline void Message::_internal_set_type(::server::Message_MessageType value) {
  
  type_ = value;
}
inline void Message::set_type(::server::Message_MessageType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:server.Message.type)
}

// string content = 2;
inline void Message::clear_content() {
  content_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Message::content() const {
  // @@protoc_insertion_point(field_get:server.Message.content)
  return _internal_content();
}
inline void Message::set_content(const std::string& value) {
  _internal_set_content(value);
  // @@protoc_insertion_point(field_set:server.Message.content)
}
inline std::string* Message::mutable_content() {
  // @@protoc_insertion_point(field_mutable:server.Message.content)
  return _internal_mutable_content();
}
inline const std::string& Message::_internal_content() const {
  return content_.Get();
}
inline void Message::_internal_set_content(const std::string& value) {
  
  content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Message::set_content(std::string&& value) {
  
  content_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:server.Message.content)
}
inline void Message::set_content(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:server.Message.content)
}
inline void Message::set_content(const char* value,
    size_t size) {
  
  content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:server.Message.content)
}
inline std::string* Message::_internal_mutable_content() {
  
  return content_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Message::release_content() {
  // @@protoc_insertion_point(field_release:server.Message.content)
  return content_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Message::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  content_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), content,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:server.Message.content)
}

// .google.protobuf.Timestamp timestamp = 3;
inline bool Message::_internal_has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != nullptr;
}
inline bool Message::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Message::_internal_timestamp() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = timestamp_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Message::timestamp() const {
  // @@protoc_insertion_point(field_get:server.Message.timestamp)
  return _internal_timestamp();
}
inline void Message::unsafe_arena_set_allocated_timestamp(
    PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:server.Message.timestamp)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Message::release_timestamp() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Message::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:server.Message.timestamp)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = timestamp_;
  timestamp_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Message::_internal_mutable_timestamp() {
  
  if (timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    timestamp_ = p;
  }
  return timestamp_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Message::mutable_timestamp() {
  // @@protoc_insertion_point(field_mutable:server.Message.timestamp)
  return _internal_mutable_timestamp();
}
inline void Message::set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp)->GetArena();
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:server.Message.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace server

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::server::Message_MessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::server::Message_MessageType>() {
  return ::server::Message_MessageType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_server_2eproto
