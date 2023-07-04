//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/BDDMockito.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoBDDMockito")
#ifdef RESTRICT_OrgMockitoBDDMockito
#define INCLUDE_ALL_OrgMockitoBDDMockito 0
#else
#define INCLUDE_ALL_OrgMockitoBDDMockito 1
#endif
#undef RESTRICT_OrgMockitoBDDMockito

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoBDDMockito_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito))
#define OrgMockitoBDDMockito_

#define RESTRICT_OrgMockitoMockito 1
#define INCLUDE_OrgMockitoMockito 1
#include "org/mockito/Mockito.h"

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing;
@protocol OrgMockitoBDDMockito_BDDStubber;
@protocol OrgMockitoBDDMockito_Then;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Behavior Driven Development style of writing tests uses <b>//given //when //then</b> comments as fundamental parts of your test methods.
 This is exactly how we write our tests and we warmly encourage you to do so! 
 <p>
  Start learning about BDD here: <a href="http://en.wikipedia.org/wiki/Behavior_Driven_Development">http://en.wikipedia.org/wiki/Behavior_Driven_Development</a>
  <p>
  The problem is that current stubbing api with canonical role of <b>when</b> word does not integrate nicely with <b>//given //when //then</b> comments.
  It's because stubbing belongs to <b>given</b> component of the test and not to the <b>when</b> component of the test.
  Hence <code>BDDMockito</code> class introduces an alias so that you stub method calls with <code>BDDMockito.given(Object)</code> method.
  Now it really nicely integrates with the <b>given</b> component of a BDD style test! 
 <p>
  Here is how the test might look like: 
 <pre class="code"><code class="java">
  import static org.mockito.BDDMockito.*;
  Seller seller = mock(Seller.class);
  Shop shop = new Shop(seller);
  public void shouldBuyBread() throws Exception {
    //given
    given(seller.askForBread()).willReturn(new Bread());
    //when
    Goods goods = shop.buyBread();
    //then
    assertThat(goods, containBread());
  } 
 </code>
@endcode
  Stubbing voids with throwables: 
 <pre class="code"><code class="java">
    //given
    willThrow(new RuntimeException("boo")).given(mock).foo();
    //when
    Result result = systemUnderTest.perform();
    //then
    assertEquals(failure, result); 
 </code>
@endcode
  <p>
  For BDD style mock verification take a look at <code>Then</code> in action: 
 <pre class="code"><code class="java">
    person.ride(bike);   person.ride(bike);
    then(person).should(times(2)).ride(bike);
    then(person).shouldHaveNoMoreInteractions();
    then(police).shouldHaveZeroInteractions(); 
 </code>
@endcode
  <p>
  It is also possible to do BDD style <code>InOrder</code> verification: 
 <pre class="code"><code class="java">
    InOrder inOrder = inOrder(person);
    person.drive(car);
    person.ride(bike);   person.ride(bike);
    then(person).should(inOrder).drive(car);
    then(person).should(inOrder, times(2)).ride(bike); 
 </code>
@endcode
  <p>
  One of the purposes of BDDMockito is also to show how to tailor the mocking syntax to a different programming style.
 @since 1.8.0
 */
@interface OrgMockitoBDDMockito : OrgMockitoMockito

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief see original <code>Mockito.when(Object)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)givenWithId:(id)methodCall;

/*!
 @brief Bdd style verification of mock behavior.
 <pre class="code"><code class="java">
    person.ride(bike);   person.ride(bike);
    then(person).should(times(2)).ride(bike); 
 </code>
@endcode
 - seealso: #verify(Object)
 - seealso: #verify(Object, VerificationMode)
 @since 1.10.0
 */
+ (id<OrgMockitoBDDMockito_Then>)thenWithId:(id)mock;

/*!
 @brief see original <code>Mockito.doAnswer(Answer)</code>
 @since 2.1.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief see original <code>Mockito.doAnswer(Answer)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief see original <code>Mockito.doCallRealMethod()</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

/*!
 @brief see original <code>Mockito.doNothing()</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willDoNothing;

/*!
 @brief see original <code>Mockito.doReturn(Object)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

/*!
 @brief see original <code>Mockito.doReturn(Object, Object...)
 </code>
 @since 2.1.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned
                                      withNSObjectArray:(IOSObjectArray *)toBeReturnedNext;

/*!
 @brief see original <code>Mockito.doThrow(Class)</code>
 @since 1.9.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

/*!
 @brief see original <code>Mockito.doThrow(Class)</code>
 @since 1.9.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown
                                           withIOSClassArray:(IOSObjectArray *)throwableTypes;

/*!
 @brief see original <code>Mockito.doThrow(Throwable[])</code>
 @since 2.1.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithJavaLangThrowableArray:(IOSObjectArray *)toBeThrown;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito)

FOUNDATION_EXPORT void OrgMockitoBDDMockito_init(OrgMockitoBDDMockito *self);

FOUNDATION_EXPORT OrgMockitoBDDMockito *new_OrgMockitoBDDMockito_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoBDDMockito *create_OrgMockitoBDDMockito_init(void);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDMyOngoingStubbing> OrgMockitoBDDMockito_givenWithId_(id methodCall);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_Then> OrgMockitoBDDMockito_thenWithId_(id mock);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithJavaLangThrowableArray_(IOSObjectArray *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithIOSClass_(IOSClass *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithIOSClass_withIOSClassArray_(IOSClass *toBeThrown, IOSObjectArray *throwableTypes);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willAnswerWithOrgMockitoStubbingAnswer_(id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willWithOrgMockitoStubbingAnswer_(id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willDoNothing(void);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willReturnWithId_(id toBeReturned);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willReturnWithId_withNSObjectArray_(id toBeReturned, IOSObjectArray *toBeReturnedNext);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willCallRealMethod(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito)

#endif

#if !defined (OrgMockitoBDDMockito_BDDMyOngoingStubbing_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDMyOngoingStubbing))
#define OrgMockitoBDDMockito_BDDMyOngoingStubbing_

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief See original <code>OngoingStubbing</code>
 @since 1.8.0
 */
@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing < JavaObject >

/*!
 @brief See original <code>OngoingStubbing.thenAnswer(Answer)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>OngoingStubbing.then(Answer)</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>OngoingStubbing.thenReturn(Object)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value;

/*!
 @brief See original <code>OngoingStubbing.thenReturn(Object, Object[])</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value
                                                withNSObjectArray:(IOSObjectArray *)values;

/*!
 @brief See original <code>OngoingStubbing.thenThrow(Throwable...)
 </code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithJavaLangThrowableArray:(IOSObjectArray *)throwables;

/*!
 @brief See original <code>OngoingStubbing.thenThrow(Class)</code>
 @since 2.1.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithIOSClass:(IOSClass *)throwableType;

/*!
 @brief See original <code>OngoingStubbing.thenThrow(Class, Class[])</code>
 @since 2.1.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithIOSClass:(IOSClass *)throwableType
                                                     withIOSClassArray:(IOSObjectArray *)throwableTypes;

/*!
 @brief See original <code>OngoingStubbing.thenCallRealMethod()</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willCallRealMethod;

/*!
 @brief See original <code>OngoingStubbing.getMock()</code>
 @since 1.9.0
 */
- (id)getMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDMyOngoingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDMyOngoingStubbing)

#endif

#if !defined (OrgMockitoBDDMockito_Then_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_Then))
#define OrgMockitoBDDMockito_Then_

@protocol OrgMockitoInOrder;
@protocol OrgMockitoVerificationVerificationMode;

/*!
 @brief Provides fluent way of mock verification.
 @since 1.10.5
 */
@protocol OrgMockitoBDDMockito_Then < JavaObject >

/*!
 - seealso: #verify(Object)
 @since 1.10.5
 */
- (id)should;

/*!
 - seealso: #verify(Object, VerificationMode)
 @since 1.10.5
 */
- (id)shouldWithOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

/*!
 - seealso: InOrder#verify(Object)
 @since 2.1.0
 */
- (id)shouldWithOrgMockitoInOrder:(id<OrgMockitoInOrder>)inOrder;

/*!
 - seealso: InOrder#verify(Object, VerificationMode)
 @since 2.1.0
 */
- (id)shouldWithOrgMockitoInOrder:(id<OrgMockitoInOrder>)inOrder
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

/*!
 - seealso: #verifyZeroInteractions(Object...)
 @since 2.1.0
 */
- (void)shouldHaveZeroInteractions;

/*!
 - seealso: #verifyNoMoreInteractions(Object...)
 @since 2.1.0
 */
- (void)shouldHaveNoMoreInteractions;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_Then)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_Then)

#endif

#if !defined (OrgMockitoBDDMockito_BDDStubber_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDStubber))
#define OrgMockitoBDDMockito_BDDStubber_

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief See original <code>Stubber</code>
 @since 1.8.0
 */
@protocol OrgMockitoBDDMockito_BDDStubber < JavaObject >

/*!
 @brief See original <code>Stubber.doAnswer(Answer)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>Stubber.doAnswer(Answer)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>Stubber.doNothing()</code>.
 This method will be removed in version 3.0.0
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willNothing __attribute__((deprecated));

/*!
 @brief See original <code>Stubber.doNothing()</code>
 @since 1.10.20
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willDoNothing;

/*!
 @brief See original <code>Stubber.doReturn(Object)</code>
 @since 2.1.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

/*!
 @brief See original <code>Stubber.doReturn(Object)</code>
 @since 2.1.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned
                                      withNSObjectArray:(IOSObjectArray *)nextToBeReturned;

/*!
 @brief See original <code>Stubber.doThrow(Throwable...)
 </code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithJavaLangThrowableArray:(IOSObjectArray *)toBeThrown;

/*!
 @brief See original <code>Stubber.doThrow(Class)</code>
 @since 2.1.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

/*!
 @brief See original <code>Stubber.doThrow(Class, Class[])</code>
 @since 2.1.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown
                                           withIOSClassArray:(IOSObjectArray *)nextToBeThrown;

/*!
 @brief See original <code>Stubber.doCallRealMethod()</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

/*!
 @brief See original <code>Stubber.when(Object)</code>
 @since 1.8.0
 */
- (id)givenWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDStubber)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDStubber)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoBDDMockito")
