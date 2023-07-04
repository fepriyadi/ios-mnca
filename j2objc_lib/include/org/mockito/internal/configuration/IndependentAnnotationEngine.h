//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/IndependentAnnotationEngine.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationIndependentAnnotationEngine")
#ifdef RESTRICT_OrgMockitoInternalConfigurationIndependentAnnotationEngine
#define INCLUDE_ALL_OrgMockitoInternalConfigurationIndependentAnnotationEngine 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationIndependentAnnotationEngine 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationIndependentAnnotationEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationIndependentAnnotationEngine_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationIndependentAnnotationEngine || defined(INCLUDE_OrgMockitoInternalConfigurationIndependentAnnotationEngine))
#define OrgMockitoInternalConfigurationIndependentAnnotationEngine_

#define RESTRICT_OrgMockitoPluginsAnnotationEngine 1
#define INCLUDE_OrgMockitoPluginsAnnotationEngine 1
#include "org/mockito/plugins/AnnotationEngine.h"

#define RESTRICT_OrgMockitoConfigurationAnnotationEngine 1
#define INCLUDE_OrgMockitoConfigurationAnnotationEngine 1
#include "org/mockito/configuration/AnnotationEngine.h"

@class IOSClass;
@class JavaLangReflectField;

/*!
 @brief Initializes fields annotated with &#64;<code>org.mockito.Mock</code> or &#64;<code>org.mockito.Captor</code>.
 <p>
  The <code>process(Class, Object)</code> method implementation <strong>does not</strong> process super classes!
 - seealso: MockitoAnnotations
 */
@interface OrgMockitoInternalConfigurationIndependentAnnotationEngine : NSObject < OrgMockitoPluginsAnnotationEngine, OrgMockitoConfigurationAnnotationEngine >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)processWithIOSClass:(IOSClass *)clazz
                     withId:(id)testInstance;

#pragma mark Package-Private

- (void)throwIfAlreadyAssignedWithJavaLangReflectField:(JavaLangReflectField *)field
                                           withBoolean:(jboolean)alreadyAssigned;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationIndependentAnnotationEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationIndependentAnnotationEngine_init(OrgMockitoInternalConfigurationIndependentAnnotationEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationIndependentAnnotationEngine *new_OrgMockitoInternalConfigurationIndependentAnnotationEngine_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationIndependentAnnotationEngine *create_OrgMockitoInternalConfigurationIndependentAnnotationEngine_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationIndependentAnnotationEngine)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationIndependentAnnotationEngine")
