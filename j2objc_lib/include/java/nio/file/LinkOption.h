//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/LinkOption.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileLinkOption")
#ifdef RESTRICT_JavaNioFileLinkOption
#define INCLUDE_ALL_JavaNioFileLinkOption 0
#else
#define INCLUDE_ALL_JavaNioFileLinkOption 1
#endif
#undef RESTRICT_JavaNioFileLinkOption

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileLinkOption_) && (INCLUDE_ALL_JavaNioFileLinkOption || defined(INCLUDE_JavaNioFileLinkOption))
#define JavaNioFileLinkOption_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_JavaNioFileOpenOption 1
#define INCLUDE_JavaNioFileOpenOption 1
#include "java/nio/file/OpenOption.h"

#define RESTRICT_JavaNioFileCopyOption 1
#define INCLUDE_JavaNioFileCopyOption 1
#include "java/nio/file/CopyOption.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaNioFileLinkOption_Enum) {
  JavaNioFileLinkOption_Enum_NOFOLLOW_LINKS = 0,
};

/*!
 @brief Defines the options as to how symbolic links are handled.
 @since 1.7
 */
@interface JavaNioFileLinkOption : JavaLangEnum < JavaNioFileOpenOption, JavaNioFileCopyOption >

@property (readonly, class, nonnull) JavaNioFileLinkOption *NOFOLLOW_LINKS NS_SWIFT_NAME(NOFOLLOW_LINKS);
#pragma mark Public

+ (JavaNioFileLinkOption *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaNioFileLinkOption_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaNioFileLinkOption)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaNioFileLinkOption *JavaNioFileLinkOption_values_[];

/*!
 @brief Do not follow symbolic links.
 - seealso: Files#getFileAttributeView(Path,Class,LinkOption[])
 - seealso: Files#copy
 - seealso: SecureDirectoryStream#newByteChannel
 */
inline JavaNioFileLinkOption *JavaNioFileLinkOption_get_NOFOLLOW_LINKS(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileLinkOption, NOFOLLOW_LINKS)

FOUNDATION_EXPORT IOSObjectArray *JavaNioFileLinkOption_values(void);

FOUNDATION_EXPORT JavaNioFileLinkOption *JavaNioFileLinkOption_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaNioFileLinkOption *JavaNioFileLinkOption_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileLinkOption)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileLinkOption")
