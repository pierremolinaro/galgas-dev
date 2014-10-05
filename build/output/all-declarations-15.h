#ifndef all_2D_declarations_2D__31__35__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__35__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-14.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildGalgas3SemanticContext'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGalgas_33_SemanticContext (const class GALGAS_semanticDeclarationListAST constinArgument0,
                                             const class GALGAS_location constinArgument1,
                                             class GALGAS_semanticContext & outArgument2,
                                             class GALGAS_semanticDeclarationListAST & outArgument3,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'definitionGroupAmount'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_definitionGroupAmount (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendSpecificFiles'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const class GALGAS_string constinArgument0,
                                                                                              class GALGAS_stringset & ioArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSpecificFiles (const int32_t inClassIndex,
                                              categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificFiles inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSpecificFiles (const class cPtr_semanticDeclarationForGeneration * inObject,
                                             const GALGAS_string constin_inProductDirectory,
                                             GALGAS_stringset & io_ioAllProductFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateFewImplementationFiles'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFewImplementationFiles (const class GALGAS_unifiedTypeMap constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument2,
                                             class GALGAS_stringlist & ioArgument3,
                                             class GALGAS_stringset & ioArgument4,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'generateFewImplementationFilesWithFewHeaders'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFewImplementationFilesWithFewHeaders (const class GALGAS_unifiedTypeMap constinArgument0,
                                                           const class GALGAS_string constinArgument1,
                                                           const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument2,
                                                           class GALGAS_stringlist & ioArgument3,
                                                           class GALGAS_stringset & ioArgument4,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'generateManyHeaders'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateManyHeaders (const class GALGAS_string constinArgument0,
                                  const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument1,
                                  class GALGAS_stringset & ioArgument2,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateManyImplementationFiles'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateManyImplementationFiles (const class GALGAS_unifiedTypeMap constinArgument0,
                                              const class GALGAS_string constinArgument1,
                                              const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument2,
                                              class GALGAS_stringlist & ioArgument3,
                                              class GALGAS_stringset & ioArgument4,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateOneBigHeader'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateOneBigHeader (const class GALGAS_string constinArgument0,
                                   const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument1,
                                   class GALGAS_stringset & ioArgument2,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@semanticDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_headerKind (*categoryReaderSignature_semanticDeclarationForGeneration_headerKind) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerKind (const int32_t inClassIndex,
                                     categoryReaderSignature_semanticDeclarationForGeneration_headerKind inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerKind callCategoryReader_headerKind (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract category reader '@semanticDeclarationForGeneration implementationCppFileName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_implementationCppFileName (const int32_t inClassIndex,
                                                    categoryReaderSignature_semanticDeclarationForGeneration_implementationCppFileName inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_implementationCppFileName (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@semanticDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_semanticDeclarationForGeneration_isPredefined) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isPredefined (const int32_t inClassIndex,
                                       categoryReaderSignature_semanticDeclarationForGeneration_isPredefined inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isPredefined (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildHeader'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildHeader (const class GALGAS_headerCompositionMap constinArgument0,
                          const class GALGAS_string constinArgument1,
                          const class GALGAS_string constinArgument2,
                          class GALGAS_headerRepartitionMap & ioArgument3,
                          class GALGAS_string & ioArgument4,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category reader '@semanticDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_hasCppHeaderFile (const int32_t inClassIndex,
                                           categoryReaderSignature_semanticDeclarationForGeneration_hasCppHeaderFile inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_hasCppHeaderFile (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'updaterGalgas3ApplicationFileWrapper'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_updaterGalgas_33_ApplicationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'updaterGalgas3ApplicationFileWrapper credits'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_credits (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'updaterGalgas3ApplicationFileWrapper info_plist_strings'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_info_5F_plist_5F_strings (class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'updaterGalgas3ApplicationFileWrapper main_menu_xib'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_main_5F_menu_5F_xib (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_TARGET_5F_NAME
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'updaterGalgas3ApplicationFileWrapper application_delegate_header'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_application_5F_delegate_5F_header (class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'updaterGalgas3ApplicationFileWrapper application_delegate_implementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_application_5F_delegate_5F_implementation (class C_Compiler * inCompiler,
                                                                                                                     const class GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                                                     const class GALGAS_string & in_TARGET_5F_NAME
                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'updaterGalgas3ApplicationFileWrapper info_plist'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_info_5F_plist (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                         const class GALGAS_string & in_TARGET_5F_NAME,
                                                                                         const class GALGAS_string & in_CODE_5F_SIGNING_5F_IDENTITY
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'updaterGalgas3ApplicationFileWrapper main'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_main (class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'updaterGalgas3ApplicationFileWrapper prefix'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_prefix (class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'updaterGalgas3ToolFileWrapper'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_updaterGalgas_33_ToolFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_protocol'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_protocol (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_header'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_header (class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_implementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_implementation (class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_main'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_main (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                              const class GALGAS_string & in_TARGET_5F_NAME
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'updaterGalgas3ToolFileWrapper updater_tool_info_plist'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_tool_5F_info_5F_plist (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                                     const class GALGAS_string & in_TARGET_5F_NAME,
                                                                                                     const class GALGAS_string & in_CODE_5F_SIGNING_5F_IDENTITY
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'updaterGalgas3ToolFileWrapper updater_tool_launchd_plist'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_tool_5F_launchd_5F_plist (class C_Compiler * inCompiler,
                                                                                                        const class GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                                        const class GALGAS_string & in_TARGET_5F_NAME
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'applicationGalgas3UpdateFileWrapper'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_applicationGalgas_33_UpdateFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'applicationGalgas3UpdateFileWrapper application_update_header'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_header (class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'applicationGalgas3UpdateFileWrapper application_update_implementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_implementation (class C_Compiler * inCompiler,
                                                                                                                  const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                                  const class GALGAS_string & in_REPOSITORY_5F_URL,
                                                                                                                  const class GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'applicationGalgas3UpdateFileWrapper application_update_nib'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_nib (class C_Compiler * inCompiler,
                                                                                                       const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'applicationGalgas3UpdateFileWrapper download_data_header'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_data_5F_header (class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'applicationGalgas3UpdateFileWrapper download_data_implementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_data_5F_implementation (class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'applicationGalgas3UpdateFileWrapper download_file_header'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_file_5F_header (class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'applicationGalgas3UpdateFileWrapper download_file_implementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_file_5F_implementation (class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'applicationGalgas3UpdateFileWrapper compatibility_header'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_compatibility_5F_header (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'targetGalgas3GenerationFileWrapper'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_2_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_3_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_4_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_5_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_6_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_7_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_8_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_9_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_10_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_11_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_12_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_13_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_14_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_15_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_16_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_17_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_18_targetGalgas_33_GenerationFileWrapper ;
extern const char * gWrapperFileContent_19_targetGalgas_33_GenerationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_2_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_3_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_4_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_5_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_6_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_7_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_8_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_9_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_10_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_11_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_12_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_13_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_14_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_15_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_16_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_17_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_18_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_19_targetGalgas_33_GenerationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_9_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_10_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_11_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_12_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_13_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_14_targetGalgas_33_GenerationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_macosx_makefile'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                        const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx_makefile'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_unix_makefile'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_unix_5F_makefile (class C_Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix_makefile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix_5F_makefile (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_x86_linux32_on_macosx_makefile'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_x_38__36__5F_linux_33__32__5F_on_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                                            const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86_linux32_on_macosx_makefile'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36__5F_linux_33__32__5F_on_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                                         const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_x86_linux64_on_macosx_makefile'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_x_38__36__5F_linux_36__34__5F_on_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                                            const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86_linux64_on_macosx_makefile'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36__5F_linux_36__34__5F_on_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                                         const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_win32_on_macosx_makefile'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_win_33__32__5F_on_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                             const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_macosx_makefile'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_macosx_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                          const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_msys32_on_windows_makefile'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_msys_33__32__5F_on_5F_windows_5F_makefile (class C_Compiler * inCompiler,
                                                                                                                               const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                   const class GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                   const class GALGAS_string & in_VERSION_5F_STRING,
                                                                                                   const class GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_file_list'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_file_5F_list (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                                  const class GALGAS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                                  const class GALGAS_stringlist & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                                  const class GALGAS_stringlist & in_TOOL_5F_LINK_5F_LIST,
                                                                                                  const class GALGAS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                                  const class GALGAS_string & in_MULTI_5F_THREADING_5F_ENABLED
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_VERSION_5F_STRING
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateGalgas3MsysOnWin32Target'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MsysOnWin_33__32_Target (const class GALGAS_string constinArgument0,
                                                        const class GALGAS_string constinArgument1,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'generateGalgas3MinGWOnMacOSXTarget'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MinGWOnMacOSXTarget (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_string constinArgument1,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'generateGalgas3MakefileMacOSXTarget'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MakefileMacOSXTarget (const class GALGAS_string constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateGalgas3MakefileUnixTarget'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MakefileUnixTarget (const class GALGAS_string constinArgument0,
                                                   const class GALGAS_string constinArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generateGalgas3Linux32OnMacOSXTarget'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (const class GALGAS_string constinArgument0,
                                                            const class GALGAS_string constinArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generateGalgas3Linux64OnMacOSXTarget'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (const class GALGAS_string constinArgument0,
                                                            const class GALGAS_string constinArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @expressionCollectionValueForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionCollectionValueForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--- Constructor
  public : GALGAS_expressionCollectionValueForGeneration (void) ;

//---
  public : inline const class cPtr_expressionCollectionValueForGeneration * ptr (void) const { return (const cPtr_expressionCollectionValueForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionCollectionValueForGeneration (const cPtr_expressionCollectionValueForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionCollectionValueForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionCollectionValueForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionCollectionValueForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValueForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @expressionCollectionValueForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionCollectionValueForGeneration : public cPtr_abstractCollectionValueElementForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;

//--- Constructor
  public : cPtr_expressionCollectionValueForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                        const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @expressionListCollectionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionListCollectionForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--- Constructor
  public : GALGAS_expressionListCollectionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionListCollectionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionListCollectionForGeneration * ptr (void) const { return (const cPtr_expressionListCollectionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionListCollectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionListCollectionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionListForGeneration & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration reader_mExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @expressionListCollectionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionListCollectionForGeneration : public cPtr_abstractCollectionValueElementForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                       const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
