//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ImmutableAsList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableAsList
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableAsList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableAsList_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList || defined(INCLUDE_ComGoogleCommonCollectImmutableAsList))
#define ComGoogleCommonCollectImmutableAsList_

#define RESTRICT_ComGoogleCommonCollectImmutableList 1
#define INCLUDE_ComGoogleCommonCollectImmutableList 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectImmutableCollection;

/*!
 @brief List returned by <code>ImmutableCollection.asList</code> that delegates <code>contains</code> checks to the
  backing collection.
 @author Jared Levy
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectImmutableAsList : ComGoogleCommonCollectImmutableList

#pragma mark Public

- (jboolean)containsWithId:(id __nonnull)target;

- (jboolean)isEmpty;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableAsList)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableAsList_initPackagePrivate(ComGoogleCommonCollectImmutableAsList *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableAsList)

#endif

#if !defined (ComGoogleCommonCollectImmutableAsList_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList || defined(INCLUDE_ComGoogleCommonCollectImmutableAsList_SerializedForm))
#define ComGoogleCommonCollectImmutableAsList_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;

/*!
 @brief Serialized form that leads to the same performance as the original list.
 */
@interface ComGoogleCommonCollectImmutableAsList_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableCollection *collection_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)collection;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableAsList_SerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableAsList_SerializedForm, collection_, ComGoogleCommonCollectImmutableCollection *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableAsList_SerializedForm *self, ComGoogleCommonCollectImmutableCollection *collection);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableAsList_SerializedForm *new_ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableCollection *collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableAsList_SerializedForm *create_ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableCollection *collection);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableAsList_SerializedForm)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableAsList")