//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractSortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSortedSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSortedSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSortedSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractSortedSetMultimap))
#define ComGoogleCommonCollectAbstractSortedSetMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractSetMultimap 1
#include "com/google/common/collect/AbstractSetMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSortedSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSortedSetMultimap 1
#include "com/google/common/collect/SortedSetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSortedSet;

/*!
 @brief Basic implementation of the <code>SortedSetMultimap</code> interface.It's a wrapper around <code>AbstractMapBasedMultimap</code>
  that converts the returned collections into sorted sets.
 The <code>createCollection</code>
  method must return a <code>SortedSet</code>.
 @author Jared Levy
 */
@interface ComGoogleCommonCollectAbstractSortedSetMultimap : ComGoogleCommonCollectAbstractSetMultimap < ComGoogleCommonCollectSortedSetMultimap >

#pragma mark Public

/*!
 @brief Returns a map view that associates each key with the corresponding values in the multimap.
 Changes to the returned map, such as element removal, will update the underlying multimap. The
  map does not support <code>setValue</code> on its entries, <code>put</code>, or <code>putAll</code>.
  
 <p>When passed a key that is present in the map, <code>asMap().get(Object)</code> has the same
  behavior as <code>get</code>, returning a live collection. When passed a key that is not present,
  however, <code>asMap().get(Object)</code> returns <code>null</code> instead of an empty collection. 
 <p>Though the method signature doesn't say so explicitly, the returned map has <code>SortedSet</code>
  values.
 */
- (id<JavaUtilMap>)asMap;

/*!
 @brief Returns a collection view of all values associated with a key.If no mappings in the multimap
  have the provided key, an empty collection is returned.
 <p>Changes to the returned collection will update the underlying multimap, and vice versa. 
 <p>Because a <code>SortedSetMultimap</code> has unique sorted values for a given key, this method
  returns a <code>SortedSet</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code>
  interface.
 */
- (id<JavaUtilSortedSet>)getWithId:(id __nullable)key;

/*!
 @brief Removes all values associated with a given key.The returned collection is immutable.
 <p>Because a <code>SortedSetMultimap</code> has unique sorted values for a given key, this method
  returns a <code>SortedSet</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code>
  interface.
 */
- (id<JavaUtilSortedSet>)removeAllWithId:(id __nullable)key;

/*!
 @brief Stores a collection of values with the same key, replacing any existing values for that key.
 The returned collection is immutable. 
 <p>Because a <code>SortedSetMultimap</code> has unique sorted values for a given key, this method
  returns a <code>SortedSet</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code>
  interface. 
 <p>Any duplicates in <code>values</code> will be stored in the multimap once.
 */
- (id<JavaUtilSortedSet>)replaceValuesWithId:(id __nullable)key
                        withJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

/*!
 @brief <p>Consequently, the values do not follow their natural ordering or the ordering of the value
  comparator.
 */
- (id<JavaUtilCollection>)values;

#pragma mark Protected

/*!
 @brief Creates a new multimap that uses the provided map.
 @param map place to store the mapping from each key to its corresponding values
 */
- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map;

#pragma mark Package-Private

- (id<JavaUtilSortedSet>)createCollection;

- (id<JavaUtilSortedSet>)createUnmodifiableEmptyCollection;

- (id<JavaUtilSortedSet>)unmodifiableCollectionSubclassWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)collection;

- (id<JavaUtilCollection>)wrapCollectionWithId:(id __nonnull)key
                        withJavaUtilCollection:(id<JavaUtilCollection> __nonnull)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedSetMultimap_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonCollectAbstractSortedSetMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSortedSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedSetMultimap")
