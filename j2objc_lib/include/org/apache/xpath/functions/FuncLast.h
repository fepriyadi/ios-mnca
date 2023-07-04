//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncLast.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncLast")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncLast
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncLast 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncLast 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncLast

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncLast_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncLast || defined(INCLUDE_OrgApacheXpathFunctionsFuncLast))
#define OrgApacheXpathFunctionsFuncLast_

#define RESTRICT_OrgApacheXpathFunctionsFunction 1
#define INCLUDE_OrgApacheXpathFunctionsFunction 1
#include "org/apache/xpath/functions/Function.h"

@class JavaUtilVector;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Last() function.
 */
@interface OrgApacheXpathFunctionsFuncLast : OrgApacheXpathFunctionsFunction
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

/*!
 @brief No arguments to process, so this does nothing.
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the position in the current context node list.
 @param xctxt non-null reference to XPath runtime context.
 @return The number of nodes in the list.
 @throw javax.xml.transform.TransformerException
 */
- (jint)getCountOfContextNodeListWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Figure out if we're executing a toplevel expression.
 If so, we can't be inside of a predicate.
 */
- (void)postCompileStepWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncLast)

inline jlong OrgApacheXpathFunctionsFuncLast_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncLast_serialVersionUID 9205812403085432943LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncLast, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncLast_init(OrgApacheXpathFunctionsFuncLast *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncLast *new_OrgApacheXpathFunctionsFuncLast_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncLast *create_OrgApacheXpathFunctionsFuncLast_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncLast)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncLast")
