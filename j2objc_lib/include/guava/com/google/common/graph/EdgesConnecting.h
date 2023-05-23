//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/EdgesConnecting.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphEdgesConnecting")
#ifdef RESTRICT_ComGoogleCommonGraphEdgesConnecting
#define INCLUDE_ALL_ComGoogleCommonGraphEdgesConnecting 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphEdgesConnecting 1
#endif
#undef RESTRICT_ComGoogleCommonGraphEdgesConnecting

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphEdgesConnecting_) && (INCLUDE_ALL_ComGoogleCommonGraphEdgesConnecting || defined(INCLUDE_ComGoogleCommonGraphEdgesConnecting))
#define ComGoogleCommonGraphEdgesConnecting_

#define RESTRICT_JavaUtilAbstractSet 1
#define INCLUDE_JavaUtilAbstractSet 1
#include "java/util/AbstractSet.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol JavaUtilMap;

/*!
 @brief A class to represent the set of edges connecting an (implicit) origin node to a target node.
 <p>The <code>nodeToOutEdge</code> map means this class only works on networks without parallel edges.
  See <code>MultiEdgesConnecting</code> for a class that works with parallel edges.
 @author James Sexton
 */
@interface ComGoogleCommonGraphEdgesConnecting : JavaUtilAbstractSet

#pragma mark Public

- (jboolean)containsWithId:(id __nullable)edge;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)nodeToEdgeMap
                                                     withId:(id __nonnull)targetNode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphEdgesConnecting)

FOUNDATION_EXPORT void ComGoogleCommonGraphEdgesConnecting_initPackagePrivateWithJavaUtilMap_withId_(ComGoogleCommonGraphEdgesConnecting *self, id<JavaUtilMap> nodeToEdgeMap, id targetNode);

FOUNDATION_EXPORT ComGoogleCommonGraphEdgesConnecting *new_ComGoogleCommonGraphEdgesConnecting_initPackagePrivateWithJavaUtilMap_withId_(id<JavaUtilMap> nodeToEdgeMap, id targetNode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphEdgesConnecting *create_ComGoogleCommonGraphEdgesConnecting_initPackagePrivateWithJavaUtilMap_withId_(id<JavaUtilMap> nodeToEdgeMap, id targetNode);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphEdgesConnecting)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphEdgesConnecting")