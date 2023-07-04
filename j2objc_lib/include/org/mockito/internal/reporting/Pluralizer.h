//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/reporting/Pluralizer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalReportingPluralizer")
#ifdef RESTRICT_OrgMockitoInternalReportingPluralizer
#define INCLUDE_ALL_OrgMockitoInternalReportingPluralizer 0
#else
#define INCLUDE_ALL_OrgMockitoInternalReportingPluralizer 1
#endif
#undef RESTRICT_OrgMockitoInternalReportingPluralizer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalReportingPluralizer_) && (INCLUDE_ALL_OrgMockitoInternalReportingPluralizer || defined(INCLUDE_OrgMockitoInternalReportingPluralizer))
#define OrgMockitoInternalReportingPluralizer_

@interface OrgMockitoInternalReportingPluralizer : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (NSString *)pluralizeWithInt:(jint)number;

+ (NSString *)were_exactly_x_interactionsWithInt:(jint)x;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalReportingPluralizer)

FOUNDATION_EXPORT void OrgMockitoInternalReportingPluralizer_init(OrgMockitoInternalReportingPluralizer *self);

FOUNDATION_EXPORT OrgMockitoInternalReportingPluralizer *new_OrgMockitoInternalReportingPluralizer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalReportingPluralizer *create_OrgMockitoInternalReportingPluralizer_init(void);

FOUNDATION_EXPORT NSString *OrgMockitoInternalReportingPluralizer_pluralizeWithInt_(jint number);

FOUNDATION_EXPORT NSString *OrgMockitoInternalReportingPluralizer_were_exactly_x_interactionsWithInt_(jint x);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalReportingPluralizer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalReportingPluralizer")
