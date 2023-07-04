//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/Synchronized.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSynchronized")
#ifdef RESTRICT_ComGoogleCommonCollectSynchronized
#define INCLUDE_ALL_ComGoogleCommonCollectSynchronized 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSynchronized 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSynchronized
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSortedMap 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSortedSet 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedBiMap
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedMap 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSortedMap
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedMap 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedMap
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedObject 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSortedSet
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSet 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSet
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedCollection 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedCollection
#define INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedObject 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSynchronized_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized))
#define ComGoogleCommonCollectSynchronized_

@protocol ComGoogleCommonCollectBiMap;
@protocol ComGoogleCommonCollectListMultimap;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol ComGoogleCommonCollectSetMultimap;
@protocol ComGoogleCommonCollectSortedSetMultimap;
@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilDeque;
@protocol JavaUtilMap;
@protocol JavaUtilNavigableMap;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilQueue;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;

/*!
 @brief Synchronized collection views.The returned synchronized collection views are serializable if the
  backing collection and the mutex are serializable.
 <p>If <code>null</code> is passed as the <code>mutex</code> parameter to any of this class's top-level
  methods or inner class constructors, the created object uses itself as the synchronization mutex. 
 <p>This class should be used by other collection classes only.
 @author Mike Bostock
 @author Jared Levy
 */
@interface ComGoogleCommonCollectSynchronized : NSObject

#pragma mark Package-Private

+ (id<ComGoogleCommonCollectBiMap>)biMapWithComGoogleCommonCollectBiMap:(id<ComGoogleCommonCollectBiMap> __nonnull)bimap
                                                                 withId:(id __nullable)mutex;

+ (id<JavaUtilDeque>)dequeWithJavaUtilDeque:(id<JavaUtilDeque> __nonnull)deque
                                     withId:(id __nullable)mutex;

+ (id<ComGoogleCommonCollectListMultimap>)listMultimapWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap> __nonnull)multimap
                                                                                      withId:(id __nullable)mutex;

+ (id<JavaUtilMap>)mapWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map
                               withId:(id __nullable)mutex;

+ (id<ComGoogleCommonCollectMultimap>)multimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap
                                                                          withId:(id __nullable)mutex;

+ (id<ComGoogleCommonCollectMultiset>)multisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset> __nonnull)multiset
                                                                          withId:(id __nullable)mutex;

+ (id<JavaUtilNavigableMap>)navigableMapWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap> __nonnull)navigableMap;

+ (id<JavaUtilNavigableMap>)navigableMapWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap> __nonnull)navigableMap
                                                          withId:(id __nullable)mutex;

+ (id<JavaUtilNavigableSet>)navigableSetWithJavaUtilNavigableSet:(id<JavaUtilNavigableSet> __nonnull)navigableSet;

+ (id<JavaUtilNavigableSet>)navigableSetWithJavaUtilNavigableSet:(id<JavaUtilNavigableSet> __nonnull)navigableSet
                                                          withId:(id __nullable)mutex;

+ (id<JavaUtilQueue>)queueWithJavaUtilQueue:(id<JavaUtilQueue> __nonnull)queue
                                     withId:(id __nullable)mutex;

+ (id<JavaUtilSet>)setWithJavaUtilSet:(id<JavaUtilSet> __nonnull)set
                               withId:(id __nullable)mutex;

+ (id<ComGoogleCommonCollectSetMultimap>)setMultimapWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap> __nonnull)multimap
                                                                                   withId:(id __nullable)mutex;

+ (id<JavaUtilSortedMap>)sortedMapWithJavaUtilSortedMap:(id<JavaUtilSortedMap> __nonnull)sortedMap
                                                 withId:(id __nullable)mutex;

+ (id<ComGoogleCommonCollectSortedSetMultimap>)sortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap:(id<ComGoogleCommonCollectSortedSetMultimap> __nonnull)multimap
                                                                                                     withId:(id __nullable)mutex;

+ (id<ComGoogleCommonCollectTable>)tableWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table
                                                                 withId:(id __nonnull)mutex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized)

FOUNDATION_EXPORT id<JavaUtilSet> ComGoogleCommonCollectSynchronized_setWithJavaUtilSet_withId_(id<JavaUtilSet> set, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectSynchronized_multisetWithComGoogleCommonCollectMultiset_withId_(id<ComGoogleCommonCollectMultiset> multiset, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectSynchronized_multimapWithComGoogleCommonCollectMultimap_withId_(id<ComGoogleCommonCollectMultimap> multimap, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectSynchronized_listMultimapWithComGoogleCommonCollectListMultimap_withId_(id<ComGoogleCommonCollectListMultimap> multimap, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectSynchronized_setMultimapWithComGoogleCommonCollectSetMultimap_withId_(id<ComGoogleCommonCollectSetMultimap> multimap, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSortedSetMultimap> ComGoogleCommonCollectSynchronized_sortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap_withId_(id<ComGoogleCommonCollectSortedSetMultimap> multimap, id mutex);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonCollectSynchronized_mapWithJavaUtilMap_withId_(id<JavaUtilMap> map, id mutex);

FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectSynchronized_sortedMapWithJavaUtilSortedMap_withId_(id<JavaUtilSortedMap> sortedMap, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectBiMap> ComGoogleCommonCollectSynchronized_biMapWithComGoogleCommonCollectBiMap_withId_(id<ComGoogleCommonCollectBiMap> bimap, id mutex);

FOUNDATION_EXPORT id<JavaUtilNavigableSet> ComGoogleCommonCollectSynchronized_navigableSetWithJavaUtilNavigableSet_withId_(id<JavaUtilNavigableSet> navigableSet, id mutex);

FOUNDATION_EXPORT id<JavaUtilNavigableSet> ComGoogleCommonCollectSynchronized_navigableSetWithJavaUtilNavigableSet_(id<JavaUtilNavigableSet> navigableSet);

FOUNDATION_EXPORT id<JavaUtilNavigableMap> ComGoogleCommonCollectSynchronized_navigableMapWithJavaUtilNavigableMap_(id<JavaUtilNavigableMap> navigableMap);

FOUNDATION_EXPORT id<JavaUtilNavigableMap> ComGoogleCommonCollectSynchronized_navigableMapWithJavaUtilNavigableMap_withId_(id<JavaUtilNavigableMap> navigableMap, id mutex);

FOUNDATION_EXPORT id<JavaUtilQueue> ComGoogleCommonCollectSynchronized_queueWithJavaUtilQueue_withId_(id<JavaUtilQueue> queue, id mutex);

FOUNDATION_EXPORT id<JavaUtilDeque> ComGoogleCommonCollectSynchronized_dequeWithJavaUtilDeque_withId_(id<JavaUtilDeque> deque, id mutex);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectSynchronized_tableWithComGoogleCommonCollectTable_withId_(id<ComGoogleCommonCollectTable> table, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedObject_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedObject))
#define ComGoogleCommonCollectSynchronized_SynchronizedObject_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectSynchronized_SynchronizedObject : NSObject < JavaIoSerializable > {
 @public
  id delegate_;
  id mutex_;
}

#pragma mark Public

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id __nonnull)delegate
                              withId:(id __nullable)mutex;

- (id)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedObject)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedObject, delegate_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedObject, mutex_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedObject_initWithId_withId_(ComGoogleCommonCollectSynchronized_SynchronizedObject *self, id delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedObject *new_ComGoogleCommonCollectSynchronized_SynchronizedObject_initWithId_withId_(id delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedObject *create_ComGoogleCommonCollectSynchronized_SynchronizedObject_initWithId_withId_(id delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedObject)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedCollection))
#define ComGoogleCommonCollectSynchronized_SynchronizedCollection_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@interface ComGoogleCommonCollectSynchronized_SynchronizedCollection : ComGoogleCommonCollectSynchronized_SynchronizedObject < JavaUtilCollection >

#pragma mark Public

- (jboolean)addWithId:(id __nonnull)e;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

- (void)clear;

- (jboolean)containsWithId:(id __nonnull)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id __nonnull)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray * __nonnull)a;

#pragma mark Package-Private

- (id<JavaUtilCollection>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id __nonnull)arg0
                              withId:(id __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedCollection)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedCollection)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedSet_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSet))
#define ComGoogleCommonCollectSynchronized_SynchronizedSet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectSynchronized_SynchronizedSet : ComGoogleCommonCollectSynchronized_SynchronizedCollection < JavaUtilSet >

#pragma mark Public

- (jboolean)isEqual:(id __nonnull)o;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilSet:(id<JavaUtilSet> __nonnull)delegate
                                       withId:(id __nullable)mutex;

- (id<JavaUtilSet>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedSet_initWithJavaUtilSet_withId_(ComGoogleCommonCollectSynchronized_SynchronizedSet *self, id<JavaUtilSet> delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedSet *new_ComGoogleCommonCollectSynchronized_SynchronizedSet_initWithJavaUtilSet_withId_(id<JavaUtilSet> delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedSet *create_ComGoogleCommonCollectSynchronized_SynchronizedSet_initWithJavaUtilSet_withId_(id<JavaUtilSet> delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedSet)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedSortedSet_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSortedSet))
#define ComGoogleCommonCollectSynchronized_SynchronizedSortedSet_

#define RESTRICT_JavaUtilSortedSet 1
#define INCLUDE_JavaUtilSortedSet 1
#include "java/util/SortedSet.h"

@protocol JavaUtilComparator;
@protocol JavaUtilSet;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectSynchronized_SynchronizedSortedSet : ComGoogleCommonCollectSynchronized_SynchronizedSet < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id __nonnull)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id __nonnull)fromElement
                               withId:(id __nonnull)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id __nonnull)fromElement;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet> __nonnull)delegate
                                             withId:(id __nullable)mutex;

- (id<JavaUtilSortedSet>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilSet:(id<JavaUtilSet> __nonnull)arg0
                                       withId:(id __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedSortedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedSortedSet_initWithJavaUtilSortedSet_withId_(ComGoogleCommonCollectSynchronized_SynchronizedSortedSet *self, id<JavaUtilSortedSet> delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedSortedSet *new_ComGoogleCommonCollectSynchronized_SynchronizedSortedSet_initWithJavaUtilSortedSet_withId_(id<JavaUtilSortedSet> delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedSortedSet *create_ComGoogleCommonCollectSynchronized_SynchronizedSortedSet_initWithJavaUtilSortedSet_withId_(id<JavaUtilSortedSet> delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedSortedSet)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedMap_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedMap))
#define ComGoogleCommonCollectSynchronized_SynchronizedMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectSynchronized_SynchronizedMap : ComGoogleCommonCollectSynchronized_SynchronizedObject < JavaUtilMap > {
 @public
  id<JavaUtilSet> keySet_;
  id<JavaUtilCollection> values_;
  id<JavaUtilSet> entrySet_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id __nonnull)key;

- (jboolean)containsValueWithId:(id __nonnull)value;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id __nonnull)o;

- (id)getWithId:(id __nonnull)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id __nonnull)key
         withId:(id __nonnull)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map;

- (id)removeWithId:(id __nonnull)key;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap> __nonnull)delegate
                                       withId:(id __nullable)mutex;

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedMap, keySet_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedMap, values_, id<JavaUtilCollection>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedMap, entrySet_, id<JavaUtilSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedMap_initWithJavaUtilMap_withId_(ComGoogleCommonCollectSynchronized_SynchronizedMap *self, id<JavaUtilMap> delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedMap *new_ComGoogleCommonCollectSynchronized_SynchronizedMap_initWithJavaUtilMap_withId_(id<JavaUtilMap> delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedMap *create_ComGoogleCommonCollectSynchronized_SynchronizedMap_initWithJavaUtilMap_withId_(id<JavaUtilMap> delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedMap)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedSortedMap_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedSortedMap))
#define ComGoogleCommonCollectSynchronized_SynchronizedSortedMap_

#define RESTRICT_JavaUtilSortedMap 1
#define INCLUDE_JavaUtilSortedMap 1
#include "java/util/SortedMap.h"

@protocol JavaUtilComparator;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectSynchronized_SynchronizedSortedMap : ComGoogleCommonCollectSynchronized_SynchronizedMap < JavaUtilSortedMap >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id __nonnull)toKey;

- (id)lastKey;

- (id<JavaUtilSortedMap>)subMapWithId:(id __nonnull)fromKey
                               withId:(id __nonnull)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id __nonnull)fromKey;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap> __nonnull)delegate
                                             withId:(id __nullable)mutex;

- (id<JavaUtilSortedMap>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap> __nonnull)arg0
                                       withId:(id __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedSortedMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedSortedMap_initWithJavaUtilSortedMap_withId_(ComGoogleCommonCollectSynchronized_SynchronizedSortedMap *self, id<JavaUtilSortedMap> delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedSortedMap *new_ComGoogleCommonCollectSynchronized_SynchronizedSortedMap_initWithJavaUtilSortedMap_withId_(id<JavaUtilSortedMap> delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedSortedMap *create_ComGoogleCommonCollectSynchronized_SynchronizedSortedMap_initWithJavaUtilSortedMap_withId_(id<JavaUtilSortedMap> delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedSortedMap)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedBiMap))
#define ComGoogleCommonCollectSynchronized_SynchronizedBiMap_

#define RESTRICT_ComGoogleCommonCollectBiMap 1
#define INCLUDE_ComGoogleCommonCollectBiMap 1
#include "com/google/common/collect/BiMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectSynchronized_SynchronizedBiMap : ComGoogleCommonCollectSynchronized_SynchronizedMap < ComGoogleCommonCollectBiMap, JavaIoSerializable >

#pragma mark Public

- (id)forcePutWithId:(id __nonnull)key
              withId:(id __nonnull)value;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)values;

#pragma mark Package-Private

- (id<ComGoogleCommonCollectBiMap>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap> __nonnull)arg0
                                       withId:(id __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedBiMap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedBiMap)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet))
#define ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet_

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "java/util/NavigableSet.h"

@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet : ComGoogleCommonCollectSynchronized_SynchronizedSortedSet < JavaUtilNavigableSet > {
 @public
  id<JavaUtilNavigableSet> descendingSet_;
}

#pragma mark Public

- (id)ceilingWithId:(id __nonnull)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id __nonnull)e;

- (id<JavaUtilSortedSet>)headSetWithId:(id __nonnull)toElement;

- (id<JavaUtilNavigableSet>)headSetWithId:(id __nonnull)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id __nonnull)e;

- (id)lowerWithId:(id __nonnull)e;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id __nonnull)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id __nonnull)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedSet>)subSetWithId:(id __nonnull)fromElement
                               withId:(id __nonnull)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id __nonnull)fromElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id __nonnull)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilNavigableSet:(id<JavaUtilNavigableSet> __nonnull)delegate
                                                withId:(id __nullable)mutex;

- (id<JavaUtilNavigableSet>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet> __nonnull)arg0
                                             withId:(id __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet, descendingSet_, id<JavaUtilNavigableSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet_initWithJavaUtilNavigableSet_withId_(ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet *self, id<JavaUtilNavigableSet> delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet *new_ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet_initWithJavaUtilNavigableSet_withId_(id<JavaUtilNavigableSet> delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet *create_ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet_initWithJavaUtilNavigableSet_withId_(id<JavaUtilNavigableSet> delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedNavigableSet)

#endif

#if !defined (ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectSynchronized || defined(INCLUDE_ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap))
#define ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap_

#define RESTRICT_JavaUtilNavigableMap 1
#define INCLUDE_JavaUtilNavigableMap 1
#include "java/util/NavigableMap.h"

@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap : ComGoogleCommonCollectSynchronized_SynchronizedSortedMap < JavaUtilNavigableMap > {
 @public
  id<JavaUtilNavigableSet> descendingKeySet_;
  id<JavaUtilNavigableMap> descendingMap_;
  id<JavaUtilNavigableSet> navigableKeySet_;
}

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id __nonnull)key;

- (id)ceilingKeyWithId:(id __nonnull)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id __nonnull)key;

- (id)floorKeyWithId:(id __nonnull)key;

- (id<JavaUtilSortedMap>)headMapWithId:(id __nonnull)toKey;

- (id<JavaUtilNavigableMap>)headMapWithId:(id __nonnull)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id __nonnull)key;

- (id)higherKeyWithId:(id __nonnull)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id __nonnull)key;

- (id)lowerKeyWithId:(id __nonnull)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilNavigableMap>)subMapWithId:(id __nonnull)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id __nonnull)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedMap>)subMapWithId:(id __nonnull)fromKey
                               withId:(id __nonnull)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id __nonnull)fromKey;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id __nonnull)fromKey
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap> __nonnull)delegate
                                                withId:(id __nullable)mutex;

- (id<JavaUtilNavigableMap>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap> __nonnull)arg0
                                             withId:(id __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap, descendingKeySet_, id<JavaUtilNavigableSet>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap, descendingMap_, id<JavaUtilNavigableMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap, navigableKeySet_, id<JavaUtilNavigableSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap_initWithJavaUtilNavigableMap_withId_(ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap *self, id<JavaUtilNavigableMap> delegate, id mutex);

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap *new_ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap_initWithJavaUtilNavigableMap_withId_(id<JavaUtilNavigableMap> delegate, id mutex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap *create_ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap_initWithJavaUtilNavigableMap_withId_(id<JavaUtilNavigableMap> delegate, id mutex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSynchronized_SynchronizedNavigableMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSynchronized")
