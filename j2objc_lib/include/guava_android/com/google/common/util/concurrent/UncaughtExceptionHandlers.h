//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/UncaughtExceptionHandlers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers || defined(INCLUDE_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers))
#define ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_

@protocol JavaLangThread_UncaughtExceptionHandler;

/*!
 @brief Factories for <code>UncaughtExceptionHandler</code> instances.
 @author Gregory Kick
 @since 8.0
 */
@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers : NSObject

#pragma mark Public

/*!
 @brief Returns an exception handler that exits the system.This is particularly useful for the main
  thread, which may start up other, non-daemon threads, but fail to fully initialize the
  application successfully.
 <p>Example usage: 
 @code

  public static void main(String[] args) {
    Thread.currentThread().setUncaughtExceptionHandler(UncaughtExceptionHandlers.systemExit());
    ... 
  
@endcode
  
 <p>The returned handler logs any exception at severity <code>SEVERE</code> and then shuts down the
  process with an exit status of 1, indicating abnormal termination.
 */
+ (id<JavaLangThread_UncaughtExceptionHandler>)systemExit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers)

FOUNDATION_EXPORT id<JavaLangThread_UncaughtExceptionHandler> ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_systemExit(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers)

#endif

#if !defined (ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers || defined(INCLUDE_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter))
#define ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_

#define RESTRICT_JavaLangThread 1
#define INCLUDE_JavaLangThread_UncaughtExceptionHandler 1
#include "java/lang/Thread.h"

@class JavaLangRuntime;
@class JavaLangThread;
@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter : NSObject < JavaLangThread_UncaughtExceptionHandler >

#pragma mark Public

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread * __nonnull)t
                      withJavaLangThrowable:(JavaLangThrowable * __nonnull)e;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangRuntime:(JavaLangRuntime * __nonnull)runtime;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *self, JavaLangRuntime *runtime);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *new_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(JavaLangRuntime *runtime) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *create_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(JavaLangRuntime *runtime);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers")
