//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/res/LongArrayWrapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsResLongArrayWrapper")
#ifdef RESTRICT_OrgApacheXmlUtilsResLongArrayWrapper
#define INCLUDE_ALL_OrgApacheXmlUtilsResLongArrayWrapper 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsResLongArrayWrapper 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsResLongArrayWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsResLongArrayWrapper_) && (INCLUDE_ALL_OrgApacheXmlUtilsResLongArrayWrapper || defined(INCLUDE_OrgApacheXmlUtilsResLongArrayWrapper))
#define OrgApacheXmlUtilsResLongArrayWrapper_

@class IOSLongArray;

/*!
 @brief It is a mutable object to wrap the long[] used in
  the contents of the XResourceBundle class
 */
@interface OrgApacheXmlUtilsResLongArrayWrapper : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithLongArray:(IOSLongArray *)arg;

- (jint)getLength;

- (jlong)getLongWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsResLongArrayWrapper)

FOUNDATION_EXPORT void OrgApacheXmlUtilsResLongArrayWrapper_initWithLongArray_(OrgApacheXmlUtilsResLongArrayWrapper *self, IOSLongArray *arg);

FOUNDATION_EXPORT OrgApacheXmlUtilsResLongArrayWrapper *new_OrgApacheXmlUtilsResLongArrayWrapper_initWithLongArray_(IOSLongArray *arg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsResLongArrayWrapper *create_OrgApacheXmlUtilsResLongArrayWrapper_initWithLongArray_(IOSLongArray *arg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsResLongArrayWrapper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsResLongArrayWrapper")
