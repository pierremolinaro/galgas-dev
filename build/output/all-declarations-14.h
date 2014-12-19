#ifndef all_2D_declarations_2D__31__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-13.h"

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
                                                           class GALGAS_stringlist & ioArgument5,
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
                                  class GALGAS_stringlist & ioArgument3,
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
                                   class GALGAS_stringlist & ioArgument3,
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
//                                   Filewrapper 'xcodeProjectGenerationFilewrapper'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_xcodeProjectGenerationFilewrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_REF,
                                                                               const class GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const class GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const class GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const class GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const class GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const class GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const class GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const class GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const class GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
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
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                                               const class GALGAS_stringlist & in_TOOL_5F_CPP_5F_FILE_5F_LIST,
                                                                                               const class GALGAS_string & in_LIBPM_5F_PATH,
                                                                                               const class GALGAS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST,
                                                                                               const class GALGAS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET,
                                                                                               const class GALGAS_bool & in_GENERATE_5F_FOR_5F_WINDOWS
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
//                                   Routine 'generateGalgasCodeBlocksWindowsTarget'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksWindowsTarget (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_string constinArgument1,
                                                    const class GALGAS_stringlist constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_stringlist constinArgument4,
                                                    const class GALGAS_stringset constinArgument5,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'generateGalgasCodeBlocksLinuxMacTarget'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksLinuxMacTarget (const class GALGAS_string constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     const class GALGAS_stringlist constinArgument2,
                                                     const class GALGAS_string constinArgument3,
                                                     const class GALGAS_stringlist constinArgument4,
                                                     const class GALGAS_stringset constinArgument5,
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
//                              Category method '@XcodeProjectDescriptor generateAtPath'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateAtPath (const class GALGAS_XcodeProjectDescriptor inObject,
                                    const class GALGAS_string constin_inPath,
                                    const class GALGAS_string constin_inCacheFilePath,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addAppTarget'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addAppTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inTargetName,
                                    const class GALGAS_string constin_inProductFileName,
                                    const class GALGAS_stringlist constin_inSourceList,
                                    const class GALGAS_stringlist constin_inFrameworksFileRefList,
                                    const class GALGAS_stringlist constin_inResourceFileBuildRefs,
                                    const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                    const class GALGAS_stringlist constin_inDependentTargetRefList,
                                    const class GALGAS__32_stringlist constin_inProductCopyList,
                                    class GALGAS_string & out_outProductFileRef,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@XcodeProjectDescriptor addGroup'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inGroupName,
                                const class GALGAS_string constin_inGroupPath,
                                const class GALGAS_stringlist constin_inChildrenRefs,
                                class GALGAS_string & out_outGroupRef,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@XcodeProjectDescriptor addGroupWithFiles'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroupWithFiles (class GALGAS_XcodeProjectDescriptor & ioObject,
                                         const class GALGAS_string constin_inGroupName,
                                         const class GALGAS_string constin_inGroupPath,
                                         const class GALGAS_stringset constin_inFileNames,
                                         class GALGAS_stringlist & io_ioCppFileBuildRefs,
                                         class GALGAS_stringlist & io_ioMFileBuildRefs,
                                         class GALGAS_stringlist & io_ioMMFileBuildRefs,
                                         class GALGAS_stringlist & io_ioFrameWorkFileBuildRefs,
                                         class GALGAS_stringlist & io_ioResourceFileBuildRefs,
                                         class GALGAS_string & out_outGroupRef,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSettingsToDefaultConfiguration (class GALGAS_XcodeProjectDescriptor & ioObject,
                                                         const class GALGAS_stringlist constin_inSettingList,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addToolTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                     const class GALGAS_string constin_inTargetName,
                                     const class GALGAS_string constin_inProductFileName,
                                     const class GALGAS_stringlist constin_inSourceList,
                                     const class GALGAS_stringlist constin_inToolFrameworksFileRefList,
                                     const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                     class GALGAS_string & out_outTargetRef,
                                     class GALGAS_string & out_outProductFileRef,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category setter '@XcodeProjectDescriptor placeGroupAsMainGroup'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_placeGroupAsMainGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                             const class GALGAS_string constin_inGroupRef,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @XcodeProjectDescriptor struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mMainGroupReference ;
  public : GALGAS_stringlist mAttribute_mMainGroupChildrenRefs ;
  public : GALGAS_string mAttribute_mProjectObjectReference ;
  public : GALGAS_XCodeGroupList mAttribute_mGroupList ;
  public : GALGAS_XCodeToolTargetList mAttribute_mToolTargetList ;
  public : GALGAS_XCodeAppTargetList mAttribute_mAppTargetList ;
  public : GALGAS__32_stringlist mAttribute_mCppFileList ;
  public : GALGAS__32_stringlist mAttribute_m_5F_M_5F_FileList ;
  public : GALGAS__32_stringlist mAttribute_m_5F_MM_5F_FileList ;
  public : GALGAS__32_stringlist mAttribute_mFrameworkFileList ;
  public : GALGAS__32_stringlist mAttribute_mHeaderFileList ;
  public : GALGAS_BuildFileList mAttribute_mBuildFileList ;
  public : GALGAS_string mAttribute_mDefaultConfigurationRef ;
  public : GALGAS_stringlist mAttribute_mDefaultConfigurationSettingList ;
  public : GALGAS_string mAttribute_mProjectBuildConfigurationRef ;
  public : GALGAS__32_stringlist mAttribute_mInfoPlistFileList ;
  public : GALGAS__32_stringlist mAttribute_mXIB_5F_fileList ;
  public : GALGAS__32_stringlist mAttribute_mTIFF_5F_fileList ;
  public : GALGAS__32_stringlist mAttribute_mICNS_5F_fileList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XcodeProjectDescriptor constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XcodeProjectDescriptor (const GALGAS_uint & in_mSequenceNumber,
                                          const GALGAS_string & in_mMainGroupReference,
                                          const GALGAS_stringlist & in_mMainGroupChildrenRefs,
                                          const GALGAS_string & in_mProjectObjectReference,
                                          const GALGAS_XCodeGroupList & in_mGroupList,
                                          const GALGAS_XCodeToolTargetList & in_mToolTargetList,
                                          const GALGAS_XCodeAppTargetList & in_mAppTargetList,
                                          const GALGAS__32_stringlist & in_mCppFileList,
                                          const GALGAS__32_stringlist & in_m_5F_M_5F_FileList,
                                          const GALGAS__32_stringlist & in_m_5F_MM_5F_FileList,
                                          const GALGAS__32_stringlist & in_mFrameworkFileList,
                                          const GALGAS__32_stringlist & in_mHeaderFileList,
                                          const GALGAS_BuildFileList & in_mBuildFileList,
                                          const GALGAS_string & in_mDefaultConfigurationRef,
                                          const GALGAS_stringlist & in_mDefaultConfigurationSettingList,
                                          const GALGAS_string & in_mProjectBuildConfigurationRef,
                                          const GALGAS__32_stringlist & in_mInfoPlistFileList,
                                          const GALGAS__32_stringlist & in_mXIB_5F_fileList,
                                          const GALGAS__32_stringlist & in_mTIFF_5F_fileList,
                                          const GALGAS__32_stringlist & in_mICNS_5F_fileList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XcodeProjectDescriptor extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XcodeProjectDescriptor constructor_new (const class GALGAS_uint & inOperand0,
                                                                 const class GALGAS_string & inOperand1,
                                                                 const class GALGAS_stringlist & inOperand2,
                                                                 const class GALGAS_string & inOperand3,
                                                                 const class GALGAS_XCodeGroupList & inOperand4,
                                                                 const class GALGAS_XCodeToolTargetList & inOperand5,
                                                                 const class GALGAS_XCodeAppTargetList & inOperand6,
                                                                 const class GALGAS__32_stringlist & inOperand7,
                                                                 const class GALGAS__32_stringlist & inOperand8,
                                                                 const class GALGAS__32_stringlist & inOperand9,
                                                                 const class GALGAS__32_stringlist & inOperand10,
                                                                 const class GALGAS__32_stringlist & inOperand11,
                                                                 const class GALGAS_BuildFileList & inOperand12,
                                                                 const class GALGAS_string & inOperand13,
                                                                 const class GALGAS_stringlist & inOperand14,
                                                                 const class GALGAS_string & inOperand15,
                                                                 const class GALGAS__32_stringlist & inOperand16,
                                                                 const class GALGAS__32_stringlist & inOperand17,
                                                                 const class GALGAS__32_stringlist & inOperand18,
                                                                 const class GALGAS__32_stringlist & inOperand19
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList reader_mAppTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList reader_mBuildFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mCppFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mDefaultConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mFrameworkFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList reader_mGroupList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mHeaderFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mICNS_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mInfoPlistFileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mMainGroupChildrenRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mMainGroupReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProjectBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProjectObjectReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mTIFF_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList reader_mToolTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mXIB_5F_fileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_m_5F_MM_5F_FileList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_m_5F_M_5F_FileList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XcodeProjectDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

#endif
