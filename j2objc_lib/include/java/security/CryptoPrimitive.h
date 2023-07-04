//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/CryptoPrimitive.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCryptoPrimitive")
#ifdef RESTRICT_JavaSecurityCryptoPrimitive
#define INCLUDE_ALL_JavaSecurityCryptoPrimitive 0
#else
#define INCLUDE_ALL_JavaSecurityCryptoPrimitive 1
#endif
#undef RESTRICT_JavaSecurityCryptoPrimitive

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCryptoPrimitive_) && (INCLUDE_ALL_JavaSecurityCryptoPrimitive || defined(INCLUDE_JavaSecurityCryptoPrimitive))
#define JavaSecurityCryptoPrimitive_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaSecurityCryptoPrimitive_Enum) {
  JavaSecurityCryptoPrimitive_Enum_MESSAGE_DIGEST = 0,
  JavaSecurityCryptoPrimitive_Enum_SECURE_RANDOM = 1,
  JavaSecurityCryptoPrimitive_Enum_BLOCK_CIPHER = 2,
  JavaSecurityCryptoPrimitive_Enum_STREAM_CIPHER = 3,
  JavaSecurityCryptoPrimitive_Enum_MAC = 4,
  JavaSecurityCryptoPrimitive_Enum_KEY_WRAP = 5,
  JavaSecurityCryptoPrimitive_Enum_PUBLIC_KEY_ENCRYPTION = 6,
  JavaSecurityCryptoPrimitive_Enum_SIGNATURE = 7,
  JavaSecurityCryptoPrimitive_Enum_KEY_ENCAPSULATION = 8,
  JavaSecurityCryptoPrimitive_Enum_KEY_AGREEMENT = 9,
};

/*!
 @brief An enumeration of cryptographic primitives.
 @since 1.7
 */
@interface JavaSecurityCryptoPrimitive : JavaLangEnum

@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *MESSAGE_DIGEST NS_SWIFT_NAME(MESSAGE_DIGEST);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *SECURE_RANDOM NS_SWIFT_NAME(SECURE_RANDOM);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *BLOCK_CIPHER NS_SWIFT_NAME(BLOCK_CIPHER);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *STREAM_CIPHER NS_SWIFT_NAME(STREAM_CIPHER);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *MAC NS_SWIFT_NAME(MAC);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *KEY_WRAP NS_SWIFT_NAME(KEY_WRAP);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *PUBLIC_KEY_ENCRYPTION NS_SWIFT_NAME(PUBLIC_KEY_ENCRYPTION);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *SIGNATURE NS_SWIFT_NAME(SIGNATURE);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *KEY_ENCAPSULATION NS_SWIFT_NAME(KEY_ENCAPSULATION);
@property (readonly, class, nonnull) JavaSecurityCryptoPrimitive *KEY_AGREEMENT NS_SWIFT_NAME(KEY_AGREEMENT);
#pragma mark Public

+ (JavaSecurityCryptoPrimitive *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaSecurityCryptoPrimitive_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaSecurityCryptoPrimitive)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_values_[];

/*!
 @brief Hash function
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_MESSAGE_DIGEST(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, MESSAGE_DIGEST)

/*!
 @brief Cryptographic random number generator
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_SECURE_RANDOM(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, SECURE_RANDOM)

/*!
 @brief Symmetric primitive: block cipher
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_BLOCK_CIPHER(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, BLOCK_CIPHER)

/*!
 @brief Symmetric primitive: stream cipher
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_STREAM_CIPHER(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, STREAM_CIPHER)

/*!
 @brief Symmetric primitive: message authentication code
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_MAC(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, MAC)

/*!
 @brief Symmetric primitive: key wrap
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_KEY_WRAP(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, KEY_WRAP)

/*!
 @brief Asymmetric primitive: public key encryption
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_PUBLIC_KEY_ENCRYPTION(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, PUBLIC_KEY_ENCRYPTION)

/*!
 @brief Asymmetric primitive: signature scheme
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_SIGNATURE(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, SIGNATURE)

/*!
 @brief Asymmetric primitive: key encapsulation mechanism
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_KEY_ENCAPSULATION(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, KEY_ENCAPSULATION)

/*!
 @brief Asymmetric primitive: key agreement and key distribution
 */
inline JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_get_KEY_AGREEMENT(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCryptoPrimitive, KEY_AGREEMENT)

FOUNDATION_EXPORT IOSObjectArray *JavaSecurityCryptoPrimitive_values(void);

FOUNDATION_EXPORT JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaSecurityCryptoPrimitive *JavaSecurityCryptoPrimitive_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCryptoPrimitive)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCryptoPrimitive")
