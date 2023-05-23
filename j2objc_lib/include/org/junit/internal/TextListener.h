//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/TextListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalTextListener")
#ifdef RESTRICT_OrgJunitInternalTextListener
#define INCLUDE_ALL_OrgJunitInternalTextListener 0
#else
#define INCLUDE_ALL_OrgJunitInternalTextListener 1
#endif
#undef RESTRICT_OrgJunitInternalTextListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalTextListener_) && (INCLUDE_ALL_OrgJunitInternalTextListener || defined(INCLUDE_OrgJunitInternalTextListener))
#define OrgJunitInternalTextListener_

#define RESTRICT_OrgJunitRunnerNotificationRunListener 1
#define INCLUDE_OrgJunitRunnerNotificationRunListener 1
#include "org/junit/runner/notification/RunListener.h"

@class JavaIoPrintStream;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationFailure;
@class OrgJunitRunnerResult;
@protocol OrgJunitInternalJUnitSystem;

@interface OrgJunitInternalTextListener : OrgJunitRunnerNotificationRunListener

#pragma mark Public

- (instancetype __nonnull)initWithOrgJunitInternalJUnitSystem:(id<OrgJunitInternalJUnitSystem>)system;

- (instancetype __nonnull)initWithJavaIoPrintStream:(JavaIoPrintStream *)writer;

- (void)testFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)failure;

- (void)testIgnoredWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)testRunFinishedWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (void)testStartedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

#pragma mark Protected

/*!
 @brief Returns the formatted string of the elapsed time.Duplicated from
  BaseTestRunner.
 Fix it.
 */
- (NSString *)elapsedTimeAsStringWithLong:(jlong)runTime;

- (void)printFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)each
                                             withNSString:(NSString *)prefix;

- (void)printFailuresWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (void)printFooterWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (void)printHeaderWithLong:(jlong)runTime;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalTextListener)

FOUNDATION_EXPORT void OrgJunitInternalTextListener_initWithOrgJunitInternalJUnitSystem_(OrgJunitInternalTextListener *self, id<OrgJunitInternalJUnitSystem> system);

FOUNDATION_EXPORT OrgJunitInternalTextListener *new_OrgJunitInternalTextListener_initWithOrgJunitInternalJUnitSystem_(id<OrgJunitInternalJUnitSystem> system) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalTextListener *create_OrgJunitInternalTextListener_initWithOrgJunitInternalJUnitSystem_(id<OrgJunitInternalJUnitSystem> system);

FOUNDATION_EXPORT void OrgJunitInternalTextListener_initWithJavaIoPrintStream_(OrgJunitInternalTextListener *self, JavaIoPrintStream *writer);

FOUNDATION_EXPORT OrgJunitInternalTextListener *new_OrgJunitInternalTextListener_initWithJavaIoPrintStream_(JavaIoPrintStream *writer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalTextListener *create_OrgJunitInternalTextListener_initWithJavaIoPrintStream_(JavaIoPrintStream *writer);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalTextListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalTextListener")