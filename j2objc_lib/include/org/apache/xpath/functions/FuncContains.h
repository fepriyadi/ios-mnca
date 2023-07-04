//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncContains.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncContains
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncContains

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncContains_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains || defined(INCLUDE_OrgApacheXpathFunctionsFuncContains))
#define OrgApacheXpathFunctionsFuncContains_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "org/apache/xpath/functions/Function2Args.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Contains() function.
 */
@interface OrgApacheXpathFunctionsFuncContains : OrgApacheXpathFunctionsFunction2Args
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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncContains)

inline jlong OrgApacheXpathFunctionsFuncContains_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncContains_serialVersionUID 5084753781887919723LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncContains, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncContains_init(OrgApacheXpathFunctionsFuncContains *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncContains *new_OrgApacheXpathFunctionsFuncContains_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncContains *create_OrgApacheXpathFunctionsFuncContains_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncContains)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncContains")
