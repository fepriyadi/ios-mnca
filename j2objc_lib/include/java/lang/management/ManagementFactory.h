//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/management/ManagementFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangManagementManagementFactory")
#ifdef RESTRICT_JavaLangManagementManagementFactory
#define INCLUDE_ALL_JavaLangManagementManagementFactory 0
#else
#define INCLUDE_ALL_JavaLangManagementManagementFactory 1
#endif
#undef RESTRICT_JavaLangManagementManagementFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangManagementManagementFactory_) && (INCLUDE_ALL_JavaLangManagementManagementFactory || defined(INCLUDE_JavaLangManagementManagementFactory))
#define JavaLangManagementManagementFactory_

@protocol JavaLangManagementRuntimeMXBean;
@protocol JavaLangManagementThreadMXBean;

/*!
 @brief Stub implementation of ManagementFactory.
 */
@interface JavaLangManagementManagementFactory : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (id<JavaLangManagementRuntimeMXBean>)getRuntimeMXBean;

+ (id<JavaLangManagementThreadMXBean>)getThreadMXBean;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangManagementManagementFactory)

FOUNDATION_EXPORT void JavaLangManagementManagementFactory_init(JavaLangManagementManagementFactory *self);

FOUNDATION_EXPORT JavaLangManagementManagementFactory *new_JavaLangManagementManagementFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangManagementManagementFactory *create_JavaLangManagementManagementFactory_init(void);

FOUNDATION_EXPORT id<JavaLangManagementRuntimeMXBean> JavaLangManagementManagementFactory_getRuntimeMXBean(void);

FOUNDATION_EXPORT id<JavaLangManagementThreadMXBean> JavaLangManagementManagementFactory_getThreadMXBean(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangManagementManagementFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangManagementManagementFactory")