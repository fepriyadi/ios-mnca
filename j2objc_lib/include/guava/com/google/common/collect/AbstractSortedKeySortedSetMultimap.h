//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractSortedKeySortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap))
#define ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractSortedSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractSortedSetMultimap 1
#include "com/google/common/collect/AbstractSortedSetMultimap.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

/*!
 @brief Basic implementation of a <code>SortedSetMultimap</code> with a sorted key set.
 <p>This superclass allows <code>TreeMultimap</code> to override methods to return navigable set and
  map types in non-GWT only, while GWT code will inherit the SortedMap/SortedSet overrides.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap : ComGoogleCommonCollectAbstractSortedSetMultimap

#pragma mark Public

- (id<JavaUtilSortedMap>)asMap;

- (id<JavaUtilSortedSet>)keySet;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithJavaUtilSortedMap:(id<JavaUtilSortedMap> __nonnull)map;

- (id<JavaUtilSortedMap>)backingMap;

- (id<JavaUtilSet>)createKeySet;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_initPackagePrivateWithJavaUtilSortedMap_(ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap *self, id<JavaUtilSortedMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap")
