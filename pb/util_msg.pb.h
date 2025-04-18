// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: util_msg.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_util_5fmsg_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_util_5fmsg_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_util_5fmsg_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_util_5fmsg_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_util_5fmsg_2eproto;
namespace bess {
namespace pb {
class Field;
struct FieldDefaultTypeInternal;
extern FieldDefaultTypeInternal _Field_default_instance_;
class FieldData;
struct FieldDataDefaultTypeInternal;
extern FieldDataDefaultTypeInternal _FieldData_default_instance_;
}  // namespace pb
}  // namespace bess
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace bess {
namespace pb {

// ===================================================================


// -------------------------------------------------------------------

class FieldData final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bess.pb.FieldData) */ {
 public:
  inline FieldData() : FieldData(nullptr) {}
  ~FieldData() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR FieldData(::google::protobuf::internal::ConstantInitialized);

  inline FieldData(const FieldData& from)
      : FieldData(nullptr, from) {}
  FieldData(FieldData&& from) noexcept
    : FieldData() {
    *this = ::std::move(from);
  }

  inline FieldData& operator=(const FieldData& from) {
    CopyFrom(from);
    return *this;
  }
  inline FieldData& operator=(FieldData&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FieldData& default_instance() {
    return *internal_default_instance();
  }
  enum EncodingCase {
    kValueBin = 1,
    kValueInt = 2,
    ENCODING_NOT_SET = 0,
  };

  static inline const FieldData* internal_default_instance() {
    return reinterpret_cast<const FieldData*>(
               &_FieldData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FieldData& a, FieldData& b) {
    a.Swap(&b);
  }
  inline void Swap(FieldData* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FieldData* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FieldData* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FieldData>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const FieldData& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const FieldData& from) {
    FieldData::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(FieldData* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "bess.pb.FieldData";
  }
  protected:
  explicit FieldData(::google::protobuf::Arena* arena);
  FieldData(::google::protobuf::Arena* arena, const FieldData& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueBinFieldNumber = 1,
    kValueIntFieldNumber = 2,
  };
  // bytes value_bin = 1;
  bool has_value_bin() const;
  void clear_value_bin() ;
  const std::string& value_bin() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_value_bin(Arg_&& arg, Args_... args);
  std::string* mutable_value_bin();
  PROTOBUF_NODISCARD std::string* release_value_bin();
  void set_allocated_value_bin(std::string* value);

  private:
  const std::string& _internal_value_bin() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_value_bin(
      const std::string& value);
  std::string* _internal_mutable_value_bin();

  public:
  // uint64 value_int = 2;
  bool has_value_int() const;
  void clear_value_int() ;
  ::uint64_t value_int() const;
  void set_value_int(::uint64_t value);

  private:
  ::uint64_t _internal_value_int() const;
  void _internal_set_value_int(::uint64_t value);

  public:
  void clear_encoding();
  EncodingCase encoding_case() const;
  // @@protoc_insertion_point(class_scope:bess.pb.FieldData)
 private:
  class _Internal;
  void set_has_value_bin();
  void set_has_value_int();

  inline bool has_encoding() const;
  inline void clear_has_encoding();

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 2, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    union EncodingUnion {
      constexpr EncodingUnion() : _constinit_{} {}
        ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::google::protobuf::internal::ArenaStringPtr value_bin_;
      ::uint64_t value_int_;
    } encoding_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_util_5fmsg_2eproto;
};// -------------------------------------------------------------------

class Field final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bess.pb.Field) */ {
 public:
  inline Field() : Field(nullptr) {}
  ~Field() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Field(::google::protobuf::internal::ConstantInitialized);

  inline Field(const Field& from)
      : Field(nullptr, from) {}
  Field(Field&& from) noexcept
    : Field() {
    *this = ::std::move(from);
  }

  inline Field& operator=(const Field& from) {
    CopyFrom(from);
    return *this;
  }
  inline Field& operator=(Field&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Field& default_instance() {
    return *internal_default_instance();
  }
  enum PositionCase {
    kAttrName = 1,
    kOffset = 2,
    POSITION_NOT_SET = 0,
  };

  static inline const Field* internal_default_instance() {
    return reinterpret_cast<const Field*>(
               &_Field_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Field& a, Field& b) {
    a.Swap(&b);
  }
  inline void Swap(Field* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Field* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Field* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Field>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Field& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Field& from) {
    Field::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Field* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "bess.pb.Field";
  }
  protected:
  explicit Field(::google::protobuf::Arena* arena);
  Field(::google::protobuf::Arena* arena, const Field& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumBytesFieldNumber = 3,
    kAttrNameFieldNumber = 1,
    kOffsetFieldNumber = 2,
  };
  // uint32 num_bytes = 3;
  void clear_num_bytes() ;
  ::uint32_t num_bytes() const;
  void set_num_bytes(::uint32_t value);

  private:
  ::uint32_t _internal_num_bytes() const;
  void _internal_set_num_bytes(::uint32_t value);

  public:
  // string attr_name = 1;
  bool has_attr_name() const;
  void clear_attr_name() ;
  const std::string& attr_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_attr_name(Arg_&& arg, Args_... args);
  std::string* mutable_attr_name();
  PROTOBUF_NODISCARD std::string* release_attr_name();
  void set_allocated_attr_name(std::string* value);

  private:
  const std::string& _internal_attr_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_attr_name(
      const std::string& value);
  std::string* _internal_mutable_attr_name();

  public:
  // uint32 offset = 2;
  bool has_offset() const;
  void clear_offset() ;
  ::uint32_t offset() const;
  void set_offset(::uint32_t value);

  private:
  ::uint32_t _internal_offset() const;
  void _internal_set_offset(::uint32_t value);

  public:
  void clear_position();
  PositionCase position_case() const;
  // @@protoc_insertion_point(class_scope:bess.pb.Field)
 private:
  class _Internal;
  void set_has_attr_name();
  void set_has_offset();

  inline bool has_position() const;
  inline void clear_has_position();

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 3, 0,
      31, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::uint32_t num_bytes_;
    union PositionUnion {
      constexpr PositionUnion() : _constinit_{} {}
        ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::google::protobuf::internal::ArenaStringPtr attr_name_;
      ::uint32_t offset_;
    } position_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_util_5fmsg_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Field

// string attr_name = 1;
inline bool Field::has_attr_name() const {
  return position_case() == kAttrName;
}
inline void Field::set_has_attr_name() {
  _impl_._oneof_case_[0] = kAttrName;
}
inline void Field::clear_attr_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (position_case() == kAttrName) {
    _impl_.position_.attr_name_.Destroy();
    clear_has_position();
  }
}
inline const std::string& Field::attr_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:bess.pb.Field.attr_name)
  return _internal_attr_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Field::set_attr_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (position_case() != kAttrName) {
    clear_position();

    set_has_attr_name();
    _impl_.position_.attr_name_.InitDefault();
  }
  _impl_.position_.attr_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:bess.pb.Field.attr_name)
}
inline std::string* Field::mutable_attr_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_attr_name();
  // @@protoc_insertion_point(field_mutable:bess.pb.Field.attr_name)
  return _s;
}
inline const std::string& Field::_internal_attr_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  if (position_case() != kAttrName) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.position_.attr_name_.Get();
}
inline void Field::_internal_set_attr_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (position_case() != kAttrName) {
    clear_position();

    set_has_attr_name();
    _impl_.position_.attr_name_.InitDefault();
  }
  _impl_.position_.attr_name_.Set(value, GetArena());
}
inline std::string* Field::_internal_mutable_attr_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (position_case() != kAttrName) {
    clear_position();

    set_has_attr_name();
    _impl_.position_.attr_name_.InitDefault();
  }
  return _impl_.position_.attr_name_.Mutable( GetArena());
}
inline std::string* Field::release_attr_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:bess.pb.Field.attr_name)
  if (position_case() != kAttrName) {
    return nullptr;
  }
  clear_has_position();
  return _impl_.position_.attr_name_.Release();
}
inline void Field::set_allocated_attr_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (has_position()) {
    clear_position();
  }
  if (value != nullptr) {
    set_has_attr_name();
    _impl_.position_.attr_name_.InitAllocated(value, GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:bess.pb.Field.attr_name)
}

// uint32 offset = 2;
inline bool Field::has_offset() const {
  return position_case() == kOffset;
}
inline void Field::set_has_offset() {
  _impl_._oneof_case_[0] = kOffset;
}
inline void Field::clear_offset() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (position_case() == kOffset) {
    _impl_.position_.offset_ = 0u;
    clear_has_position();
  }
}
inline ::uint32_t Field::offset() const {
  // @@protoc_insertion_point(field_get:bess.pb.Field.offset)
  return _internal_offset();
}
inline void Field::set_offset(::uint32_t value) {
  _internal_set_offset(value);
  // @@protoc_insertion_point(field_set:bess.pb.Field.offset)
}
inline ::uint32_t Field::_internal_offset() const {
  if (position_case() == kOffset) {
    return _impl_.position_.offset_;
  }
  return 0u;
}
inline void Field::_internal_set_offset(::uint32_t value) {
  if (position_case() != kOffset) {
    clear_position();
    set_has_offset();
  }
  _impl_.position_.offset_ = value;
}

// uint32 num_bytes = 3;
inline void Field::clear_num_bytes() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.num_bytes_ = 0u;
}
inline ::uint32_t Field::num_bytes() const {
  // @@protoc_insertion_point(field_get:bess.pb.Field.num_bytes)
  return _internal_num_bytes();
}
inline void Field::set_num_bytes(::uint32_t value) {
  _internal_set_num_bytes(value);
  // @@protoc_insertion_point(field_set:bess.pb.Field.num_bytes)
}
inline ::uint32_t Field::_internal_num_bytes() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.num_bytes_;
}
inline void Field::_internal_set_num_bytes(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.num_bytes_ = value;
}

