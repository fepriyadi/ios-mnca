//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/internal/SelfDescribingValueIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestInternalSelfDescribingValueIterator")
#ifdef RESTRICT_OrgHamcrestInternalSelfDescribingValueIterator
#define INCLUDE_ALL_OrgHamcrestInternalSelfDescribingValueIterator 0
#else
#define INCLUDE_ALL_OrgHamcrestInternalSelfDescribingValueIterator 1
#endif
#undef RESTRICT_OrgHamcrestInternalSelfDescribingValueIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestInternalSelfDescribingValueIterator_) && (INCLUDE_ALL_OrgHamcrestInternalSelfDescribingValueIterator || defined(INCLUDE_OrgHamcrestInternalSelfDescribingValueIterator))
#define OrgHamcrestInternalSelfDescribingValueIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@protocol JavaUtilFunctionConsumer;
@protocol OrgHamcrestSelfDescribing;

@interface OrgHamcrestInternalSelfDescribingValueIterator : NSObject < JavaUtilIterator >

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilIterator:(id<JavaUtilIterator>)values;

- (jboolean)hasNext;

- (id<OrgHamcrestSelfDescribing>)next;

- (void)remove;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestInternalSelfDescribingValueIterator)

FOUNDATION_EXPORT void OrgHamcrestInternalSelfDescribingValueIterator_initWithJavaUtilIterator_(OrgHamcrestInternalSelfDescribingValueIterator *self, id<JavaUtilIterator> values);

FOUNDATION_EXPORT OrgHamcrestInternalSelfDescribingValueIterator *new_OrgHamcrestInternalSelfDescribingValueIterator_initWithJavaUtilIterator_(id<JavaUtilIterator> values) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestInternalSelfDescribingValueIterator *create_OrgHamcrestInternalSelfDescribingValueIterator_initWithJavaUtilIterator_(id<JavaUtilIterator> values);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestInternalSelfDescribingValueIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestInternalSelfDescribingValueIterator")
