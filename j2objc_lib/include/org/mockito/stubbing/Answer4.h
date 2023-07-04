//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/Answer4.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingAnswer4")
#ifdef RESTRICT_OrgMockitoStubbingAnswer4
#define INCLUDE_ALL_OrgMockitoStubbingAnswer4 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingAnswer4 1
#endif
#undef RESTRICT_OrgMockitoStubbingAnswer4

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingAnswer4_) && (INCLUDE_ALL_OrgMockitoStubbingAnswer4 || defined(INCLUDE_OrgMockitoStubbingAnswer4))
#define OrgMockitoStubbingAnswer4_

/*!
 @brief Generic interface to be used for configuring mock's answer for a four argument invocation.
 Answer specifies an action that is executed and a return value that is returned when you interact with the mock. 
 <p>
  Example of stubbing a mock with this custom answer: 
 <pre class="code"><code class="java">
  import static org.mockito.AdditionalAnswers.answer;
  when(mock.someMethod(anyInt(), anyString(), anyChar(), any())).then(answer(
      new Answer4&lt;StringBuilder, Integer, String, Character, Object&gt;() {
          public StringBuilder answer(Integer i, String s, Character c, Object o) {
              return new StringBuilder().append(i).append(s).append(c).append(o.hashCode());
          }
  }));
  //Following will print a string like "3xyz131635550"
  System.out.println(mock.someMethod(3, "xy", 'z', new Object())); 
 </code>
@endcode
 - seealso: Answer
 */
@protocol OrgMockitoStubbingAnswer4 < JavaObject >

/*!
 @param argument0 the first argument.
 @param argument1 the second argument.
 @param argument2 the third argument.
 @param argument3 the fourth argument.
 @return the value to be returned.
 @throw Throwablethe throwable to be thrown
 */
- (id)answerWithId:(id)argument0
            withId:(id)argument1
            withId:(id)argument2
            withId:(id)argument3;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingAnswer4)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingAnswer4)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingAnswer4")
