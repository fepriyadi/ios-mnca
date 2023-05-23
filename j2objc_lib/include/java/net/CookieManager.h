//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/CookieManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetCookieManager")
#ifdef RESTRICT_JavaNetCookieManager
#define INCLUDE_ALL_JavaNetCookieManager 0
#else
#define INCLUDE_ALL_JavaNetCookieManager 1
#endif
#undef RESTRICT_JavaNetCookieManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetCookieManager_) && (INCLUDE_ALL_JavaNetCookieManager || defined(INCLUDE_JavaNetCookieManager))
#define JavaNetCookieManager_

#define RESTRICT_JavaNetCookieHandler 1
#define INCLUDE_JavaNetCookieHandler 1
#include "java/net/CookieHandler.h"

@class JavaNetURI;
@protocol JavaNetCookiePolicy;
@protocol JavaNetCookieStore;
@protocol JavaUtilMap;

/*!
 @brief CookieManager provides a concrete implementation of <code>CookieHandler</code>,
  which separates the storage of cookies from the policy surrounding accepting
  and rejecting cookies.A CookieManager is initialized with a <code>CookieStore</code>
  which manages storage, and a <code>CookiePolicy</code> object, which makes
  policy decisions on cookie acceptance/rejection.
 <p> The HTTP cookie management in java.net package looks like: 
 <blockquote>
  @code
                 use
  CookieHandler <------- HttpURLConnection
        ^
        | impl
        |         use
  CookieManager -------> CookiePolicy
              |   use
              |--------> HttpCookie
              |              ^
              |              | use
              |   use        |
              |--------> CookieStore
                             ^
                             | impl                            |
                   Internal in-memory implementation 
 
@endcode
  <ul>
    <li>
      CookieHandler is at the core of cookie management. User can call
      CookieHandler.setDefault to set a concrete CookieHanlder implementation
      to be used.   
 </li>
    <li>
      CookiePolicy.shouldAccept will be called by CookieManager.put to see whether
      or not one cookie should be accepted and put into cookie store. User can use
      any of three pre-defined CookiePolicy, namely ACCEPT_ALL, ACCEPT_NONE and
      ACCEPT_ORIGINAL_SERVER, or user can define his own CookiePolicy implementation
      and tell CookieManager to use it.   
 </li>
    <li>
      CookieStore is the place where any accepted HTTP cookie is stored in.
      If not specified when created, a CookieManager instance will use an internal
      in-memory implementation. Or user can implements one and tell CookieManager
      to use it.   
 </li>
    <li>
      Currently, only CookieStore.add(URI, HttpCookie) and CookieStore.get(URI)
      are used by CookieManager. Others are for completeness and might be needed
      by a more sophisticated CookieStore implementation, e.g. a NetscapeCookieSotre.   
 </li>
  </ul>
  </blockquote>
  
 <p>There're various ways user can hook up his own HTTP cookie management behavior, e.g. 
 <blockquote>
  <ul>
    <li>Use CookieHandler.setDefault to set a brand new <code>CookieHandler</code> implementation
    <li>Let CookieManager be the default <code>CookieHandler</code> implementation,
        but implement user's own <code>CookieStore</code> and <code>CookiePolicy</code>
        and tell default CookieManager to use them:     
 <blockquote>@code

        // this should be done at the beginning of an HTTP session
        CookieHandler.setDefault(new CookieManager(new MyCookieStore(), new MyCookiePolicy()));     
     
@endcode</blockquote>
    <li>Let CookieManager be the default <code>CookieHandler</code> implementation, but
        use customized <code>CookiePolicy</code>:
      <blockquote>@code

        // this should be done at the beginning of an HTTP session
        CookieHandler.setDefault(new CookieManager());
        // this can be done at any point of an HTTP session
        ((CookieManager)CookieHandler.getDefault()).setCookiePolicy(new MyCookiePolicy());     
     
@endcode</blockquote>
  </ul>
  </blockquote>
  
 <p>The implementation conforms to <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a>, section 3.3.
 - seealso: CookiePolicy
 @author Edward Wang
 @since 1.6
 */
