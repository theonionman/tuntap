// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_error_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_error_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_error_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_error_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_error_2eproto;
namespace bess {
namespace pb {
class Error;
struct ErrorDefaultTypeInternal;
extern ErrorDefaultTypeInternal _Error_default_instance_;
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

class Error final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bess.pb.Error) */ {
 public:
  inline Error() : Error(nullptr) {}
  ~Error() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Error(::google::protobuf::internal::ConstantInitialized);

  inline Error(const Error& from)
      : Error(nullptr, from) {}
  Error(Error&& from) noexcept
    : Error() {
    *this = ::std::move(from);
  }

  inline Error& operator=(const Error& from) {
    CopyFrom(from);
    return *this;
  }
  inline Error& operator=(Error&& from) noexcept {
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
  static const Error& default_instance() {
    return *internal_default_instance();
  }
  static inline const Error* internal_default_instance() {
    return reinterpret_cast<const Error*>(
               &_Error_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Error& a, Error& b) {
    a.Swap(&b);
  }
  inline void Swap(Error* other) {
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
  void UnsafeArenaSwap(Error* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Error* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Error>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Error& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Error& from) {
    Error::MergeImpl(*this, from);
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
  void InternalSwap(Error* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "bess.pb.Error";
  }
  protected:
  explicit Error(::google::protobuf::Arena* arena);
  Error(::google::protobuf::Arena* arena, const Error& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrmsgFieldNumber = 2,
    kCodeFieldNumber = 1,
  };
  // string errmsg = 2;
  void clear_errmsg() ;
  const std::string& errmsg() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_errmsg(Arg_&& arg, Args_... args);
  std::string* mutable_errmsg();
  PROTOBUF_NODISCARD std::string* release_errmsg();
  void set_allocated_errmsg(std::string* value);

  private:
  const std::string& _internal_errmsg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_errmsg(
      const std::string& value);
  std::string* _internal_mutable_errmsg();

  public:
  // int32 code = 1;
  void clear_code() ;
  ::int32_t code() const;
  void set_code(::int32_t value);

  private:
  ::int32_t _internal_code() const;
  void _internal_set_code(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:bess.pb.Error)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      28, 2>
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
    ::google::protobuf::internal::ArenaStringPtr errmsg_;
    ::int32_t code_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_error_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Error

// int32 code = 1;
inline void Error::clear_code() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.code_ = 0;
}
inline ::int32_t Error::code() const {
  // @@protoc_insertion_point(field_get:bess.pb.Error.code)
  return _internal_code();
}
inline void Error::set_code(::int32_t value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:bess.pb.Error.code)
}
inline ::int32_t Error::_internal_code() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.code_;
}
inline void Error::_internal_set_code(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.code_ = value;
}

// string errmsg = 2;
inline void Error::clear_errmsg() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.errmsg_.ClearToEmpty();
}
inline const std::string& Error::errmsg() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:bess.pb.Error.errmsg)
  return _internal_errmsg();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Error::set_errmsg(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.errmsg_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:bess.pb.Error.errmsg)
}
inline std::string* Error::mutable_errmsg() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_errmsg();
  // @@protoc_insertion_point(field_mutable:bess.pb.Error.errmsg)
  return _s;
}
inline const std::string& Error::_internal_errmsg() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.errmsg_.Get();
}
inline void Error::_internal_set_errmsg(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.errmsg_.Set(value, GetArena());
}
inline std::string* Error::_internal_mutable_errmsg() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.errmsg_.Mutable( GetArena());
}
inline std::string* Error::release_errmsg() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:bess.pb.Error.errmsg)
  return _impl_.errmsg_.Release();
}
inline void Error::set_allocated_errmsg(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.errmsg_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.errmsg_.IsDefault()) {
          _impl_.errmsg_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:bess.pb.Error.errmsg)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
}  // namespace bess


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_error_2eproto_2epb_2eh
