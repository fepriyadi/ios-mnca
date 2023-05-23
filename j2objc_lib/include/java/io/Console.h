//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/Console.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoConsole")
#ifdef RESTRICT_JavaIoConsole
#define INCLUDE_ALL_JavaIoConsole 0
#else
#define INCLUDE_ALL_JavaIoConsole 1
#endif
#undef RESTRICT_JavaIoConsole

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoConsole_) && (INCLUDE_ALL_JavaIoConsole || defined(INCLUDE_JavaIoConsole))
#define JavaIoConsole_

#define RESTRICT_JavaIoFlushable 1
#define INCLUDE_JavaIoFlushable 1
#include "java/io/Flushable.h"

@class IOSCharArray;
@class IOSObjectArray;
@class JavaIoPrintWriter;
@class JavaIoReader;

/*!
 @brief Provides access to the console, if available.The system-wide instance can
  be accessed via <code>java.lang.System.console</code>.
 @since 1.6
 */
@interface JavaIoConsole : NSObject < JavaIoFlushable >

#pragma mark Public

- (void)flush;

/*!
 @brief Writes a formatted string to the console using
  the specified format string and arguments.
 @param format the format string (see <code>java.util.Formatter.format</code> )
 @param args the list of arguments passed to the formatter. If there are
              more arguments than required by 
 <code>format</code> ,             additional arguments are ignored.
 @return the console instance.
 */
- (JavaIoConsole *)formatWithNSString:(NSString *)format
                    withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Secret accessor for <code>System.console</code>.
 */
+ (JavaIoConsole *)getConsole;

/*!
 @brief Equivalent to <code>format(format, args)</code>.
 */
- (JavaIoConsole *)printfWithNSString:(NSString *)format
                    withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Returns the <code>Reader</code> associated with this console.
 */
- (JavaIoReader *)reader;

/*!
 @brief Reads a line from the console.
 @return the line, or null at EOF.
 */
- (NSString *)readLine;

/*!
 @brief Reads a line from this console, using the specified prompt.
 The prompt is given as a format string and optional arguments.
  Note that this can be a source of errors: if it is possible that your
  prompt contains <code>%</code> characters, you must use the format string <code>"%s"</code>
  and pass the actual prompt as a parameter.
 @param format the format string (see <code>java.util.Formatter.format</code> )
 @param args the list of arguments passed to the formatter. If there are
              more arguments than required by 
 <code>format</code> ,             additional arguments are ignored.
 @return the line, or null at EOF.
 */
- (NSString *)readLineWithNSString:(NSString *)format
                 withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief This method is unimplemented on Android.
 */
- (IOSCharArray *)readPassword;

/*!
 @brief This method is unimplemented on Android.
 */
- (IOSCharArray *)readPasswordWithNSString:(NSString *)format
                         withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Returns the <code>Writer</code> associated with this console.
 */
- (JavaIoPrintWriter *)writer;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaIoConsole)

FOUNDATION_EXPORT JavaIoConsole *JavaIoConsole_getConsole(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoConsole)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoConsole")