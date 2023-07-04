//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CRLSelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCRLSelector")
#ifdef RESTRICT_JavaSecurityCertCRLSelector
#define INCLUDE_ALL_JavaSecurityCertCRLSelector 0
#else
#define INCLUDE_ALL_JavaSecurityCertCRLSelector 1
#endif
#undef RESTRICT_JavaSecurityCertCRLSelector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCRLSelector_) && (INCLUDE_ALL_JavaSecurityCertCRLSelector || defined(INCLUDE_JavaSecurityCertCRLSelector))
#define JavaSecurityCertCRLSelector_

@class JavaSecurityCertCRL;

/*!
 @brief A selector that defines a set of criteria for selecting <code>CRL</code>s.
 Classes that implement this interface are often used to specify
  which <code>CRL</code>s should be retrieved from a <code>CertStore</code>.
  <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this interface are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: CRL
 - seealso: CertStore
 - seealso: CertStore#getCRLs
 @author Steve Hanna
 @since 1.4
 */
@protocol JavaSecurityCertCRLSelector < NSCopying, JavaObject >

/*!
 @brief Decides whether a <code>CRL</code> should be selected.
 @param crl the <code>CRL</code>  to be checked
 @return <code>true</code> if the <code>CRL</code> should be selected, 
 <code>false</code> otherwise
 */
- (jboolean)matchWithJavaSecurityCertCRL:(JavaSecurityCertCRL *)crl;

/*!
 @brief Makes a copy of this <code>CRLSelector</code>.Changes to the
  copy will not affect the original and vice versa.
 @return a copy of this <code>CRLSelector</code>
 */
- (id)clone;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCRLSelector)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCRLSelector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCRLSelector")