@interface JavaNetCookieManager : JavaNetCookieHandler

#pragma mark Public

/*!
 @brief Create a new cookie manager.
 <p>This constructor will create new cookie manager with default
  cookie store and accept policy. The effect is same as 
 <code>CookieManager(null, null)</code>.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a new cookie manager with specified cookie store and cookie policy.
 @param store a <code>CookieStore</code>  to be used by cookie manager.                   if 
 <code>null</code> , cookie manager will use a default one,                   which is an in-memory CookieStore implementation.
 @param cookiePolicy a <code>CookiePolicy</code>  instance                           to be used by cookie manager as policy callback.
                            if 
 <code>null</code> , ACCEPT_ORIGINAL_SERVER will                           be used.
 */
- (instancetype __nonnull)initWithJavaNetCookieStore:(id<JavaNetCookieStore>)store
                             withJavaNetCookiePolicy:(id<JavaNetCookiePolicy>)cookiePolicy;

- (id<JavaUtilMap>)getWithJavaNetURI:(JavaNetURI *)uri
                     withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

/*!
 @brief To retrieve current cookie store.
 @return the cookie store currently used by cookie manager.
 */
- (id<JavaNetCookieStore>)getCookieStore;

- (void)putWithJavaNetURI:(JavaNetURI *)uri
          withJavaUtilMap:(id<JavaUtilMap>)responseHeaders;

/*!
 @brief To set the cookie policy of this cookie manager.
 <p> A instance of <code>CookieManager</code> will have
  cookie policy ACCEPT_ORIGINAL_SERVER by default. Users always
  can call this method to set another cookie policy.
 @param cookiePolicy the cookie policy. Can be <code>null</code> , which                           has no effects on current cookie policy.
 */
- (void)setCookiePolicyWithJavaNetCookiePolicy:(id<JavaNetCookiePolicy>)cookiePolicy;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieManager)

FOUNDATION_EXPORT void JavaNetCookieManager_init(JavaNetCookieManager *self);

FOUNDATION_EXPORT JavaNetCookieManager *new_JavaNetCookieManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetCookieManager *create_JavaNetCookieManager_init(void);

FOUNDATION_EXPORT void JavaNetCookieManager_initWithJavaNetCookieStore_withJavaNetCookiePolicy_(JavaNetCookieManager *self, id<JavaNetCookieStore> store, id<JavaNetCookiePolicy> cookiePolicy);

FOUNDATION_EXPORT JavaNetCookieManager *new_JavaNetCookieManager_initWithJavaNetCookieStore_withJavaNetCookiePolicy_(id<JavaNetCookieStore> store, id<JavaNetCookiePolicy> cookiePolicy) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetCookieManager *create_JavaNetCookieManager_initWithJavaNetCookieStore_withJavaNetCookiePolicy_(id<JavaNetCookieStore> store, id<JavaNetCookiePolicy> cookiePolicy);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieManager)

#endif

#if !defined (JavaNetCookieManager_CookiePathComparator_) && (INCLUDE_ALL_JavaNetCookieManager || defined(INCLUDE_JavaNetCookieManager_CookiePathComparator))
#define JavaNetCookieManager_CookiePathComparator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class JavaNetHttpCookie;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

@interface JavaNetCookieManager_CookiePathComparator : NSObject < JavaUtilComparator >

#pragma mark Public

- (jint)compareWithId:(JavaNetHttpCookie *)c1
               withId:(JavaNetHttpCookie *)c2;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieManager_CookiePathComparator)

FOUNDATION_EXPORT void JavaNetCookieManager_CookiePathComparator_init(JavaNetCookieManager_CookiePathComparator *self);

FOUNDATION_EXPORT JavaNetCookieManager_CookiePathComparator *new_JavaNetCookieManager_CookiePathComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetCookieManager_CookiePathComparator *create_JavaNetCookieManager_CookiePathComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieManager_CookiePathComparator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetCookieManager")