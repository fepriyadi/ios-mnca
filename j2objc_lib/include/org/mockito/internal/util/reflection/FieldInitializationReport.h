//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldInitializationReport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldInitializationReport")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionFieldInitializationReport
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldInitializationReport 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldInitializationReport 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionFieldInitializationReport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilReflectionFieldInitializationReport_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldInitializationReport || defined(INCLUDE_OrgMockitoInternalUtilReflectionFieldInitializationReport))
#define OrgMockitoInternalUtilReflectionFieldInitializationReport_

@class IOSClass;

/*!
 @brief Report on field initialization
 */
@interface OrgMockitoInternalUtilReflectionFieldInitializationReport : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)fieldInstance
                         withBoolean:(jboolean)wasInitialized
                         withBoolean:(jboolean)wasInitializedUsingConstructorArgs;

/*!
 @brief Returns the class of the actual instance in the field.
 @return Class of the instance
 */
- (IOSClass *)fieldClass;

/*!
 @brief Returns the actual field instance.
 @return the actual instance
 */
- (id)fieldInstance;

/*!
 @brief Indicate whether the field was created during the process or not.
 @return <code>true</code> if created, <code>false</code> if the field did already hold an instance.
 */
- (jboolean)fieldWasInitialized;

/*!
 @brief Indicate whether the field was created using constructor args.
 @return <code>true</code> if field was created using constructor parameters.
 */
- (jboolean)fieldWasInitializedUsingContructorArgs;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializationReport)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionFieldInitializationReport_initWithId_withBoolean_withBoolean_(OrgMockitoInternalUtilReflectionFieldInitializationReport *self, id fieldInstance, jboolean wasInitialized, jboolean wasInitializedUsingConstructorArgs);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFieldInitializationReport *new_OrgMockitoInternalUtilReflectionFieldInitializationReport_initWithId_withBoolean_withBoolean_(id fieldInstance, jboolean wasInitialized, jboolean wasInitializedUsingConstructorArgs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFieldInitializationReport *create_OrgMockitoInternalUtilReflectionFieldInitializationReport_initWithId_withBoolean_withBoolean_(id fieldInstance, jboolean wasInitialized, jboolean wasInitializedUsingConstructorArgs);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializationReport)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldInitializationReport")