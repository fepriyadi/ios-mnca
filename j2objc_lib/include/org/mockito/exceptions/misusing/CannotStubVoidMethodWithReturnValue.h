//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/CannotStubVoidMethodWithReturnValue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue || defined(INCLUDE_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue))
#define OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue_initWithNSString_(OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue *new_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue *create_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingCannotStubVoidMethodWithReturnValue")