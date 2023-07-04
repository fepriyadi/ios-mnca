//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/StreamCorruptedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoStreamCorruptedException")
#ifdef RESTRICT_JavaIoStreamCorruptedException
#define INCLUDE_ALL_JavaIoStreamCorruptedException 0
#else
#define INCLUDE_ALL_JavaIoStreamCorruptedException 1
#endif
#undef RESTRICT_JavaIoStreamCorruptedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoStreamCorruptedException_) && (INCLUDE_ALL_JavaIoStreamCorruptedException || defined(INCLUDE_JavaIoStreamCorruptedException))
#define JavaIoStreamCorruptedException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include "java/io/ObjectStreamException.h"

/*!
 @brief Thrown when control information that was read from an object stream
  violates internal consistency checks.
 @author unascribed
 @since JDK1.1
 */
@interface JavaIoStreamCorruptedException : JavaIoObjectStreamException

#pragma mark Public

/*!
 @brief Create a StreamCorruptedException and list no reason why thrown.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a StreamCorruptedException and list a reason why thrown.
 @param reason String describing the reason for the exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStreamCorruptedException)

FOUNDATION_EXPORT void JavaIoStreamCorruptedException_initWithNSString_(JavaIoStreamCorruptedException *self, NSString *reason);

FOUNDATION_EXPORT JavaIoStreamCorruptedException *new_JavaIoStreamCorruptedException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStreamCorruptedException *create_JavaIoStreamCorruptedException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaIoStreamCorruptedException_init(JavaIoStreamCorruptedException *self);

FOUNDATION_EXPORT JavaIoStreamCorruptedException *new_JavaIoStreamCorruptedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStreamCorruptedException *create_JavaIoStreamCorruptedException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStreamCorruptedException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoStreamCorruptedException")