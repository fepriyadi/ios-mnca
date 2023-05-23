//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/AsynchronousFileChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsAsynchronousFileChannel")
#ifdef RESTRICT_JavaNioChannelsAsynchronousFileChannel
#define INCLUDE_ALL_JavaNioChannelsAsynchronousFileChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsAsynchronousFileChannel 1
#endif
#undef RESTRICT_JavaNioChannelsAsynchronousFileChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsAsynchronousFileChannel_) && (INCLUDE_ALL_JavaNioChannelsAsynchronousFileChannel || defined(INCLUDE_JavaNioChannelsAsynchronousFileChannel))
#define JavaNioChannelsAsynchronousFileChannel_

#define RESTRICT_JavaNioChannelsAsynchronousChannel 1
#define INCLUDE_JavaNioChannelsAsynchronousChannel 1
#include "java/nio/channels/AsynchronousChannel.h"

@class IOSObjectArray;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileLock;
@protocol JavaNioChannelsCompletionHandler;
@protocol JavaNioFilePath;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilSet;

/*!
 @brief An asynchronous channel for reading, writing, and manipulating a file.
 <p> An asynchronous file channel is created when a file is opened by invoking
  one of the <code>open</code> methods defined by this class. The file contains
  a variable-length sequence of bytes that can be read and written and whose
  current size can be <code>queried</code>. The size of the file increases
  when bytes are written beyond its  current size; the size of the file decreases
  when it is <code>truncated</code>.
  
 <p> An asynchronous file channel does not have a <i>current position</i>
  within the file. Instead, the file position is specified to each read and
  write method that initiates asynchronous operations. A <code>CompletionHandler</code>
  is specified as a parameter and is invoked to consume the result of the I/O
  operation. This class also defines read and write methods that initiate
  asynchronous operations, returning a <code>Future</code> to represent the pending
  result of the operation. The <code>Future</code> may be used to check if the
  operation has completed, wait for its completion, and retrieve the result. 
 <p> In addition to read and write operations, this class defines the
  following operations: </p>
  
 <ul>
    <li><p> Updates made to a file may be <code><i>forced
    out</i></code>
  to the underlying storage device, ensuring that data are not
    lost in the event of a system crash.  </p></li>
    <li><p> A region of a file may be <code><i>locked</i></code> against
    access by other programs.  </p></li>
  
 </ul>
  
 <p> An <code>AsynchronousFileChannel</code> is associated with a thread pool to
  which tasks are submitted to handle I/O events and dispatch to completion
  handlers that consume the results of I/O operations on the channel. The
  completion handler for an I/O operation initiated on a channel is guaranteed
  to be invoked by one of the threads in the thread pool (This ensures that the
  completion handler is run by a thread with the expected <em>identity</em>).
  Where an I/O operation completes immediately, and the initiating thread is
  itself a thread in the thread pool, then the completion handler may be invoked
  directly by the initiating thread. When an <code>AsynchronousFileChannel</code> is
  created without specifying a thread pool then the channel is associated with
  a system-dependent default thread pool that may be shared with other
  channels. The default thread pool is configured by the system properties
  defined by the <code>AsynchronousChannelGroup</code> class. 
 <p> Channels of this type are safe for use by multiple concurrent threads. The 
 <code>close</code> method may be invoked at any time, as specified
  by the <code>Channel</code> interface. This causes all outstanding asynchronous
  operations on the channel to complete with the exception <code>AsynchronousCloseException</code>
 . Multiple read and write operations may be
  outstanding at the same time. When multiple read and write operations are
  outstanding then the ordering of the I/O operations, and the order that the
  completion handlers are invoked, is not specified; they are not, in particular,
  guaranteed to execute in the order that the operations were initiated. The 
 <code>ByteBuffers</code> used when reading or writing are not
  safe for use by multiple concurrent I/O operations. Furthermore, after an I/O
  operation is initiated then care should be taken to ensure that the buffer is
  not accessed until after the operation has completed. 
 <p> As with <code>FileChannel</code>, the view of a file provided by an instance of
  this class is guaranteed to be consistent with other views of the same file
  provided by other instances in the same program.  The view provided by an
  instance of this class may or may not, however, be consistent with the views
  seen by other concurrently-running programs due to caching performed by the
  underlying operating system and delays induced by network-filesystem protocols.
  This is true regardless of the language in which these other programs are
  written, and whether they are running on the same machine or on some other
  machine.  The exact nature of any such inconsistencies are system-dependent
  and are therefore unspecified.
 @since 1.7
 */
@interface JavaNioChannelsAsynchronousFileChannel : NSObject < JavaNioChannelsAsynchronousChannel >

#pragma mark Public

/*!
 @brief Forces any updates to this channel's file to be written to the storage
  device that contains it.
 <p> If this channel's file resides on a local storage device then when
  this method returns it is guaranteed that all changes made to the file
  since this channel was created, or since this method was last invoked,
  will have been written to that device.  This is useful for ensuring that
  critical information is not lost in the event of a system crash. 
 <p> If the file does not reside on a local device then no such guarantee
  is made. 
 <p> The <code>metaData</code> parameter can be used to limit the number of
  I/O operations that this method is required to perform.  Passing 
 <code>false</code> for this parameter indicates that only updates to the
  file's content need be written to storage; passing <code>true</code>
  indicates that updates to both the file's content and metadata must be
  written, which generally requires at least one more I/O operation.
  Whether this parameter actually has any effect is dependent upon the
  underlying operating system and is therefore unspecified. 
 <p> Invoking this method may cause an I/O operation to occur even if the
  channel was only opened for reading.  Some operating systems, for
  example, maintain a last-access time as part of a file's metadata, and
  this time is updated whenever the file is read.  Whether or not this is
  actually done is system-dependent and is therefore unspecified. 
 <p> This method is only guaranteed to force changes that were made to
  this channel's file via the methods defined in this class.
 @param metaData If 
 <code>true</code>  then this method is required to force changes           to both the file's content and metadata to be written to
            storage; otherwise, it need only force content changes to be
            written
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 */
- (void)forceWithBoolean:(jboolean)metaData;

/*!
 @brief Acquires an exclusive lock on this channel's file.
 <p> This method initiates an operation to acquire an exclusive lock on this
  channel's file. The method returns a <code>Future</code> representing the
  pending result of the operation. The <code>Future</code>'s <code>get</code>
  method returns the <code>FileLock</code> on successful completion. 
 <p> An invocation of this method behaves in exactly the same way as the invocation 
 @code

      ch.<code>lock</code>(0L, Long.MAX_VALUE, false) 
  
@endcode
 @return a <code>Future</code> object representing the pending result
 @throw OverlappingFileLockException
 If a lock is already held by this Java virtual machine, or there
           is already a pending attempt to lock a region
 @throw NonWritableChannelException
 If this channel was not opened for writing
 */
- (id<JavaUtilConcurrentFuture>)lock;

/*!
 @brief Acquires an exclusive lock on this channel's file.
 <p> This method initiates an operation to acquire a lock on the given
  region of this channel's file. The <code>handler</code> parameter is a
  completion handler that is invoked when the lock is acquired (or the
  operation fails). The result passed to the completion handler is the
  resulting <code>FileLock</code>.
  
 <p> An invocation of this method of the form <code>ch.lock(att,handler)</code>
  behaves in exactly the same way as the invocation 
 @code

      ch.<code>lock</code>(0L, Long.MAX_VALUE, false, att, handler) 
  
@endcode
 @param attachment The object to attach to the I/O operation; can be 
 <code>null</code>
 @param handler The handler for consuming the result
 @throw OverlappingFileLockException
 If a lock is already held by this Java virtual machine, or there
           is already a pending attempt to lock a region
 @throw NonWritableChannelException
 If this channel was not opened for writing
 */
- (void)lockWithId:(id)attachment
withJavaNioChannelsCompletionHandler:(id<JavaNioChannelsCompletionHandler>)handler;

