//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorDecimalFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorDecimalFormat")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorDecimalFormat
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorDecimalFormat 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorDecimalFormat 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorDecimalFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorDecimalFormat_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorDecimalFormat || defined(INCLUDE_OrgApacheXalanProcessorProcessorDecimalFormat))
#define OrgApacheXalanProcessorProcessorDecimalFormat_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "org/apache/xalan/processor/XSLTElementProcessor.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@protocol OrgXmlSaxAttributes;

/*!
 @brief Process xsl:decimal-format by creating a DecimalFormatProperties 
  object and passing it to the stylesheet.
 - seealso: org.apache.xalan.templates.Stylesheet#setDecimalFormat
 - seealso: org.apache.xalan.templates.DecimalFormatProperties
 - seealso: <a href="http://www.w3.org/TR/xslt#format-number">format-number in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorDecimalFormat : OrgApacheXalanProcessorXSLTElementProcessor
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Receive notification of the start of an element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param rawName The raw XML 1.0 name (with prefix), or the         empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 - seealso: org.apache.xalan.processor.StylesheetHandler#startElement
 - seealso: org.apache.xalan.processor.StylesheetHandler#endElement
 - seealso: org.xml.sax.ContentHandler#startElement
 - seealso: org.xml.sax.ContentHandler#endElement
 - seealso: org.xml.sax.Attributes
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorDecimalFormat)

inline jlong OrgApacheXalanProcessorProcessorDecimalFormat_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorDecimalFormat_serialVersionUID -5052904382662921627LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorDecimalFormat, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorDecimalFormat_initPackagePrivate(OrgApacheXalanProcessorProcessorDecimalFormat *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorDecimalFormat *new_OrgApacheXalanProcessorProcessorDecimalFormat_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorDecimalFormat *create_OrgApacheXalanProcessorProcessorDecimalFormat_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorDecimalFormat)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorDecimalFormat")