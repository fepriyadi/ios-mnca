//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/graph/GraphConstants.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphGraphConstants")
#ifdef RESTRICT_ComGoogleCommonGraphGraphConstants
#define INCLUDE_ALL_ComGoogleCommonGraphGraphConstants 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphGraphConstants 1
#endif
#undef RESTRICT_ComGoogleCommonGraphGraphConstants

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphGraphConstants_) && (INCLUDE_ALL_ComGoogleCommonGraphGraphConstants || defined(INCLUDE_ComGoogleCommonGraphGraphConstants))
#define ComGoogleCommonGraphGraphConstants_

/*!
 @brief A utility class to hold various constants used by the Guava Graph library.
 */
@interface ComGoogleCommonGraphGraphConstants : NSObject
@property (readonly, class) jint EXPECTED_DEGREE NS_SWIFT_NAME(EXPECTED_DEGREE);
@property (readonly, class) jint DEFAULT_NODE_COUNT NS_SWIFT_NAME(DEFAULT_NODE_COUNT);
@property (readonly, class) jint DEFAULT_EDGE_COUNT NS_SWIFT_NAME(DEFAULT_EDGE_COUNT);
@property (readonly, class) jfloat INNER_LOAD_FACTOR NS_SWIFT_NAME(INNER_LOAD_FACTOR);
@property (readonly, class) jint INNER_CAPACITY NS_SWIFT_NAME(INNER_CAPACITY);
@property (readonly, copy, class) NSString *NODE_NOT_IN_GRAPH NS_SWIFT_NAME(NODE_NOT_IN_GRAPH);
@property (readonly, copy, class) NSString *EDGE_NOT_IN_GRAPH NS_SWIFT_NAME(EDGE_NOT_IN_GRAPH);
@property (readonly, copy, class) NSString *REUSING_EDGE NS_SWIFT_NAME(REUSING_EDGE);
@property (readonly, copy, class) NSString *MULTIPLE_EDGES_CONNECTING NS_SWIFT_NAME(MULTIPLE_EDGES_CONNECTING);
@property (readonly, copy, class) NSString *PARALLEL_EDGES_NOT_ALLOWED NS_SWIFT_NAME(PARALLEL_EDGES_NOT_ALLOWED);
@property (readonly, copy, class) NSString *SELF_LOOPS_NOT_ALLOWED NS_SWIFT_NAME(SELF_LOOPS_NOT_ALLOWED);
@property (readonly, copy, class) NSString *NOT_AVAILABLE_ON_UNDIRECTED NS_SWIFT_NAME(NOT_AVAILABLE_ON_UNDIRECTED);
@property (readonly, copy, class) NSString *EDGE_ALREADY_EXISTS NS_SWIFT_NAME(EDGE_ALREADY_EXISTS);
@property (readonly, copy, class) NSString *ENDPOINTS_MISMATCH NS_SWIFT_NAME(ENDPOINTS_MISMATCH);

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphGraphConstants)

inline jint ComGoogleCommonGraphGraphConstants_get_EXPECTED_DEGREE(void);
#define ComGoogleCommonGraphGraphConstants_EXPECTED_DEGREE 2
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonGraphGraphConstants, EXPECTED_DEGREE, jint)

inline jint ComGoogleCommonGraphGraphConstants_get_DEFAULT_NODE_COUNT(void);
#define ComGoogleCommonGraphGraphConstants_DEFAULT_NODE_COUNT 10
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonGraphGraphConstants, DEFAULT_NODE_COUNT, jint)

inline jint ComGoogleCommonGraphGraphConstants_get_DEFAULT_EDGE_COUNT(void);
#define ComGoogleCommonGraphGraphConstants_DEFAULT_EDGE_COUNT 20
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonGraphGraphConstants, DEFAULT_EDGE_COUNT, jint)

inline jfloat ComGoogleCommonGraphGraphConstants_get_INNER_LOAD_FACTOR(void);
#define ComGoogleCommonGraphGraphConstants_INNER_LOAD_FACTOR 1.0f
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonGraphGraphConstants, INNER_LOAD_FACTOR, jfloat)

inline jint ComGoogleCommonGraphGraphConstants_get_INNER_CAPACITY(void);
#define ComGoogleCommonGraphGraphConstants_INNER_CAPACITY 2
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonGraphGraphConstants, INNER_CAPACITY, jint)

inline NSString *ComGoogleCommonGraphGraphConstants_get_NODE_NOT_IN_GRAPH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_NODE_NOT_IN_GRAPH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, NODE_NOT_IN_GRAPH, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_EDGE_NOT_IN_GRAPH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_EDGE_NOT_IN_GRAPH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, EDGE_NOT_IN_GRAPH, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_REUSING_EDGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_REUSING_EDGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, REUSING_EDGE, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_MULTIPLE_EDGES_CONNECTING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_MULTIPLE_EDGES_CONNECTING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, MULTIPLE_EDGES_CONNECTING, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_PARALLEL_EDGES_NOT_ALLOWED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_PARALLEL_EDGES_NOT_ALLOWED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, PARALLEL_EDGES_NOT_ALLOWED, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_SELF_LOOPS_NOT_ALLOWED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_SELF_LOOPS_NOT_ALLOWED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, SELF_LOOPS_NOT_ALLOWED, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_NOT_AVAILABLE_ON_UNDIRECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_NOT_AVAILABLE_ON_UNDIRECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, NOT_AVAILABLE_ON_UNDIRECTED, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_EDGE_ALREADY_EXISTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_EDGE_ALREADY_EXISTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, EDGE_ALREADY_EXISTS, NSString *)

inline NSString *ComGoogleCommonGraphGraphConstants_get_ENDPOINTS_MISMATCH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonGraphGraphConstants_ENDPOINTS_MISMATCH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonGraphGraphConstants, ENDPOINTS_MISMATCH, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphGraphConstants)

#endif

#if !defined (ComGoogleCommonGraphGraphConstants_Presence_) && (INCLUDE_ALL_ComGoogleCommonGraphGraphConstants || defined(INCLUDE_ComGoogleCommonGraphGraphConstants_Presence))
#define ComGoogleCommonGraphGraphConstants_Presence_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonGraphGraphConstants_Presence_Enum) {
  ComGoogleCommonGraphGraphConstants_Presence_Enum_EDGE_EXISTS = 0,
};

/*!
 @brief Singleton edge value for <code>Graph</code> implementations backed by <code>ValueGraph</code>s.
 */
@interface ComGoogleCommonGraphGraphConstants_Presence : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonGraphGraphConstants_Presence *EDGE_EXISTS NS_SWIFT_NAME(EDGE_EXISTS);
#pragma mark Public

+ (ComGoogleCommonGraphGraphConstants_Presence *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonGraphGraphConstants_Presence_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonGraphGraphConstants_Presence)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonGraphGraphConstants_Presence *ComGoogleCommonGraphGraphConstants_Presence_values_[];

inline ComGoogleCommonGraphGraphConstants_Presence *ComGoogleCommonGraphGraphConstants_Presence_get_EDGE_EXISTS(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonGraphGraphConstants_Presence, EDGE_EXISTS)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonGraphGraphConstants_Presence_values(void);

FOUNDATION_EXPORT ComGoogleCommonGraphGraphConstants_Presence *ComGoogleCommonGraphGraphConstants_Presence_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonGraphGraphConstants_Presence *ComGoogleCommonGraphGraphConstants_Presence_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphGraphConstants_Presence)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphGraphConstants")
