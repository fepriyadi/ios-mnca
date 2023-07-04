//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/creation/instance/InstantiationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoCreationInstanceInstantiationException")
#ifdef RESTRICT_OrgMockitoCreationInstanceInstantiationException
#define INCLUDE_ALL_OrgMockitoCreationInstanceInstantiationException 0
#else
#define INCLUDE_ALL_OrgMockitoCreationInstanceInstantiationException 1
#endif
#undef RESTRICT_OrgMockitoCreationInstanceInstantiationException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoCreationInstanceInstantiationException_) && (INCLUDE_ALL_OrgMockitoCreationInstanceInstantiationException || defined(INCLUDE_OrgMockitoCreationInstanceInstantiationException))
#define OrgMockitoCreationInstanceInstantiationException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

/*!
 @brief Exception generated when <code>Instantiator.newInstance(Class)</code> failed.
 @since 2.15.4
 */
@interface OrgMockitoCreationInstanceInstantiationException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

/*!
 @since 2.15.4
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoCreationInstanceInstantiationException)

FOUNDATION_EXPORT void OrgMockitoCreationInstanceInstantiationException_initWithNSString_withJavaLangThrowable_(OrgMockitoCreationInstanceInstantiationException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT OrgMockitoCreationInstanceInstantiationException *new_OrgMockitoCreationInstanceInstantiationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoCreationInstanceInstantiationException *create_OrgMockitoCreationInstanceInstantiationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoCreationInstanceInstantiationException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoCreationInstanceInstantiationException")