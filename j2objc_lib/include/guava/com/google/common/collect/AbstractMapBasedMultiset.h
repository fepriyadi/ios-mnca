//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractMapBasedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultiset))
#define ComGoogleCommonCollectAbstractMapBasedMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultiset 1
#include "com/google/common/collect/AbstractMultiset.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaUtilFunctionObjIntConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Basic implementation of <code>Multiset<E></code> backed by an instance of <code>Map<E, Count></code>.
 <p>For serialization to work, the subclass must specify explicit <code>readObject</code> and <code>writeObject</code>
  methods.
 @author Kevin Bourrillion
 */
@interface ComGoogleCommonCollectAbstractMapBasedMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable >

#pragma mark Public

/*!
 @throw IllegalArgumentExceptionif the call would result in more than <code>Integer.MAX_VALUE</code>
  occurrences of <code>element</code> in this multiset.
 */
- (jint)addWithId:(id __nullable)element
          withInt:(jint)occurrences;

- (void)clear;

- (jint)countWithId:(id __nullable)element;

/*!
 @brief <p>Invoking <code>Multiset.Entry.getCount</code> on an entry in the returned set always returns the
  current count of that element in the multiset, as opposed to the count at the time the entry
  was retrieved.
 */
- (id<JavaUtilSet>)entrySet;

- (void)forEachEntryWithJavaUtilFunctionObjIntConsumer:(id<JavaUtilFunctionObjIntConsumer> __nonnull)action;

- (id<JavaUtilIterator>)iterator;

- (jint)removeWithId:(id __nullable)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id __nullable)element
               withInt:(jint)count;

- (jint)size;

#pragma mark Protected

/*!
 @brief Standard constructor.
 */
- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)backingMap;

#pragma mark Package-Private

- (jint)distinctElements;

- (id<JavaUtilIterator>)elementIterator;

- (id<JavaUtilIterator>)entryIterator;

/*!
 @brief Used during deserialization only.The backing map must be empty.
 */
- (void)setBackingMapWithJavaUtilMap:(id<JavaUtilMap> __nonnull)backingMap;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultiset_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultiset *self, id<JavaUtilMap> backingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultiset")