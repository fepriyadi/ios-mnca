//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/base/Function.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFunction")
#ifdef RESTRICT_ComGoogleCommonBaseFunction
#define INCLUDE_ALL_ComGoogleCommonBaseFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFunction 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseFunction_) && (INCLUDE_ALL_ComGoogleCommonBaseFunction || defined(INCLUDE_ComGoogleCommonBaseFunction))
#define ComGoogleCommonBaseFunction_

#define RESTRICT_JavaUtilFunctionFunction 1
#define INCLUDE_JavaUtilFunctionFunction 1
#include "java/util/function/Function.h"

/*!
 @brief Legacy version of <code>java.util.function.Function</code>.
 <p>The <code>Functions</code> class provides common functions and related utilities. 
 <p>As this interface extends <code>java.util.function.Function</code>, an instance of this type can be
  used as a <code>java.util.function.Function</code> directly. To use a <code>java.util.function.Function</code>
  in a context where a <code>com.google.common.base.Function</code> is
  needed, use <code>function::apply</code>.
  
 <p>This interface is now a legacy type. Use <code>java.util.function.Function</code> (or the
  appropriate primitive specialization such as <code>ToIntFunction</code>) instead whenever possible.
  Otherwise, at least reduce <i>explicit</i> dependencies on this type by using lambda expressions
  or method references instead of classes, leaving your code easier to migrate in the future. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/FunctionalExplained">
 the use of <code>Function</code></a>.
 @author Kevin Bourrillion
 @since 2.0
 */
@protocol ComGoogleCommonBaseFunction < JavaUtilFunctionFunction, JavaObject >

- (id)applyWithId:(id __nullable)input;

/*!
 @brief <i>May</i> return <code>true</code> if <code>object</code> is a <code>Function</code> that behaves identically
  to this function.
 <p><b>Warning: do not depend</b> on the behavior of this method. 
 <p>Historically, <code>Function</code> instances in this library have implemented this method to
  recognize certain cases where distinct <code>Function</code> instances would in fact behave
  identically. However, as code migrates to <code>java.util.function</code>, that behavior will
  disappear. It is best not to depend on it.
 */
- (jboolean)isEqual:(id __nullable)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunction)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFunction")
