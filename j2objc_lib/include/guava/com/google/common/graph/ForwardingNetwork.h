//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/ForwardingNetwork.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphForwardingNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphForwardingNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphForwardingNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphForwardingNetwork || defined(INCLUDE_ComGoogleCommonGraphForwardingNetwork))
#define ComGoogleCommonGraphForwardingNetwork_

#define RESTRICT_ComGoogleCommonGraphAbstractNetwork 1
#define INCLUDE_ComGoogleCommonGraphAbstractNetwork 1
#include "com/google/common/graph/AbstractNetwork.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class JavaUtilOptional;
@protocol ComGoogleCommonGraphNetwork;
@protocol JavaUtilSet;

/*!
 @brief A class to allow <code>Network</code> implementations to be backed by a provided delegate.This is not
  currently planned to be released as a general-purpose forwarding class.
 @author James Sexton
 @author Joshua O'Madadhain
 */
@interface ComGoogleCommonGraphForwardingNetwork : ComGoogleCommonGraphAbstractNetwork

#pragma mark Public

- (id<JavaUtilSet>)adjacentEdgesWithId:(id __nonnull)edge;

- (id<JavaUtilSet>)adjacentNodesWithId:(id __nonnull)node;

- (jboolean)allowsParallelEdges;

- (jboolean)allowsSelfLoops;

- (jint)degreeWithId:(id __nonnull)node;

- (JavaUtilOptional *)edgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (JavaUtilOptional *)edgeConnectingWithId:(id __nonnull)nodeU
                                    withId:(id __nonnull)nodeV;

- (id)edgeConnectingOrNullWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (id)edgeConnectingOrNullWithId:(id __nonnull)nodeU
                          withId:(id __nonnull)nodeV;

- (ComGoogleCommonGraphElementOrder *)edgeOrder;

- (id<JavaUtilSet>)edges;

- (id<JavaUtilSet>)edgesConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (id<JavaUtilSet>)edgesConnectingWithId:(id __nonnull)nodeU
                                  withId:(id __nonnull)nodeV;

- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (jboolean)hasEdgeConnectingWithId:(id __nonnull)nodeU
                             withId:(id __nonnull)nodeV;

- (id<JavaUtilSet>)incidentEdgesWithId:(id __nonnull)node;

- (ComGoogleCommonGraphEndpointPair *)incidentNodesWithId:(id __nonnull)edge;

- (jint)inDegreeWithId:(id __nonnull)node;

- (id<JavaUtilSet>)inEdgesWithId:(id __nonnull)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (jint)outDegreeWithId:(id __nonnull)node;

- (id<JavaUtilSet>)outEdgesWithId:(id __nonnull)node;

- (id<JavaUtilSet>)predecessorsWithId:(id __nonnull)node;

- (id<JavaUtilSet>)successorsWithId:(id __nonnull)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphNetwork>)delegate;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphForwardingNetwork)

FOUNDATION_EXPORT void ComGoogleCommonGraphForwardingNetwork_initPackagePrivate(ComGoogleCommonGraphForwardingNetwork *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphForwardingNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingNetwork")
