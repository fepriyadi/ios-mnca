//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncId.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncId")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncId
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncId 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncId 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncId

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncId_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncId || defined(INCLUDE_OrgApacheXpathFunctionsFuncId))
#define OrgApacheXpathFunctionsFuncId_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Id() function.
 */
@interface OrgApacheXpathFunctionsFuncId : OrgApacheXpathFunctionsFunctionOneArg
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncId)

inline jlong OrgApacheXpathFunctionsFuncId_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncId_serialVersionUID 8930573966143567310LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncId, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncId_init(OrgApacheXpathFunctionsFuncId *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncId *new_OrgApacheXpathFunctionsFuncId_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncId *create_OrgApacheXpathFunctionsFuncId_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncId)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncId")
