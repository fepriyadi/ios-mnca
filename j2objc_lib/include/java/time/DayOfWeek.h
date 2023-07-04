//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/DayOfWeek.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeDayOfWeek")
#ifdef RESTRICT_JavaTimeDayOfWeek
#define INCLUDE_ALL_JavaTimeDayOfWeek 0
#else
#define INCLUDE_ALL_JavaTimeDayOfWeek 1
#endif
#undef RESTRICT_JavaTimeDayOfWeek

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeDayOfWeek_) && (INCLUDE_ALL_JavaTimeDayOfWeek || defined(INCLUDE_JavaTimeDayOfWeek))
#define JavaTimeDayOfWeek_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_JavaTimeTemporalTemporalAccessor 1
#define INCLUDE_JavaTimeTemporalTemporalAccessor 1
#include "java/time/temporal/TemporalAccessor.h"

#define RESTRICT_JavaTimeTemporalTemporalAdjuster 1
#define INCLUDE_JavaTimeTemporalTemporalAdjuster 1
#include "java/time/temporal/TemporalAdjuster.h"

@class IOSObjectArray;
@class JavaTimeFormatTextStyle;
@class JavaTimeTemporalValueRange;
@class JavaUtilLocale;
@protocol JavaTimeTemporalTemporal;
@protocol JavaTimeTemporalTemporalField;
@protocol JavaTimeTemporalTemporalQuery;

typedef NS_ENUM(NSUInteger, JavaTimeDayOfWeek_Enum) {
  JavaTimeDayOfWeek_Enum_MONDAY = 0,
  JavaTimeDayOfWeek_Enum_TUESDAY = 1,
  JavaTimeDayOfWeek_Enum_WEDNESDAY = 2,
  JavaTimeDayOfWeek_Enum_THURSDAY = 3,
  JavaTimeDayOfWeek_Enum_FRIDAY = 4,
  JavaTimeDayOfWeek_Enum_SATURDAY = 5,
  JavaTimeDayOfWeek_Enum_SUNDAY = 6,
};

/*!
 @brief A day-of-week, such as 'Tuesday'.
 <p>
  <code>DayOfWeek</code> is an enum representing the 7 days of the week -
  Monday, Tuesday, Wednesday, Thursday, Friday, Saturday and Sunday. 
 <p>
  In addition to the textual enum name, each day-of-week has an <code>int</code> value.
  The <code>int</code> value follows the ISO-8601 standard, from 1 (Monday) to 7 (Sunday).
  It is recommended that applications use the enum rather than the <code>int</code> value
  to ensure code clarity. 
 <p>
  This enum provides access to the localized textual form of the day-of-week.
  Some locales also assign different numeric values to the days, declaring
  Sunday to have the value 1, however this class provides no support for this.
  See <code>WeekFields</code> for localized week-numbering. 
 <p>
  <b>Do not use <code>ordinal()</code> to obtain the numeric representation of <code>DayOfWeek</code>.
  Use <code>getValue()</code> instead.</b>
  <p>
  This enum represents a common concept that is found in many calendar systems.
  As such, this enum may be used by any calendar system that has the day-of-week
  concept defined exactly equivalent to the ISO calendar system.
 @since 1.8
 */
@interface JavaTimeDayOfWeek : JavaLangEnum < JavaTimeTemporalTemporalAccessor, JavaTimeTemporalTemporalAdjuster >

@property (readonly, class, nonnull) JavaTimeDayOfWeek *MONDAY NS_SWIFT_NAME(MONDAY);
@property (readonly, class, nonnull) JavaTimeDayOfWeek *TUESDAY NS_SWIFT_NAME(TUESDAY);
@property (readonly, class, nonnull) JavaTimeDayOfWeek *WEDNESDAY NS_SWIFT_NAME(WEDNESDAY);
@property (readonly, class, nonnull) JavaTimeDayOfWeek *THURSDAY NS_SWIFT_NAME(THURSDAY);
@property (readonly, class, nonnull) JavaTimeDayOfWeek *FRIDAY NS_SWIFT_NAME(FRIDAY);
@property (readonly, class, nonnull) JavaTimeDayOfWeek *SATURDAY NS_SWIFT_NAME(SATURDAY);
@property (readonly, class, nonnull) JavaTimeDayOfWeek *SUNDAY NS_SWIFT_NAME(SUNDAY);
#pragma mark Public

/*!
 @brief Adjusts the specified temporal object to have this day-of-week.
 <p>
  This returns a temporal object of the same observable type as the input
  with the day-of-week changed to be the same as this. 
 <p>
  The adjustment is equivalent to using <code>Temporal.with(TemporalField, long)</code>
  passing <code>ChronoField.DAY_OF_WEEK</code> as the field.
  Note that this adjusts forwards or backwards within a Monday to Sunday week.
  See <code>java.time.temporal.WeekFields.dayOfWeek()</code> for localized week start days.
  See <code>TemporalAdjuster</code> for other adjusters with more control,
  such as <code>next(MONDAY)</code>.
  <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.with(TemporalAdjuster)</code>:
  @code

    // these two lines are equivalent, but the second approach is recommended
    temporal = thisDayOfWeek.adjustInto(temporal);
    temporal = temporal.with(thisDayOfWeek); 
  
@endcode
  <p>
  For example, given a date that is a Wednesday, the following are output: 
 @code

    dateOnWed.with(MONDAY);     // two days earlier
    dateOnWed.with(TUESDAY);    // one day earlier
    dateOnWed.with(WEDNESDAY);  // same date
    dateOnWed.with(THURSDAY);   // one day later
    dateOnWed.with(FRIDAY);     // two days later
    dateOnWed.with(SATURDAY);   // three days later
    dateOnWed.with(SUNDAY);     // four days later 
  
@endcode
  <p>
  This instance is immutable and unaffected by this method call.
 @param temporal the target object to be adjusted, not null
 @return the adjusted object, not null
 @throw DateTimeExceptionif unable to make the adjustment
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)adjustIntoWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

/*!
 @brief Obtains an instance of <code>DayOfWeek</code> from a temporal object.
 <p>
  This obtains a day-of-week based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>DayOfWeek</code>.
  <p>
  The conversion extracts the <code>DAY_OF_WEEK</code> field. 
 <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>DayOfWeek::from</code>.
 @param temporal the temporal object to convert, not null
 @return the day-of-week, not null
 @throw DateTimeExceptionif unable to convert to a <code>DayOfWeek</code>
 */
+ (JavaTimeDayOfWeek *)fromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Gets the value of the specified field from this day-of-week as an <code>int</code>.
 <p>
  This queries this day-of-week for the value of the specified field.
  The returned value will always be within the valid range of values for the field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is <code>DAY_OF_WEEK</code> then the
  value of the day-of-week, from 1 to 7, will be returned.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.getFrom(TemporalAccessor)</code>
  passing <code>this</code> as the argument. Whether the value can be obtained,
  and what the value represents, is determined by the field.
 @param field the field to get, not null
 @return the value for the field, within the valid range of values
 @throw DateTimeExceptionif a value for the field cannot be obtained or
          the value is outside the range of valid values for the field
 @throw UnsupportedTemporalTypeExceptionif the field is not supported or
          the range of values exceeds an <code>int</code>
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jint)getWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the textual representation, such as 'Mon' or 'Friday'.
 <p>
  This returns the textual name used to identify the day-of-week,
  suitable for presentation to the user.
  The parameters control the style of the returned text and the locale. 
 <p>
  If no textual mapping is found then the <code>numeric value</code> is returned.
 @param style the length of the text required, not null
 @param locale the locale to use, not null
 @return the text value of the day-of-week, not null
 */
- (NSString *)getDisplayNameWithJavaTimeFormatTextStyle:(JavaTimeFormatTextStyle *)style
                                     withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Gets the value of the specified field from this day-of-week as a <code>long</code>.
 <p>
  This queries this day-of-week for the value of the specified field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is <code>DAY_OF_WEEK</code> then the
  value of the day-of-week, from 1 to 7, will be returned.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.getFrom(TemporalAccessor)</code>
  passing <code>this</code> as the argument. Whether the value can be obtained,
  and what the value represents, is determined by the field.
 @param field the field to get, not null
 @return the value for the field
 @throw DateTimeExceptionif a value for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jlong)getLongWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the day-of-week <code>int</code> value.
 <p>
  The values are numbered following the ISO-8601 standard, from 1 (Monday) to 7 (Sunday).
  See <code>java.time.temporal.WeekFields.dayOfWeek()</code> for localized week-numbering.
 @return the day-of-week, from 1 (Monday) to 7 (Sunday)
 */
- (jint)getValue;

/*!
 @brief Checks if the specified field is supported.
 <p>
  This checks if this day-of-week can be queried for the specified field.
  If false, then calling the <code>range</code> and 
 <code>get</code> methods will throw an exception. 
 <p>
  If the field is <code>DAY_OF_WEEK</code> then
  this method returns true.
  All other <code>ChronoField</code> instances will return false. 
 <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.isSupportedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the field is supported is determined by the field.
 @param field the field to check, null returns false
 @return true if the field is supported on this day-of-week, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Returns the day-of-week that is the specified number of days before this one.
 <p>
  The calculation rolls around the start of the year from Monday to Sunday.
  The specified period may be negative. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param days the days to subtract, positive or negative
 @return the resulting day-of-week, not null
 */
- (JavaTimeDayOfWeek *)minusWithLong:(jlong)days;

/*!
 @brief Obtains an instance of <code>DayOfWeek</code> from an <code>int</code> value.
 <p>
  <code>DayOfWeek</code> is an enum representing the 7 days of the week.
  This factory allows the enum to be obtained from the <code>int</code> value.
  The <code>int</code> value follows the ISO-8601 standard, from 1 (Monday) to 7 (Sunday).
 @param dayOfWeek the day-of-week to represent, from 1 (Monday) to 7 (Sunday)
 @return the day-of-week singleton, not null
 @throw DateTimeExceptionif the day-of-week is invalid
 */
+ (JavaTimeDayOfWeek *)ofWithInt:(jint)dayOfWeek;

/*!
 @brief Returns the day-of-week that is the specified number of days after this one.
 <p>
  The calculation rolls around the end of the week from Sunday to Monday.
  The specified period may be negative. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param days the days to add, positive or negative
 @return the resulting day-of-week, not null
 */
- (JavaTimeDayOfWeek *)plusWithLong:(jlong)days;

/*!
 @brief Queries this day-of-week using the specified query.
 <p>
  This queries this day-of-week using the specified query strategy object.
  The <code>TemporalQuery</code> object defines the logic to be used to
  obtain the result. Read the documentation of the query to understand
  what the result of this method will be. 
 <p>
  The result of this method is obtained by invoking the 
 <code>TemporalQuery.queryFrom(TemporalAccessor)</code> method on the
  specified query passing <code>this</code> as the argument.
 @param query the query to invoke, not null
 @return the query result, null may be returned (defined by the query)
 @throw DateTimeExceptionif unable to query (defined by the query)
 @throw ArithmeticExceptionif numeric overflow occurs (defined by the query)
 */
- (id)queryWithJavaTimeTemporalTemporalQuery:(id<JavaTimeTemporalTemporalQuery>)query;

/*!
 @brief Gets the range of valid values for the specified field.
 <p>
  The range object expresses the minimum and maximum valid values for a field.
  This day-of-week is used to enhance the accuracy of the returned range.
  If it is not possible to return the range, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is <code>DAY_OF_WEEK</code> then the
  range of the day-of-week, from 1 to 7, will be returned.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.rangeRefinedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the range can be obtained is determined by the field.
 @param field the field to query the range for, not null
 @return the range of valid values for the field, not null
 @throw DateTimeExceptionif the range for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 */
- (JavaTimeTemporalValueRange *)rangeWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

+ (JavaTimeDayOfWeek *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaTimeDayOfWeek_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaTimeDayOfWeek)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaTimeDayOfWeek *JavaTimeDayOfWeek_values_[];

/*!
 @brief The singleton instance for the day-of-week of Monday.
 This has the numeric value of <code>1</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_MONDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, MONDAY)

/*!
 @brief The singleton instance for the day-of-week of Tuesday.
 This has the numeric value of <code>2</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_TUESDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, TUESDAY)

/*!
 @brief The singleton instance for the day-of-week of Wednesday.
 This has the numeric value of <code>3</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_WEDNESDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, WEDNESDAY)

/*!
 @brief The singleton instance for the day-of-week of Thursday.
 This has the numeric value of <code>4</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_THURSDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, THURSDAY)

/*!
 @brief The singleton instance for the day-of-week of Friday.
 This has the numeric value of <code>5</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_FRIDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, FRIDAY)

/*!
 @brief The singleton instance for the day-of-week of Saturday.
 This has the numeric value of <code>6</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_SATURDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, SATURDAY)

/*!
 @brief The singleton instance for the day-of-week of Sunday.
 This has the numeric value of <code>7</code>.
 */
inline JavaTimeDayOfWeek *JavaTimeDayOfWeek_get_SUNDAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeDayOfWeek, SUNDAY)

FOUNDATION_EXPORT JavaTimeDayOfWeek *JavaTimeDayOfWeek_ofWithInt_(jint dayOfWeek);

FOUNDATION_EXPORT JavaTimeDayOfWeek *JavaTimeDayOfWeek_fromWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT IOSObjectArray *JavaTimeDayOfWeek_values(void);

FOUNDATION_EXPORT JavaTimeDayOfWeek *JavaTimeDayOfWeek_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaTimeDayOfWeek *JavaTimeDayOfWeek_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeDayOfWeek)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeDayOfWeek")
