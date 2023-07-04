//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/ImmutableValueGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphImmutableValueGraph")
#ifdef RESTRICT_ComGoogleCommonGraphImmutableValueGraph
#define INCLUDE_ALL_ComGoogleCommonGraphImmutableValueGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphImmutableValueGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphImmutableValueGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphImmutableValueGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphImmutableValueGraph || defined(INCLUDE_ComGoogleCommonGraphImmutableValueGraph))
#define ComGoogleCommonGraphImmutableValueGraph_

#define RESTRICT_ComGoogleCommonGraphStandardValueGraph 1
#define INCLUDE_ComGoogleCommonGraphStandardValueGraph 1
#include "com/google/common/graph/StandardValueGraph.h"

@class ComGoogleCommonGraphAbstractGraphBuilder;
@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphImmutableGraph;
@protocol ComGoogleCommonGraphValueGraph;
@protocol JavaUtilMap;

/*!
 @brief A <code>ValueGraph</code> whose elements and structural relationships will never change.Instances of
  this class may be obtained with <code>copyOf(ValueGraph)</code>.
 <p>See the Guava User's Guide's <a href="https://github.com/google/guava/wiki/GraphsExplained#immutable-implementations">
 discussion
  of the <code>Immutable*</code> types</a> for more information on the properties and guarantees
  provided by this class.
 @author James Sexton
 @author Jens Nyman
 @since 20.0
 */
@interface ComGoogleCommonGraphImmutableValueGraph : ComGoogleCommonGraphStandardValueGraph

#pragma mark Public

- (ComGoogleCommonGraphImmutableGraph *)asGraph;

/*!
 @brief Simply returns its argument.
 */
+ (ComGoogleCommonGraphImmutableValueGraph *)copyOfWithComGoogleCommonGraphImmutableValueGraph:(ComGoogleCommonGraphImmutableValueGraph * __nonnull)graph OBJC_METHOD_FAMILY_NONE __attribute__((deprecated));

/*!
 @brief Returns an immutable copy of <code>graph</code>.
 */
+ (ComGoogleCommonGraphImmutableValueGraph *)copyOfWithComGoogleCommonGraphValueGraph:(id<ComGoogleCommonGraphValueGraph> __nonnull)graph OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonGraphElementOrder *)incidentEdgeOrder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder * __nonnull)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonGraphAbstractGraphBuilder:(ComGoogleCommonGraphAbstractGraphBuilder * __nonnull)arg0
                                                                         withJavaUtilMap:(id<JavaUtilMap> __nonnull)arg1
                                                                                withLong:(jlong)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphImmutableValueGraph)

FOUNDATION_EXPORT ComGoogleCommonGraphImmutableValueGraph *ComGoogleCommonGraphImmutableValueGraph_copyOfWithComGoogleCommonGraphValueGraph_(id<ComGoogleCommonGraphValueGraph> graph);

FOUNDATION_EXPORT ComGoogleCommonGraphImmutableValueGraph *ComGoogleCommonGraphImmutableValueGraph_copyOfWithComGoogleCommonGraphImmutableValueGraph_(ComGoogleCommonGraphImmutableValueGraph *graph);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphImmutableValueGraph)

#endif

#if !defined (ComGoogleCommonGraphImmutableValueGraph_Builder_) && (INCLUDE_ALL_ComGoogleCommonGraphImmutableValueGraph || defined(INCLUDE_ComGoogleCommonGraphImmutableValueGraph_Builder))
#define ComGoogleCommonGraphImmutableValueGraph_Builder_

@class ComGoogleCommonGraphEndpointPair;
@class ComGoogleCommonGraphImmutableValueGraph;
@class ComGoogleCommonGraphValueGraphBuilder;

/*!
 @brief A builder for creating <code>ImmutableValueGraph</code> instances, especially <code>static final</code>
  graphs.Example:
  
 @code
 static final ImmutableValueGraph<City, Distance> CITY_ROAD_DISTANCE_GRAPH =
      ValueGraphBuilder.undirected()
          .
 <City, Distance>immutable()
          .putEdgeValue(PARIS, BERLIN, kilometers(1060))
          .putEdgeValue(PARIS, BRUSSELS, kilometers(317))
          .putEdgeValue(BERLIN, BRUSSELS, kilometers(764))
          .addNode(REYKJAVIK)
          .build(); 
 
@endcode
  
 <p>Builder instances can be reused; it is safe to call <code>build</code> multiple times to build
  multiple graphs in series. Each new graph contains all the elements of the ones created before
  it.
 @since 28.0
 */
@interface ComGoogleCommonGraphImmutableValueGraph_Builder : NSObject

#pragma mark Public

/*!
 @brief Adds <code>node</code> if it is not already present.
 <p><b>Nodes must be unique</b>, just as <code>Map</code> keys must be. They must also be non-null.
 @return this <code>Builder</code> object
 */
- (ComGoogleCommonGraphImmutableValueGraph_Builder *)addNodeWithId:(id __nonnull)node;

/*!
 @brief Returns a newly-created <code>ImmutableValueGraph</code> based on the contents of this <code>Builder</code>
 .
 */
- (ComGoogleCommonGraphImmutableValueGraph *)build;

/*!
 @brief Adds an edge connecting <code>endpoints</code> if one is not already present, and sets a value for
  that edge to <code>value</code> (overwriting the existing value, if any).
 <p>If the graph is directed, the resultant edge will be directed; otherwise, it will be
  undirected. 
 <p>If this graph is directed, <code>endpoints</code> must be ordered. 
 <p>Values do not have to be unique. However, values must be non-null. 
 <p>If either or both endpoints are not already present in this graph, this method will
  silently <code>add</code> each missing endpoint to the graph.
 @return this <code>Builder</code> object
 @throw IllegalArgumentExceptionif the introduction of the edge would violate <code>allowsSelfLoops()</code>
 @throw IllegalArgumentExceptionif the endpoints are unordered and the graph is directed
 */
- (ComGoogleCommonGraphImmutableValueGraph_Builder *)putEdgeValueWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints
                                                                                               withId:(id __nonnull)value;

/*!
 @brief Adds an edge connecting <code>nodeU</code> to <code>nodeV</code> if one is not already present, and
  sets a value for that edge to <code>value</code> (overwriting the existing value, if any).
 <p>If the graph is directed, the resultant edge will be directed; otherwise, it will be
  undirected. 
 <p>Values do not have to be unique. However, values must be non-null. 
 <p>If <code>nodeU</code> and <code>nodeV</code> are not already present in this graph, this method will
  silently <code>add</code> <code>nodeU</code> and <code>nodeV</code> to the graph.
 @return this <code>Builder</code> object
 @throw IllegalArgumentExceptionif the introduction of the edge would violate <code>allowsSelfLoops()</code>
 */
- (ComGoogleCommonGraphImmutableValueGraph_Builder *)putEdgeValueWithId:(id __nonnull)nodeU
                                                                 withId:(id __nonnull)nodeV
                                                                 withId:(id __nonnull)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonGraphValueGraphBuilder:(ComGoogleCommonGraphValueGraphBuilder * __nonnull)graphBuilder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphImmutableValueGraph_Builder)

FOUNDATION_EXPORT void ComGoogleCommonGraphImmutableValueGraph_Builder_initWithComGoogleCommonGraphValueGraphBuilder_(ComGoogleCommonGraphImmutableValueGraph_Builder *self, ComGoogleCommonGraphValueGraphBuilder *graphBuilder);

FOUNDATION_EXPORT ComGoogleCommonGraphImmutableValueGraph_Builder *new_ComGoogleCommonGraphImmutableValueGraph_Builder_initWithComGoogleCommonGraphValueGraphBuilder_(ComGoogleCommonGraphValueGraphBuilder *graphBuilder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphImmutableValueGraph_Builder *create_ComGoogleCommonGraphImmutableValueGraph_Builder_initWithComGoogleCommonGraphValueGraphBuilder_(ComGoogleCommonGraphValueGraphBuilder *graphBuilder);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphImmutableValueGraph_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphImmutableValueGraph")
