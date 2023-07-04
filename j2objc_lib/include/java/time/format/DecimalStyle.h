//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/format/DecimalStyle.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeFormatDecimalStyle")
#ifdef RESTRICT_JavaTimeFormatDecimalStyle
#define INCLUDE_ALL_JavaTimeFormatDecimalStyle 0
#else
#define INCLUDE_ALL_JavaTimeFormatDecimalStyle 1
#endif
#undef RESTRICT_JavaTimeFormatDecimalStyle

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeFormatDecimalStyle_) && (INCLUDE_ALL_JavaTimeFormatDecimalStyle || defined(INCLUDE_JavaTimeFormatDecimalStyle))
#define JavaTimeFormatDecimalStyle_

@class JavaUtilLocale;
@protocol JavaUtilSet;

/*!
 @brief Localized decimal style used in date and time formatting.
 <p>
  A significant part of dealing with dates and times is the localization.
  This class acts as a central point for accessing the information.
 @since 1.8
 */
@interface JavaTimeFormatDecimalStyle : NSObject
@property (readonly, class, strong) JavaTimeFormatDecimalStyle *STANDARD NS_SWIFT_NAME(STANDARD);

#pragma mark Public

/*!
 @brief Checks if this DecimalStyle is equal to another DecimalStyle.
 @param obj the object to check, null returns false
 @return true if this is equal to the other date
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Lists all the locales that are supported.
 <p>
  The locale 'en_US' will always be present.
 @return a Set of Locales for which localization is supported
 */
+ (id<JavaUtilSet>)getAvailableLocales;

/*!
 @brief Gets the character that represents the decimal point.
 <p>
  The character used to represent a decimal point may vary by culture.
  This method specifies the character to use.
 @return the character for the decimal point
 */
- (jchar)getDecimalSeparator;

/*!
 @brief Gets the character that represents the negative sign.
 <p>
  The character used to represent a negative number may vary by culture.
  This method specifies the character to use.
 @return the character for the negative sign
 */
- (jchar)getNegativeSign;

/*!
 @brief Gets the character that represents the positive sign.
 <p>
  The character used to represent a positive number may vary by culture.
  This method specifies the character to use.
 @return the character for the positive sign
 */
- (jchar)getPositiveSign;

/*!
 @brief Gets the character that represents zero.
 <p>
  The character used to represent digits may vary by culture.
  This method specifies the zero character to use, which implies the characters for one to nine.
 @return the character for zero
 */
- (jchar)getZeroDigit;

/*!
 @brief A hash code for this DecimalStyle.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Obtains the DecimalStyle for the specified locale.
 <p>
  This method provides access to locale sensitive decimal style symbols.
 @param locale the locale, not null
 @return the decimal style, not null
 */
+ (JavaTimeFormatDecimalStyle *)ofWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Obtains the DecimalStyle for the default 
 <code>FORMAT</code> locale.
 <p>
  This method provides access to locale sensitive decimal style symbols. 
 <p>
  This is equivalent to calling 
 <code>of(Locale.getDefault(Locale.Category.FORMAT))</code>
 .
 - seealso: java.util.Locale.Category#FORMAT
 @return the decimal style, not null
 */
+ (JavaTimeFormatDecimalStyle *)ofDefaultLocale;

/*!
 @brief Returns a string describing this DecimalStyle.
 @return a string description, not null
 */
- (NSString *)description;

/*!
 @brief Returns a copy of the info with a new character that represents the decimal point.
 <p>
  The character used to represent a decimal point may vary by culture.
  This method specifies the character to use.
 @param decimalSeparator the character for the decimal point
 @return a copy with a new character that represents the decimal point, not null
 */
- (JavaTimeFormatDecimalStyle *)withDecimalSeparatorWithChar:(jchar)decimalSeparator;

/*!
 @brief Returns a copy of the info with a new character that represents the negative sign.
 <p>
  The character used to represent a negative number may vary by culture.
  This method specifies the character to use.
 @param negativeSign the character for the negative sign
 @return a copy with a new character that represents the negative sign, not null
 */
- (JavaTimeFormatDecimalStyle *)withNegativeSignWithChar:(jchar)negativeSign;

/*!
 @brief Returns a copy of the info with a new character that represents the positive sign.
 <p>
  The character used to represent a positive number may vary by culture.
  This method specifies the character to use.
 @param positiveSign the character for the positive sign
 @return a copy with a new character that represents the positive sign, not null
 */
- (JavaTimeFormatDecimalStyle *)withPositiveSignWithChar:(jchar)positiveSign;

/*!
 @brief Returns a copy of the info with a new character that represents zero.
 <p>
  The character used to represent digits may vary by culture.
  This method specifies the zero character to use, which implies the characters for one to nine.
 @param zeroDigit the character for zero
 @return a copy with a new character that represents zero, not null
 */
- (JavaTimeFormatDecimalStyle *)withZeroDigitWithChar:(jchar)zeroDigit;

#pragma mark Package-Private

/*!
 @brief Converts the input numeric text to the internationalized form using the zero character.
 @param numericText the text, consisting of digits 0 to 9, to convert, not null
 @return the internationalized text, not null
 */
- (NSString *)convertNumberToI18NWithNSString:(NSString *)numericText;

/*!
 @brief Checks whether the character is a digit, based on the currently set zero character.
 @param ch the character to check
 @return the value, 0 to 9, of the character, or -1 if not a digit
 */
- (jint)convertToDigitWithChar:(jchar)ch;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaTimeFormatDecimalStyle)

/*!
 @brief The standard set of non-localized decimal style symbols.
 <p>
  This uses standard ASCII characters for zero, positive, negative and a dot for the decimal point.
 */
inline JavaTimeFormatDecimalStyle *JavaTimeFormatDecimalStyle_get_STANDARD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTimeFormatDecimalStyle *JavaTimeFormatDecimalStyle_STANDARD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeFormatDecimalStyle, STANDARD, JavaTimeFormatDecimalStyle *)

FOUNDATION_EXPORT id<JavaUtilSet> JavaTimeFormatDecimalStyle_getAvailableLocales(void);

FOUNDATION_EXPORT JavaTimeFormatDecimalStyle *JavaTimeFormatDecimalStyle_ofDefaultLocale(void);

FOUNDATION_EXPORT JavaTimeFormatDecimalStyle *JavaTimeFormatDecimalStyle_ofWithJavaUtilLocale_(JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeFormatDecimalStyle)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeFormatDecimalStyle")
