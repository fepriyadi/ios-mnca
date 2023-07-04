//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/HashBasedTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashBasedTable")
#ifdef RESTRICT_ComGoogleCommonCollectHashBasedTable
#define INCLUDE_ALL_ComGoogleCommonCollectHashBasedTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashBasedTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashBasedTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectHashBasedTable_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBasedTable || defined(INCLUDE_ComGoogleCommonCollectHashBasedTable))
#define ComGoogleCommonCollectHashBasedTable_

#define RESTRICT_ComGoogleCommonCollectStandardTable 1
#define INCLUDE_ComGoogleCommonCollectStandardTable 1
#include "com/google/common/collect/StandardTable.h"

@class ComGoogleCommonCollectHashBasedTable_Factory;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilMap;

/*!
 @brief Implementation of <code>Table</code> using linked hash tables.This guarantees predictable iteration
  order of the various views.
 <p>The views returned by <code>column</code>, <code>columnKeySet()</code>, and <code>columnMap()</code> have
  iterators that don't support <code>remove()</code>. Otherwise, all optional operations are supported.
  Null row keys, columns keys, and values are not supported. 
 <p>Lookups by row key are often faster than lookups by column key, because the data is stored in
  a <code>Map<R, Map<C, V>></code>. A method call like <code>column(columnKey).get(rowKey)</code> still runs
  quickly, since the row key is provided. However, <code>column(columnKey).size()</code> takes longer,
  since an iteration across all row keys occurs. 
 <p>Note that this implementation is not synchronized. If multiple threads access this table
  concurrently and one of the threads modifies the table, it must be synchronized externally. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#table">
  <code>Table</code></a>.
 @author Jared Levy
 @since 7.0
 */
@interface ComGoogleCommonCollectHashBasedTable : ComGoogleCommonCollectStandardTable

#pragma mark Public

- (jboolean)containsWithId:(id __nullable)rowKey
                    withId:(id __nullable)columnKey;

- (jboolean)containsColumnWithId:(id __nullable)columnKey;

- (jboolean)containsRowWithId:(id __nullable)rowKey;

- (jboolean)containsValueWithId:(id __nullable)value;

/*!
 @brief Creates an empty <code>HashBasedTable</code>.
 */
+ (ComGoogleCommonCollectHashBasedTable *)create;

/*!
 @brief Creates an empty <code>HashBasedTable</code> with the specified map sizes.
 @param expectedRows the expected number of distinct row keys
 @param expectedCellsPerRow the expected number of column key / value mappings in each row
 @throw IllegalArgumentExceptionif <code>expectedRows</code> or <code>expectedCellsPerRow</code> is
      negative
 */
+ (ComGoogleCommonCollectHashBasedTable *)createWithInt:(jint)expectedRows
                                                withInt:(jint)expectedCellsPerRow;

/*!
 @brief Creates a <code>HashBasedTable</code> with the same mappings as the specified table.
 @param table the table to copy
 @throw NullPointerExceptionif any of the row keys, column keys, or values in <code>table</code> is
      null
 */
+ (ComGoogleCommonCollectHashBasedTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

- (jboolean)isEqual:(id __nullable)obj;

- (id)getWithId:(id __nullable)rowKey
         withId:(id __nullable)columnKey;

- (id)removeWithId:(id __nullable)rowKey
            withId:(id __nullable)columnKey;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap> __nonnull)backingMap
withComGoogleCommonCollectHashBasedTable_Factory:(ComGoogleCommonCollectHashBasedTable_Factory * __nonnull)factory;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)arg0
                            withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier> __nonnull)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBasedTable)

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *ComGoogleCommonCollectHashBasedTable_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *ComGoogleCommonCollectHashBasedTable_createWithInt_withInt_(jint expectedRows, jint expectedCellsPerRow);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *ComGoogleCommonCollectHashBasedTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBasedTable_initWithJavaUtilMap_withComGoogleCommonCollectHashBasedTable_Factory_(ComGoogleCommonCollectHashBasedTable *self, id<JavaUtilMap> backingMap, ComGoogleCommonCollectHashBasedTable_Factory *factory);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *new_ComGoogleCommonCollectHashBasedTable_initWithJavaUtilMap_withComGoogleCommonCollectHashBasedTable_Factory_(id<JavaUtilMap> backingMap, ComGoogleCommonCollectHashBasedTable_Factory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *create_ComGoogleCommonCollectHashBasedTable_initWithJavaUtilMap_withComGoogleCommonCollectHashBasedTable_Factory_(id<JavaUtilMap> backingMap, ComGoogleCommonCollectHashBasedTable_Factory *factory);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBasedTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashBasedTable")
