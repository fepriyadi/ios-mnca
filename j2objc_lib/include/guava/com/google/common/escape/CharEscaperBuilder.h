//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/escape/CharEscaperBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder")
#ifdef RESTRICT_ComGoogleCommonEscapeCharEscaperBuilder
#define INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeCharEscaperBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeCharEscaperBuilder_) && (INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder || defined(INCLUDE_ComGoogleCommonEscapeCharEscaperBuilder))
#define ComGoogleCommonEscapeCharEscaperBuilder_

@class ComGoogleCommonEscapeEscaper;
@class IOSCharArray;
@class IOSObjectArray;

/*!
 @brief Simple helper class to build a "sparse" array of objects based on the indexes that were added to
  it.The array will be from 0 to the maximum index given.
 All non-set indexes will contain null
  (so it's not really a sparse array, just a pseudo sparse array). The builder can also return a
  CharEscaper based on the generated array.
 @author Sven Mawson
 @since 15.0
 */
@interface ComGoogleCommonEscapeCharEscaperBuilder : NSObject

#pragma mark Public

/*!
 @brief Construct a new sparse array builder.
 */
- (instancetype __nonnull)init;

/*!
 @brief Add a new mapping from an index to an object to the escaping.
 */
- (ComGoogleCommonEscapeCharEscaperBuilder *)addEscapeWithChar:(jchar)c
                                                  withNSString:(NSString * __nonnull)r;

/*!
 @brief Add multiple mappings at once for a particular index.
 */
- (ComGoogleCommonEscapeCharEscaperBuilder *)addEscapesWithCharArray:(IOSCharArray * __nonnull)cs
                                                        withNSString:(NSString * __nonnull)r;

/*!
 @brief Convert this builder into an array of char[]s where the maximum index is the value of the
  highest character that has been seen.The array will be sparse in the sense that any unseen
  index will default to null.
 @return a "sparse" array that holds the replacement mappings.
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Convert this builder into a char escaper which is just a decorator around the underlying array
  of replacement char[]s.
 @return an escaper that escapes based on the underlying array.
 */
- (ComGoogleCommonEscapeEscaper *)toEscaper;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeCharEscaperBuilder)

FOUNDATION_EXPORT void ComGoogleCommonEscapeCharEscaperBuilder_init(ComGoogleCommonEscapeCharEscaperBuilder *self);

FOUNDATION_EXPORT ComGoogleCommonEscapeCharEscaperBuilder *new_ComGoogleCommonEscapeCharEscaperBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEscapeCharEscaperBuilder *create_ComGoogleCommonEscapeCharEscaperBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeCharEscaperBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeCharEscaperBuilder")
