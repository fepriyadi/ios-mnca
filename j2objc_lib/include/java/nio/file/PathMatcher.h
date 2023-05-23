//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/PathMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFilePathMatcher")
#ifdef RESTRICT_JavaNioFilePathMatcher
#define INCLUDE_ALL_JavaNioFilePathMatcher 0
#else
#define INCLUDE_ALL_JavaNioFilePathMatcher 1
#endif
#undef RESTRICT_JavaNioFilePathMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFilePathMatcher_) && (INCLUDE_ALL_JavaNioFilePathMatcher || defined(INCLUDE_JavaNioFilePathMatcher))
#define JavaNioFilePathMatcher_

@protocol JavaNioFilePath;

/*!
 @brief An interface that is implemented by objects that perform match operations on
  paths.
 @since 1.7
 - seealso: FileSystem#getPathMatcher
 - seealso: Files#newDirectoryStream(Path,String)
 */
@protocol JavaNioFilePathMatcher < JavaObject >

/*!
 @brief Tells if given path matches this matcher's pattern.
 @param path the path to match
 @return <code>true</code> if, and only if, the path matches this
           matcher's pattern
 */
- (jboolean)matchesWithJavaNioFilePath:(id<JavaNioFilePath>)path;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFilePathMatcher)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFilePathMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFilePathMatcher")