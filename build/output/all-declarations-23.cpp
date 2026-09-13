#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget??buildDirName???libpmPath???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                         const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                         const GGS_string constinArgument_inProjectName,
                                                                                                         const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                         const GGS_string constinArgument_inLIBPMpath,
                                                                                                         const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                         const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                         const GGS_bool constinArgument_inVerboseOption,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_6721 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 114)) ;
  var_dir_6721.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 115)) ;
  GGS_string var_s_6814 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (true), GGS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 116))) ;
  GGS_bool joker_7206 ; // Joker input parameter
  var_s_6814.method_writeToFileWhenDifferentContents (var_dir_6721.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 127)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 127)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 127)), joker_7206, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 127)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target??buildDirName??????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                           const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                           const GGS_string constinArgument_inProjectName,
                                                                                                           const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                           const GGS_string constinArgument_inLIBPMpath,
                                                                                                           const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                           const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                           const GGS_bool constinArgument_inVerboseOption,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_7682 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 142)) ;
  var_dir_7682.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 143)) ;
  GGS_string var_s_7775 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 144))) ;
  GGS_bool joker_8165 ; // Joker input parameter
  var_s_7775.method_writeToFileWhenDifferentContents (var_dir_7682.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 155)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 155)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 155)), joker_8165, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 155)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target??buildDirName??????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                                   const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                   const GGS_string constinArgument_inProjectName,
                                                                                                                   const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                                   const GGS_string constinArgument_inLIBPMpath,
                                                                                                                   const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                   const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                                   const GGS_bool constinArgument_inVerboseOption,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_8642 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 170)) ;
  var_dir_8642.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 171)) ;
  GGS_string var_s_8735 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 172))) ;
  GGS_bool joker_9125 ; // Joker input parameter
  var_s_8735.method_writeToFileWhenDifferentContents (var_dir_8642.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 183)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 183)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 183)), joker_9125, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 183)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                          const GGS_string constinArgument_inBuildDirectoryName,
                                                                          const GGS_string constinArgument_inProjectName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_9412 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 192)) ;
  var_dir_9412.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 193)) ;
  GGS_bool joker_9658 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 194))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 194)), joker_9658, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 194)) ;
  GGS_bool joker_9810 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 195))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 195)), joker_9810, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 195)) ;
  GGS_bool joker_9954 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 196))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 196)), joker_9954, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 196)) ;
  GGS_bool joker_10102 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 197))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 197)), joker_10102, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 197)) ;
  GGS_bool joker_10254 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 198))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 198)), joker_10254, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 198)) ;
  GGS_bool joker_10413 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 199))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 200)), joker_10413, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 199)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9412.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 203)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                 const GGS_string constinArgument_inBuildDirectoryName,
                                                                 const GGS_string constinArgument_inProjectName,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_10744 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 212)) ;
  var_dir_10744.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 213)) ;
  GGS_bool joker_10971 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 214))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 214)), joker_10971, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 214)) ;
  GGS_bool joker_11115 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 215)), joker_11115, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 215)) ;
  GGS_bool joker_11251 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 216)), joker_11251, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 216)) ;
  GGS_bool joker_11391 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 217)), joker_11391, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 217)) ;
  GGS_bool joker_11535 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 218)), joker_11535, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 218)) ;
  GGS_bool joker_11667 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 219))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 219)), joker_11667, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 219)) ;
  GGS_bool joker_11810 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 220))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 220)), joker_11810, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 220)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_10744.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 221)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 221)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                const GGS_string constinArgument_inBuildDirectoryName,
                                                                const GGS_string constinArgument_inProjectName,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_12137 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 230)) ;
  var_dir_12137.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 231)) ;
  GGS_bool joker_12368 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 232))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 232)), joker_12368, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 232)) ;
  GGS_bool joker_12514 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 233))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 233)), joker_12514, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 233)) ;
  GGS_bool joker_12652 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 234))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 234)), joker_12652, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 234)) ;
  GGS_bool joker_12794 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 235)), joker_12794, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 235)) ;
  GGS_bool joker_12940 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 236))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 236)), joker_12940, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 236)) ;
  GGS_bool joker_13085 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 237))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 237)), joker_13085, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 237)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_12137.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 238)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_13424 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 247)) ;
  var_dir_13424.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 248)) ;
  GGS_bool joker_13680 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 249))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 249)), joker_13680, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 249)) ;
  GGS_bool joker_13837 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 250))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 250)), joker_13837, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 250)) ;
  GGS_bool joker_13986 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 251))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 251)), joker_13986, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 251)) ;
  GGS_bool joker_14139 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 252))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 252)), joker_14139, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 252)) ;
  GGS_bool joker_14296 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 253))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 253)), joker_14296, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 253)) ;
  GGS_bool joker_14452 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 254))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 254)), joker_14452, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 254)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_13424.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 255)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 255)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_14791 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 264)) ;
  var_dir_14791.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 265)) ;
  GGS_bool joker_15047 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 266))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 266)), joker_15047, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 266)) ;
  GGS_bool joker_15204 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 267))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 267)), joker_15204, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 267)) ;
  GGS_bool joker_15353 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 268))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 268)), joker_15353, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 268)) ;
  GGS_bool joker_15506 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 269))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 269)), joker_15506, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 269)) ;
  GGS_bool joker_15663 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 270))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 270)), joker_15663, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 270)) ;
  GGS_bool joker_15819 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 271))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 271)), joker_15819, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 271)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_14791.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 272)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 272)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateArm64LinuxMakefileTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                             const GGS_string constinArgument_inBuildDirectoryName,
                                                                             const GGS_string constinArgument_inProjectName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_16239 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-arm64-linux-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 280)) ;
  var_dir_16239.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 281)) ;
  GGS_bool joker_16497 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 282))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 282)), joker_16497, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 282)) ;
  GGS_bool joker_16655 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 283))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 283)), joker_16655, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 283)) ;
  GGS_bool joker_16805 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 284))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 284)), joker_16805, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 284)) ;
  GGS_bool joker_16959 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 285))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 285)), joker_16959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 285)) ;
  GGS_bool joker_17117 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 286))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 286)), joker_17117, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 286)) ;
  GGS_bool joker_17274 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 287))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 287)), joker_17274, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 287)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_16239.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 288)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 288)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName??????????appProductFileList?swiftAppProductFileList????&?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__3F__26__3F_ (const GGS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                                                                                   const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                                                                                   const GGS_string constinArgument_inProjectSourceFilePath,
                                                                                                                                                                                   const GGS_string constinArgument_inTargetName,
                                                                                                                                                                                   const GGS_location /* constinArgument_inEndOfProjectSourceFile */,
                                                                                                                                                                                   const GGS_string constinArgument_inProjectVersionString,
                                                                                                                                                                                   const GGS_projectQualifiedFeatureMap constinArgument_inProjectQualifiedFeatureMap,
                                                                                                                                                                                   const GGS_lstringlist constinArgument_inTargetFeatureList,
                                                                                                                                                                                   const GGS_bool constinArgument_inQuietOutputByDefault,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inToolHeaderFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inAppProductFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inSwiftAppProductFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inFrameworkToolFileList,
                                                                                                                                                                                   const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                                                                                                   const GGS_stringset constinArgument_inHandledExtensionSet,
                                                                                                                                                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inHandCodedLinkAppFileList,
                                                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAllProductFileSet.plusAssignOperation(GGS_stringset::class_func_setWithStringList (constinArgument_inSwiftAppProductFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 320)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 320)) ;
  GGS_string var_projectDirectory_18569 = constinArgument_inProjectSourceFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas3", 321)) ;
  GGS_bool joker_18853 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 323))).method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 324)), joker_18853, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 323)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 327)) ;
  GGS_stringlist var_toolCppFileList_18994 = constinArgument_inToolCppFileList ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_toolCppFileList_18994.addAssignOperation (GGS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 331)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_toolCppFileList_18994.addAssignOperation (GGS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 333)) ;
  }
  GGS_lstring var_macCodeSign_19270 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_19291 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_entry_19291.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_entry_19291.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the %macCodeSign attribute should not be empty"), fixItArray3  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 339)) ;
          var_macCodeSign_19270.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_macCodeSign_19270 = var_entry_19291.readProperty_mFeatureValue () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_macCodeSign_19270 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas3", 344)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19678 = GGS_string ("14.6") ;
  GGS_string var_libpmPath_19798 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_19817 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_entry_19817.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_entry_19817.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 352)) ;
          var_libpmPath_19798.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        var_libpmPath_19798 = var_entry_19817.readProperty_mFeatureValue ().readProperty_string () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 357)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 357)) ;
    }
    var_libpmPath_19798 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 358)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 358)) ;
  }
  GGS_stringset var_availableGenerationFeatures_20355 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 363)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 364)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 365)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 366)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 367)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 368)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 369)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 370)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 371)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 372)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 373)) ;
  var_availableGenerationFeatures_20355.plusPlusAssignOperation (GGS_string ("MacSwiftApp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 374)) ;
  GGS_stringset var_generationFeatures_21080 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_xcodeProject var_xcodeProject_21150 = GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas3", 377)) ;
  UpEnumerator_lstringlist enumerator_21191 (constinArgument_inTargetFeatureList) ;
  while (enumerator_21191.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_20355.getter_hasKey (enumerator_21191.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 379)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_generationFeatures_21080.getter_hasKey (enumerator_21191.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 380)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_21191.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate '").add_operation (enumerator_21191.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 381)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 381)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 381)) ;
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::equal, enumerator_21191.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("MacSwiftApp"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21150.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas3", 385)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_21191.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated XCode setting"), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 386)) ;
              }
            }
            var_xcodeProject_21150 = GGS_xcodeProject::class_func_swiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas3", 388)) ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          var_generationFeatures_21080.plusPlusAssignOperation (enumerator_21191.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 390)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GGS_stringlist var_s_21702 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      UpEnumerator_stringset enumerator_21721 (var_availableGenerationFeatures_20355) ;
      while (enumerator_21721.hasCurrentObject ()) {
        var_s_21702.addAssignOperation (GGS_string ("%").add_operation (enumerator_21721.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 395))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 395)) ;
        enumerator_21721.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_s_21702) ;
      inCompiler->emitSemanticError (enumerator_21191.current_mValue (HERE).readProperty_location (), GGS_string ("unknown '").add_operation (enumerator_21191.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 397)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 397)), fixItArray13  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 397)) ;
    }
    enumerator_21191.gotoNextObject () ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_19270.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = GGS_bool (ComparisonKind::equal, var_xcodeProject_21150.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas3", 401)))) ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (var_macCodeSign_19270.readProperty_location (), GGS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacSwiftApp\""), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 402)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21150.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas3", 406)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GGS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 406)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas3", 406)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 407)), GGS_string ("For a MacOS target, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 407)) ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_generationFeatures_21080.getter_hasKey (GGS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 411)) ;
      }
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = var_generationFeatures_21080.getter_hasKey (GGS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 413)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 414)) ;
      }
    }
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_generationFeatures_21080.getter_hasKey (GGS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 416)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      {
      routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 417)) ;
      }
    }
  }
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_generationFeatures_21080.getter_hasKey (GGS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 419)).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      {
      routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 420)) ;
      }
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = var_generationFeatures_21080.getter_hasKey (GGS_string ("makefile-arm64-linux-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 422)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 423)) ;
      }
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = var_generationFeatures_21080.getter_hasKey (GGS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 425)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 426)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = var_generationFeatures_21080.getter_hasKey (GGS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 428)).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_19798, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 429)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = var_generationFeatures_21080.getter_hasKey (GGS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 440)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_19798, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 441)) ;
      }
    }
  }
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = var_generationFeatures_21080.getter_hasKey (GGS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 452)).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_19798, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 453)) ;
      }
    }
  }
  GGS_stringlist var_linkOptionForLinkingFrameworkWithTool_24602 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_24653 (constinArgument_inFrameworkToolFileList) ;
  while (enumerator_24653.hasCurrentObject ()) {
    var_linkOptionForLinkingFrameworkWithTool_24602.addAssignOperation (GGS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 467)) ;
    var_linkOptionForLinkingFrameworkWithTool_24602.addAssignOperation (enumerator_24653.current_mValue (HERE).getter_deletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas3", 468))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 468)) ;
    enumerator_24653.gotoNextObject () ;
  }
  GGS_stringlist var_handCodedSourceToolFileList_24867 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_24908 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_24908.hasCurrentObject ()) {
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_24908.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas3", 473)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        var_handCodedSourceToolFileList_24867.addAssignOperation (enumerator_24908.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas3", 474))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 474)) ;
      }
    }
    enumerator_24908.gotoNextObject () ;
  }
  GGS_stringset var_handCodedSourceDirectorySet_25060 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25124 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_25124.hasCurrentObject ()) {
    GGS_string var_subDir_25165 = enumerator_25124.current (HERE).readProperty_mValue ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas3", 479)) ;
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::equal, var_subDir_25165.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        var_handCodedSourceDirectorySet_25060.plusPlusAssignOperation (GGS_string ("../sources/tool-sources")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 481)) ;
      }
    }
    if (GalgasBool::boolFalse == test_29) {
      var_handCodedSourceDirectorySet_25060.plusPlusAssignOperation (GGS_string ("../sources/tool-sources/").add_operation (var_subDir_25165, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 483))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 483)) ;
    }
    enumerator_25124.gotoNextObject () ;
  }
  GGS_string var_jsonFileListContents_25410 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, var_handCodedSourceDirectorySet_25060, var_handCodedSourceToolFileList_24867, var_toolCppFileList_18994, var_linkOptionForLinkingFrameworkWithTool_24602, var_libpmPath_19798, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 486))) ;
  GGS_string var_jsonFileListPath_25677 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 494)) ;
  GGS_bool joker_25823 ; // Joker input parameter
  var_jsonFileListContents_25410.method_writeToFileWhenDifferentContents (var_jsonFileListPath_25677, joker_25823, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 495)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 496)) ;
  switch (var_xcodeProject_21150.enumValue ()) {
  case GGS_xcodeProject::Enumeration::invalid:
    break ;
  case GGS_xcodeProject::Enumeration::enum_none:
    break ;
  case GGS_xcodeProject::Enumeration::enum_swiftApp:
    {
      GGS_string var_dir_25978 = var_projectDirectory_18569.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 501)) ;
      var_dir_25978.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 502)) ;
      GGS_string var_applicationBundleBase_26079 ;
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        const GGS_projectQualifiedFeatureMap_2E_element var_entry_26112 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).isValuated ()) {
          test_30 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_30) {
          var_applicationBundleBase_26079 = var_entry_26112.readProperty_mFeatureValue ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_30) {
        var_applicationBundleBase_26079 = GGS_string ("unknown.unknown") ;
      }
      GGS_string var_InfoPlistContents_26311 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26079, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19678, GGS_string ("$(PRODUCT_MODULE_NAME).ProjectDocument") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 510))) ;
      GGS_bool joker_26669 ; // Joker input parameter
      var_InfoPlistContents_26311.method_writeToFileWhenDifferentContents (var_dir_25978.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 518)), joker_26669, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 518)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = var_dir_25978.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 520)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas3", 520)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas3", 520)).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 521))).method_writeToExecutableFile (var_dir_25978.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 521)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 521)) ;
        }
      }
      var_dir_25978.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 524)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 524)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_26927 = var_dir_25978.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 525)) ;
      GGS_bool joker_27143 ; // Joker input parameter
      GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 526))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_26927, joker_27143, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 526)) ;
      GGS_string var_Credits_5F_rtf_5F_path_27155 = var_dir_25978.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 527)) ;
      GalgasBool test_32 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_32) {
        test_32 = var_Credits_5F_rtf_5F_path_27155.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas3", 528)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas3", 528)).boolEnum () ;
        if (GalgasBool::boolTrue == test_32) {
          GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_27155, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 529)) ;
        }
      }
      GGS_string var_userResourceDir_27459 = var_projectDirectory_18569.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 532)) ;
      var_userResourceDir_27459.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 533)) ;
      GGS_stringlist temp_33 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 534)) ;
      temp_33.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("icns"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 534)) ;
      GGS_stringlist var_extensionList_27583 = temp_33 ;
      GGS_stringlist var_resourceFiles_27620 = var_userResourceDir_27459.getter_regularFilesWithExtensions (GGS_bool (false), var_extensionList_27583 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 535)) ;
      GGS_string var_newIntermediateFilePath_27731 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 537)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 538)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_27981 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_27981.mProperty_mApplicationBundleName = var_applicationBundleBase_26079 ;
      var_xcodeProject_27981.mProperty_mProjectName = constinArgument_inTargetName ;
      GGS_string var_headerSearchPaths_28140 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 543)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 544)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 544)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 544)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 545)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 546)) ;
      var_headerSearchPaths_28140.plusAssignOperation(GGS_string (", \"").add_operation (constinArgument_inHandCodedSourceDirectory, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 547)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 547)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 547)) ;
      var_headerSearchPaths_28140.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 548)) ;
      GGS_stringlist temp_34 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 624)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 551)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 552)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 553)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 554)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_COMMA = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 555)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 556)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_EMPTY_BODY = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 557)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 558)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 559)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 560)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 561)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 562)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 563)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 564)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 565)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 566)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 567)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_NO_COMMON_BLOCKS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 568)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 569)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 570)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 571)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 572)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 573)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 574)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 575)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 576)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 577)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 578)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 579)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 580)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 581)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 582)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 583)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 584)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 585)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 586)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 587)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 588)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 589)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 590)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 591)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 592)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 593)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 594)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 595)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 596)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 597)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 598)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_headerSearchPaths_28140, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 599)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = macosx"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 600)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 601)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 602)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_DISABLE_SAFETY_CHECKS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 603)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_BARE_SLASH_REGEX = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 604)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_EMIT_CONST_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 605)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENFORCE_EXCLUSIVE_ACCESS = off"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 606)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_MODULE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 607)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_OBJC_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 608)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_PRECOMPILE_BRIDGING_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 609)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_REFLECTION_METADATA_LEVEL = all"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 610)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_STRICT_CONCURRENCY = complete"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 611)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_TREAT_WARNINGS_AS_ERRORS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 612)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_CONCISE_MAGIC_FILE = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 613)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DEPRECATE_APPLICATION_MAIN = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 614)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DISABLE_OUTWARD_ACTOR_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 615)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_EXISTENTIAL_ANY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 616)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_FORWARD_TRAILING_CLOSURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 617)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_GLOBAL_CONCURRENCY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 618)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPLICIT_OPEN_EXISTENTIALS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 619)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPORT_OBJC_FORWARD_DECLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 620)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_INFER_SENDABLE_FROM_CAPTURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 621)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_ISOLATED_DEFAULT_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 622)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_REGION_BASED_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 623)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 5.0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 624)) ;
      GGS_stringlist var_xcodeSettingList_28492 = temp_34 ;
      GalgasBool test_35 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_35) {
        test_35 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19678.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          var_xcodeSettingList_28492.addAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19678, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 627)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 627))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 627)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_27981, var_xcodeSettingList_28492, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 629)) ;
      }
      GGS_stringlist var_appFrameworksFileRefList_32463 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_36 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_36) {
        test_36 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas3", 632)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_36) {
          GGS_stringlist joker_32748 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_32779 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_32812 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_32901 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_32962 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Frameworks (App)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 636)), joker_32748, joker_32779, joker_32812, var_appFrameworksFileRefList_32463, joker_32901, var_frameworkGroupRef_32962, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 633)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_frameworkGroupRef_32962, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 644)) ;
          }
        }
      }
      GGS_stringlist var_buildCFileRefListForTool_33111 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_buildCppFileRefListForTool_33162 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_swift_5F_FileRefList_33215 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_frameworksFileRefList_33259 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_resourceFileBuildRefs_33307 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas3", 653)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          GGS_string var_groupRef_33913 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../sources/tool-sources/"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 657)), var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_33913, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 654)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_groupRef_33913, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 665)) ;
          }
        }
      }
      GGS_stringlist var_toolFrameworksFileRefList_34062 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas3", 669)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_stringlist joker_34350 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34381 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34414 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34503 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_34563 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Frameworks (Tool)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 673)), joker_34350, joker_34381, joker_34414, var_toolFrameworksFileRefList_34062, joker_34503, var_frameworkGroupRef_34563, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 670)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_frameworkGroupRef_34563, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 681)) ;
          }
        }
      }
      GGS_stringlist var_outputGroupFileList_34718 = constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 684)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 684)) ;
      var_outputGroupFileList_34718.plusAssignOperation(constinArgument_inSwiftAppProductFileList, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 685)) ;
      GGS_string var_groupRef_35306 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 688)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 688)), GGS_stringset::class_func_setWithStringList (var_outputGroupFileList_34718  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 689)), var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 686)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 697)) ;
      }
      GGS_stringlist var_libpmReferenceGroupList_35403 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_39 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 712)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 704)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 705)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 706)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 707)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 708)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 709)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 710)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 711)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 712)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_39, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 700)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 721)) ;
      {
      GGS_stringset temp_40 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 763)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 727)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 728)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 729)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 730)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 731)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 732)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 733)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 734)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 735)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 736)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 737)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 738)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 739)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 740)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 741)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 742)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 743)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 744)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 745)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 746)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 747)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 748)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 749)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 750)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 751)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 752)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 753)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 754)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 755)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 756)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 757)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 758)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 759)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 760)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 761)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 762)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 763)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_40, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 723)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 772)) ;
      {
      GGS_stringset temp_41 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 818)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("AbstractScanner.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 778)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("AllocationDebugView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 779)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Application.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 780)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ASCII.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 781)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Color+RawRepresentable.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 782)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CommandLineOption.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 783)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("common-command-line-options.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 784)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CompilationIssue.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 785)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CompileLogView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 786)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CustomFont.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 787)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CustomFontPicker.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 788)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("FocusedValues+extension.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 789)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("IdentifiableAttributedString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 790)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("IndexingOperation.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 791)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("lexical-functions.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 792)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("LexicalToken.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 793)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Notification+names.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 794)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectCompiler.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 795)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocument.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 796)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 797)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+compile.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 798)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+populateContextualMenu.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 799)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+search.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 800)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectWindowManagerView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 801)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("RootDirectoryNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 802)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ScrollSourceToLineNotification.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 803)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultItem.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 804)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultItemView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 805)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 806)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 807)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SharedTextModel.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 808)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 809)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNodeID.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 810)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 811)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineAndColumn.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 812)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineRangeForLineNumber.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 813)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineStartAndEndLocations.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 814)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 815)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("TextSyntaxColoringView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 816)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("UInt64+displayString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 817)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("UserInterfaceSetting.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 818)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Swift App"), GGS_string ("swiftui-app"), temp_41, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 774)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 827)) ;
      {
      GGS_stringset temp_42 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 835)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 833)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericUniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 834)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericUniqueMatrix.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 835)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_42, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 829)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 844)) ;
      {
      GGS_stringset temp_43 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 865)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 850)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 851)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 852)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 853)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 854)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 855)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 856)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 857)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 858)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 859)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 860)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 861)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 862)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 863)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 864)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 865)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_43, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 846)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 874)) ;
      {
      GGS_stringset temp_44 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 889)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 880)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 881)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 882)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 883)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 884)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 885)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 886)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 887)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 888)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 889)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("File"), GGS_string ("files"), temp_44, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 876)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 898)) ;
      {
      GGS_stringset temp_45 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 994)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 904)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 905)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 906)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 907)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 908)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 909)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 910)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 911)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 912)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 913)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 914)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 915)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 916)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 917)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 918)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 919)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrWeakReferenceProxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 920)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrWeakReferenceProxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 921)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 922)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 923)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 924)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 925)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 926)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 927)) ;
      GGS_string temp_46 ;
      const GalgasBool test_47 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_47) {
        temp_46 = GGS_string ("C_galgas_verbose_option.cpp") ;
      }else if (GalgasBool::boolFalse == test_47) {
        temp_46 = GGS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_45.plusPlusAssignOperation (temp_46  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 928)) ;
      GGS_string temp_48 ;
      const GalgasBool test_49 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_49) {
        temp_48 = GGS_string ("C_galgas_verbose_option.h") ;
      }else if (GalgasBool::boolFalse == test_49) {
        temp_48 = GGS_string ("C_galgas_quiet_option.h") ;
      }
      temp_45.plusPlusAssignOperation (temp_48  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 929)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 930)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 931)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 932)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("galgas-input-output.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 933)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("galgas-input-output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 934)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 935)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 936)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 937)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 938)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 939)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 940)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 941)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 942)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 943)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 944)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 945)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 946)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 947)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 948)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 949)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementPtr.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 950)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementPtr.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 951)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Enumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 952)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Enumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 953)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 954)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 955)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 956)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 957)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 958)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 959)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_ObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 960)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_ObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 961)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 962)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 963)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 964)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 965)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 966)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 967)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 968)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 969)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 970)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 971)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 972)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_function.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 973)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 974)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 975)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_sint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 976)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 977)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 978)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 979)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 980)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 981)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 982)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_uint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 983)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 984)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 985)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 986)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("ComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 987)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("ComparisonKind.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 988)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("EnumerationOrder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 989)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_GenericDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 990)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_GenericMapRoot.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 991)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedGenericPtrWithValueSemantics.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 992)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 993)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 994)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Galgas"), GGS_string ("galgas"), temp_45, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 900)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1003)) ;
      {
      GGS_stringset temp_50 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1014)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1009)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1010)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1011)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1012)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1013)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1014)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Streams"), GGS_string ("streams"), temp_50, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1005)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1023)) ;
      {
      GGS_stringset temp_51 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1037)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1029)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1030)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1031)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1032)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("unicode-data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1033)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("utf32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1034)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("utf32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1035)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1036)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1037)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Strings"), GGS_string ("strings"), temp_51, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1025)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1046)) ;
      {
      GGS_stringset temp_52 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1055)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1052)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1053)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1054)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1055)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Time"), GGS_string ("time"), temp_52, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1048)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1064)) ;
      {
      GGS_stringset temp_53 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1099)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1070)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1071)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1072)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1073)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1074)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1075)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1076)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1077)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1078)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1079)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1080)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1081)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1082)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1083)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1084)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1085)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1086)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1087)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1088)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1089)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1090)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1091)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1092)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1093)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1094)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1095)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1096)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1097)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1098)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1099)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Utilities"), GGS_string ("utilities"), temp_53, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_groupRef_35306, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1066)) ;
      }
      var_libpmReferenceGroupList_35403.addAssignOperation (var_groupRef_35306  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1108)) ;
      GGS_string var_libpmGroupRef_49070 ;
      {
      extensionSetter_addGroup (var_xcodeProject_27981, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1110)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1110)), var_libpmReferenceGroupList_35403, var_libpmGroupRef_49070, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1110)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_libpmGroupRef_49070, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1111)) ;
      }
      GGS_string var_resourcesGroupRef_49558 ;
      {
      GGS_stringset temp_54 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1116)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1116)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Resources"), GGS_string ("."), temp_54, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_resourcesGroupRef_49558, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1113)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_resourcesGroupRef_49558, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1124)) ;
      }
      GGS_string var_userResourcesGroupRef_50107 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringList (var_resourceFiles_27620  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1129)), var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_userResourcesGroupRef_50107, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1126)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_userResourcesGroupRef_50107, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1137)) ;
      }
      GGS_string var_frameworkGroupRef_50712 ;
      {
      GGS_stringset temp_55 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1144)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1143)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1144)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27981, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_55, var_buildCFileRefListForTool_33111, var_buildCppFileRefListForTool_33162, var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259, var_resourceFileBuildRefs_33307, var_frameworkGroupRef_50712, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1139)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27981, var_frameworkGroupRef_50712, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1153)) ;
      }
      GGS_stringlist var_codeSigningSettingList_50857 ;
      GalgasBool test_56 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_56) {
        test_56 = GGS_bool (ComparisonKind::equal, var_macCodeSign_19270.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_56) {
          GGS_stringlist temp_57 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1157)) ;
          temp_57.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"-\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1157)) ;
          var_codeSigningSettingList_50857 = temp_57 ;
        }
      }
      if (GalgasBool::boolFalse == test_56) {
        GGS_stringlist var_components_51002 = var_macCodeSign_19270.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1159)) ;
        GalgasBool test_58 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_58) {
          test_58 = GGS_bool (ComparisonKind::notEqual, var_components_51002.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas3", 1160)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_58) {
            GenericArray <FixItDescription> fixItArray59 ;
            inCompiler->emitSemanticError (var_macCodeSign_19270.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray59  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1161)) ;
            var_codeSigningSettingList_50857.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_58) {
          GalgasBool test_60 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_60) {
            test_60 = GGS_bool (ComparisonKind::equal, var_components_51002.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1162)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_60) {
              GGS_stringlist temp_61 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1165)) ;
              temp_61.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1164)) ;
              temp_61.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_51002.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1165)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1165)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1165)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1165)) ;
              var_codeSigningSettingList_50857 = temp_61 ;
            }
          }
          if (GalgasBool::boolFalse == test_60) {
            GalgasBool test_62 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_62) {
              test_62 = GGS_bool (ComparisonKind::equal, var_components_51002.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1167)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_62) {
                GGS_stringlist temp_63 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1168)) ;
                temp_63.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_51002.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1168)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1168)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1168)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1168)) ;
                var_codeSigningSettingList_50857 = temp_63 ;
              }
            }
            if (GalgasBool::boolFalse == test_62) {
              GenericArray <FixItDescription> fixItArray64 ;
              inCompiler->emitSemanticError (var_macCodeSign_19270.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray64  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1170)) ;
              var_codeSigningSettingList_50857.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS_stringlist temp_65 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1178)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1175)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1176)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1177)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26079, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1178)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1178)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1178)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1178)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1178)) ;
      GGS_stringlist var_settingList_51891 = temp_65.add_operation (var_codeSigningSettingList_50857, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1179)) ;
      GGS_string var_releaseTargetRef_52510 ;
      GGS_string var_releaseProductFileRef_52553 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_27981, constinArgument_inTargetName.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1181)), constinArgument_inTargetName, var_buildCFileRefListForTool_33111.add_operation (var_buildCppFileRefListForTool_33162, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1183)), var_toolFrameworksFileRefList_34062, var_settingList_51891, var_releaseTargetRef_52510, var_releaseProductFileRef_52553, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1180)) ;
      }
      GGS_stringlist temp_66 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1195)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1191)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1192)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1193)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1194)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26079, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1195)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1195)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1195)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1195)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1195)) ;
      var_settingList_51891 = temp_66.add_operation (var_codeSigningSettingList_50857, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1196)) ;
      GGS_string var_debugTargetRef_53280 ;
      GGS_string var_debugProductFileRef_53321 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_27981, constinArgument_inTargetName.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1198)), constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1199)), var_buildCFileRefListForTool_33111.add_operation (var_buildCppFileRefListForTool_33162, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1200)), var_toolFrameworksFileRefList_34062, var_settingList_51891, var_debugTargetRef_53280, var_debugProductFileRef_53321, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1197)) ;
      }
      GGS_stringlist temp_67 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1209)) ;
      temp_67.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1208)) ;
      temp_67.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1209)) ;
      GGS_stringlist var_cocoaConfigurationSettingList_53392 = temp_67.add_operation (var_codeSigningSettingList_50857, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1210)) ;
      {
      GGS_stringlist temp_68 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1218)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_releaseTargetRef_52510, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1218)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_debugTargetRef_53280, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1218)) ;
      GGS__32_stringlist temp_69 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1219)) ;
      temp_69.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_releaseProductFileRef_52553, constinArgument_inTargetName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1219)) ;
      temp_69.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_debugProductFileRef_53321, constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1219)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1219)) ;
      GGS_string joker_54154 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_27981, constinArgument_inTargetName.add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1212)), constinArgument_inTargetName.getter_capitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas3", 1213)).add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1213)), var_swift_5F_FileRefList_33215, var_frameworksFileRefList_33259.add_operation (var_appFrameworksFileRefList_32463, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1215)), var_resourceFileBuildRefs_33307, var_cocoaConfigurationSettingList_53392, temp_68, temp_69, joker_54154, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1211)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_27981, var_dir_25978.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1224)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1224)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1224)), var_newIntermediateFilePath_27731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas3", 1223)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GGS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result_outNonterminalSymbolLabelMapForGrammarAnalysis ; // Returned variable
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalLabelListAST enumerator_1635 (constinArgument_inLabels) ;
  while (enumerator_1635.hasCurrentObject ()) {
    GGS_signatureForGrammarAnalysis var_formalParametersList_1690 = GGS_signatureForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_1781 (enumerator_1635.current_mFormalArgumentList (HERE)) ;
    while (enumerator_1781.hasCurrentObject ()) {
      var_formalParametersList_1690.addAssignOperation (enumerator_1781.current_mFormalArgumentPassingMode (HERE), enumerator_1781.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 33)) ;
      enumerator_1781.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_1635.current_mLabelName (HERE), var_formalParametersList_1690, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 35)) ;
    }
    enumerator_1635.gotoNextObject () ;
  }
//---
  return result_outNonterminalSymbolLabelMapForGrammarAnalysis ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_transformLabelMap [2] = {
  & kTypeDescriptor_GALGAS_nonTerminalLabelListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_transformLabelMap (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST operand0 = GGS_nonTerminalLabelListAST::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  return function_transformLabelMap (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_transformLabelMap ("transformLabelMap",
                                                                   functionWithGenericHeader_transformLabelMap,
                                                                   & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis,
                                                                   1,
                                                                   functionArgs_transformLabelMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS_nonTerminalLabelListAST constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_2391 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalLabelListAST enumerator_2450 (constinArgument_inLabels) ;
  while (enumerator_2450.hasCurrentObject ()) {
    var_labelStringSet_2391.plusPlusAssignOperation (enumerator_2450.current_mLabelName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 52)) ;
    GGS_signatureForGrammarAnalysis var_formalParametersList_2587 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2450.current_mLabelName (HERE), var_formalParametersList_2587, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 53)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_2450.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 54)).objectCompare (var_formalParametersList_2587.getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 54)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_2450.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 57)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_2587.getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 61)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2450.current_mLabelName (HERE).readProperty_location (), enumerator_2450.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 55)).getter_string (SOURCE_FILE ("grammarCompilation.galgas3", 55)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 55)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 56)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 57)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2450.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 59)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 59)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 58)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 59)).add_operation (var_formalParametersList_2587.getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 60)).getter_string (SOURCE_FILE ("grammarCompilation.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 60)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 60)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 60)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 55)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator_formalParameterListAST enumerator_3208 (enumerator_2450.current_mFormalArgumentList (HERE)) ;
      UpEnumerator_signatureForGrammarAnalysis enumerator_3281 (var_formalParametersList_2587) ;
      while (enumerator_3208.hasCurrentObject () && enumerator_3281.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_3281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_3208.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 67)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 67)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 68)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2450.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 70)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 69)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 70)).add_operation (extensionGetter_string (enumerator_3208.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 71)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 71)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 71)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 66)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_3281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().objectCompare (enumerator_3208.current_mFormalArgumentTypeName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_3281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 76)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 77)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2450.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 79)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 78)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 79)).add_operation (enumerator_3208.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 80)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 80)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 75)) ;
          }
        }
        enumerator_3208.gotoNextObject () ;
        enumerator_3281.gotoNextObject () ;
      }
    }
    enumerator_2450.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4411 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_4411.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_2391.getter_hasKey (enumerator_4411.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 88)).operator_not (SOURCE_FILE ("grammarCompilation.galgas3", 88)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_4411.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 90)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 90)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 91)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 90)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 91)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 89)) ;
      }
    }
    enumerator_4411.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_nonterminalDeclarationListAST enumerator_5063 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_5063.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_5118 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5063.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5063.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5063.current_mNonterminalName (HERE).readProperty_location (), enumerator_5063.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5063.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 108)), var_entry_5118.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 105)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5063.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 114)), function_transformLabelMap (enumerator_5063.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 115)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 112)) ;
      }
    }
    enumerator_5063.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_syntaxRuleListAST enumerator_5901 (constinArgument_inRuleList) ;
  while (enumerator_5901.hasCurrentObject ()) {
    GGS_nonTerminalLabelListAST var_nonTerminalLabelListAST_5938 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_6054 (enumerator_5901.current_mLabelList (HERE)) ;
    while (enumerator_6054.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5938.addAssignOperation (enumerator_6054.current_mLabelName (HERE), enumerator_6054.current_mFormalArguments (HERE), enumerator_6054.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 129)) ;
      enumerator_6054.gotoNextObject () ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_6204 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5901.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5901.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5901.current_mNonterminalName (HERE).readProperty_location (), var_nonTerminalLabelListAST_5938, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5901.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 138)), var_entry_6204.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 135)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5901.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 144)), function_transformLabelMap (var_nonTerminalLabelListAST_5938, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 145)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 142)) ;
      }
    }
    enumerator_5901.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@semanticInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                                 GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                 GGS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionListForGrammarAnalysis?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const GGS_syntaxInstructionList constinArgument_inInstructionList,
                                                                                                                                  GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                                                                  const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                                                                  GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                                                                                  GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_syntaxInstructionList enumerator_8387 (constinArgument_inInstructionList) ;
  while (enumerator_8387.hasCurrentObject ()) {
    callExtensionMethod_transformInstructionForGrammarAnalysis ((cPtr_syntaxInstructionAST *) enumerator_8387.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 179)) ;
    enumerator_8387.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GGS_lstring constinArgument_inSyntaxComponentName,
                                                    const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                    GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GGS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GGS_uint & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis var_productionRulesList_9163 = GGS_productionRuleListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxRuleListAST enumerator_9250 (constinArgument_inRuleList) ;
  while (enumerator_9250.hasCurrentObject ()) {
    GGS_uint var_nonTerminalIndex_9352 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_9369 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9250.current_mNonterminalName (HERE), var_nonTerminalIndex_9352, joker_9369, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 199)) ;
    GGS_syntaxInstructionList var_parsedSyntaxInstructionList_9455 ;
    GGS_lstring joker_9505 ; // Joker input parameter
    GGS_formalParameterListAST joker_9508 ; // Joker input parameter
    GGS_location joker_9511 ; // Joker input parameter
    GGS_location joker_9543 ; // Joker input parameter
    enumerator_9250.current_mLabelList (HERE).method_first (joker_9505, joker_9508, joker_9511, var_parsedSyntaxInstructionList_9455, joker_9543, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 202)) ;
    GGS_syntaxInstructionListForGrammarAnalysis var_instructionList_9590 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_9455, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9590, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 205)) ;
    }
    var_productionRulesList_9163.addAssignOperation (enumerator_9250.current_mNonterminalName (HERE), var_nonTerminalIndex_9352, var_instructionList_9590, var_productionRulesList_9163.getter_count (SOURCE_FILE ("grammarCompilation.galgas3", 217))  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 213)) ;
    enumerator_9250.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssignOperation (var_productionRulesList_9163, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas3", 219)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_grammarGenerationTemplate_0,
  0,
  gWrapperAllDirectories_grammarGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (Compiler * inCompiler,
                                                                                          const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                          const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                          const GGS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                          const GGS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                          const GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                          const GGS_string & in_GRAMMAR_5F_NAME,
                                                                                          const GGS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  GRAMMAR ") ;
  result.appendString (in_GRAMMAR_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cGrammar_") ;
  result.appendString (in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue ()) ;
  result.appendString (" : ") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_331_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    UpEnumerator_lstringlist enumerator_331 (in_SYNTAX_5F_COMPONENTS) ;
    while (enumerator_331.hasCurrentObject ()) {
      result.appendString ("public cParser_") ;
      result.appendString (enumerator_331.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue ()) ;
      enumerator_331.gotoNextObject () ;
      if (enumerator_331.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_331_.increment () ;
    }
  }
  result.appendString (" {\n") ;
  GGS_uint index_503_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_503 (in_NON_5F_TERMINAL_5F_MAP) ;
    while (enumerator_503.hasCurrentObject ()) {
      result.appendString ("//------------------------------------- '") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("' non terminal\n//--- 'parse' label\n /*  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ; */\n\n//--- indexing\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 23)).stringValue ()) ;
      result.appendString ("_indexing (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n") ;
      GGS_uint index_1122_ (0) ;
      if (enumerator_503.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1122 (enumerator_503.current_mNonterminalSymbolParametersMap (HERE)) ;
        while (enumerator_1122.hasCurrentObject ()) {
          result.appendString ("//----------- '") ;
          result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("' label\n  public: virtual void nt_") ;
          result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_1443_IDX (0) ;
          if (enumerator_1122.current_mFormalParametersList (HERE).isValid ()) {
            UpEnumerator_signatureForGrammarAnalysis enumerator_1443 (enumerator_1122.current_mFormalParametersList (HERE)) ;
            while (enumerator_1443.hasCurrentObject ()) {
              const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1443.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)))).boolEnum () ;
              switch (test_1) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1443.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
                switch (test_2) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1443.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                  switch (test_3) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              enumerator_1443.gotoNextObject () ;
              index_1443_IDX.increment () ;
            }
          }
          const GalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_4) {
          case GalgasBool::boolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString (" * inCompiler) ;\n\n") ;
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("//--- Start symbol\n  public: static void _performSourceFileParsing_") ;
            result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const GalgasBool test_6 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_6) {
            case GalgasBool::boolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 50)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            result.appendString ("GGS_lstring inFileName") ;
            GGS_uint index_2941_IDX (0) ;
            if (enumerator_1122.current_mFormalParametersList (HERE).isValid ()) {
              UpEnumerator_signatureForGrammarAnalysis enumerator_2941 (enumerator_1122.current_mFormalParametersList (HERE)) ;
              while (enumerator_2941.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2941.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 55)))).boolEnum () ;
                switch (test_7) {
                case GalgasBool::boolTrue : {
                  result.appendString ("const GGS_") ;
                  result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_2941.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                  switch (test_8) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, enumerator_2941.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                    switch (test_9) {
                    case GalgasBool::boolTrue : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolFalse : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolNotValid :
                      break ;
                    }
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                enumerator_2941.gotoNextObject () ;
                index_2941_IDX.increment () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: static void _performSourceStringParsing_") ;
            result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const GalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_10) {
            case GalgasBool::boolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 69)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            result.appendString ("GGS_string inSourceString,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("GGS_string inNameString") ;
            GGS_uint index_4281_IDX (0) ;
            if (enumerator_1122.current_mFormalParametersList (HERE).isValid ()) {
              UpEnumerator_signatureForGrammarAnalysis enumerator_4281 (enumerator_1122.current_mFormalParametersList (HERE)) ;
              while (enumerator_4281.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, enumerator_4281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 75)))).boolEnum () ;
                switch (test_11) {
                case GalgasBool::boolTrue : {
                  result.appendString ("const GGS_") ;
                  result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, enumerator_4281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                  switch (test_12) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    const GalgasBool test_13 = GGS_bool (ComparisonKind::equal, enumerator_4281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                    switch (test_13) {
                    case GalgasBool::boolTrue : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolFalse : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolNotValid :
                      break ;
                    }
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                enumerator_4281.gotoNextObject () ;
                index_4281_IDX.increment () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_1122.gotoNextObject () ;
          index_1122_.increment () ;
        }
      }
      const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
      switch (test_14) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--- Indexing\n  public: static void performIndexing (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only lexical analysis\n  public: static void performOnlyLexicalAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only syntax analysis\n  public: static void performOnlySyntaxAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_503.gotoNextObject () ;
      index_503_.increment () ;
    }
  }
  GGS_uint index_5818_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_nonTerminalToAddList enumerator_5818 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST) ;
    while (enumerator_5818.hasCurrentObject ()) {
      result.appendString ("  public: virtual int32_t select_") ;
      result.appendString (enumerator_5818.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_5818.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) ;\n") ;
      enumerator_5818.gotoNextObject () ;
      if (enumerator_5818.hasCurrentObject ()) {
        result.appendString ("\n") ;
      }
      index_5818_.increment () ;
    }
  }
  result.appendString ("} ;\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  UpEnumerator_lstringlist enumerator_2177 (temp_0.readProperty_mSyntaxComponents ()) ;
  while (enumerator_2177.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (enumerator_2177.current_mValue (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 42)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 42))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 42)) ;
    enumerator_2177.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_1 = this ;
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  const GGS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 45)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 44))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 60))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 60)) ;
  const GGS_grammarForGeneration temp_1 = this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3071 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis ()) ;
  while (enumerator_3071.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3121 (enumerator_3071.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_3121.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_3252 (enumerator_3121.current_mFormalParametersList (HERE)) ;
      while (enumerator_3252.hasCurrentObject ()) {
        switch (enumerator_3252.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            GGS_unifiedTypeMapEntry var_t_3444 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3252.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 66)) ;
            extensionMethod_addHeaderFileName (var_t_3444, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 67)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_3252.gotoNextObject () ;
      }
      enumerator_3121.gotoNextObject () ;
    }
    enumerator_3071.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_grammarForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_grammarForGeneration temp_0 = this ;
  result_result = GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 79)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas3", 91)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syntaxDeclarationForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  result_result = GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 118)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_syntaxDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas3", 130)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 143))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 143)) ;
  GGS_uintlist var_selectMethodList_6129 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_6175 = GGS_uint (uint32_t (0U)) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 146)).isValid ()) {
    uint32_t variant_6187 = temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 146)).uintValue () ;
    bool loop_6187 = true ;
    while (loop_6187) {
      const GGS_syntaxDeclarationForGeneration temp_2 = this ;
      loop_6187 = GGS_bool (ComparisonKind::lowerThan, var_idx_6175.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_6187) {
        loop_6187 = GGS_bool (ComparisonKind::lowerThan, var_idx_6175.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_6187 && (0 == variant_6187)) {
        loop_6187 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas3", 146)) ;
      }
      if (loop_6187) {
        variant_6187 -= 1 ;
        var_selectMethodList_6129.addAssignOperation (var_idx_6175  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 148)) ;
        var_idx_6175.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 149)) ;
      }
    }
  }
  const GGS_syntaxDeclarationForGeneration temp_3 = this ;
  const GGS_syntaxDeclarationForGeneration temp_4 = this ;
  const GGS_syntaxDeclarationForGeneration temp_5 = this ;
  const GGS_syntaxDeclarationForGeneration temp_6 = this ;
  const GGS_syntaxDeclarationForGeneration temp_7 = this ;
  const GGS_syntaxDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 153)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_6129, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature () COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 151))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 167)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 167))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 167)) ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GGS_stringset::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 168))) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  GGS_string var_lexiqueCppName_7207 = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 172)) ;
  const GGS_syntaxDeclarationForGeneration temp_2 = this ;
  UpEnumerator_ruleDeclarationList enumerator_7317 (temp_2.readProperty_mRuleDeclarationList ()) ;
  while (enumerator_7317.hasCurrentObject ()) {
    UpEnumerator_ruleLabelImplementationList enumerator_7470 (enumerator_7317.current_mLabelImplementationList (HERE)) ;
    while (enumerator_7470.hasCurrentObject ()) {
      const GGS_syntaxDeclarationForGeneration temp_3 = this ;
      const GGS_syntaxDeclarationForGeneration temp_4 = this ;
      GGS_string var_ruleName_7552 = GGS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 176)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 176)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 176)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 177)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 177)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 177)).add_operation (enumerator_7317.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 178)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 177)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 178)).add_operation (enumerator_7317.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 179)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 179)).add_operation (enumerator_7470.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 179)) ;
      outArgument_outImplementation.plusAssignOperation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 180)) ;
      GGS_string var_code_8374 ;
      {
      const GGS_syntaxDeclarationForGeneration temp_5 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_7552, ioArgument_ioInclusionSet, enumerator_7470.current_mSignatureForGeneration (HERE), enumerator_7470.current_mInstructionListForGeneration (HERE), GGS_bool (false), var_lexiqueCppName_7207, GGS_bool (false), GGS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_8374, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 181)) ;
      }
      outArgument_outImplementation.plusAssignOperation(var_code_8374, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 194)) ;
      enumerator_7470.gotoNextObject () ;
    }
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_syntaxDeclarationForGeneration temp_7 = this ;
      test_6 = temp_7.readProperty_mHasIndexing ().boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_semanticInstructionListForGeneration var_instructionList_9573 ;
        GGS_lstring joker_9556 ; // Joker input parameter
        GGS_formalParameterListForGeneration joker_9559 ; // Joker input parameter
        GGS_formalParameterSignature joker_9562 ; // Joker input parameter
        GGS_location joker_9565 ; // Joker input parameter
        enumerator_7317.current_mLabelImplementationList (HERE).method_first (joker_9556, joker_9559, joker_9562, joker_9565, var_instructionList_9573, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 219)) ;
        const GGS_syntaxDeclarationForGeneration temp_8 = this ;
        const GGS_syntaxDeclarationForGeneration temp_9 = this ;
        GGS_string var_ruleName_9610 = GGS_string ("cParser_").add_operation (temp_8.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 220)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 220)).add_operation (temp_9.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 221)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 221)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 221)).add_operation (enumerator_7317.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 222)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 221)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 222)).add_operation (enumerator_7317.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 223)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 223)).add_operation (GGS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 223)) ;
        outArgument_outImplementation.plusAssignOperation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 224)) ;
        GGS_string var_code_10476 ;
        {
        routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_9610, ioArgument_ioInclusionSet, GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), function_syntaxSignatureOfInstructionList (GGS_string ("indexing"), var_instructionList_9573, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 230)), GGS_bool (false), var_lexiqueCppName_7207, GGS_bool (false), GGS_bool (false), GGS_bool (false), var_code_10476, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 225)) ;
        }
        outArgument_outImplementation.plusAssignOperation(var_code_10476, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 238)) ;
      }
    }
    enumerator_7317.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const GGS_bool constinArgument_inGenerateStatic,
                                                                                  const GGS_string constinArgument_inProcedureMangledName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GGS_bool constinArgument_inProcedureIsConst,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_bool constinArgument_inGenerateLocationArgs,
                                                                                  const GGS_bool constinArgument_inGenerateResetTemplateString,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_11446 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_unusedVariableCppNameSet_11446.plusPlusAssignOperation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 269))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 269)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas3", 271)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_unusedVariableCppNameSet_11446.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 272))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 272)) ;
    }
  }
  UpEnumerator_formalParameterListForGeneration enumerator_11752 (constinArgument_inFormalArgumentList) ;
  while (enumerator_11752.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_11752.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticGeneration.galgas3", 275)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_unusedVariableCppNameSet_11446.plusPlusAssignOperation (enumerator_11752.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 276)) ;
      }
    }
    enumerator_11752.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_11992 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_12025 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_12025.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 282)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_12085 (constinArgument_inInstructionList) ;
  while (enumerator_12085.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_12085.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_11992, var_unusedVariableCppNameSet_11446, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_12025, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 284)) ;
    enumerator_12085.gotoNextObject () ;
  }
  {
  var_routineBody_12025.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 292)) ;
  }
  UpEnumerator_formalParameterListForGeneration enumerator_12424 (constinArgument_inFormalArgumentList) ;
  while (enumerator_12424.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12424.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 295)) ;
    enumerator_12424.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 300)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void ").add_operation (constinArgument_inProcedureMangledName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 302)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 302)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 302)) ;
  GGS_uint var_colRef_12708 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas3", 303)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_12812 (constinArgument_inFormalArgumentList) ;
  while (enumerator_12812.hasCurrentObject ()) {
    switch (enumerator_12812.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12812.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 308)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 308)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 308)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12812.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 310)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 310)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 310)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 310)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12812.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 312)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 312)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 312)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12812.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 314)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 314)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 314)) ;
      }
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_11446.getter_hasKey (enumerator_12812.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 316)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_12812.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 317)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 317)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 317)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_12812.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 319)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 321)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12708, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 322)) ;
    }
    enumerator_12812.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_11446.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 326)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 326)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 327)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 327)).add_operation (GGS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 327)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 327)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 329)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 329)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 329)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 329)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12708, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 331)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 334)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 334)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_11446.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 335)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 335)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 336)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 336)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 338)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 338)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 341)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12708, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 342)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 343)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 345)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 347)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 349)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_14723 (constinArgument_inFormalArgumentList) ;
  while (enumerator_14723.hasCurrentObject ()) {
    switch (enumerator_14723.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_14723.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 354)).add_operation (GGS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 354)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 354)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      break ;
    }
    enumerator_14723.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_12025, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 359)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 362)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 362)).add_operation (GGS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 362)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 362)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 365)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                                  const GGS_string constinArgument_inResultVariableCppName,
                                                                                  const GGS_bool constinArgument_inIsStatic,
                                                                                  const GGS_bool constinArgument_inIsConst,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 385)) ;
  GGS_stringset var_unusedVariableCppNameSet_16239 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_16239.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 388))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 388)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16444 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16444.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16444.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 391)) ;
    var_unusedVariableCppNameSet_16239.plusPlusAssignOperation (enumerator_16444.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 392)) ;
    enumerator_16444.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_16629 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_16670 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_16670.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 397)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_16730 (constinArgument_inInstructionList) ;
  while (enumerator_16730.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_16730.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_16629, var_unusedVariableCppNameSet_16239, GGS_bool (false), var_routineBody_16670, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 399)) ;
    enumerator_16730.gotoNextObject () ;
  }
  {
  var_routineBody_16670.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 407)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 410)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 412)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 412)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 412)) ;
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 413)) ;
  GGS_uint var_colRef_17250 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas3", 414)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_17350 (constinArgument_inFormalArgumentList) ;
  while (enumerator_17350.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_17350.current_mIsConstant (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17350.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 418)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 418)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 418)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17350.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 420)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 420)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 420)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_16239.getter_hasKey (enumerator_17350.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 422)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_17350.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 425)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 425)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 427)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17250, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 428)) ;
    }
    enumerator_17350.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 431)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 431)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_16239.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 432)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 432)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 435)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 435)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 435)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 437)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17250, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 438)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 439)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 441)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 443)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 445)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 445)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 445)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 446)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 446)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 445)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16670, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 448)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 450)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 451)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 451)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 451)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 453)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                      const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                      const GGS_string constinArgument_inCompilerTypeName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                      const GGS_string constinArgument_inResultVariableCppName,
                                                                      GGS_string & outArgument_outGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 467)) ;
  GGS_stringset var_unusedVariableCppNameSet_19557 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_19557.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 470))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 470)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_19762 (constinArgument_inFormalArgumentList) ;
  while (enumerator_19762.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19762.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 473)) ;
    var_unusedVariableCppNameSet_19557.plusPlusAssignOperation (enumerator_19762.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 474)) ;
    enumerator_19762.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_19947 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_19988 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_19988.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 479)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_20048 (constinArgument_inInstructionList) ;
  while (enumerator_20048.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_20048.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_19947, var_unusedVariableCppNameSet_19557, GGS_bool (false), var_routineBody_19988, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 481)) ;
    enumerator_20048.gotoNextObject () ;
  }
  {
  var_routineBody_19988.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 489)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 491)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 491)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 491)) ;
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 492)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 492)) ;
  GGS_uint var_colRef_20507 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas3", 493)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_20607 (constinArgument_inFormalArgumentList) ;
  while (enumerator_20607.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_20607.current_mIsConstant (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20607.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 497)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 497)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 497)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20607.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 499)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 499)) ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_19557.getter_hasKey (enumerator_20607.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 501)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" /* ").add_operation (enumerator_20607.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 502)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 502)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 502)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_20607.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 504)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 504)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 506)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20507, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 507)) ;
    }
    enumerator_20607.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 510)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 510)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_19557.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 511)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 511)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 512)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 512)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 512)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 512)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 514)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 514)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 514)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 516)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20507, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 517)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 518)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 520)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 520)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 520)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 521)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 521)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 520)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_19988, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 523)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 525)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 526)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 526)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 526)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 528)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter???&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (const GGS_string constinArgument_inClassName,
                                                                  const GGS_string constinArgument_inBaseClassName,
                                                                  const GGS_string constinArgument_inMethodName,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_22606 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_22606.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 547))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 547)) ;
  var_unusedVariableCppNameSet_22606.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 548)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_22742 (constinArgument_inFormalArgumentList) ;
  while (enumerator_22742.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_22606.plusPlusAssignOperation (enumerator_22742.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 550)) ;
    enumerator_22742.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_22887 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_22920 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_22920.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 555)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_22980 (constinArgument_inInstructionList) ;
  while (enumerator_22980.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_22980.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22887, var_unusedVariableCppNameSet_22606, GGS_bool (false), var_routineBody_22920, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 557)) ;
    enumerator_22980.gotoNextObject () ;
  }
  {
  var_routineBody_22920.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 565)) ;
  }
  outArgument_outGeneratedCode = GGS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 567)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 567)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 567)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 567)) ;
  GGS_uint var_colRef_23447 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas3", 568)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 570)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 570)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 570)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 570)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 572)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 572)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 572)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 572)) ;
  }
  GGS_bool var_currentObjectIsUnused_23706 = var_unusedVariableCppNameSet_22606.getter_hasKey (GGS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 574)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_23706.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 576)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 578)) ;
  }
  UpEnumerator_formalParameterListForGeneration enumerator_23959 (constinArgument_inFormalArgumentList) ;
  while (enumerator_23959.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 582)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 583)) ;
    }
    switch (enumerator_23959.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23959.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 586)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 586)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 586)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23959.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 588)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 588)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 588)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23959.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 590)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 590)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 590)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 590)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23959.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 592)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 592)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 592)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 592)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_22606.getter_hasKey (enumerator_23959.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 594)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_23959.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 595)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 595)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 595)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_23959.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 597)) ;
    }
    enumerator_23959.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 601)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 602)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 603)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_22606.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 604)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 604)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 605)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 605)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 605)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 605)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 607)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 607)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 609)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 610)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 611)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 612)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_23706.operator_not (SOURCE_FILE ("semanticGeneration.galgas3", 614)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 616)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 616)).add_operation (GGS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 616)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 616)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 618)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 618)).add_operation (GGS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 618)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 618)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 618)).add_operation (GGS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 618)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 618)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 620)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 620)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 620)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 620)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_22920, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 622)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 624)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 const GGS_string constinArgument_inMethodName,
                                                                 const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                 const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                 GGS_string & outArgument_outGeneratedCode,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_26571 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 637)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_26674 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_26674.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 640))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 640)) ;
  var_unusedVariableCppNameSet_26674.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 641)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_26810 (constinArgument_inFormalArgumentList) ;
  while (enumerator_26810.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_26674.plusPlusAssignOperation (enumerator_26810.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 643)) ;
    enumerator_26810.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_26955 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_26996 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_26996.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 648)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_27056 (constinArgument_inInstructionList) ;
  while (enumerator_27056.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_27056.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_26955, var_unusedVariableCppNameSet_26674, GGS_bool (false), var_routineBody_26996, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 650)) ;
    enumerator_27056.gotoNextObject () ;
  }
  {
  var_routineBody_26996.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 658)) ;
  }
  GGS_unifiedTypeMapEntry var_baseType_27398 = constinArgument_inReceiverType ;
  GGS_bool var_searching_27436 = GGS_bool (true) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas3", 662)).isValid ()) {
    uint32_t variant_27455 = GGS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas3", 662)).uintValue () ;
    bool loop_27455 = true ;
    while (loop_27455) {
      loop_27455 = var_searching_27436.isValid () ;
      if (loop_27455) {
        loop_27455 = var_searching_27436.boolValue () ;
      }
      if (loop_27455 && (0 == variant_27455)) {
        loop_27455 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas3", 662)) ;
      }
      if (loop_27455) {
        variant_27455 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_27398, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 663)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas3", 663)).operator_not (SOURCE_FILE ("semanticGeneration.galgas3", 663)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_27398, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 664)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 664)).readProperty_instanceMethodMap ().getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 664)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                var_baseType_27398 = extensionGetter_definition (var_baseType_27398, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 665)).readProperty_superType () ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              var_searching_27436 = GGS_bool (false) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_searching_27436 = GGS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (var_baseType_27398, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 673)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 673)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 673)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 673)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 673)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 673))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 673)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 674)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_28007 (constinArgument_inFormalArgumentList) ;
  while (enumerator_28007.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_28007.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 676)) ;
    enumerator_28007.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string ("void cPtr_").add_operation (var_className_26571.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 679)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 679)).add_operation (GGS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 679)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 679)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 679)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 679)) ;
  GGS_uint var_colRef_28270 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas3", 680)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_28374 (constinArgument_inFormalArgumentList) ;
  while (enumerator_28374.hasCurrentObject ()) {
    switch (enumerator_28374.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28374.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 685)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 685)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 685)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 685)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28374.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 687)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 687)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 687)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 687)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28374.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 689)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 689)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 689)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 689)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28374.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 691)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 691)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 691)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 691)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_26674.getter_hasKey (enumerator_28374.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 693)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_28374.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 694)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 694)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 694)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_28374.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 696)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 698)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28270, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 699)) ;
    }
    enumerator_28374.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 702)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_26674.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 703)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 703)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 704)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 704)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 704)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 704)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 706)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 706)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 708)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28270, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 709)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 710)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 711)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_26996, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 713)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 715)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-entities.txt'

const char * gWrapperFileContent_0_typeGenerationTemplate = 
  "\n"
  "extern proc %usefull println (let @string inString)\n"
  "\n"
  "extern proc %usefull print (let @string inString)\n"
  "\n"
  "list @2lstringlist %usefull {\n"
  "  public var @lstring mValue0\n"
  "  public var @lstring mValue1\n"
  "}\n"
  "\n"
   ;

const cRegularFileWrapper gWrapperFile_0_typeGenerationTemplate (
  "galgas-predefined-entities.txt",
  "txt",
  true, // Text file
 198, // Text length
  gWrapperFileContent_0_typeGenerationTemplate
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_0 [2] = {
  & gWrapperFile_0_typeGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_typeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (Compiler * inCompiler,
                                                                               const GGS_string & /* in_TYPE_5F_NAME */,
                                                                               const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GGS_bool & /* in_IS_5F_CONCRETE */,
                                                                               const GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                               const GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                               const GGS_getterMap & in_GETTER_5F_MAP,
                                                                               const GGS_setterMap & in_MODIFIER_5F_MAP,
                                                                               const GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                               const GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                               const GGS_subscriptMap & in_READ_5F_SUBSCRIPT_5F_MAP,
                                                                               const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                               const GGS_typeFeatures & in_SUPPORTED_5F_OPERATORS,
                                                                               const GGS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                               const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                               const GGS_bool & in_SUPPORT_5F_COLLECTION_5F_VALUE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of type generic part\n\n//--------------------------------- Initializers\n") ;
  GGS_uint index_133_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    UpEnumerator_initializerMap enumerator_133 (in_INITIALIZER_5F_MAP) ;
    while (enumerator_133.hasCurrentObject ()) {
      result.appendString ("  public: static GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" ") ;
      result.appendString (enumerator_133.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 5)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_320_IDX (0) ;
      if (enumerator_133.current_mArgumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_320 (enumerator_133.current_mArgumentTypeList (HERE)) ;
        while (enumerator_320.hasCurrentObject ()) {
          const GalgasBool test_0 = enumerator_320.current_isConstant (HERE).boolEnum () ;
          switch (test_0) {
          case GalgasBool::boolTrue : {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_320.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_320_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_320.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 11)).stringValue ()) ;
            result.appendString (" inOperand") ;
            result.appendString (index_320_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 11)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_320.gotoNextObject () ;
          index_320_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
      enumerator_133.gotoNextObject () ;
      index_133_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- GALGAS class functions\n") ;
    GGS_uint index_1200_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      UpEnumerator_classFunctionMap enumerator_1200 (in_CLASS_5F_FUNC_5F_MAP) ;
      while (enumerator_1200.hasCurrentObject ()) {
        result.appendString ("  public: static class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1200.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_1200.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_1436_IDX (0) ;
        if (enumerator_1200.current_mArgumentTypeList (HERE).isValid ()) {
          UpEnumerator_functionSignature enumerator_1436 (enumerator_1200.current_mArgumentTypeList (HERE)) ;
          while (enumerator_1436.hasCurrentObject ()) {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1436.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_1436_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 31)).stringValue ()) ;
            enumerator_1436.gotoNextObject () ;
            if (enumerator_1436.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1436_IDX.increment () ;
          }
        }
        const GalgasBool test_2 = enumerator_1200.current_mHasCompilerArgument (HERE).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_1200.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_3 = enumerator_1200.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_3) {
          case GalgasBool::boolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_1200.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_4) {
            case GalgasBool::boolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1200.gotoNextObject () ;
        index_1200_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Handle copy\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & operator = (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- << and >> shift operators\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &= operator (with expression)\n  public: void andAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- |= operator (with expression)\n  public: void orAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                  class Compiler * inCompiler\n                                  COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ^= operator (with expression)\n  public: void xorAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_10 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- += operator (with expression)\n  public: void plusAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                    class Compiler * inCompiler\n                                    COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- -= operator (with expression)\n  public: void minusAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                     class Compiler * inCompiler\n                                     COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 105)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 105)).boolEnum () ;
  switch (test_12) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- *= operator (with expression)\n  public: void mulAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 112)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 112)).boolEnum () ;
  switch (test_13) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- /= operator (with expression)\n  public: void divAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 119)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_14) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- += operator (with list of field expressions)\n  public: void addAssignOperation (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_6075_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_functionSignature enumerator_6075 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_6075.hasCurrentObject ()) {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_6075.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 123)).stringValue ()) ;
        result.appendString (" & inOperand") ;
        result.appendString (index_6075_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 123)).stringValue ()) ;
        enumerator_6075.gotoNextObject () ;
        if (enumerator_6075.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_6075_IDX.increment () ;
      }
    }
    const GalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
    switch (test_15) {
    case GalgasBool::boolTrue : {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_16 = in_SUPPORT_5F_COLLECTION_5F_VALUE.boolEnum () ;
  switch (test_16) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--------------------------------- ++= operator, collection value\n  public: void plusPlusAssignOperation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 136)).stringValue ()) ;
    result.appendString (" & inOperand\n  ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 141)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 141)).boolEnum () ;
  switch (test_17) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- & operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_and (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 147)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 147)).boolEnum () ;
  switch (test_18) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- | operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_or (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 153)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 153)).boolEnum () ;
  switch (test_19) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ^ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_xor (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 159)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 159)).boolEnum () ;
  switch (test_20) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- not operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_not (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 164)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 164)).boolEnum () ;
  switch (test_21) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ~ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_tilde (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  switch (test_22) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- + operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 176)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 176)).boolEnum () ;
  switch (test_23) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &+ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  switch (test_24) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &- operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 186)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 186)).boolEnum () ;
  switch (test_25) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- - operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 193)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 193)).boolEnum () ;
  switch (test_26) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- * operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 200)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 200)).boolEnum () ;
  switch (test_27) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &* operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 205)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 205)).boolEnum () ;
  switch (test_28) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- / operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 212)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 212)).boolEnum () ;
  switch (test_29) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &/ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 217)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 217)).boolEnum () ;
  switch (test_30) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- mod operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" modulo_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)).boolEnum () ;
  switch (test_31) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- prefix - operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_32 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 230)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 230)).boolEnum () ;
  switch (test_32) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- prefix &- operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus_no_ovf (void) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_33 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).boolEnum () ;
  switch (test_33) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ++, -- operators\n  public: void increment_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: void decrement_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_34 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 242)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 242)).boolEnum () ;
  switch (test_34) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &++, &-- operators\n  public: void increment_operation_no_overflow (void) ;\n\n  public: void decrement_operation_no_overflow (void) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_35 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 247)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 247)).boolEnum () ;
  switch (test_35) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Implementation of getter 'description'\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const override ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_36 = extensionGetter_generateCppObjectComparison (in_SUPPORTED_5F_OPERATORS, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 253)).operator_and (in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 253)).boolEnum () ;
  switch (test_36) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- Setters\n") ;
  GGS_uint index_12261_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    UpEnumerator_setterMap enumerator_12261 (in_MODIFIER_5F_MAP) ;
    while (enumerator_12261.hasCurrentObject ()) {
      const GalgasBool test_37 = GGS_bool (ComparisonKind::equal, enumerator_12261.current_mKind (HERE).objectCompare (GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
      switch (test_37) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_38 = GGS_bool (ComparisonKind::equal, enumerator_12261.current_mErrorMessage (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::equal, enumerator_12261.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_12261.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_12261.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).boolEnum () ;
        switch (test_38) {
        case GalgasBool::boolTrue : {
          result.appendString ("  public: void setter_") ;
          result.appendString (enumerator_12261.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_12692_IDX (0) ;
          if (enumerator_12261.current_mParameterList (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_12692 (enumerator_12261.current_mParameterList (HERE)) ;
            while (enumerator_12692.hasCurrentObject ()) {
              const GalgasBool test_39 = GGS_bool (ComparisonKind::equal, enumerator_12692.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 268)))).boolEnum () ;
              switch (test_39) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_12692.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_12692_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_40 = GGS_bool (ComparisonKind::equal, enumerator_12692.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 270)))).boolEnum () ;
                switch (test_40) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_12692.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_12692_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_41 = GGS_bool (ComparisonKind::equal, enumerator_12692.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 272)))).boolEnum () ;
                  switch (test_41) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_12692.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_12692_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_12692.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_12692_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              enumerator_12692.gotoNextObject () ;
              if (enumerator_12692.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12692_IDX.increment () ;
            }
          }
          const GalgasBool test_42 = GGS_bool (ComparisonKind::equal, enumerator_12261.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 279)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_42) {
          case GalgasBool::boolTrue : {
            const GalgasBool test_43 = enumerator_12261.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_43) {
            case GalgasBool::boolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_44 = enumerator_12261.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_44) {
            case GalgasBool::boolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString (") ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_12261.gotoNextObject () ;
      index_12261_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Instance Methods\n") ;
  GGS_uint index_14076_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_instanceMethodMap enumerator_14076 (in_INSTANCE_5F_METHOD_5F_MAP) ;
    while (enumerator_14076.hasCurrentObject ()) {
      const GalgasBool test_45 = GGS_bool (ComparisonKind::equal, enumerator_14076.current_mKind (HERE).objectCompare (GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)))).boolEnum () ;
      switch (test_45) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_46 = GGS_bool (ComparisonKind::equal, enumerator_14076.current_mErrorMessage (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::equal, enumerator_14076.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_14076.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_14076.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)).boolEnum () ;
        switch (test_46) {
        case GalgasBool::boolTrue : {
          result.appendString ("  public: void method_") ;
          result.appendString (enumerator_14076.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_14507_IDX (0) ;
          if (enumerator_14076.current_mParameterList (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_14507 (enumerator_14076.current_mParameterList (HERE)) ;
            while (enumerator_14507.hasCurrentObject ()) {
              const GalgasBool test_47 = GGS_bool (ComparisonKind::equal, enumerator_14507.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)))).boolEnum () ;
              switch (test_47) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_14507.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_14507_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_48 = GGS_bool (ComparisonKind::equal, enumerator_14507.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)))).boolEnum () ;
                switch (test_48) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_14507.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_14507_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_49 = GGS_bool (ComparisonKind::equal, enumerator_14507.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 310)))).boolEnum () ;
                  switch (test_49) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_14507.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 311)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_14507_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 311)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_14507.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 313)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_14507_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 313)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              enumerator_14507.gotoNextObject () ;
              if (enumerator_14507.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_14507_IDX.increment () ;
            }
          }
          const GalgasBool test_50 = GGS_bool (ComparisonKind::equal, enumerator_14076.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 317)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_50) {
          case GalgasBool::boolTrue : {
            const GalgasBool test_51 = enumerator_14076.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_51) {
            case GalgasBool::boolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_52 = enumerator_14076.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_52) {
            case GalgasBool::boolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString (") const ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_14076.gotoNextObject () ;
      index_14076_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GGS_uint index_15838_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_classMethodMap enumerator_15838 (in_CLASS_5F_METHOD_5F_MAP) ;
    while (enumerator_15838.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_15838.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 339)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_16039_IDX (0) ;
      if (enumerator_15838.current_mParameterList (HERE).isValid ()) {
        UpEnumerator_formalParameterSignature enumerator_16039 (enumerator_15838.current_mParameterList (HERE)) ;
        while (enumerator_16039.hasCurrentObject ()) {
          const GalgasBool test_53 = GGS_bool (ComparisonKind::equal, enumerator_16039.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 341)))).boolEnum () ;
          switch (test_53) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_16039.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 342)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_16039_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 342)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_54 = GGS_bool (ComparisonKind::equal, enumerator_16039.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)))).boolEnum () ;
            switch (test_54) {
            case GalgasBool::boolTrue : {
              result.appendString ("class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_16039.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_16039_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).stringValue ()) ;
              } break ;
            case GalgasBool::boolFalse : {
              const GalgasBool test_55 = GGS_bool (ComparisonKind::equal, enumerator_16039.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 345)))).boolEnum () ;
              switch (test_55) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_16039.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 346)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_16039_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 346)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_16039.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 348)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_16039_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 348)).stringValue ()) ;
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_16039.gotoNextObject () ;
          if (enumerator_16039.hasCurrentObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16039_IDX.increment () ;
        }
      }
      const GalgasBool test_56 = GGS_bool (ComparisonKind::equal, enumerator_15838.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_56) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_57 = enumerator_15838.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_57) {
        case GalgasBool::boolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_58 = enumerator_15838.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_58) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") ;\n\n") ;
      enumerator_15838.gotoNextObject () ;
      index_15838_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Getters\n") ;
  GGS_uint index_17280_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    UpEnumerator_getterMap enumerator_17280 (in_GETTER_5F_MAP) ;
    while (enumerator_17280.hasCurrentObject ()) {
      const GalgasBool test_59 = GGS_bool (ComparisonKind::equal, enumerator_17280.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_59) {
      case GalgasBool::boolTrue : {
        switch (enumerator_17280.current_mKind (HERE).enumValue ()) {
        case GGS_methodKind::Enumeration::invalid :
          break ;
        case GGS_methodKind::Enumeration::enum_definedAsExtension :
          {
          }
          break ;
        case GGS_methodKind::Enumeration::enum_definedAsMember :
          {
            const GalgasBool test_60 = GGS_bool (ComparisonKind::equal, enumerator_17280.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_17280.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_17280.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)).boolEnum () ;
            switch (test_60) {
            case GalgasBool::boolTrue : {
              result.appendString ("  public: class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_17280.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 378)).stringValue ()) ;
              result.appendString (" getter_") ;
              result.appendString (enumerator_17280.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 378)).stringValue ()) ;
              result.appendString (" (") ;
              columnMarker = result.currentColumn () ;
              GGS_uint index_17786_IDX (0) ;
              if (enumerator_17280.current_mArgumentTypeList (HERE).isValid ()) {
                UpEnumerator_functionSignature enumerator_17786 (enumerator_17280.current_mArgumentTypeList (HERE)) ;
                while (enumerator_17786.hasCurrentObject ()) {
                  result.appendString ("const class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_17786.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).stringValue ()) ;
                  result.appendString (" & constinOperand") ;
                  result.appendString (index_17786_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).stringValue ()) ;
                  enumerator_17786.gotoNextObject () ;
                  if (enumerator_17786.hasCurrentObject ()) {
                    result.appendString (",\n") ;
                    result.appendSpacesUntilColumn (columnMarker) ;
                  }
                  index_17786_IDX.increment () ;
                }
              }
              const GalgasBool test_61 = GGS_bool (ComparisonKind::equal, enumerator_17280.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              switch (test_61) {
              case GalgasBool::boolTrue : {
                const GalgasBool test_62 = enumerator_17280.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_62) {
                case GalgasBool::boolTrue : {
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolFalse : {
                  result.appendString ("LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_63 = enumerator_17280.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_63) {
                case GalgasBool::boolTrue : {
                  result.appendString (",\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolFalse : {
                  result.appendString ("\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (") const ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
          }
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_17280.gotoNextObject () ;
      index_17280_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Read subscripts\n") ;
  GGS_uint index_18504_ (0) ;
  if (in_READ_5F_SUBSCRIPT_5F_MAP.isValid ()) {
    UpEnumerator_subscriptMap enumerator_18504 (in_READ_5F_SUBSCRIPT_5F_MAP) ;
    while (enumerator_18504.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18504.current_valueType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 406)).stringValue ()) ;
      result.appendString (" readSubscript_") ;
      result.appendString (enumerator_18504.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 407)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_18712_IDX (0) ;
      if (enumerator_18504.current_argumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_18712 (enumerator_18504.current_argumentTypeList (HERE)) ;
        while (enumerator_18712.hasCurrentObject ()) {
          result.appendString ("const class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_18712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 409)).stringValue ()) ;
          result.appendString (" & in") ;
          result.appendString (index_18712_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 409)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          enumerator_18712.gotoNextObject () ;
          index_18712_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
      enumerator_18504.gotoNextObject () ;
      index_18504_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------- Introspection\n  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;\n") ;
  const GalgasBool test_64 = GGS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 419)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_64) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Friend\n  friend class UpEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n  friend class DownEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" \n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nextern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (Compiler * inCompiler,
                                                                                  const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GGS_string & /* in_TYPE_5F_IDENTIFIER */,
                                                                                  const GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                  const GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of package generic part\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 4)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- GALGAS class getters\n") ;
    GGS_uint index_220_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      UpEnumerator_classFunctionMap enumerator_220 (in_CLASS_5F_FUNC_5F_MAP) ;
      while (enumerator_220.hasCurrentObject ()) {
        result.appendString ("  public: static class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_220.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_220.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_456_IDX (0) ;
        if (enumerator_220.current_mArgumentTypeList (HERE).isValid ()) {
          UpEnumerator_functionSignature enumerator_456 (enumerator_220.current_mArgumentTypeList (HERE)) ;
          while (enumerator_456.hasCurrentObject ()) {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_456.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_456_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            enumerator_456.gotoNextObject () ;
            if (enumerator_456.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_456_IDX.increment () ;
          }
        }
        const GalgasBool test_1 = enumerator_220.current_mHasCompilerArgument (HERE).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = enumerator_220.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_3) {
            case GalgasBool::boolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_220.gotoNextObject () ;
        index_220_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GGS_uint index_1109_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_classMethodMap enumerator_1109 (in_CLASS_5F_METHOD_5F_MAP) ;
    while (enumerator_1109.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_1109.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_1310_IDX (0) ;
      if (enumerator_1109.current_mParameterList (HERE).isValid ()) {
        UpEnumerator_formalParameterSignature enumerator_1310 (enumerator_1109.current_mParameterList (HERE)) ;
        while (enumerator_1310.hasCurrentObject ()) {
          const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 31)))).boolEnum () ;
          switch (test_4) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 33)))).boolEnum () ;
            switch (test_5) {
            case GalgasBool::boolTrue : {
              result.appendString ("class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              } break ;
            case GalgasBool::boolFalse : {
              const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 35)))).boolEnum () ;
              switch (test_6) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_1310.gotoNextObject () ;
          if (enumerator_1310.hasCurrentObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_1310_IDX.increment () ;
        }
      }
      const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_1109.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_8 = enumerator_1109.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_8) {
        case GalgasBool::boolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_9 = enumerator_1109.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_9) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") ;\n\n") ;
      enumerator_1109.gotoNextObject () ;
      index_1109_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (Compiler * inCompiler,
                                                                                 const GGS_string & in_TYPE_5F_NAME,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//     ") ;
  result.appendString (GGS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 2)).add_operation (GGS_string (" generic code implementation"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\",\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const GalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 6)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("nullptr") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("& kTypeDescriptor_GALGAS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 6)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor * GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::staticTypeDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nAC_GALGAS_root * GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::clonedObject (void) const {\n  AC_GALGAS_root * result = nullptr ;\n  if (isValid ()) {\n    macroMyNew (result, GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (*this)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inObject.embeddedObject () ;\n  if (nullptr != p) {\n    if (nullptr != dynamic_cast <const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> (p)) {\n      result = *p ;\n    }else{\n      inCompiler->castError (\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n    }  \n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (Compiler * inCompiler,
                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS_string & in_PRE_5F_DECLARATION,
                                                                            const GGS_string & in_CODE
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 2)).add_operation (GGS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Predeclarations (from GALGAS extern type declaration\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_PRE_5F_DECLARATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//---\n  public: virtual bool isValid (void) const override ;\n  public: virtual void drop (void) override ;\n\n//--- For log instruction\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Code (from GALGAS extern type declaration)\n") ;
  result.appendString (in_CODE.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (Compiler * inCompiler,
                                                                           const GGS_string & in_TYPE_5F_NAME,
                                                                           const GGS_string & in_TYPE_5F_IDENTIFIER
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 2)).add_operation (GGS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_graph {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (Compiler * inCompiler,
                                                                                       const GGS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                       const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                       const GGS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_graph () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GGS_uint index_675_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    UpEnumerator_graphInsertModifierList enumerator_675 (in_INSERT_5F_MODIFIER_5F_LIST) ;
    while (enumerator_675.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_675.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inKey") ;
      GGS_uint index_992_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 21)).readProperty_addAssignOperatorArguments ().isValid ()) {
        UpEnumerator_functionSignature enumerator_992 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 21)).readProperty_addAssignOperatorArguments ()) ;
        while (enumerator_992.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_992.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue ()) ;
          result.appendString (" inArgument_") ;
          result.appendString (index_992_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue ()) ;
          enumerator_992.gotoNextObject () ;
          index_992_IDX.increment () ;
        }
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  CollectionElement attributes ;\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("::makeAttributesFromObjects (attributes") ;
      GGS_uint index_1369_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 28)).readProperty_addAssignOperatorArguments ().isValid ()) {
        UpEnumerator_functionSignature enumerator_1369 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 28)).readProperty_addAssignOperatorArguments ()) ;
        while (enumerator_1369.hasCurrentObject ()) {
          result.appendString (", inArgument_") ;
          result.appendString (index_1369_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue ()) ;
          enumerator_1369.gotoNextObject () ;
          index_1369_IDX.increment () ;
        }
      }
      result.appendString (" COMMA_THERE) ;\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_675.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 32)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n}\n") ;
      enumerator_675.gotoNextObject () ;
      index_675_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 40)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  CollectionElementArray sortedList ;\n  CollectionElementArray unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 49)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 50)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 55)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  CollectionElementArray sortedList ;\n  CollectionElementArray unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 65)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_reversedGraph (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_circularities (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 79)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  CollectionElementArray infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 84)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  CollectionElementArray infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 99)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  CollectionElementArray infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 104)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 120)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 121)).stringValue ()) ;
  result.appendString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstringlist GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_lstringlist result ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate initializerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_CLASS_5F_NAME,
                                                                                              const GGS_string & in_INITIALIZER_5F_NAME,
                                                                                              const GGS_formalInputParameterListForGeneration & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                              const GGS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   ") ;
  result.appendString (GGS_string ("INITIALIZER @").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (in_INITIALIZER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_INITIALIZER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_GETTER_5F_NAME,
                                                                                                       const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                       const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_596_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_596 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_596.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_596.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_596.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_596.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_596.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_596.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_596.gotoNextObject () ;
      index_596_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                          const GGS_string & in_CLASS_5F_NAME,
                                                                                                          const GGS_string & in_GETTER_5F_NAME,
                                                                                                          const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_584_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_584 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_584.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_584.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_584.gotoNextObject () ;
      index_584_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1227_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1227 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1227.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1227.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1227.gotoNextObject () ;
      index_1227_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_GETTER_5F_NAME,
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_581_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_581 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_581.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_581.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_581.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_581.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_581.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_581.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_581.gotoNextObject () ;
      index_581_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_GETTER_5F_NAME,
                                                                                                  const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                  const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_703_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_703 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_703.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_703.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_703.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_703.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_703.gotoNextObject () ;
      index_703_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1346_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1346 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1346.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1346.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1346.gotoNextObject () ;
      index_1346_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                            const GGS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_624_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_624 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_624.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_624.gotoNextObject () ;
      index_624_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_2134_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2134 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2134.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2134.gotoNextObject () ;
      index_2134_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                          const GGS_string & in_CLASS_5F_NAME,
                                                                                                          const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                          const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic GenericUniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_2134_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2134 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2134.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2134.gotoNextObject () ;
      index_2134_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_3160_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_3160 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_3160.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_3160.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_3160.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3160.gotoNextObject () ;
      index_3160_.increment () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (") ;\n    const GALGAS_TypeDescriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const GALGAS_TypeDescriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GGS_uint index_4843_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_4843 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_4843.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_4843.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4843.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_4843.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4843.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_4843.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4843.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4843.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_4843.gotoNextObject () ;
      index_4843_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_MODIFIER_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_615_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_615 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_615.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_615.gotoNextObject () ;
      index_615_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_2138_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2138 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2138.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2138.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2138.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2138.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2138.gotoNextObject () ;
      index_2138_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic GenericUniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_1418_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1418 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1418.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_1418.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1418.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_1418.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1418.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1418.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_1418.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1418.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1418.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1418.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1418.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_1418.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1418.gotoNextObject () ;
      index_1418_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_2444_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2444 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2444.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2444.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_2444.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2444.gotoNextObject () ;
      index_2444_.increment () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (") ;\n    const GALGAS_TypeDescriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const GALGAS_TypeDescriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GGS_uint index_4127_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_4127 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_4127.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_4127.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4127.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_4127.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4127.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_4127.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4127.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4127.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_4127.gotoNextObject () ;
      index_4127_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (",\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString (" (defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString (", nullptr) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_METHOD_5F_NAME,
                                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_558 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_558.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_558.gotoNextObject () ;
      index_558_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                          const GGS_string & in_METHOD_5F_NAME,
                                                                                                          const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_616_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_616 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_616.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_616.gotoNextObject () ;
      index_616_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_1642_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1642 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1642.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1642.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1642.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1642.gotoNextObject () ;
      index_1642_.increment () ;
    }
  }
  result.appendString ("//--- Find method\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2194_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2194 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2194.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2194.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2194.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2194.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_2194.gotoNextObject () ;
      index_2194_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_METHOD_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_549.gotoNextObject () ;
      index_549_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_METHOD_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_665_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_665 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_665.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_665.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_665.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_665.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_665.gotoNextObject () ;
      index_665_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GGS_uint index_1663_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1663 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1663.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 26)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 27)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1663.gotoNextObject () ;
      index_1663_.increment () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2165_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2165 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2165.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2165.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2165.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2165.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_2165.gotoNextObject () ;
      index_2165_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (Compiler * inCompiler,
                                                                                           const GGS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_string & in_FILEWRAPPER_5F_NAME
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_307.gotoNextObject () ;
      index_307_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" [] ;\n") ;
      enumerator_577.gotoNextObject () ;
      index_577_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_841.gotoNextObject () ;
      index_841_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_1108.gotoNextObject () ;
      index_1108_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_GETTER_5F_NAME,
                                                                                                         const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & inObject") ;
  GGS_uint index_582_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_582 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_582.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_582.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_582_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_582_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_582.gotoNextObject () ;
      index_582_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("  Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_METHOD_5F_NAME,
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" inObject") ;
  GGS_uint index_546_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_546 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_546.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_546.gotoNextObject () ;
      index_546_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & ioObject") ;
  GGS_uint index_546_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_546 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_546.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_546.gotoNextObject () ;
      index_546_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (Compiler * inCompiler,
                                                                                        const GGS_string & in_FUNCTION_5F_NAME,
                                                                                        const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                        const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_470_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_470 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_470.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_470.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_470.gotoNextObject () ;
      index_470_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (Compiler * inCompiler,
                                                                                           const GGS_string & in_FUNCTION_5F_NAME,
                                                                                           const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                           const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const GALGAS_TypeDescriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GGS_uint index_847_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_847 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_847.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_847.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_847.gotoNextObject () ;
      index_847_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GGS_uint index_2157_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_2157 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2157.hasCurrentObject ()) {
        result.appendString ("  const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2157.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_2157_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" = GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2157.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("::extractObject (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_2157_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" COMMA_HERE),\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("inCompiler\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_THERE) ;\n") ;
        enumerator_2157.gotoNextObject () ;
        index_2157_IDX.increment () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_2647_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_2647 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2647.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_2647_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_2647.gotoNextObject () ;
        index_2647_IDX.increment () ;
      }
    }
    result.appendString ("inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionWithGenericHeader_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("& kTypeDescriptor_GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                       const GGS_string & in_ROUTINE_5F_NAME,
                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_450.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_450.gotoNextObject () ;
      index_450_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (Compiler * inCompiler,
                                                                                          const GGS_string & in_ROUTINE_5F_NAME,
                                                                                          const GGS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (Compiler * inCompiler,
                                                                                               const GGS_string & in_FUNCTION_5F_NAME,
                                                                                               const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" = false ;\nstatic GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (! gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (") {\n    gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" = onceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" (inCompiler COMMA_THERE) ;\n    gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" = true ;\n  }\n  return gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (void) {\n  gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue ()) ;
  result.appendString (".drop () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gEpilogueForOnceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const GALGAS_TypeDescriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GGS_uint index_2578_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_2578 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2578.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2578.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_2578.gotoNextObject () ;
      index_2578_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation*/\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GGS_uint index_3887_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_3887 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_3887.hasCurrentObject ()) {
        result.appendString ("  const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_3887_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" = GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString ("::extractObject (inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_3887_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" COMMA_HERE), inCompiler COMMA_THERE) ;\n") ;
        enumerator_3887.gotoNextObject () ;
        index_3887_IDX.increment () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_4354_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_4354 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_4354.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_4354_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_4354.gotoNextObject () ;
        index_4354_IDX.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionWithGenericHeader_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("& kTypeDescriptor_GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (Compiler * inCompiler,
                                                                                                   const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                   const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                   const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class Compiler * inCompiler") ;
  GGS_uint index_565_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_565 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_565.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_565.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_565.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      enumerator_565.gotoNextObject () ;
      index_565_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (Compiler * inCompiler,
                                                                                                      const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const GGS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                      const GGS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                      const GGS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * ") ;
  const GalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_674_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_674 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_674.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_674.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const GalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_674.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_674.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_674.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_674.gotoNextObject () ;
      index_674_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const GalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  uint32_t columnMarker = 0 ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString ("  return GGS_string (result) ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas3", 964)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GGS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 975)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 972))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas3", 982)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 993)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 990))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_40637 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1002)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_selfTypeDefinition_40637.readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas3", 1003)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_semanticTypeForGeneration temp_2 = this ;
    result_result = GGS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_40637.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1008)), var_selfTypeDefinition_40637.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1006))) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1022)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1022))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1022)) ;
  GGS_string var_code_41774 ;
  {
  const GGS_functionImplementationForGeneration temp_1 = this ;
  const GGS_functionImplementationForGeneration temp_2 = this ;
  const GGS_functionImplementationForGeneration temp_3 = this ;
  const GGS_functionImplementationForGeneration temp_4 = this ;
  const GGS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1024)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1024)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GGS_bool (false), GGS_bool (false), var_code_41774, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1023)) ;
  }
  const GGS_functionImplementationForGeneration temp_6 = this ;
  const GGS_functionImplementationForGeneration temp_7 = this ;
  const GGS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_41774, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1039)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1035))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1050)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1050))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1050)) ;
  GGS_string var_code_42682 ;
  {
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1052)), ioArgument_ioInclusionSet, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GGS_bool (true), GGS_bool (false), var_code_42682, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1051)) ;
  }
  const GGS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_42682, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1067)) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1063))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas3", 1088)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1098)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1098))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1098)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1108)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1108))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1108)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1119)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1119))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1119)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  ioArgument_ioSwiftAppProductFileList.addAssignOperation (GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1120)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1120))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1120)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_2.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1123)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1123)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1123)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_3.readProperty_mSwiftUIImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1121)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas3", 1143)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssignOperation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1152)) ;
  const GGS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas3", 1163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssignOperation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1175)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1175))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1175)) ;
  UpEnumerator_wrapperFileMap enumerator_47143 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_47143.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssignOperation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1177)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1177))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1177)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_47143.current_mIsTextFile (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssignOperation (enumerator_47143.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1179))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1179)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssignOperation (enumerator_47143.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1181))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1181)) ;
    }
    enumerator_47143.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_47498 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_47498.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_47498.current_mRegularFileMap (HERE), enumerator_47498.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1185)) ;
    }
    enumerator_47498.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_regularFileIndexStringList_48031 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularBinaryContentIndexStringList_48081 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularTextContentIndexStringList_48140 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_directoryIndexStringList_48197 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_48031, var_directoryIndexStringList_48197, var_regularTextContentIndexStringList_48140, var_regularBinaryContentIndexStringList_48081, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1205)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_48031, var_directoryIndexStringList_48197, var_regularTextContentIndexStringList_48140, var_regularBinaryContentIndexStringList_48081, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1213))) ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_48848 (temp_3.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_48848.hasCurrentObject ()) {
    const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_48848.current_mFilewrapperTemplateName (HERE), enumerator_48848.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1222))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1222)) ;
    enumerator_48848.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inFilewrapperName,
                                                              const GGS_string constinArgument_inFilewrapperDirectory,
                                                              const GGS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GGS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GGS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_wrapperFileMap enumerator_49574 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_49574.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_49574.current_mIsTextFile (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_49661 = GGS_string::class_func_stringWithContentsOfFile (enumerator_49574.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1242)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1243)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1243)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1243)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1243)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1243)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1244)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1245)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1245)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1246)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1247)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1247)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1248)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_49661.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1249)).objectCompare (GGS_uint (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_stringlist var_components_50107 = var_contents_49661.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1250)) ;
            GGS_string var_lastLine_50200 ;
            {
            var_components_50107.setter_popLast (var_lastLine_50200, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1251)) ;
            }
            UpEnumerator_stringlist enumerator_50223 (var_components_50107) ;
            const bool bool_2 = true ;
            if (enumerator_50223.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1254)) ;
              while (enumerator_50223.hasCurrentObject () && bool_2) {
                GGS_string var_s_50319 = enumerator_50223.current_mValue (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1256)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_50319.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1257)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1257)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1257)) ;
                enumerator_50223.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_50200.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1259)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_50200.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1260)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1260)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_49661.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1263)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1263)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1265)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1266)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1266)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1267)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1268)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1268)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1269)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1270)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1270)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1271)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas3", 1272)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1272)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1273)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_49661.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1274)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1274)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1274)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1275)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1276)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1276)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1277)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1278)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1279)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_51487 = GGS_data::class_func_dataWithContentsOfFile (enumerator_49574.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1281)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1282)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1282)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1282)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1282)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1282)).add_operation (enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1284)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1283)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1284)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1285)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1284)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1285)).add_operation (var_contents_51487.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1285)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1285)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1285)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1285)).add_operation (var_contents_51487.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1285)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1286)).add_operation (GGS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1286)).add_operation (enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1287)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1287)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1287)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1288)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1288)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1289)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1289)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1289)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1289)).add_operation (enumerator_49574.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas3", 1290)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1290)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1290)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1290)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1290)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1291)).add_operation (var_contents_51487.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1292)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1292)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1292)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1292)).add_operation (enumerator_49574.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1293)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1293)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1293)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1293)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1293)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1293)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1293)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1282)) ;
    }
    enumerator_49574.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_52484 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_52484.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_52484.current_lkey (HERE).readProperty_string (), enumerator_52484.current_mWrapperDirectoryIndex (HERE), enumerator_52484.current_mRegularFileMap (HERE), enumerator_52484.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1299)) ;
    }
    enumerator_52484.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1309)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1309)).add_operation (GGS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1309)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1310)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1311)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1311)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1311)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1312)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1312)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1312)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1312)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1309)) ;
  UpEnumerator_wrapperFileMap enumerator_53085 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_53085.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_53085.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1314)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1314)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1314)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1314)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1314)) ;
    enumerator_53085.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1316)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1316)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1319)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1319)).add_operation (GGS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1319)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1320)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1321)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1321)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1321)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1322)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1322)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1322)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1322)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1322)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1319)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_53699 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_53699.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_53699.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1324)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1324)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1324)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1324)) ;
    enumerator_53699.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1326)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1329)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1329)).add_operation (GGS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1329)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1330)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1330)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1330)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1330)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1331)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1331)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas3", 1332)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1332)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1332)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1332)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1333)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1333)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1333)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1333)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1333)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1334)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1334)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1334)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1334)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1334)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas3", 1335)).getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1335)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1335)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1335)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1335)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas3", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1336)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1336)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas3", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1336)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1336)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1329)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1346))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1346)) ;
  GGS_string var_filewrapperImplementation_55033 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_55033, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1348)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_55033 COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1356))) ;
  const GGS_filewrapperDeclarationForGeneration temp_5 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_55494 (temp_5.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_55494.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_55648 = GGS_string::makeEmptyString () ;
    GGS_uint var_temporaryVariableIndex_55699 = GGS_uint (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_55745 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_55745.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1366))  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1366)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_55866 (enumerator_55494.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
    while (enumerator_55866.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_55745.plusPlusAssignOperation (enumerator_55866.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1368)) ;
      enumerator_55866.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_55997 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_55494.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_55648, ioArgument_ioInclusionSet, var_temporaryVariableIndex_55699, var_unusedVariableCppNameSet_55745, var_useColumnMarker_55997, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1371)) ;
    }
    const GGS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_55494.current_mFilewrapperTemplateName (HERE), enumerator_55494.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_55745, var_useColumnMarker_55997, var_generatedCodeForInstructionList_55648 COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1380))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1380)) ;
    enumerator_55494.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssignOperation(GGS_string ("class GGS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1403)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1403)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1403)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GGS_primitiveTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_57495 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1410)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_57495.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1414)), var_selfTypeDefinition_57495.readProperty_classFunctionMap (), var_selfTypeDefinition_57495.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1412))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1412)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_57495.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1421)), var_selfTypeDefinition_57495.readProperty_isConcrete (), var_selfTypeDefinition_57495.readProperty_initializerMap (), var_selfTypeDefinition_57495.readProperty_classFunctionMap (), var_selfTypeDefinition_57495.readProperty_getterMap (), var_selfTypeDefinition_57495.readProperty_setterMap (), var_selfTypeDefinition_57495.readProperty_instanceMethodMap (), var_selfTypeDefinition_57495.readProperty_classMethodMap (), var_selfTypeDefinition_57495.readProperty_readSubscriptMap (), var_selfTypeDefinition_57495.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_57495.readProperty_features (), var_selfTypeDefinition_57495.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_57495.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_57495.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1419))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1419)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GGS_string constinArgument_inDirectory,
                                                              const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                                              GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GGS_stringlist & ioArgument_ioToolCppFileList,
                                                              GGS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_generatedCode_59321 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1455))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_59422 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59422.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59422.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1457)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_59422.current_mDeclaration (HERE).ptr (), var_generatedCode_59321, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1458)) ;
      }
    }
    enumerator_59422.gotoNextObject () ;
  }
  var_generatedCode_59321.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1461)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_59637 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59637.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59637.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1463)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_generatedCode_59321.plusAssignOperation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_59637.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1464)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1464)) ;
      }
    }
    enumerator_59637.gotoNextObject () ;
  }
  UpEnumerator_semanticDeclarationListForGeneration enumerator_59824 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59824.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59824.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1468)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_stringset joker_59960 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_59986 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_59824.current_mDeclaration (HERE).ptr (), joker_59960, var_code_59986, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1469)) ;
        var_generatedCode_59321.plusAssignOperation(var_code_59986, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1470)) ;
      }
    }
    enumerator_59824.gotoNextObject () ;
  }
  var_generatedCode_59321.plusAssignOperation(GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1473))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1473)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_60134 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60134.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60134.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1475)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_stringset joker_60283 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__60309 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_60134.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_60283, var_headerString_32__60309, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1476)) ;
        var_generatedCode_59321.plusAssignOperation(var_headerString_32__60309, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1477)) ;
      }
    }
    enumerator_60134.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas3", 1480)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1481)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1482)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_59321, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1483)) ;
      }
    }
  }
  var_generatedCode_59321 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1496))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_61078 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_61078.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61078.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1498)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_generatedCode_59321.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_61078.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1499)) ;
        GGS_stringset joker_61298 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_61324 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_61078.current_mDeclaration (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_61298, var_code_61324, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1500)) ;
        var_generatedCode_59321.plusAssignOperation(var_code_61324, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1501)) ;
      }
    }
    enumerator_61078.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas3", 1504)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1505)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1506)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_59321, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas3", 1507)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                  const GGS_string & /* in_COMPONENT_5F_NAME */,
                                                                                  const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_295.gotoNextObject () ;
      index_295_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                          const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_264.gotoNextObject () ;
      index_264_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                const GGS_string constinArgument_inClassMethodName,
                                                                                                                const GGS_string constinArgument_inArgumentTypeName,
                                                                                                                const GGS_string constinArgument_inArgumentName,
                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1753 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1753, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 33)) ;
  }
  GGS_formalParameterSignature var_argList_1804 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1804.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas3", 35)), var_argumentTypeIndex_1753, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas3", 35)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 37)), inCompiler COMMA_HERE), var_argList_1804, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                         const GGS_string constinArgument_inClassMethodName,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_33_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_33_,
                                                                                                                                                                                         const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_2617 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_31__2716 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2716, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 59)) ;
  }
  var_argList_2617.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas3", 60)), var_argumentTypeIndex_31__2716, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas3", 60)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 60)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_32__2904 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2904, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 62)) ;
  }
  var_argList_2617.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas3", 63)), var_argumentTypeIndex_32__2904, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas3", 63)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 63)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_33__3092 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3092, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 65)) ;
  }
  var_argList_2617.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas3", 66)), var_argumentTypeIndex_33__3092, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas3", 66)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 66)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 68)), inCompiler COMMA_HERE), var_argList_2617, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                       const GGS_string constinArgument_inClassMethodName,
                                                                                                       const GGS_string constinArgument_inStringArgumentName,
                                                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3721 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_argumentTypeIndex_3721, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 80)) ;
  }
  GGS_formalParameterSignature var_argList_3772 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_3772.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas3", 82)), var_argumentTypeIndex_3721, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas3", 82)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 82)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 84)), inCompiler COMMA_HERE), var_argList_3772, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas3", 83)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                      const GGS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                      const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                      const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                      const GGS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                      const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                                                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                      GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 70)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inLocalConstantList, constinArgument_inLocalInitializedVariableList, constinArgument_inLocalInitializedVariableListNoWarns, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 72)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 85)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                               const GGS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                               const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                               const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                               const GGS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                               GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_localConstantList enumerator_4898 (constinArgument_inLocalConstantList) ;
  while (enumerator_4898.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_4898.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4898.current_mName (HERE), enumerator_4898.current_mType (HERE), enumerator_4898.current_mCppName (HERE), enumerator_4898.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 106)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4898.current_mName (HERE), enumerator_4898.current_mType (HERE), enumerator_4898.current_mCppName (HERE), enumerator_4898.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 108)) ;
      }
    }
    enumerator_4898.gotoNextObject () ;
  }
  UpEnumerator_localInitializedVariableList enumerator_5208 (constinArgument_inLocalInitializedVariableList) ;
  while (enumerator_5208.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5208.current_mName (HERE), GGS_bool (true), enumerator_5208.current_mType (HERE), enumerator_5208.current_mCppName (HERE), enumerator_5208.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 113)) ;
    }
    enumerator_5208.gotoNextObject () ;
  }
  UpEnumerator_localInitializedVariableList enumerator_5392 (constinArgument_inLocalInitializedVariableListNoWarns) ;
  while (enumerator_5392.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5392.current_mName (HERE), GGS_bool (false), enumerator_5392.current_mType (HERE), enumerator_5392.current_mCppName (HERE), enumerator_5392.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 116)) ;
    }
    enumerator_5392.gotoNextObject () ;
  }
  UpEnumerator_semanticInstructionListAST enumerator_5595 (constinArgument_inSemanticInstructionListAST) ;
  while (enumerator_5595.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_5595.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 120)) ;
    enumerator_5595.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                       const GGS_location constinArgument_inErrorLocation,
                                                       const GGS_semanticExpressionForGeneration constinArgument_inExpression,
                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_unifiedTypeMapEntry var_expressionType_6562 = constinArgument_inExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_boolType_6629 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_expressionType_6562.objectCompare (var_boolType_6629)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 154)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 154)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 155)).readProperty_propertyMap ().getter_hasKey (GGS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 155)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_AccessControl var_accessControl_6997 ;
            GGS_unifiedTypeMapEntry var_attributeType_7056 ;
            GGS_bool joker_7019 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 156)).readProperty_propertyMap ().method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("bool"), constinArgument_inErrorLocation, inCompiler COMMA_HERE), var_accessControl_6997, joker_7019, var_attributeType_7056, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 156)) ;
            extensionMethod_checkSetAccess (var_accessControl_6997, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 162)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_attributeType_7056.objectCompare (var_boolType_6629)).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_boolType_6629, constinArgument_inErrorLocation, constinArgument_inExpression, GGS_string ("bool"), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GenericArray <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 172)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 172)).add_operation (GGS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 172)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 171)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 177)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 177)).add_operation (GGS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 177)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 176)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_getterMap_2E_element var_entry_7807 = extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 181)).readProperty_getterMap ().readSubscript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 181)).readProperty_getterMap ().readSubscript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).isValuated ()) {
          test_6 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_entry_7807.readProperty_mReturnedType ().objectCompare (var_boolType_6629)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 183)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::greaterThan, var_entry_7807.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 185)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 186)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_boolType_6629, constinArgument_inErrorLocation, var_entry_7807.readProperty_mKind (), constinArgument_inExpression, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("bool"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_entry_7807.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 200)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 202)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 202)).add_operation (GGS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 202)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 201)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 208)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 208))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6562, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 206)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 206)).add_operation (GGS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 206)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 205)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                      const GGS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                      const GGS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                      const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                      const GGS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 244)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 245)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                       GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 258)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 259)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_11483 ;
  GGS_string var_cppName_11501 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_11509 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_11483, var_cppName_11501, joker_11509, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 261)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_11519 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_11519.objectCompare (var_type_11483)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 265)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 265)).add_operation (extensionGetter_identifierRepresentation (var_type_11483, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 265)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 265)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 265)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_11519, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 266)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 266)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 266)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 264)) ;
    }
  }
  ioArgument_ioAssignementList.addAssignOperation (var_cppName_11501.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 268)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 268)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 268))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 268)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 280)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 281)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_12571 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 283)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 283)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 283)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 283)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 283)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 283)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_12716 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 284)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_12716, var_cppName_12571, var_cppName_12571, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 285)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_12919 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_12919.objectCompare (var_type_12716)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 289)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 289)).add_operation (extensionGetter_identifierRepresentation (var_type_12716, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 289)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 289)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 289)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12919, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 290)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 290)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 290)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 288)) ;
    }
  }
  ioArgument_ioAssignementList.addAssignOperation (GGS_string ("GGS_string ").add_operation (var_cppName_12571, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 292)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 292)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 292)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 292))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                 const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 304)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 305)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_14006 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 307)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 307)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 307)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 307)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_14151 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 308)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_14151, var_cppName_14006, var_cppName_14006, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 309)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_14329 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_14329.objectCompare (var_type_14151)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 313)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 313)).add_operation (extensionGetter_identifierRepresentation (var_type_14151, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 313)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 313)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 313)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_14329, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 314)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 314)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 314)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 312)) ;
    }
  }
  ioArgument_ioAssignementList.addAssignOperation (GGS_string ("const GGS_string ").add_operation (var_cppName_14006, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 316)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 316)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 316)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 316))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas3", 316)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 219)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 221)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas3", 221)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 222)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_8744 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionGetterAST temp_5 = this ;
  const GGS_overridingExtensionGetterAST temp_6 = this ;
  const GGS_overridingExtensionGetterAST temp_7 = this ;
  var_entry_8744.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 228)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_8744, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 234)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 250)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 250)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 250)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_11443 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 280)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11443, var_nameForUsefulness_11443, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 281)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_11631 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11631, var_nameForUsefulness_11443 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 283)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11835 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 285)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 287)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas3", 287)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas3", 287)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 288)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 288)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 288)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 288)) ;
    }
  }
  GGS_string var_baseTypeName_12176 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_12221 = extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 292)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_12288 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_12319 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas3", 294)) ;
  GGS_location var_inheritedDeclarationLocation_12383 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 295)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas3", 296)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 296)).isValid ()) {
    uint32_t variant_12431 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas3", 296)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 296)).uintValue () ;
    bool loop_12431 = true ;
    while (loop_12431) {
      loop_12431 = var_superType_12221.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas3", 297)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas3", 297)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 297)).isValid () ;
      if (loop_12431) {
        loop_12431 = var_superType_12221.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas3", 297)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas3", 297)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 297)).boolValue () ;
      }
      if (loop_12431 && (0 == variant_12431)) {
        loop_12431 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas3", 296)) ;
      }
      if (loop_12431) {
        variant_12431 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 298)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 298)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_12852 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_12713 ; // Joker input parameter
            GGS_bool joker_12790 ; // Joker input parameter
            GGS_string joker_12870 ; // Joker input parameter
            extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 299)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_12713, var_inheritedSignature_12288, var_inheritedDeclarationLocation_12383, joker_12790, var_inheritedReturnType_12319, var_qualifier_12852, joker_12870, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 299)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_12852.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas3", 309)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_12176 = extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 310)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_12221 = extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 313)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 316)) ;
    }
  }
  GGS_analysisContext var_analysisContext_13237 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_11835, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas3", 323))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 323)), GGS_string ("object."), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13926 ;
  GGS_unifiedTypeMapEntry var_returnType_13989 ;
  GGS_string var_returnVariableCppName_14017 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_14086 ;
  {
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  const GGS_overridingExtensionGetterAST temp_16 = this ;
  const GGS_overridingExtensionGetterAST temp_17 = this ;
  const GGS_overridingExtensionGetterAST temp_18 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11443, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_13237, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_15.readProperty_mOverridingExtensionGetterInstructionList (), temp_16.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_17.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_18.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13926, var_returnType_13989, var_returnVariableCppName_14017, var_semanticInstructionListForGeneration_14086, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 326)) ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_overridingExtensionGetterAST temp_20 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_13926, var_returnType_13989, temp_20.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_12288, var_inheritedReturnType_12319, var_inheritedDeclarationLocation_12383, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 343)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  const GGS_overridingExtensionGetterAST temp_22 = this ;
  const GGS_overridingExtensionGetterAST temp_23 = this ;
  const GGS_overridingExtensionGetterAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("override extension getter ").add_operation (temp_21.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 354)), GGS_overrideExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("getter-").add_operation (temp_22.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas3", 357)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 357)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 357)).add_operation (temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas3", 357)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 357)), var_selfType_11835, var_baseTypeName_12176, temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_13989, var_returnVariableCppName_14017, var_formalParameterListForGeneration_13926, extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 364)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_14086, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 353)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 386)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas3", 410)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overrideExtensionGetterForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 419)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas3", 419)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 419))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 419)) ;
  GGS_string var_extensionGetterCode_18422 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 421)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas3", 421)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 421)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 421)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas3", 421)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 421)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_18422, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 420)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 431)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_18422, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 430))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 138)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 138)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 138)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 153)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 155)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 155)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 156)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_6763 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_6 = this ;
  var_entry_6763.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 162)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_6763, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8669 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 197)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8669, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 199)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 199)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 199)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8669, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 200)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 200)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 200)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8669, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 201)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8669, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 202)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 202)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 202)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 202)) ;
      }
    }
  }
  GGS_string var_baseTypeName_9227 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_9272 = extensionGetter_definition (var_selfType_8669, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 206)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_9320 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_9386 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 208)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 209)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 209)).isValid ()) {
    uint32_t variant_9434 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 209)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 209)).uintValue () ;
    bool loop_9434 = true ;
    while (loop_9434) {
      loop_9434 = var_superType_9272.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 210)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 210)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9227.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 210)).isValid () ;
      if (loop_9434) {
        loop_9434 = var_superType_9272.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 210)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 210)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9227.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 210)).boolValue () ;
      }
      if (loop_9434 && (0 == variant_9434)) {
        loop_9434 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 209)) ;
      }
      if (loop_9434) {
        variant_9434 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9272, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 211)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 211)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_9825 ;
            const GGS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_9732 ; // Joker input parameter
            GGS_bool joker_9809 ; // Joker input parameter
            GGS_string joker_9843 ; // Joker input parameter
            extensionGetter_definition (var_superType_9272, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 212)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_9732, var_inheritedSignature_9320, var_inheritedDeclarationLocation_9386, joker_9809, var_qualifier_9825, joker_9843, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 212)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_9825.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 221)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_9227 = extensionGetter_definition (var_superType_9272, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 222)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9272 = extensionGetter_definition (var_superType_9272, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 225)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_9227.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 228)) ;
    }
  }
  GGS_localVarManager var_variableMap_10213 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_10407 ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_10213, var_formalParameterListForGeneration_10407, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 232)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_9227.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10407, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9320, var_inheritedDeclarationLocation_9386, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 241)) ;
      }
    }
  }
}