inline bool Field::has_position() const {
  return position_case() != POSITION_NOT_SET;
}
inline void Field::clear_has_position() {
  _impl_._oneof_case_[0] = POSITION_NOT_SET;
}
inline Field::PositionCase Field::position_case() const {
  return Field::PositionCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// FieldData

// bytes value_bin = 1;
inline bool FieldData::has_value_bin() const {
  return encoding_case() == kValueBin;
}
inline void FieldData::set_has_value_bin() {
  _impl_._oneof_case_[0] = kValueBin;
}
inline void FieldData::clear_value_bin() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (encoding_case() == kValueBin) {
    _impl_.encoding_.value_bin_.Destroy();
    clear_has_encoding();
  }
}
inline const std::string& FieldData::value_bin() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:bess.pb.FieldData.value_bin)
  return _internal_value_bin();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void FieldData::set_value_bin(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (encoding_case() != kValueBin) {
    clear_encoding();

    set_has_value_bin();
    _impl_.encoding_.value_bin_.InitDefault();
  }
  _impl_.encoding_.value_bin_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:bess.pb.FieldData.value_bin)
}
inline std::string* FieldData::mutable_value_bin() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_value_bin();
  // @@protoc_insertion_point(field_mutable:bess.pb.FieldData.value_bin)
  return _s;
}
inline const std::string& FieldData::_internal_value_bin() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  if (encoding_case() != kValueBin) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.encoding_.value_bin_.Get();
}
inline void FieldData::_internal_set_value_bin(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (encoding_case() != kValueBin) {
    clear_encoding();

    set_has_value_bin();
    _impl_.encoding_.value_bin_.InitDefault();
  }
  _impl_.encoding_.value_bin_.Set(value, GetArena());
}
inline std::string* FieldData::_internal_mutable_value_bin() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (encoding_case() != kValueBin) {
    clear_encoding();

    set_has_value_bin();
    _impl_.encoding_.value_bin_.InitDefault();
  }
  return _impl_.encoding_.value_bin_.Mutable( GetArena());
}
inline std::string* FieldData::release_value_bin() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:bess.pb.FieldData.value_bin)
  if (encoding_case() != kValueBin) {
    return nullptr;
  }
  clear_has_encoding();
  return _impl_.encoding_.value_bin_.Release();
}
inline void FieldData::set_allocated_value_bin(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (has_encoding()) {
    clear_encoding();
  }
  if (value != nullptr) {
    set_has_value_bin();
    _impl_.encoding_.value_bin_.InitAllocated(value, GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:bess.pb.FieldData.value_bin)
}

// uint64 value_int = 2;
inline bool FieldData::has_value_int() const {
  return encoding_case() == kValueInt;
}
inline void FieldData::set_has_value_int() {
  _impl_._oneof_case_[0] = kValueInt;
}
inline void FieldData::clear_value_int() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (encoding_case() == kValueInt) {
    _impl_.encoding_.value_int_ = ::uint64_t{0u};
    clear_has_encoding();
  }
}
inline ::uint64_t FieldData::value_int() const {
  // @@protoc_insertion_point(field_get:bess.pb.FieldData.value_int)
  return _internal_value_int();
}
inline void FieldData::set_value_int(::uint64_t value) {
  _internal_set_value_int(value);
  // @@protoc_insertion_point(field_set:bess.pb.FieldData.value_int)
}
inline ::uint64_t FieldData::_internal_value_int() const {
  if (encoding_case() == kValueInt) {
    return _impl_.encoding_.value_int_;
  }
  return ::uint64_t{0u};
}
inline void FieldData::_internal_set_value_int(::uint64_t value) {
  if (encoding_case() != kValueInt) {
    clear_encoding();
    set_has_value_int();
  }
  _impl_.encoding_.value_int_ = value;
}

inline bool FieldData::has_encoding() const {
  return encoding_case() != ENCODING_NOT_SET;
}
inline void FieldData::clear_has_encoding() {
  _impl_._oneof_case_[0] = ENCODING_NOT_SET;
}
inline FieldData::EncodingCase FieldData::encoding_case() const {
  return FieldData::EncodingCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
}  // namespace bess


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_util_5fmsg_2eproto_2epb_2eh
