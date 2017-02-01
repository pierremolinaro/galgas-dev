#ifndef all_2D_declarations_2D__32__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-25.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'updateLIBPMatPath'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_updateLIBPMatPath (const class GALGAS_string constinArgument0,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

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
//                                      Routine 'generateFewImplementationFiles'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFewImplementationFiles (const class GALGAS_unifiedTypeMap constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_semanticDeclarationListForGeneration constinArgument2,
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
                                                           const class GALGAS_semanticDeclarationListForGeneration constinArgument2,
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
                                  const class GALGAS_semanticDeclarationListForGeneration constinArgument1,
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
                                              const class GALGAS_semanticDeclarationListForGeneration constinArgument2,
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
                                   const class GALGAS_semanticDeclarationListForGeneration constinArgument1,
                                   class GALGAS_stringset & ioArgument2,
                                   class GALGAS_stringlist & ioArgument3,
                                   class C_Compiler * inCompiler
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
//                                          Function 'definitionGroupAmount'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_definitionGroupAmount (class C_Compiler * inCompiler
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

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_macosx'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper install_macosx'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_unix'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (class C_Compiler * inCompiler,
                                                                                                                      const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (class C_Compiler * inCompiler,
                                                                                                                      const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (class C_Compiler * inCompiler,
                                                                                                                      const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (class C_Compiler * inCompiler,
                                                                                                                      const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_win32_on_mac'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (class C_Compiler * inCompiler
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
                                                                                               const class GALGAS_bool & in_GENERATE_5F_FOR_5F_WINDOWS,
                                                                                               const class GALGAS_string & in_PLATFORM,
                                                                                               const class GALGAS_bool & in_VERBOSE_5F_OPTION
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
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                              const class GALGAS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_TOOL_5F_LINK_5F_LIST,
                                                                                              const class GALGAS_string & in_LIBPM_5F_DIRECTORY_5F_PATH
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
//                                   Routine 'generateGalgasCodeBlocksWindowsTarget'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksWindowsTarget (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_string constinArgument1,
                                                    const class GALGAS_stringlist constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_stringlist constinArgument4,
                                                    const class GALGAS_stringset constinArgument5,
                                                    const class GALGAS_bool constinArgument6,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateGalgasCodeBlocksMacTarget'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksMacTarget (const class GALGAS_string constinArgument0,
                                                const class GALGAS_string constinArgument1,
                                                const class GALGAS_stringlist constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_stringlist constinArgument4,
                                                const class GALGAS_stringset constinArgument5,
                                                const class GALGAS_bool constinArgument6,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'generateGalgasCodeBlocksLinuxI686Target'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (const class GALGAS_string constinArgument0,
                                                               const class GALGAS_string constinArgument1,
                                                               const class GALGAS_stringlist constinArgument2,
                                                               const class GALGAS_string constinArgument3,
                                                               const class GALGAS_stringlist constinArgument4,
                                                               const class GALGAS_stringset constinArgument5,
                                                               const class GALGAS_bool constinArgument6,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'generateGalgasCodeBlocksLinuxX86_64Target'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (const class GALGAS_string constinArgument0,
                                                                       const class GALGAS_string constinArgument1,
                                                                       const class GALGAS_stringlist constinArgument2,
                                                                       const class GALGAS_string constinArgument3,
                                                                       const class GALGAS_stringlist constinArgument4,
                                                                       const class GALGAS_stringset constinArgument5,
                                                                       const class GALGAS_bool constinArgument6,
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

#endif
