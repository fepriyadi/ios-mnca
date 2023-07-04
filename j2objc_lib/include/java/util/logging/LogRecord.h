//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/LogRecord.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingLogRecord")
#ifdef RESTRICT_JavaUtilLoggingLogRecord
#define INCLUDE_ALL_JavaUtilLoggingLogRecord 0
#else
#define INCLUDE_ALL_JavaUtilLoggingLogRecord 1
#endif
#undef RESTRICT_JavaUtilLoggingLogRecord

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingLogRecord_) && (INCLUDE_ALL_JavaUtilLoggingLogRecord || defined(INCLUDE_JavaUtilLoggingLogRecord))
#define JavaUtilLoggingLogRecord_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilLoggingLevel;
@class JavaUtilResourceBundle;

/*!
 @brief LogRecord objects are used to pass logging requests between
  the logging framework and individual log Handlers.
 <p>
  When a LogRecord is passed into the logging framework it
  logically belongs to the framework and should no longer be
  used or updated by the client application. 
 <p>
  Note that if the client application has not specified an
  explicit source method name and source class name, then the
  LogRecord class will infer them automatically when they are
  first accessed (due to a call on getSourceMethodName or
  getSourceClassName) by analyzing the call stack.  Therefore,
  if a logging Handler wants to pass off a LogRecord to another
  thread, or to transmit it over RMI, and if it wishes to subsequently
  obtain method name or class name information it should call
  one of getSourceClassName or getSourceMethodName to force
  the values to be filled in. 
 <p>
  <b> Serialization notes:</b>
  <ul>
  <li>The LogRecord class is serializable. 
 <li> Because objects in the parameters array may not be serializable,
  during serialization all objects in the parameters array are
  written as the corresponding Strings (using Object.toString). 
 <li> The ResourceBundle is not transmitted as part of the serialized
  form, but the resource bundle name is, and the recipient object's
  readObject method will attempt to locate a suitable resource bundle. 
 </ul>
 @since 1.4
 */
@interface JavaUtilLoggingLogRecord : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Construct a LogRecord with the given level and message values.
 <p>
  The sequence property will be initialized with a new unique value.
  These sequence values are allocated in increasing order within a VM. 
 <p>
  The millis property will be initialized to the current time. 
 <p>
  The thread ID property will be initialized with a unique ID for
  the current thread. 
 <p>
  All other properties will be initialized to "null".
 @param level a logging level value
 @param msg the raw non-localized logging message (may be null)
 */
- (instancetype __nonnull)initWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level
                                          withNSString:(NSString *)msg;

/*!
 @brief Get the logging message level, for example Level.SEVERE.
 @return the logging message level
 */
- (JavaUtilLoggingLevel *)getLevel;

/*!
 @brief Get the source Logger's name.
 @return source logger name (may be null)
 */
- (NSString *)getLoggerName;

/*!
 @brief Get the "raw" log message, before localization or formatting.
 <p>
  May be null, which is equivalent to the empty string "". 
 <p>
  This message may be either the final text or a localization key. 
 <p>
  During formatting, if the source logger has a localization
  ResourceBundle and if that ResourceBundle has an entry for
  this message string, then the message string is replaced
  with the localized value.
 @return the raw message string
 */
- (NSString *)getMessage;

/*!
 @brief Get event time in milliseconds since 1970.
 @return event time in millis since 1970
 */
- (jlong)getMillis;

/*!
 @brief Get the parameters to the log message.
 @return the log message parameters.  May be null if
                   there are no parameters.
 */
- (IOSObjectArray *)getParameters;

/*!
 @brief Get the localization resource bundle
 <p>
  This is the ResourceBundle that should be used to localize
  the message string before formatting it.
 The result may
  be null if the message is not localizable, or if no suitable
  ResourceBundle is available.
 @return the localization resource bundle
 */
- (JavaUtilResourceBundle *)getResourceBundle;

/*!
 @brief Get the localization resource bundle name
 <p>
  This is the name for the ResourceBundle that should be
  used to localize the message string before formatting it.
 The result may be null if the message is not localizable.
 @return the localization resource bundle name
 */
- (NSString *)getResourceBundleName;

/*!
 @brief Get the sequence number.
 <p>
  Sequence numbers are normally assigned in the LogRecord
  constructor, which assigns unique sequence numbers to
  each new LogRecord in increasing order.
 @return the sequence number
 */
- (jlong)getSequenceNumber;

/*!
 @brief Get the  name of the class that (allegedly) issued the logging request.
 <p>
  Note that this sourceClassName is not verified and may be spoofed.
  This information may either have been provided as part of the
  logging call, or it may have been inferred automatically by the
  logging framework.  In the latter case, the information may only
  be approximate and may in fact describe an earlier call on the
  stack frame. 
 <p>
  May be null if no information could be obtained.
 @return the source class name
 */
- (NSString *)getSourceClassName;

/*!
 @brief Get the  name of the method that (allegedly) issued the logging request.
 <p>
  Note that this sourceMethodName is not verified and may be spoofed.
  This information may either have been provided as part of the
  logging call, or it may have been inferred automatically by the
  logging framework.  In the latter case, the information may only
  be approximate and may in fact describe an earlier call on the
  stack frame. 
 <p>
  May be null if no information could be obtained.
 @return the source method name
 */
- (NSString *)getSourceMethodName;

/*!
 @brief Get an identifier for the thread where the message originated.
 <p>
  This is a thread identifier within the Java VM and may or
  may not map to any operating system ID.
 @return thread ID
 */
- (jint)getThreadID;

/*!
 @brief Get any throwable associated with the log record.
 <p>
  If the event involved an exception, this will be the
  exception object. Otherwise null.
 @return a throwable
 */
- (JavaLangThrowable *)getThrown;

/*!
 @brief Set the logging message level, for example Level.SEVERE.
 @param level the logging message level
 */
- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level;

/*!
 @brief Set the source Logger's name.
 @param name the source logger name (may be null)
 */
- (void)setLoggerNameWithNSString:(NSString *)name;

/*!
 @brief Set the "raw" log message, before localization or formatting.
 @param message the raw message string (may be null)
 */
- (void)setMessageWithNSString:(NSString *)message;

/*!
 @brief Set event time.
 @param millis event time in millis since 1970
 */
- (void)setMillisWithLong:(jlong)millis;

/*!
 @brief Set the parameters to the log message.
 @param parameters the log message parameters. (may be null)
 */
- (void)setParametersWithNSObjectArray:(IOSObjectArray *)parameters;

/*!
 @brief Set the localization resource bundle.
 @param bundle localization bundle (may be null)
 */
- (void)setResourceBundleWithJavaUtilResourceBundle:(JavaUtilResourceBundle *)bundle;

/*!
 @brief Set the localization resource bundle name.
 @param name localization bundle name (may be null)
 */
- (void)setResourceBundleNameWithNSString:(NSString *)name;

/*!
 @brief Set the sequence number.
 <p>
  Sequence numbers are normally assigned in the LogRecord constructor,
  so it should not normally be necessary to use this method.
 @param seq the sequence number
 */
- (void)setSequenceNumberWithLong:(jlong)seq;

/*!
 @brief Set the name of the class that (allegedly) issued the logging request.
 @param sourceClassName the source class name (may be null)
 */
- (void)setSourceClassNameWithNSString:(NSString *)sourceClassName;

/*!
 @brief Set the name of the method that (allegedly) issued the logging request.
 @param sourceMethodName the source method name (may be null)
 */
- (void)setSourceMethodNameWithNSString:(NSString *)sourceMethodName;

/*!
 @brief Set an identifier for the thread where the message originated.
 @param threadID the thread ID
 */
- (void)setThreadIDWithInt:(jint)threadID;

/*!
 @brief Set a throwable associated with the log event.
 @param thrown a throwable (may be null)
 */
- (void)setThrownWithJavaLangThrowable:(JavaLangThrowable *)thrown;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogRecord)

FOUNDATION_EXPORT void JavaUtilLoggingLogRecord_initWithJavaUtilLoggingLevel_withNSString_(JavaUtilLoggingLogRecord *self, JavaUtilLoggingLevel *level, NSString *msg);

FOUNDATION_EXPORT JavaUtilLoggingLogRecord *new_JavaUtilLoggingLogRecord_initWithJavaUtilLoggingLevel_withNSString_(JavaUtilLoggingLevel *level, NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogRecord *create_JavaUtilLoggingLogRecord_initWithJavaUtilLoggingLevel_withNSString_(JavaUtilLoggingLevel *level, NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogRecord)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingLogRecord")
