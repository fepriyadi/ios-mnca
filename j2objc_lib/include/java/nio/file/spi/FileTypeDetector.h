//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/spi/FileTypeDetector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileSpiFileTypeDetector")
#ifdef RESTRICT_JavaNioFileSpiFileTypeDetector
#define INCLUDE_ALL_JavaNioFileSpiFileTypeDetector 0
#else
#define INCLUDE_ALL_JavaNioFileSpiFileTypeDetector 1
#endif
#undef RESTRICT_JavaNioFileSpiFileTypeDetector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileSpiFileTypeDetector_) && (INCLUDE_ALL_JavaNioFileSpiFileTypeDetector || defined(INCLUDE_JavaNioFileSpiFileTypeDetector))
#define JavaNioFileSpiFileTypeDetector_

@protocol JavaNioFilePath;

/*!
 @brief A file type detector for probing a file to guess its file type.
 <p> A file type detector is a concrete implementation of this class, has a
  zero-argument constructor, and implements the abstract methods specified
  below. 
 <p> The means by which a file type detector determines the file type is
  highly implementation specific. A simple implementation might examine the 
 <em>file extension</em> (a convention used in some platforms) and map it to
  a file type. In other cases, the file type may be stored as a file <a href="../attribute/package-summary.html">
  attribute</a> or the bytes in a
  file may be examined to guess its file type.
 - seealso: java.nio.file.Files#probeContentType(Path)
 @since 1.7
 */
@interface JavaNioFileSpiFileTypeDetector : NSObject

#pragma mark Public

/*!
 @brief Probes the given file to guess its content type.
 <p> The means by which this method determines the file type is highly
  implementation specific. It may simply examine the file name, it may use
  a file <a href="../attribute/package-summary.html">attribute</a>,
  or it may examines bytes in the file. 
 <p> The probe result is the string form of the value of a
  Multipurpose Internet Mail Extension (MIME) content type as
  defined by <a href="http://www.ietf.org/rfc/rfc2045.txt"><i>RFC&nbsp;2045:
  Multipurpose Internet Mail Extensions (MIME) Part One: Format of Internet
  Message Bodies</i></a>. The string must be parsable according to the
  grammar in the RFC 2045.
 @param path the path to the file to probe
 @return The content type or <code>null</code> if the file type is not
           recognized
 @throw IOException
 An I/O error occurs
 @throw SecurityException
 If the implementation requires to access the file, and a
           security manager is installed, and it denies an unspecified
           permission required by a file system provider implementation.
           If the file reference is associated with the default file system
           provider then the <code>SecurityManager.checkRead(String)</code> method
           is invoked to check read access to the file.
 - seealso: java.nio.file.Files#probeContentType
 */
- (NSString *)probeContentTypeWithJavaNioFilePath:(id<JavaNioFilePath>)path;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 @throw SecurityException
 If a security manager has been installed and it denies
           <code>RuntimePermission</code><tt>("fileTypeDetector")</tt>
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileSpiFileTypeDetector)

FOUNDATION_EXPORT void JavaNioFileSpiFileTypeDetector_init(JavaNioFileSpiFileTypeDetector *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileSpiFileTypeDetector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileSpiFileTypeDetector")
