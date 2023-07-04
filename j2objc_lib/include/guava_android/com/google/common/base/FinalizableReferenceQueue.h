//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/FinalizableReferenceQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizableReferenceQueue
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizableReferenceQueue
#ifdef INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader
#define INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader 1
#endif
#ifdef INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader
#define INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader 1
#endif
#ifdef INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader
#define INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue))
#define ComGoogleCommonBaseFinalizableReferenceQueue_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class IOSClass;
@class JavaLangRefPhantomReference;
@class JavaLangRefReferenceQueue;
@class JavaLangReflectMethod;

/*!
 @brief A reference queue with an associated background thread that dequeues references and invokes 
 <code>FinalizableReference.finalizeReferent()</code> on them.
 <p>Keep a strong reference to this object until all of the associated referents have been
  finalized. If this object is garbage collected earlier, the backing thread will not invoke <code>finalizeReferent()</code>
  on the remaining references. 
 <p>As an example of how this is used, imagine you have a class <code>MyServer</code> that creates a a 
 <code>ServerSocket</code>, and you would like to ensure that the <code>ServerSocket</code>
  is closed even if the <code>MyServer</code> object is garbage-collected without calling
  its <code>close</code> method. You <em>could</em> use a finalizer to accomplish this, but that has a
  number of well-known problems. Here is how you might use this class instead: 
 @code
 public class MyServer implements Closeable {
    private static final FinalizableReferenceQueue frq = new FinalizableReferenceQueue();
    // You might also share this between several objects.
    private static final Set<Reference<?>> references = Sets.newConcurrentHashSet();
    // This ensures that the FinalizablePhantomReference itself is not garbage-collected.
    private final ServerSocket serverSocket;
    private MyServer(...) {
      ...
      this.serverSocket = new ServerSocket(...);
      ...
    }
    public static MyServer create(...) {
      MyServer myServer = new MyServer(...);
      final ServerSocket serverSocket = myServer.serverSocket;
      Reference<?> reference = new FinalizablePhantomReference<MyServer>(myServer, frq) {
        public void finalizeReferent() {
          references.remove(this):
          if (!serverSocket.isClosed()) {
            ...log a message about how nobody called close()...
            try {
              serverSocket.close();
            } catch (IOException e) {
              ...
            }          }          }
      };
      references.add(reference);
      return myServer;
    }
    public void close() {
      serverSocket.close();
    }  }  
 
@endcode
 @author Bob Lee
 @since 2.0
 */
@interface ComGoogleCommonBaseFinalizableReferenceQueue : NSObject < JavaIoCloseable > {
 @public
  /*!
   @brief The actual reference queue that our background thread will poll.
   */
  JavaLangRefReferenceQueue *queue_;
  JavaLangRefPhantomReference *frqRef_;
  /*!
   @brief Whether or not the background thread started successfully.
   */
  jboolean threadStarted_;
}

#pragma mark Public

/*!
 @brief Constructs a new queue.
 */
- (instancetype __nonnull)init;

- (void)close;

#pragma mark Package-Private

/*!
 @brief Repeatedly dequeues references from the queue and invokes <code>FinalizableReference.finalizeReferent()</code>
  on them until the queue is empty.This method is a
  no-op if the background thread was created successfully.
 */
- (void)cleanUp;

/*!
 @brief Looks up Finalizer.startFinalizer().
 */
+ (JavaLangReflectMethod *)getStartFinalizerWithIOSClass:(IOSClass * __nonnull)finalizer;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFinalizableReferenceQueue, queue_, JavaLangRefReferenceQueue *)
J2OBJC_FIELD_SETTER(ComGoogleCommonBaseFinalizableReferenceQueue, frqRef_, JavaLangRefPhantomReference *)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_init(ComGoogleCommonBaseFinalizableReferenceQueue *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue *new_ComGoogleCommonBaseFinalizableReferenceQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue *create_ComGoogleCommonBaseFinalizableReferenceQueue_init(void);

FOUNDATION_EXPORT JavaLangReflectMethod *ComGoogleCommonBaseFinalizableReferenceQueue_getStartFinalizerWithIOSClass_(IOSClass *finalizer);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader_

@class IOSClass;

/*!
 @brief Loads Finalizer.class.
 */
@protocol ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader < JavaObject >

/*!
 @brief Returns Finalizer.class or null if this loader shouldn't or can't load it.
 @throw SecurityExceptionif we don't have the appropriate privileges
 */
- (IOSClass * __nullable)loadFinalizer;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_

@class IOSClass;

/*!
 @brief Tries to load Finalizer from the system class loader.If Finalizer is in the system class path,
  we needn't create a separate loader.
 */
@interface ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader : NSObject < ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader >
@property (class) jboolean disabled NS_SWIFT_NAME(disabled);

#pragma mark Public

- (IOSClass * __nullable)loadFinalizer;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader)

inline jboolean ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_get_disabled(void);
inline jboolean ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_set_disabled(jboolean value);
inline jboolean *ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_getRef_disabled(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jboolean ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_disabled;
J2OBJC_STATIC_FIELD_PRIMITIVE(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader, disabled, jboolean)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_init(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader *new_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader *create_ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_SystemLoader)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_

@class IOSClass;
@class JavaNetURL;
@class JavaNetURLClassLoader;

/*!
 @brief Try to load Finalizer in its own class loader.If Finalizer's thread had a direct reference to
  our class loader (which could be that of a dynamically loaded web application or OSGi bundle),
  it would prevent our class loader from getting garbage collected.
 */
@interface ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader : NSObject < ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader >

#pragma mark Public

- (IOSClass * __nullable)loadFinalizer;

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Gets URL for base of path containing Finalizer.class.
 */
- (JavaNetURL *)getBaseUrl;

/*!
 @brief Creates a class loader with the given base URL as its classpath.
 */
- (JavaNetURLClassLoader *)newLoaderWithJavaNetURL:(JavaNetURL * __nonnull)base OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_init(ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader *new_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader *create_ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_DecoupledLoader)

#endif

#if !defined (ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue || defined(INCLUDE_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader))
#define ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_

@class IOSClass;

/*!
 @brief Loads Finalizer directly using the current class loader.We won't be able to garbage collect
  this class loader, but at least the world doesn't end.
 */
@interface ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader : NSObject < ComGoogleCommonBaseFinalizableReferenceQueue_FinalizerLoader >

#pragma mark Public

- (IOSClass *)loadFinalizer;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_init(ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader *self);

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader *new_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader *create_ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableReferenceQueue_DirectLoader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableReferenceQueue")