/*!
 @brief Acquires a lock on the given region of this channel's file.
 <p> This method initiates an operation to acquire a lock on the given
  region of this channel's file.  The method behaves in exactly the same
  manner as the <code>lock(long, long, boolean, Object, CompletionHandler)</code>
  method except that instead of specifying a completion handler, this
  method returns a <code>Future</code> representing the pending result. The 
 <code>Future</code>'s <code>get</code> method returns the <code>FileLock</code>
  on successful completion.
 @param position The position at which the locked region is to start; must be
            non-negative
 @param size The size of the locked region; must be non-negative, and the sum
            <code>position</code>
  &nbsp; + &nbsp;<code>size</code>  must be non-negative
 @param shared<code>true</code>
   to request a shared lock, in which case this           channel must be open for reading (and possibly writing);
            <code>false</code>
   to request an exclusive lock, in which case this           channel must be open for writing (and possibly reading)
 @return a <code>Future</code> object representing the pending result
 @throw OverlappingFileLockException
 If a lock is already held by this Java virtual machine, or there
           is already a pending attempt to lock a region
 @throw IllegalArgumentException
 If the preconditions on the parameters do not hold
 @throw NonReadableChannelException
 If <code>shared</code> is true but this channel was not opened for reading
 @throw NonWritableChannelException
 If <code>shared</code> is false but this channel was not opened for writing
 */
- (id<JavaUtilConcurrentFuture>)lockWithLong:(jlong)position
                                    withLong:(jlong)size
                                 withBoolean:(jboolean)shared;

/*!
 @brief Acquires a lock on the given region of this channel's file.
 <p> This method initiates an operation to acquire a lock on the given
  region of this channel's file. The <code>handler</code> parameter is a
  completion handler that is invoked when the lock is acquired (or the
  operation fails). The result passed to the completion handler is the
  resulting <code>FileLock</code>.
  
 <p> The region specified by the <code>position</code> and <code>size</code>
  parameters need not be contained within, or even overlap, the actual
  underlying file.  Lock regions are fixed in size; if a locked region
  initially contains the end of the file and the file grows beyond the
  region then the new portion of the file will not be covered by the lock.
  If a file is expected to grow in size and a lock on the entire file is
  required then a region starting at zero, and no smaller than the
  expected maximum size of the file, should be locked.  The two-argument 
 <code>lock(Object,CompletionHandler)</code> method simply locks a region
  of size <code>Long.MAX_VALUE</code>. If a lock that overlaps the requested
  region is already held by this Java virtual machine, or this method has
  been invoked to lock an overlapping region and that operation has not
  completed, then this method throws <code>OverlappingFileLockException</code>.
  
 <p> Some operating systems do not support a mechanism to acquire a file
  lock in an asynchronous manner. Consequently an implementation may
  acquire the file lock in a background thread or from a task executed by
  a thread in the associated thread pool. If there are many lock operations
  outstanding then it may consume threads in the Java virtual machine for
  indefinite periods. 
 <p> Some operating systems do not support shared locks, in which case a
  request for a shared lock is automatically converted into a request for
  an exclusive lock.  Whether the newly-acquired lock is shared or
  exclusive may be tested by invoking the resulting lock object's <code>isShared</code>
  method. 
 <p> File locks are held on behalf of the entire Java virtual machine.
  They are not suitable for controlling access to a file by multiple
  threads within the same virtual machine.
 @param position The position at which the locked region is to start; must be
            non-negative
 @param size The size of the locked region; must be non-negative, and the sum
            <code>position</code>
  &nbsp; + &nbsp;<code>size</code>  must be non-negative
 @param shared<code>true</code>
   to request a shared lock, in which case this           channel must be open for reading (and possibly writing);
            <code>false</code>
   to request an exclusive lock, in which case this           channel must be open for writing (and possibly reading)
 @param attachment The object to attach to the I/O operation; can be 
 <code>null</code>
 @param handler The handler for consuming the result
 @throw OverlappingFileLockException
 If a lock that overlaps the requested region is already held by
           this Java virtual machine, or there is already a pending attempt
           to lock an overlapping region
 @throw IllegalArgumentException
 If the preconditions on the parameters do not hold
 @throw NonReadableChannelException
 If <code>shared</code> is true but this channel was not opened for reading
 @throw NonWritableChannelException
 If <code>shared</code> is false but this channel was not opened for writing
 */
- (void)lockWithLong:(jlong)position
            withLong:(jlong)size
         withBoolean:(jboolean)shared
              withId:(id)attachment
withJavaNioChannelsCompletionHandler:(id<JavaNioChannelsCompletionHandler>)handler;

/*!
 @brief Opens or creates a file for reading and/or writing, returning an
  asynchronous file channel to access the file.
 <p> An invocation of this method behaves in exactly the same way as the invocation 
 @code

      ch.<code>open</code>
 (file, opts, null, new FileAttribute&lt;?&gt;[0]);
   
@endcode
  where <code>opts</code> is a <code>Set</code> containing the options specified to
  this method. 
 <p> The resulting channel is associated with default thread pool to which
  tasks are submitted to handle I/O events and dispatch to completion
  handlers that consume the result of asynchronous operations performed on
  the resulting channel.
 @param file The path of the file to open or create
 @param options Options specifying how the file is opened
 @return A new asynchronous file channel
 @throw IllegalArgumentException
 If the set contains an invalid combination of options
 @throw UnsupportedOperationException
 If the <code>file</code> is associated with a provider that does not
           support creating file channels, or an unsupported open option is
           specified
 @throw IOException
 If an I/O error occurs
 @throw SecurityException
 If a security manager is installed and it denies an
           unspecified permission required by the implementation.
           In the case of the default provider, the <code>SecurityManager.checkRead(String)</code>
  method is invoked to check
           read access if the file is opened for reading. The <code>SecurityManager.checkWrite(String)</code>
  method is invoked to check
           write access if the file is opened for writing
 */
+ (JavaNioChannelsAsynchronousFileChannel *)openWithJavaNioFilePath:(id<JavaNioFilePath>)file
                                     withJavaNioFileOpenOptionArray:(IOSObjectArray *)options;

