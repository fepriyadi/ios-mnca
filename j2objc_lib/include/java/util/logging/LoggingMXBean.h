//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/LoggingMXBean.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingLoggingMXBean")
#ifdef RESTRICT_JavaUtilLoggingLoggingMXBean
#define INCLUDE_ALL_JavaUtilLoggingLoggingMXBean 0
#else
#define INCLUDE_ALL_JavaUtilLoggingLoggingMXBean 1
#endif
#undef RESTRICT_JavaUtilLoggingLoggingMXBean

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingLoggingMXBean_) && (INCLUDE_ALL_JavaUtilLoggingLoggingMXBean || defined(INCLUDE_JavaUtilLoggingLoggingMXBean))
#define JavaUtilLoggingLoggingMXBean_

@protocol JavaUtilList;

/*!
 @brief The management interface for the logging facility.
 <p>There is a single global instance of the <tt>LoggingMXBean</tt>.
  The <code>javax.management.ObjectName ObjectName</code> that uniquely identifies
  the management interface for logging within the <code>MBeanServer</code> is: 
 @code

     <code>java.util.logging:type=Logging</code>
   
@endcode
  <p>
 @author Ron Mann
 @author Mandy Chung
 @since 1.5
 */
@protocol JavaUtilLoggingLoggingMXBean < JavaObject >

/*!
 @brief Returns the list of currently registered logger names.This method
  calls <code>LogManager.getLoggerNames</code> and returns a list
  of the logger names.
 @return A list of <tt>String</tt> each of which is a
          currently registered <tt>Logger</tt> name.
 */
- (id<JavaUtilList>)getLoggerNames;

/*!
 @brief Gets the name of the log level associated with the specified logger.
 If the specified logger does not exist, <tt>null</tt>
  is returned.
  This method first finds the logger of the given name and
  then returns the name of the log level by calling: 
 <blockquote>
    <code>Logger.getLevel()</code>.<code>getName()</code>;
  </blockquote>
  
 <p>
  If the <tt>Level</tt> of the specified logger is <tt>null</tt>,
  which means that this logger's effective level is inherited
  from its parent, an empty string will be returned.
 @param loggerName The name of the  <tt> Logger </tt>  to be retrieved.
 @return The name of the log level of the specified logger; or
          an empty string if the log level of the specified logger
          is <tt>null</tt>.  If the specified logger does not
          exist, <tt>null</tt> is returned.
 - seealso: Logger#getLevel
 */
- (NSString *)getLoggerLevelWithNSString:(NSString *)loggerName;

/*!
 @brief Sets the specified logger to the specified new level.
 If the <tt>levelName</tt> is not <tt>null</tt>, the level
  of the specified logger is set to the parsed <tt>Level</tt>
  matching the <tt>levelName</tt>.
  If the <tt>levelName</tt> is <tt>null</tt>, the level
  of the specified logger is set to <tt>null</tt> and
  the effective level of the logger is inherited from
  its nearest ancestor with a specific (non-null) level value.
 @param loggerName The name of the  <tt> Logger </tt>  to be set.
                     Must be non-null.
 @param levelName The name of the level to set on the specified logger,                  or 
  <tt> null </tt>  if setting the level to inherit                  from its nearest ancestor.
 @throw IllegalArgumentExceptionif the specified logger
  does not exist, or <tt>levelName</tt> is not a valid level name.
 @throw SecurityExceptionif a security manager exists and if
  the caller does not have LoggingPermission("control").
 - seealso: Logger#setLevel
 */
- (void)setLoggerLevelWithNSString:(NSString *)loggerName
                      withNSString:(NSString *)levelName;

/*!
 @brief Returns the name of the parent for the specified logger.
 If the specified logger does not exist, <tt>null</tt> is returned.
  If the specified logger is the root <tt>Logger</tt> in the namespace,
  the result will be an empty string.
 @param loggerName The name of a  <tt> Logger </tt>
  .
 @return the name of the nearest existing parent logger;
          an empty string if the specified logger is the root logger.
          If the specified logger does not exist, <tt>null</tt>
          is returned.
 */
- (NSString *)getParentLoggerNameWithNSString:(NSString *)loggerName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingLoggingMXBean)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLoggingMXBean)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingLoggingMXBean")