//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ImmutableSortedAsList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedAsList
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedAsList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSortedAsList_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedAsList))
#define ComGoogleCommonCollectImmutableSortedAsList_

#define RESTRICT_ComGoogleCommonCollectRegularImmutableAsList 1
#define INCLUDE_ComGoogleCommonCollectRegularImmutableAsList 1
#include "com/google/common/collect/RegularImmutableAsList.h"

#define RESTRICT_ComGoogleCommonCollectSortedIterable 1
#define INCLUDE_ComGoogleCommonCollectSortedIterable 1
#include "com/google/common/collect/SortedIterable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilComparator;
@protocol JavaUtilSpliterator;

/*!
 @brief List returned by <code>ImmutableSortedSet.asList()</code> when the set isn't empty.
 @author Jared Levy
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectImmutableSortedAsList : ComGoogleCommonCollectRegularImmutableAsList < ComGoogleCommonCollectSortedIterable >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsWithId:(id __nonnull)target;

- (jint)indexOfWithId:(id __nullable)target;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)lastIndexOfWithId:(id __nullable)target;

- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableSortedSet:(ComGoogleCommonCollectImmutableSortedSet * __nonnull)backingSet
                                                 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList * __nonnull)backingList;

- (ComGoogleCommonCollectImmutableSortedSet *)delegateCollection;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)arg0
                                                  withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList * __nonnull)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)arg0
                                                                        withNSObjectArray:(IOSObjectArray * __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedAsList)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedAsList_initPackagePrivateWithComGoogleCommonCollectImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedAsList *self, ComGoogleCommonCollectImmutableSortedSet *backingSet, ComGoogleCommonCollectImmutableList *backingList);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedAsList *new_ComGoogleCommonCollectImmutableSortedAsList_initPackagePrivateWithComGoogleCommonCollectImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedSet *backingSet, ComGoogleCommonCollectImmutableList *backingList) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedAsList *create_ComGoogleCommonCollectImmutableSortedAsList_initPackagePrivateWithComGoogleCommonCollectImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedSet *backingSet, ComGoogleCommonCollectImmutableList *backingList);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedAsList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedAsList")
