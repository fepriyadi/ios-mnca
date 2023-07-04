//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/model/FrameworkMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod")
#ifdef RESTRICT_OrgJunitRunnersModelFrameworkMethod
#define INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod 1
#endif
#undef RESTRICT_OrgJunitRunnersModelFrameworkMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersModelFrameworkMethod_) && (INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod || defined(INCLUDE_OrgJunitRunnersModelFrameworkMethod))
#define OrgJunitRunnersModelFrameworkMethod_

#define RESTRICT_OrgJunitRunnersModelFrameworkMember 1
#define INCLUDE_OrgJunitRunnersModelFrameworkMember 1
#include "org/junit/runners/model/FrameworkMember.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaLangReflectType;
@protocol JavaUtilList;

/*!
 @brief Represents a method on a test class to be invoked at the appropriate point in
  test execution.These methods are usually marked with an annotation (such as 
 <code>@@Test</code>, <code>@@Before</code>, <code>@@After</code>, <code>@@BeforeClass</code>,
  <code>@@AfterClass</code>, etc.)
 @since 4.5
 */
@interface OrgJunitRunnersModelFrameworkMethod : OrgJunitRunnersModelFrameworkMember

#pragma mark Public

/*!
 @brief Returns a new <code>FrameworkMethod</code> for <code>method</code>
 */
- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the annotation of type <code>annotationType</code> on this method, if
  one exists.
 */
- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

/*!
 @brief Returns the annotations on this method
 */
- (IOSObjectArray *)getAnnotations;

/*!
 @brief Returns the class where the method is actually declared
 */
- (IOSClass *)getDeclaringClass;

/*!
 @brief Returns the underlying Java method
 */
- (JavaLangReflectMethod *)getMethod;

/*!
 @brief Returns the method's name
 */
- (NSString *)getName;

/*!
 @brief Returns the return type of the method
 */
- (IOSClass *)getReturnType;

/*!
 @brief Returns the return type of the method
 */
- (IOSClass *)getType;

- (NSUInteger)hash;

/*!
 @brief Returns the result of invoking this method on <code>target</code> with
  parameters <code>params</code>.
 <code>InvocationTargetException</code>s thrown are
  unwrapped, and their causes rethrown.
 */
- (id)invokeExplosivelyWithId:(id)target
            withNSObjectArray:(IOSObjectArray *)params;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMethod *)other;

/*!
 @brief Returns true if this is a no-arg method that returns a value assignable
  to <code>type</code>
 */
- (jboolean)producesTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type __attribute__((deprecated));

- (NSString *)description;

- (void)validateNoTypeParametersOnArgsWithJavaUtilList:(id<JavaUtilList>)errors;

/*!
 @brief Adds to <code>errors</code> if this method: 
 <ul>
  <li>is not public, or 
 <li>returns something other than void, or 
 <li>is static (given <code>isStatic is false</code>), or 
 <li>is not static (given <code>isStatic is true</code>).
 </ul>
 */
- (void)validatePublicVoidWithBoolean:(jboolean)isStatic
                     withJavaUtilList:(id<JavaUtilList>)errors;

/*!
 @brief Adds to <code>errors</code> if this method: 
 <ul>
  <li>is not public, or 
 <li>takes parameters, or 
 <li>returns something other than void, or 
 <li>is static (given <code>isStatic is false</code>), or 
 <li>is not static (given <code>isStatic is true</code>).
 </ul>
 */
- (void)validatePublicVoidNoArgWithBoolean:(jboolean)isStatic
                          withJavaUtilList:(id<JavaUtilList>)errors;

#pragma mark Protected

- (jint)getModifiers;

#pragma mark Package-Private

- (OrgJunitRunnersModelFrameworkMethod *)handlePossibleBridgeMethodWithJavaUtilList:(id<JavaUtilList>)arg0;

- (jboolean)isBridgeMethod;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelFrameworkMethod)

FOUNDATION_EXPORT void OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(OrgJunitRunnersModelFrameworkMethod *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkMethod *new_OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkMethod *create_OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelFrameworkMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod")
