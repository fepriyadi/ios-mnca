//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Equals.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsEquals")
#ifdef RESTRICT_OrgApacheXpathOperationsEquals
#define INCLUDE_ALL_OrgApacheXpathOperationsEquals 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsEquals 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsEquals

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathOperationsEquals_) && (INCLUDE_ALL_OrgApacheXpathOperationsEquals || defined(INCLUDE_OrgApacheXpathOperationsEquals))
#define OrgApacheXpathOperationsEquals_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief The '=' operation expression executer.
 */
@interface OrgApacheXpathOperationsEquals : OrgApacheXpathOperationsOperation
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Execute a binary operation by calling execute on each of the operands,
  and then calling the operate method on the derived class.
 @param xctxt The runtime execution context.
 @return The XObject result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)bool__WithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsEquals)

inline jlong OrgApacheXpathOperationsEquals_get_serialVersionUID(void);
#define OrgApacheXpathOperationsEquals_serialVersionUID -2658315633903426134LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsEquals, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsEquals_init(OrgApacheXpathOperationsEquals *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsEquals *new_OrgApacheXpathOperationsEquals_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsEquals *create_OrgApacheXpathOperationsEquals_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsEquals)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsEquals")
