//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/DecimalFormatProperties.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesDecimalFormatProperties")
#ifdef RESTRICT_OrgApacheXalanTemplatesDecimalFormatProperties
#define INCLUDE_ALL_OrgApacheXalanTemplatesDecimalFormatProperties 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesDecimalFormatProperties 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesDecimalFormatProperties

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesDecimalFormatProperties_) && (INCLUDE_ALL_OrgApacheXalanTemplatesDecimalFormatProperties || defined(INCLUDE_OrgApacheXalanTemplatesDecimalFormatProperties))
#define OrgApacheXalanTemplatesDecimalFormatProperties_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class JavaTextDecimalFormatSymbols;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXmlUtilsQName;

/*!
 @brief Implement xsl:decimal-format.
 @code

   <!ELEMENT xsl:decimal-format EMPTY>
   <!ATTLIST xsl:decimal-format
    name %qname; #IMPLIED
    decimal-separator %char; "."
    grouping-separator %char; ","
    infinity CDATA "Infinity"
    minus-sign %char; "-"
    NaN CDATA "NaN"
    percent %char; "%"
    per-mille %char; "&#x2030;"
    zero-digit %char; "0"
    digit %char; "#"
    pattern-separator %char; ";" 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#format-number">format-number in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesDecimalFormatProperties : OrgApacheXalanTemplatesElemTemplateElement {
 @public
  /*!
   @brief An instance of DecimalFormatSymbols for this element.
   */
  JavaTextDecimalFormatSymbols *m_dfs_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructor DecimalFormatProperties
 */
- (instancetype __nonnull)initWithInt:(jint)docOrderNumber;

/*!
 @brief Return the decimal format Symbols for this element.
 <p>The xsl:decimal-format element declares a decimal-format,
  which controls the interpretation of a format pattern used by
  the format-number function. If there is a name attribute, then
  the element declares a named decimal-format; otherwise, it
  declares the default decimal-format. The value of the name
  attribute is a QName, which is expanded as described in [2.4 Qualified Names].
  It is an error to declare either the default decimal-format or a
  decimal-format with a given name more than once (even with different
  import precedence), unless it is declared every time with the same
  value for all attributes (taking into account any default values).</p>
  <p>The other attributes on xsl:decimal-format correspond to the
  methods on the JDK 1.1 DecimalFormatSymbols class. For each get/set
  method pair there is an attribute defined for the xsl:decimal-format
  element.</p>
 @return the decimal format Symbols for this element.
 */
- (JavaTextDecimalFormatSymbols *)getDecimalFormatSymbols;

/*!
 @brief Get the "decimal-separator" attribute.
 decimal-separator specifies the character used for the decimal sign;
  the default value is the period character (.).
 @return the character to use as decimal separator
 */
- (jchar)getDecimalSeparator;

/*!
 @brief Get the "digit" attribute.
 digit specifies the character used for a digit in the format pattern;
  the default value is the number sign character (#).
 @return Character to use for a digit in format pattern
 */
- (jchar)getDigit;

/*!
 @brief Get the "grouping-separator" attribute.
 grouping-separator specifies the character used as a grouping
  (e.g. thousands) separator; the default value is the comma character (,).
 @return Character to use a grouping separator
 */
- (jchar)getGroupingSeparator;

/*!
 @brief Get the "infinity" attribute.
 infinity specifies the string used to represent infinity;
  the default value is the string Infinity.
 @return String to use as the "infinity" attribute.
 */
- (NSString *)getInfinity;

/*!
 @brief Get the "minus-sign" attribute.
 minus-sign specifies the character used as the default minus sign; the
  default value is the hyphen-minus character (-, #x2D).
 @return Character to use as minus sign
 */
- (jchar)getMinusSign;

/*!
 @brief Get the "name" attribute.
 If there is a name attribute, then the element declares a named
  decimal-format; otherwise, it declares the default decimal-format.
 @return the value of the "name" attribute.
 */
- (OrgApacheXmlUtilsQName *)getName;

/*!
 @brief Get the "NaN" attribute.
 NaN specifies the string used to represent the NaN value;
  the default value is the string NaN.
 @return String to use as the "NaN" attribute.
 */
- (NSString *)getNaN;

/*!
 @brief Return the node name.
 @return the element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "pattern-separator" attribute.
 pattern-separator specifies the character used to separate positive
  and negative sub patterns in a pattern; the default value is the
  semi-colon character (;).
 @return Character to use as a pattern separator
 */
- (jchar)getPatternSeparator;

/*!
 @brief Get the "percent" attribute.
 percent specifies the character used as a percent sign; the default
  value is the percent character (%).
 @return Character to use as percent
 */
- (jchar)getPercent;

/*!
 @brief Get the "per-mille" attribute.
 per-mille specifies the character used as a per mille sign; the default
  value is the Unicode per-mille character (#x2030).
 @return Character to use as per-mille
 */
- (jchar)getPerMille;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Get the "zero-digit" attribute.
 zero-digit specifies the character used as the digit zero; the default
  value is the digit zero (0).
 @return Character to use as the digit zero
 */
- (jchar)getZeroDigit;

/*!
 @brief This function is called to recompose() all of the decimal format properties elements.
 @param root Stylesheet root
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Set the "decimal-separator" attribute.
 decimal-separator specifies the character used for the decimal sign;
  the default value is the period character (.).
 @param ds Character to set as decimal separator
 */
- (void)setDecimalSeparatorWithChar:(jchar)ds;

/*!
 @brief Set the "digit" attribute.
 digit specifies the character used for a digit in the format pattern;
  the default value is the number sign character (#).
 @param v Character to use for a digit in format pattern
 */
- (void)setDigitWithChar:(jchar)v;

/*!
 @brief Set the "grouping-separator" attribute.
 grouping-separator specifies the character used as a grouping
  (e.g. thousands) separator; the default value is the comma character (,).
 @param gs Character to use a grouping separator
 */
- (void)setGroupingSeparatorWithChar:(jchar)gs;

/*!
 @brief Set the "infinity" attribute.
 infinity specifies the string used to represent infinity;
  the default value is the string Infinity.
 @param inf String to use as the "infinity" attribute.
 */
- (void)setInfinityWithNSString:(NSString *)inf;

/*!
 @brief Set the "minus-sign" attribute.
 minus-sign specifies the character used as the default minus sign; the
  default value is the hyphen-minus character (-, #x2D).
 @param v Character to use as minus sign
 */
- (void)setMinusSignWithChar:(jchar)v;

/*!
 @brief Set the "name" attribute.
 If there is a name attribute, then the element declares a named
  decimal-format; otherwise, it declares the default decimal-format.
 @param qname The name to set as the "name" attribute.
 */
- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Set the "NaN" attribute.
 NaN specifies the string used to represent the NaN value;
  the default value is the string NaN.
 @param v String to use as the "NaN" attribute.
 */
- (void)setNaNWithNSString:(NSString *)v;

/*!
 @brief Set the "pattern-separator" attribute.
 pattern-separator specifies the character used to separate positive
  and negative sub patterns in a pattern; the default value is the
  semi-colon character (;).
 @param v Character to use as a pattern separator
 */
- (void)setPatternSeparatorWithChar:(jchar)v;

/*!
 @brief Set the "percent" attribute.
 percent specifies the character used as a percent sign; the default
  value is the percent character (%).
 @param v Character to use as percent
 */
- (void)setPercentWithChar:(jchar)v;

/*!
 @brief Set the "per-mille" attribute.
 per-mille specifies the character used as a per mille sign; the default
  value is the Unicode per-mille character (#x2030).
 @param v Character to use as per-mille
 */
- (void)setPerMilleWithChar:(jchar)v;

/*!
 @brief Set the "zero-digit" attribute.
 zero-digit specifies the character used as the digit zero; the default
  value is the digit zero (0).
 @param v Character to use as the digit zero
 */
- (void)setZeroDigitWithChar:(jchar)v;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesDecimalFormatProperties)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesDecimalFormatProperties, m_dfs_, JavaTextDecimalFormatSymbols *)

inline jlong OrgApacheXalanTemplatesDecimalFormatProperties_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesDecimalFormatProperties_serialVersionUID -6559409339256269446LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesDecimalFormatProperties, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesDecimalFormatProperties_initWithInt_(OrgApacheXalanTemplatesDecimalFormatProperties *self, jint docOrderNumber);

FOUNDATION_EXPORT OrgApacheXalanTemplatesDecimalFormatProperties *new_OrgApacheXalanTemplatesDecimalFormatProperties_initWithInt_(jint docOrderNumber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesDecimalFormatProperties *create_OrgApacheXalanTemplatesDecimalFormatProperties_initWithInt_(jint docOrderNumber);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesDecimalFormatProperties)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesDecimalFormatProperties")
