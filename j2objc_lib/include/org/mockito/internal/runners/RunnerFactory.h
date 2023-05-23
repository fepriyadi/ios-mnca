//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/RunnerFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory")
#ifdef RESTRICT_OrgMockitoInternalRunnersRunnerFactory
#define INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory 0
#else
#define INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory 1
#endif
#undef RESTRICT_OrgMockitoInternalRunnersRunnerFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalRunnersRunnerFactory_) && (INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory || defined(INCLUDE_OrgMockitoInternalRunnersRunnerFactory))
#define OrgMockitoInternalRunnersRunnerFactory_

@class IOSClass;
@protocol OrgMockitoInternalRunnersInternalRunner;
@protocol OrgMockitoInternalUtilSupplier;

/*!
 @brief Creates instances of Mockito JUnit Runner in a safe way, e.g.detecting inadequate version of JUnit, etc.
 */
@interface OrgMockitoInternalRunnersRunnerFactory : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Creates silent runner implementation
 */
- (id<OrgMockitoInternalRunnersInternalRunner>)createWithIOSClass:(IOSClass *)klass;

/*!
 @brief Creates runner implementation with provided listener supplier
 */
- (id<OrgMockitoInternalRunnersInternalRunner>)createWithIOSClass:(IOSClass *)klass
                               withOrgMockitoInternalUtilSupplier:(id<OrgMockitoInternalUtilSupplier>)listenerSupplier;

/*!
 @brief Creates strict runner implementation
 */
- (id<OrgMockitoInternalRunnersInternalRunner>)createStrictWithIOSClass:(IOSClass *)klass;

/*!
 @brief Creates strict stubs runner implementation
  TODO, let's try to apply Brice suggestion and use switch + Strictness
 */
- (id<OrgMockitoInternalRunnersInternalRunner>)createStrictStubsWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersRunnerFactory)

FOUNDATION_EXPORT void OrgMockitoInternalRunnersRunnerFactory_init(OrgMockitoInternalRunnersRunnerFactory *self);

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *new_OrgMockitoInternalRunnersRunnerFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *create_OrgMockitoInternalRunnersRunnerFactory_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersRunnerFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory")