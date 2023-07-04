//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMatcher")
#ifdef RESTRICT_OrgMockitoInternalInvocationInvocationMatcher
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMatcher 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMatcher 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationInvocationMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationInvocationMatcher_) && (INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMatcher || defined(INCLUDE_OrgMockitoInternalInvocationInvocationMatcher))
#define OrgMockitoInternalInvocationInvocationMatcher_

#define RESTRICT_OrgMockitoInvocationMatchableInvocation 1
#define INCLUDE_OrgMockitoInvocationMatchableInvocation 1
#include "org/mockito/invocation/MatchableInvocation.h"

#define RESTRICT_OrgMockitoInvocationDescribedInvocation 1
#define INCLUDE_OrgMockitoInvocationDescribedInvocation 1
#include "org/mockito/invocation/DescribedInvocation.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangReflectMethod;
@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationLocation;

/*!
 @brief In addition to all content of the invocation, the invocation matcher contains the argument matchers.Invocation matcher is used during verification and stubbing.
 In those cases, the user can provide argument matchers instead of 'raw' arguments. Raw arguments are converted to 'equals' matchers anyway.
 */
@interface OrgMockitoInternalInvocationInvocationMatcher : NSObject < OrgMockitoInvocationMatchableInvocation, OrgMockitoInvocationDescribedInvocation, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (instancetype __nonnull)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                                withJavaUtilList:(id<JavaUtilList>)matchers;

- (void)captureArgumentsFromWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

+ (id<JavaUtilList>)createFromWithJavaUtilList:(id<JavaUtilList>)invocations;

- (id<OrgMockitoInvocationInvocation>)getInvocation;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (id<JavaUtilList>)getMatchers;

- (JavaLangReflectMethod *)getMethod;

- (jboolean)hasSameMethodWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)candidate;

/*!
 @brief similar means the same method name, same mock, unverified and: if arguments are the same cannot be overloaded
 */
- (jboolean)hasSimilarMethodWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)candidate;

- (jboolean)matchesWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)candidate;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationMatcher)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationMatcher_initWithOrgMockitoInvocationInvocation_withJavaUtilList_(OrgMockitoInternalInvocationInvocationMatcher *self, id<OrgMockitoInvocationInvocation> invocation, id<JavaUtilList> matchers);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMatcher *new_OrgMockitoInternalInvocationInvocationMatcher_initWithOrgMockitoInvocationInvocation_withJavaUtilList_(id<OrgMockitoInvocationInvocation> invocation, id<JavaUtilList> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMatcher *create_OrgMockitoInternalInvocationInvocationMatcher_initWithOrgMockitoInvocationInvocation_withJavaUtilList_(id<OrgMockitoInvocationInvocation> invocation, id<JavaUtilList> matchers);

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationMatcher_initWithOrgMockitoInvocationInvocation_(OrgMockitoInternalInvocationInvocationMatcher *self, id<OrgMockitoInvocationInvocation> invocation);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMatcher *new_OrgMockitoInternalInvocationInvocationMatcher_initWithOrgMockitoInvocationInvocation_(id<OrgMockitoInvocationInvocation> invocation) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMatcher *create_OrgMockitoInternalInvocationInvocationMatcher_initWithOrgMockitoInvocationInvocation_(id<OrgMockitoInvocationInvocation> invocation);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationInvocationMatcher_createFromWithJavaUtilList_(id<JavaUtilList> invocations);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMatcher")