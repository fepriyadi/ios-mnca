//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/ForwardingExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingExecutorService))
#define ComGoogleCommonUtilConcurrentForwardingExecutorService_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "com/google/common/collect/ForwardingObject.h"

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include "java/util/concurrent/ExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

/*!
 @brief An executor service which forwards all its method calls to another executor service.Subclasses
  should override one or more methods to modify the behavior of the backing executor service as
  desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">decorator pattern</a>.
 @author Kurt Alfred Kluever
 @since 10.0
 */
@interface ComGoogleCommonUtilConcurrentForwardingExecutorService : ComGoogleCommonCollectForwardingObject < JavaUtilConcurrentExecutorService >

#pragma mark Public

- (jboolean)awaitTerminationWithLong:(jlong)timeout
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)command;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)task
                                                    withId:(id __nonnull)result;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilConcurrentExecutorService>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingExecutorService_init(ComGoogleCommonUtilConcurrentForwardingExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService")