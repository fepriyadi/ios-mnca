//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/LinkageError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangLinkageError")
#ifdef RESTRICT_JavaLangLinkageError
#define INCLUDE_ALL_JavaLangLinkageError 0
#else
#define INCLUDE_ALL_JavaLangLinkageError 1
#endif
#undef RESTRICT_JavaLangLinkageError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangLinkageError_) && (INCLUDE_ALL_JavaLangLinkageError || defined(INCLUDE_JavaLangLinkageError))
#define JavaLangLinkageError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangThrowable;

/*!
 @brief Subclasses of <code>LinkageError</code> indicate that a class has
  some dependency on another class; however, the latter class has
  incompatibly changed after the compilation of the former class.
 @author Frank Yellin
 @since JDK1.0
 */
@interface JavaLangLinkageError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a <code>LinkageError</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>LinkageError</code> with the specified detail
  message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Constructs a <code>LinkageError</code> with the specified detail
  message and cause.
 @param s the detail message.
 @param cause the cause, may be <code>null</code>
 @since 1.7
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangLinkageError)

FOUNDATION_EXPORT void JavaLangLinkageError_init(JavaLangLinkageError *self);

FOUNDATION_EXPORT JavaLangLinkageError *new_JavaLangLinkageError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangLinkageError *create_JavaLangLinkageError_init(void);

FOUNDATION_EXPORT void JavaLangLinkageError_initWithNSString_(JavaLangLinkageError *self, NSString *s);

FOUNDATION_EXPORT JavaLangLinkageError *new_JavaLangLinkageError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangLinkageError *create_JavaLangLinkageError_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangLinkageError_initWithNSString_withJavaLangThrowable_(JavaLangLinkageError *self, NSString *s, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangLinkageError *new_JavaLangLinkageError_initWithNSString_withJavaLangThrowable_(NSString *s, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangLinkageError *create_JavaLangLinkageError_initWithNSString_withJavaLangThrowable_(NSString *s, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangLinkageError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangLinkageError")