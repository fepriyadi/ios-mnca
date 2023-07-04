//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/hash/AbstractNonStreamingHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractNonStreamingHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashAbstractNonStreamingHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashAbstractNonStreamingHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractNonStreamingHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractNonStreamingHashFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractNonStreamingHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractNonStreamingHashFunction || defined(INCLUDE_ComGoogleCommonHashAbstractNonStreamingHashFunction))
#define ComGoogleCommonHashAbstractNonStreamingHashFunction_

#define RESTRICT_ComGoogleCommonHashAbstractHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractHashFunction 1
#include "com/google/common/hash/AbstractHashFunction.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

/*!
 @brief Skeleton implementation of <code>HashFunction</code>, appropriate for non-streaming algorithms.All
  the hash computation done using newHasher() are delegated to the hashBytes(byte[], int, int)
  method.
 @author Dimitris Andreou
 */
@interface ComGoogleCommonHashAbstractNonStreamingHashFunction : ComGoogleCommonHashAbstractHashFunction

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray * __nonnull)input
                                                withInt:(jint)off
                                                withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hashBytesWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)input;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)input
                                          withJavaNioCharsetCharset:(JavaNioCharsetCharset * __nonnull)charset;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)input;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractNonStreamingHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractNonStreamingHashFunction_initPackagePrivate(ComGoogleCommonHashAbstractNonStreamingHashFunction *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractNonStreamingHashFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractNonStreamingHashFunction")