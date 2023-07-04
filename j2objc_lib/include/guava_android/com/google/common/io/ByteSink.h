//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/io/ByteSink.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoByteSink")
#ifdef RESTRICT_ComGoogleCommonIoByteSink
#define INCLUDE_ALL_ComGoogleCommonIoByteSink 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoByteSink 1
#endif
#undef RESTRICT_ComGoogleCommonIoByteSink

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoByteSink_) && (INCLUDE_ALL_ComGoogleCommonIoByteSink || defined(INCLUDE_ComGoogleCommonIoByteSink))
#define ComGoogleCommonIoByteSink_

@class ComGoogleCommonIoCharSink;
@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNioCharsetCharset;

/*!
 @brief A destination to which bytes can be written, such as a file.Unlike an <code>OutputStream</code>, a 
 <code>ByteSink</code> is not an open, stateful stream that can be written to and closed.
 Instead, it
  is an immutable <i>supplier</i> of <code>OutputStream</code> instances. 
 <p><code>ByteSink</code> provides two kinds of methods: 
 <ul>
    <li><b>Methods that return a stream:</b> These methods should return a <i>new</i>, independent
        instance each time they are called. The caller is responsible for ensuring that the
        returned stream is closed.   
 <li><b>Convenience methods:</b> These are implementations of common operations that are
        typically implemented by opening a stream using one of the methods in the first category,
        doing something and finally closing the stream or channel that was opened. 
 </ul>
 @since 14.0
 @author Colin Decker
 */
@interface ComGoogleCommonIoByteSink : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>CharSink</code> view of this <code>ByteSink</code> that writes characters to this sink as
  bytes encoded with the given <code>charset</code>.
 */
- (ComGoogleCommonIoCharSink *)asCharSinkWithJavaNioCharsetCharset:(JavaNioCharsetCharset * __nonnull)charset;

/*!
 @brief Opens a new buffered <code>OutputStream</code> for writing to this sink.The returned stream is not
  required to be a <code>BufferedOutputStream</code> in order to allow implementations to simply
  delegate to <code>openStream()</code> when the stream returned by that method does not benefit from
  additional buffering (for example, a <code>ByteArrayOutputStream</code>).
 This method returns a new,
  independent stream each time it is called. 
 <p>The caller is responsible for ensuring that the returned stream is closed.
 @throw IOExceptionif an I/O error occurs while opening the stream
 @since 15.0 (in 14.0 with return type <code>BufferedOutputStream</code>)
 */
- (JavaIoOutputStream *)openBufferedStream;

/*!
 @brief Opens a new <code>OutputStream</code> for writing to this sink.This method returns a new,
  independent stream each time it is called.
 <p>The caller is responsible for ensuring that the returned stream is closed.
 @throw IOExceptionif an I/O error occurs while opening the stream
 */
- (JavaIoOutputStream *)openStream;

/*!
 @brief Writes all the given bytes to this sink.
 @throw IOExceptionif an I/O occurs while writing to this sink
 */
- (void)writeWithByteArray:(IOSByteArray * __nonnull)bytes;

/*!
 @brief Writes all the bytes from the given <code>InputStream</code> to this sink.Does not close <code>input</code>
 .
 @return the number of bytes written
 @throw IOExceptionif an I/O occurs while reading from <code>input</code> or writing to this sink
 */
- (jlong)writeFromWithJavaIoInputStream:(JavaIoInputStream * __nonnull)input;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteSink)

FOUNDATION_EXPORT void ComGoogleCommonIoByteSink_init(ComGoogleCommonIoByteSink *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSink)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoByteSink")