/*!
 @brief Opens or creates a file for reading and/or writing, returning an
  asynchronous file channel to access the file.
 <p> The <code>options</code> parameter determines how the file is opened.
  The <code>READ</code> and <code>WRITE</code>
  options determines if the file should be opened for reading and/or
  writing. If neither option is contained in the array then an existing file
  is opened for  reading. 
 <p> In addition to <code>READ</code> and <code>WRITE</code>, the following options
  may be present: 
 <table border=1 cellpadding=5 summary="">
  <tr> <th>Option</th> <th>Description</th> </tr>
  <tr>
    <td> <code>TRUNCATE_EXISTING</code> </td>
    <td> When opening an existing file, the file is first truncated to a
    size of 0 bytes. This option is ignored when the file is opened only
    for reading.</td>
  </tr>
  <tr>
    <td> <code>CREATE_NEW</code> </td>
    <td> If this option is present then a new file is created, failing if
    the file already exists. When creating a file the check for the
    existence of the file and the creation of the file if it does not exist
    is atomic with respect to other file system operations. This option is
    ignored when the file is opened only for reading. </td>
  </tr>
  <tr>
    <td> <code>CREATE</code> </td>
    <td> If this option is present then an existing file is opened if it
    exists, otherwise a new file is created. When creating a file the check
    for the existence of the file and the creation of the file if it does
    not exist is atomic with respect to other file system operations. This
    option is ignored if the <code>CREATE_NEW</code> option is also present or
    the file is opened only for reading. </td>
  </tr>
  <tr>
    <td> <code>DELETE_ON_CLOSE</code> </td>
    <td> When this option is present then the implementation makes a
    <em>best effort</em> attempt to delete the file when closed by the
    the <code>close</code> method. If the <code>close</code> method is not
    invoked then a <em>best effort</em> attempt is made to delete the file
    when the Java virtual machine terminates. </td>
  </tr>
  <tr>
    <td><code>SPARSE</code> </td>
    <td> When creating a new file this option is a <em>hint</em> that the
    new file will be sparse. This option is ignored when not creating
    a new file. </td>
  </tr>
  <tr>
    <td> <code>SYNC</code> </td>
    <td> Requires that every update to the file's content or metadata be
    written synchronously to the underlying storage device. (see <a href="../file/package-summary.html#integrity">
  Synchronized I/O file
    integrity</a>). </td>
  </tr>
  <tr>
    <td> <code>DSYNC</code> </td>
    <td> Requires that every update to the file's content be written
    synchronously to the underlying storage device. (see <a href="../file/package-summary.html#integrity">
  Synchronized I/O file
    integrity</a>). </td>
  </tr>
  </table>
  
 <p> An implementation may also support additional options. 
 <p> The <code>executor</code> parameter is the <code>ExecutorService</code> to
  which tasks are submitted to handle I/O events and dispatch completion
  results for operations initiated on resulting channel.
  The nature of these tasks is highly implementation specific and so care
  should be taken when configuring the <code>Executor</code>. Minimally it
  should support an unbounded work queue and should not run tasks on the
  caller thread of the <code>execute</code> method.
  Shutting down the executor service while the channel is open results in
  unspecified behavior. 
 <p> The <code>attrs</code> parameter is an optional array of file <code>file-attributes</code>
  to set atomically when creating the file. 
 <p> The new channel is created by invoking the <code>newFileChannel</code>
  method on the
  provider that created the <code>Path</code>.
 @param file The path of the file to open or create
 @param options Options specifying how the file is opened
 @param executor The thread pool or 
 <code>null</code>  to associate the channel with           the default thread pool
 @param attrs An optional list of file attributes to set atomically when
            creating the file
 @return A new asynchronous file channel
 @throw IllegalArgumentException
 If the set contains an invalid combination of options
 @throw UnsupportedOperationException
 If the <code>file</code> is associated with a provider that does not
           support creating asynchronous file channels, or an unsupported
           open option is specified, or the array contains an attribute that
           cannot be set atomically when creating the file
 @throw IOException
 If an I/O error occurs
 @throw SecurityException
 If a security manager is installed and it denies an
           unspecified permission required by the implementation.
           In the case of the default provider, the <code>SecurityManager.checkRead(String)</code>
  method is invoked to check
           read access if the file is opened for reading. The <code>SecurityManager.checkWrite(String)</code>
  method is invoked to check
           write access if the file is opened for writing
 */
+ (JavaNioChannelsAsynchronousFileChannel *)openWithJavaNioFilePath:(id<JavaNioFilePath>)file
                                                    withJavaUtilSet:(id<JavaUtilSet>)options
                              withJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)executor
                         withJavaNioFileAttributeFileAttributeArray:(IOSObjectArray *)attrs;

/*!
 @brief Reads a sequence of bytes from this channel into the given buffer,
  starting at the given file position.
 <p> This method initiates the reading of a sequence of bytes from this
  channel into the given buffer, starting at the given file position. This
  method returns a <code>Future</code> representing the pending result of the
  operation. The <code>Future</code>'s <code>get</code> method returns
  the number of bytes read or <code>-1</code> if the given position is greater
  than or equal to the file's size at the time that the read is attempted. 
 <p> This method works in the same manner as the <code>AsynchronousByteChannel.read(ByteBuffer)</code>
  method, except that bytes are
  read starting at the given file position. If the given file position is
  greater than the file's size at the time that the read is attempted then
  no bytes are read.
 @param dst The buffer into which bytes are to be transferred
 @param position The file position at which the transfer is to begin;
            must be non-negative
 @return A <code>Future</code> object representing the pending result
 @throw IllegalArgumentException
 If the position is negative or the buffer is read-only
 @throw NonReadableChannelException
 If this channel was not opened for reading
 */
- (id<JavaUtilConcurrentFuture>)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst
                                                 withLong:(jlong)position;

/*!
 @brief Reads a sequence of bytes from this channel into the given buffer,
  starting at the given file position.
 <p> This method initiates the reading of a sequence of bytes from this
  channel into the given buffer, starting at the given file position. The
  result of the read is the number of bytes read or <code>-1</code> if the given
  position is greater than or equal to the file's size at the time that the
  read is attempted. 
 <p> This method works in the same manner as the <code>AsynchronousByteChannel.read(ByteBuffer,Object,CompletionHandler)</code>
  method, except that bytes are read starting at the given file position.
  If the given file position is greater than the file's size at the time
  that the read is attempted then no bytes are read.
 @param dst The buffer into which bytes are to be transferred
 @param position The file position at which the transfer is to begin;
            must be non-negative
 @param attachment The object to attach to the I/O operation; can be 
 <code>null</code>
 @param handler The handler for consuming the result
 @throw IllegalArgumentException
 If the position is negative or the buffer is read-only
 @throw NonReadableChannelException
 If this channel was not opened for reading
 */
- (void)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst
                         withLong:(jlong)position
                           withId:(id)attachment
withJavaNioChannelsCompletionHandler:(id<JavaNioChannelsCompletionHandler>)handler;

/*!
 @brief Returns the current size of this channel's file.
 @return The current size of this channel's file, measured in bytes
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 */
- (jlong)size;

/*!
 @brief Truncates this channel's file to the given size.
 <p> If the given size is less than the file's current size then the file
  is truncated, discarding any bytes beyond the new end of the file.  If
  the given size is greater than or equal to the file's current size then
  the file is not modified. </p>
 @param size The new size, a non-negative byte count
 @return This file channel
 @throw NonWritableChannelException
 If this channel was not opened for writing
 @throw ClosedChannelException
 If this channel is closed
 @throw IllegalArgumentException
 If the new size is negative
 @throw IOException
 If some other I/O error occurs
 */
- (JavaNioChannelsAsynchronousFileChannel *)truncateWithLong:(jlong)size;

/*!
 @brief Attempts to acquire an exclusive lock on this channel's file.
 <p> An invocation of this method of the form <code>ch.tryLock()</code>
  behaves in exactly the same way as the invocation 
 @code

      ch.<code>tryLock</code>(0L, Long.MAX_VALUE, false) 
@endcode
 @return A lock object representing the newly-acquired lock,
           or <code>null</code> if the lock could not be acquired
           because another program holds an overlapping lock
 @throw ClosedChannelException
 If this channel is closed
 @throw OverlappingFileLockException
 If a lock that overlaps the requested region is already held by
           this Java virtual machine, or if another thread is already
           blocked in this method and is attempting to lock an overlapping
           region
 @throw NonWritableChannelException
 If <code>shared</code> is false but this channel was not opened for writing
 @throw IOException
 If some other I/O error occurs
 - seealso: #lock(Object,CompletionHandler)
 - seealso: #lock(long,long,boolean,Object,CompletionHandler)
 - seealso: #tryLock(long,long,boolean)
 */
- (JavaNioChannelsFileLock *)tryLock;

/*!
 @brief Attempts to acquire a lock on the given region of this channel's file.
 <p> This method does not block. An invocation always returns immediately,
  either having acquired a lock on the requested region or having failed to
  do so.  If it fails to acquire a lock because an overlapping lock is held
  by another program then it returns <code>null</code>.  If it fails to acquire
  a lock for any other reason then an appropriate exception is thrown.
 @param position The position at which the locked region is to start; must be
           non-negative
 @param size The size of the locked region; must be non-negative, and the sum
           <code>position</code>
  &nbsp; + &nbsp;<code>size</code>  must be non-negative
 @param shared<code>true</code>
   to request a shared lock,          <code>false</code>
   to request an exclusive lock
 @return A lock object representing the newly-acquired lock,
           or <code>null</code> if the lock could not be acquired
           because another program holds an overlapping lock
 @throw IllegalArgumentException
 If the preconditions on the parameters do not hold
 @throw ClosedChannelException
 If this channel is closed
 @throw OverlappingFileLockException
 If a lock that overlaps the requested region is already held by
           this Java virtual machine, or if another thread is already
           blocked in this method and is attempting to lock an overlapping
           region of the same file
 @throw NonReadableChannelException
 If <code>shared</code> is true but this channel was not opened for reading
 @throw NonWritableChannelException
 If <code>shared</code> is false but this channel was not opened for writing
 @throw IOException
 If some other I/O error occurs
 - seealso: #lock(Object,CompletionHandler)
 - seealso: #lock(long,long,boolean,Object,CompletionHandler)
 - seealso: #tryLock()
 */
- (JavaNioChannelsFileLock *)tryLockWithLong:(jlong)position
                                    withLong:(jlong)size
                                 withBoolean:(jboolean)shared;

/*!
 @brief Writes a sequence of bytes to this channel from the given buffer, starting
  at the given file position.
 <p> This method initiates the writing of a sequence of bytes to this
  channel from the given buffer, starting at the given file position. The
  method returns a <code>Future</code> representing the pending result of the
  write operation. The <code>Future</code>'s <code>get</code> method
  returns the number of bytes written. 
 <p> This method works in the same manner as the <code>AsynchronousByteChannel.write(ByteBuffer)</code>
  method, except that bytes are
  written starting at the given file position. If the given position is
  greater than the file's size, at the time that the write is attempted,
  then the file will be grown to accommodate the new bytes; the values of
  any bytes between the previous end-of-file and the newly-written bytes
  are unspecified.
 @param src The buffer from which bytes are to be transferred
 @param position The file position at which the transfer is to begin;
            must be non-negative
 @return A <code>Future</code> object representing the pending result
 @throw IllegalArgumentException
 If the position is negative
 @throw NonWritableChannelException
 If this channel was not opened for writing
 */
- (id<JavaUtilConcurrentFuture>)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src
                                                  withLong:(jlong)position;

/*!
 @brief Writes a sequence of bytes to this channel from the given buffer, starting
  at the given file position.
 <p> This method works in the same manner as the <code>AsynchronousByteChannel.write(ByteBuffer,Object,CompletionHandler)</code>
  method, except that bytes are written starting at the given file position.
  If the given position is greater than the file's size, at the time that
  the write is attempted, then the file will be grown to accommodate the new
  bytes; the values of any bytes between the previous end-of-file and the
  newly-written bytes are unspecified.
 @param src The buffer from which bytes are to be transferred
 @param position The file position at which the transfer is to begin;
            must be non-negative
 @param attachment The object to attach to the I/O operation; can be 
 <code>null</code>
 @param handler The handler for consuming the result
 @throw IllegalArgumentException
 If the position is negative
 @throw NonWritableChannelException
 If this channel was not opened for writing
 */
- (void)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src
                          withLong:(jlong)position
                            withId:(id)attachment
withJavaNioChannelsCompletionHandler:(id<JavaNioChannelsCompletionHandler>)handler;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(JavaNioChannelsAsynchronousFileChannel)

FOUNDATION_EXPORT void JavaNioChannelsAsynchronousFileChannel_init(JavaNioChannelsAsynchronousFileChannel *self);

FOUNDATION_EXPORT JavaNioChannelsAsynchronousFileChannel *JavaNioChannelsAsynchronousFileChannel_openWithJavaNioFilePath_withJavaUtilSet_withJavaUtilConcurrentExecutorService_withJavaNioFileAttributeFileAttributeArray_(id<JavaNioFilePath> file, id<JavaUtilSet> options, id<JavaUtilConcurrentExecutorService> executor, IOSObjectArray *attrs);

FOUNDATION_EXPORT JavaNioChannelsAsynchronousFileChannel *JavaNioChannelsAsynchronousFileChannel_openWithJavaNioFilePath_withJavaNioFileOpenOptionArray_(id<JavaNioFilePath> file, IOSObjectArray *options);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsAsynchronousFileChannel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsAsynchronousFileChannel")