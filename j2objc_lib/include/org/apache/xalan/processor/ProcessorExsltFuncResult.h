//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorExsltFuncResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFuncResult")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorExsltFuncResult
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFuncResult 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFuncResult 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorExsltFuncResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorExsltFuncResult_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFuncResult || defined(INCLUDE_OrgApacheXalanProcessorProcessorExsltFuncResult))
#define OrgApacheXalanProcessorProcessorExsltFuncResult_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "org/apache/xalan/processor/ProcessorTemplateElem.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This class processes parse events for an exslt func:result element.
 */
@interface OrgApacheXalanProcessorProcessorExsltFuncResult : OrgApacheXalanProcessorProcessorTemplateElem
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Verify that the func:result element does not appear within a variable,
  parameter, or another func:result, and that it belongs to a func:function 
  element.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorExsltFuncResult)

inline jlong OrgApacheXalanProcessorProcessorExsltFuncResult_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorExsltFuncResult_serialVersionUID 6451230911473482423LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorExsltFuncResult, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorExsltFuncResult_init(OrgApacheXalanProcessorProcessorExsltFuncResult *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorExsltFuncResult *new_OrgApacheXalanProcessorProcessorExsltFuncResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorExsltFuncResult *create_OrgApacheXalanProcessorProcessorExsltFuncResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorExsltFuncResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorExsltFuncResult")
