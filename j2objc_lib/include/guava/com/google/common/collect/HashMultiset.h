//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/HashMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectHashMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectHashMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectHashMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectHashMultiset || defined(INCLUDE_ComGoogleCommonCollectHashMultiset))
#define ComGoogleCommonCollectHashMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"

@protocol JavaLangIterable;
@protocol JavaUtilMap;

/*!
 @brief Multiset implementation backed by a <code>HashMap</code>.
 @author Kevin Bourrillion
 @author Jared Levy
 @since 2.0
 */
@interface ComGoogleCommonCollectHashMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma mark Public

/*!
 @brief Creates a new, empty <code>HashMultiset</code> using the default initial capacity.
 */
+ (ComGoogleCommonCollectHashMultiset *)create;

/*!
 @brief Creates a new, empty <code>HashMultiset</code> with the specified expected number of distinct
  elements.
 @param distinctElements the expected number of distinct elements
 @throw IllegalArgumentExceptionif <code>distinctElements</code> is negative
 */
+ (ComGoogleCommonCollectHashMultiset *)createWithInt:(jint)distinctElements;

/*!
 @brief Creates a new <code>HashMultiset</code> containing the specified elements.
 <p>This implementation is highly efficient when <code>elements</code> is itself a <code>Multiset</code>.
 @param elements the elements that the multiset should contain
 */
+ (ComGoogleCommonCollectHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable> __nonnull)elements;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_createWithInt_(jint distinctElements);

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashMultiset")