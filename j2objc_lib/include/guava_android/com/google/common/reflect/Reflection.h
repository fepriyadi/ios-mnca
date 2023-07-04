//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/reflect/Reflection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectReflection")
#ifdef RESTRICT_ComGoogleCommonReflectReflection
#define INCLUDE_ALL_ComGoogleCommonReflectReflection 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectReflection 1
#endif
#undef RESTRICT_ComGoogleCommonReflectReflection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectReflection_) && (INCLUDE_ALL_ComGoogleCommonReflectReflection || defined(INCLUDE_ComGoogleCommonReflectReflection))
#define ComGoogleCommonReflectReflection_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangReflectInvocationHandler;

/*!
 @brief Static utilities relating to Java reflection.
 @since 12.0
 */
@interface ComGoogleCommonReflectReflection : NSObject

#pragma mark Public

/*!
 @brief Returns the package name of <code>clazz</code> according to the Java Language Specification (section
  6.7).Unlike <code>Class.getPackage</code>, this method only parses the class name, without
  attempting to define the <code>Package</code> and hence load files.
 */
+ (NSString *)getPackageNameWithIOSClass:(IOSClass * __nonnull)clazz;

/*!
 @brief Returns the package name of <code>classFullName</code> according to the Java Language Specification
  (section 6.7).Unlike <code>Class.getPackage</code>, this method only parses the class name, without
  attempting to define the <code>Package</code> and hence load files.
 */
+ (NSString *)getPackageNameWithNSString:(NSString * __nonnull)classFullName;

/*!
 @brief Ensures that the given classes are initialized, as described in <a href="http://java.sun.com/docs/books/jls/third_edition/html/execution.html#12.4.2">
 JLS Section
  12.4.2</a>.
 <p>WARNING: Normally it's a smell if a class needs to be explicitly initialized, because static
  state hurts system maintainability and testability. In cases when you have no choice while
  inter-operating with a legacy framework, this method helps to keep the code less ugly.
 @throw ExceptionInInitializerErrorif an exception is thrown during initialization of a class
 */
+ (void)initialize__WithIOSClassArray:(IOSObjectArray * __nonnull)classes OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a proxy instance that implements <code>interfaceType</code> by dispatching method
  invocations to <code>handler</code>.The class loader of <code>interfaceType</code> will be used to
  define the proxy class.
 To implement multiple interfaces or specify a class loader, use <code>Proxy.newProxyInstance</code>
 .
 @throw IllegalArgumentExceptionif <code>interfaceType</code> does not specify the type of a Java
      interface
 */
+ (id)newProxyWithIOSClass:(IOSClass * __nonnull)interfaceType
withJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler> __nonnull)handler OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectReflection)

FOUNDATION_EXPORT NSString *ComGoogleCommonReflectReflection_getPackageNameWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT NSString *ComGoogleCommonReflectReflection_getPackageNameWithNSString_(NSString *classFullName);

FOUNDATION_EXPORT void ComGoogleCommonReflectReflection_initialize__WithIOSClassArray_(IOSObjectArray *classes);

FOUNDATION_EXPORT id ComGoogleCommonReflectReflection_newProxyWithIOSClass_withJavaLangReflectInvocationHandler_(IOSClass *interfaceType, id<JavaLangReflectInvocationHandler> handler);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectReflection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectReflection")
