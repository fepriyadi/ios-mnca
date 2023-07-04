//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/creation/SuspendMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationSuspendMethod")
#ifdef RESTRICT_OrgMockitoInternalCreationSuspendMethod
#define INCLUDE_ALL_OrgMockitoInternalCreationSuspendMethod 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationSuspendMethod 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationSuspendMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalCreationSuspendMethod_) && (INCLUDE_ALL_OrgMockitoInternalCreationSuspendMethod || defined(INCLUDE_OrgMockitoInternalCreationSuspendMethod))
#define OrgMockitoInternalCreationSuspendMethod_

@class IOSObjectArray;

/*!
 @brief Utilities for Kotlin Continuation-Passing-Style suspending function, detecting and trimming last hidden parameter.
 See <a href="https://github.com/Kotlin/kotlin-coroutines/blob/master/kotlin-coroutines-informal.md#continuation-passing-style">Design docs for details</a>.
 */
@interface OrgMockitoInternalCreationSuspendMethod : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (IOSObjectArray *)trimSuspendParameterTypesWithIOSClassArray:(IOSObjectArray *)parameterTypes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationSuspendMethod)

FOUNDATION_EXPORT void OrgMockitoInternalCreationSuspendMethod_init(OrgMockitoInternalCreationSuspendMethod *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationSuspendMethod *new_OrgMockitoInternalCreationSuspendMethod_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationSuspendMethod *create_OrgMockitoInternalCreationSuspendMethod_init(void);

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalCreationSuspendMethod_trimSuspendParameterTypesWithIOSClassArray_(IOSObjectArray *parameterTypes);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationSuspendMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationSuspendMethod")
