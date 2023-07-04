//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/WatchKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileWatchKey")
#ifdef RESTRICT_JavaNioFileWatchKey
#define INCLUDE_ALL_JavaNioFileWatchKey 0
#else
#define INCLUDE_ALL_JavaNioFileWatchKey 1
#endif
#undef RESTRICT_JavaNioFileWatchKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileWatchKey_) && (INCLUDE_ALL_JavaNioFileWatchKey || defined(INCLUDE_JavaNioFileWatchKey))
#define JavaNioFileWatchKey_

@protocol JavaNioFileWatchable;
@protocol JavaUtilList;

/*!
 @brief A token representing the registration of a <code>watchable</code> object
  with a <code>WatchService</code>.
 <p> A watch key is created when a watchable object is registered with a watch
  service. The key remains <code>valid</code> until: 
 <ol>
    <li> It is cancelled, explicitly, by invoking its <code>cancel</code>
      method, or</li>
    <li> Cancelled implicitly, because the object is no longer accessible,
      or </li>
    <li> By <code>closing</code> the watch service. </li>
  </ol>
  
 <p> A watch key has a state. When initially created the key is said to be 
 <em>ready</em>. When an event is detected then the key is <em>signalled</em>
  and queued so that it can be retrieved by invoking the watch service's <code>poll</code>
  or <code>take</code> methods. Once
  signalled, a key remains in this state until its <code>reset</code> method
  is invoked to return the key to the ready state. Events detected while the
  key is in the signalled state are queued but do not cause the key to be
  re-queued for retrieval from the watch service. Events are retrieved by
  invoking the key's <code>pollEvents</code> method. This method
  retrieves and removes all events accumulated for the object. When initially
  created, a watch key has no pending events. Typically events are retrieved
  when the key is in the signalled state leading to the following idiom: 
 @code

      for (;;) {
          // retrieve key
          WatchKey key = watcher.take();
          // process events
          for (WatchEvent&lt;?&gt; event: key.pollEvents()) {
              :
          }
          // reset the key
          boolean valid = key.reset();
          if (!valid) {
              // object no longer registered
          }        }    
  
@endcode
  
 <p> Watch keys are safe for use by multiple concurrent threads. Where there
  are several threads retrieving signalled keys from a watch service then care
  should be taken to ensure that the <code>reset</code> method is only invoked after
  the events for the object have been processed. This ensures that one thread
  is processing the events for an object at any time.
 @since 1.7
 */
@protocol JavaNioFileWatchKey < JavaObject >

/*!
 @brief Tells whether or not this watch key is valid.
 <p> A watch key is valid upon creation and remains until it is cancelled,
  or its watch service is closed.
 @return <code>true</code> if, and only if, this watch key is valid
 */
- (jboolean)isValid;

/*!
 @brief Retrieves and removes all pending events for this watch key, returning
  a <code>List</code> of the events that were retrieved.
 <p> Note that this method does not wait if there are no events pending.
 @return the list of the events retrieved; may be empty
 */
- (id<JavaUtilList>)pollEvents;

/*!
 @brief Resets this watch key.
 <p> If this watch key has been cancelled or this watch key is already in
  the ready state then invoking this method has no effect. Otherwise
  if there are pending events for the object then this watch key is
  immediately re-queued to the watch service. If there are no pending
  events then the watch key is put into the ready state and will remain in
  that state until an event is detected or the watch key is cancelled.
 @return <code>true</code> if the watch key is valid and has been reset, and
           <code>false</code> if the watch key could not be reset because it is
           no longer <code>valid</code>
 */
- (jboolean)reset;

/*!
 @brief Cancels the registration with the watch service.Upon return the watch key
  will be invalid.
 If the watch key is enqueued, waiting to be retrieved
  from the watch service, then it will remain in the queue until it is
  removed. Pending events, if any, remain pending and may be retrieved by
  invoking the <code>pollEvents</code> method after the key is
  cancelled. 
 <p> If this watch key has already been cancelled then invoking this
  method has no effect.  Once cancelled, a watch key remains forever invalid.
 */
- (void)cancel;

/*!
 @brief Returns the object for which this watch key was created.This method will
  continue to return the object even after the key is cancelled.
 <p> As the <code>WatchService</code> is intended to map directly on to the
  native file event notification facility (where available) then many of
  details on how registered objects are watched is highly implementation
  specific. When watching a directory for changes for example, and the
  directory is moved or renamed in the file system, there is no guarantee
  that the watch key will be cancelled and so the object returned by this
  method may no longer be a valid path to the directory.
 @return the object for which this watch key was created
 */
- (id<JavaNioFileWatchable>)watchable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileWatchKey)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileWatchKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileWatchKey")