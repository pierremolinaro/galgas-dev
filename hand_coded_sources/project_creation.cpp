//---------------------------------------------------------------------------*
//                                                                           *
//  GALGAS Project Creation                                                  *
//                                                                           *
//  Copyright (C) 2006 Pierre Molinaro.                                      *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "project_creation.h"
#include "files/C_TextFileWrite.h"

//---------------------------------------------------------------------------*

#ifdef __MWERKS__
  #include <stat.h>
#endif

//---------------------------------------------------------------------------*

#ifdef TARGET_API_MAC_CARBON
  #define COMMA_GALGAS_CREATOR , '*GGS'
#else
  #define COMMA_GALGAS_CREATOR
#endif

//---------------------------------------------------------------------------*

static bool
createDirectory (const C_String & inDirectoryToCreate) {
  const bool ok = inDirectoryToCreate.makeDirectoryIfDoesNotExists () ;
  if (ok) {
    printf ("Created '%s' directory.\n", inDirectoryToCreate.cString ()) ;
  }else{
    printf ("** Cannot create '%s' directory.\n", inDirectoryToCreate.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createBuildCommandFile (const C_String & inFileName) {
  C_TextFileWrite f (inFileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ; 
  f << "#!/bin/sh\n"
       "cd `dirname $0` && time make all\n" ;
  bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", inFileName.cString ()) ;
    #ifndef COMPILE_FOR_WIN32
      const sint32 newPerms = inFileName.filePosixPermissions () | S_IXUSR | S_IXGRP | S_IXOTH ;
      const sint32 actualNewPerms = inFileName.setFilePosixPermissions (newPerms) ;
      if (actualNewPerms < 0) {
        printf ("** Cannot set permissions 0x%lX for '%s' file.\n", newPerms, inFileName.cString ()) ;
        ok = false ;
      }
    #endif
  }else{
    printf ("** Cannot create '%s' file.\n", inFileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCleanCommandFile (const C_String & inFileName) {
  C_TextFileWrite f (inFileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ; 
  f << "#!/bin/sh\n"
       "cd `dirname $0` && time make clean\n" ;
  bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", inFileName.cString ()) ;
    #ifndef COMPILE_FOR_WIN32
      const sint32 newPerms = inFileName.filePosixPermissions () | S_IXUSR | S_IXGRP | S_IXOTH ;
      const sint32 actualNewPerms = inFileName.setFilePosixPermissions (newPerms) ;
      if (actualNewPerms < 0) {
        printf ("** Cannot set permissions 0x%lX for '%s' file.\n", newPerms, inFileName.cString ()) ;
        ok = false ;
      }
    #endif
  }else{
    printf ("** Cannot create '%s' file.\n", inFileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createLexiqueFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_lexique.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "lexique " << projectName << "_lexique :\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end lexique ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createSemanticsFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_semantics.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "semantics " << projectName << "_semantics :\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end semantics ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createParserFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_syntax.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "syntax " << projectName << "_syntax :\n"
       "import lexique " << projectName << "_lexique in \"" << projectName << "_lexique.ggs\" ;\n"
       "import semantics " << projectName << "_semantics in \"" << projectName << "_semantics.ggs\" ;\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "rule <start_symbol> ;\n"
       "\n"
       "rule <start_symbol>:\n"
       "# ADD YOUR CODE HERE\n"
       "end rule ;\n"
       "\n"
       "end syntax ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createGrammarFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_grammar.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "grammar " << projectName << "_grammar \"LL1\":\n"
       "import lexique " << projectName << "_lexique in \"" << projectName << "_lexique.ggs\" ;\n"
       "import syntax " << projectName << "_syntax in \"" << projectName << "_syntax.ggs\" ;\n"
       "\n"
       "start <start_symbol> ;\n"
       "\n"
       "end grammar ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createProgramFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_program.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "program " << projectName << "_program \"version 1.0.0\" . \"???\":\n"
       "import grammar " << projectName << "_grammar in \"" << projectName << "_grammar.ggs\" ;\n"
       "#--- max error and warning count\n"
       "error 100 ;\n"
       "warning 100 ;\n"
       "end program ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCompileAllFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/_all_" + projectName + ".ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "compile \"" << projectName << "_lexique.ggs\" ;\n"
       "compile \"" << projectName << "_semantics.ggs\" ;\n"
       "compile \"" << projectName << "_syntax.ggs\" ;\n"
       "compile \"" << projectName << "_grammar.ggs\" ;\n"
       "compile \"" << projectName << "_program.ggs\" ;\n"
       "\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createMacOSXmakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_macosx/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" command line tools for Mac OS X") ;
  f.writeComment ("#---", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeComment ("#---", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeComment ("#---", "Link Options") ;
  f << "LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeComment ("#---", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_MEMORY_CHECK_CODE\n"
       "\n" ;
  f.writeComment ("#---", "Include source file list") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include gcc tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/macosx_gcc_tools.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
create_i386LinuxOnMacOSXmakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_i386linux_on_macosx/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" command line tools for i386 Linux, built on Mac OS X") ;
  f.writeComment ("#---", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeComment ("#---", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeComment ("#---", "Link Options") ;
  f << "LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeComment ("#---", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_MEMORY_CHECK_CODE\n"
       "\n" ;
  f.writeComment ("#---", "Include source file list") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include i386 Linux tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/i386linux_on_macosx_gcc_tools.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createMinGWOnMacOSXmakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_mingw_on_macosx/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" command line tools for Win32, built on Mac OS X") ;
  f.writeComment ("#---", "Executables") ;
  f << "EXECUTABLE := " << projectName << ".exe\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug.exe\n"
       "\n" ;
  f.writeComment ("#---", "Link Options") ;
  f << "LINKER_OPTIONS := -lcomdlg32\n"
       "\n" ;
  f.writeComment ("#---", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_MEMORY_CHECK_CODE\n"
       "\n" ;
  f.writeComment ("#---", "Include source file list") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include MinGW tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/mingw_on_macosx_gcc_tools.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createMSYSOnWin32makefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_msys_on_win32/makefile.mke" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" command line tools for Win32, built with MSYS") ;
  f.writeComment ("#---", "Executables") ;
  f << "EXECUTABLE := " << projectName << ".exe\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug.exe\n"
       "\n" ;
  f.writeComment ("#---", "Link Options") ;
  f << "LINKER_OPTIONS := -lcomdlg32\n"
       "\n" ;
  f.writeComment ("#---", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_MEMORY_CHECK_CODE\n"
       "\n" ;
  f.writeComment ("#---", "Include source file list") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include MinGW tools for MSYS") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/msys_on_win32.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createUnixMakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_unix/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" command line tools for Unix") ;
  f.writeComment ("#---", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeComment ("#---", "Link Options") ;
  f << "LINKER_OPTIONS := \n"
       "\n" ;
  f.writeComment ("#---", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_MEMORY_CHECK_CODE\n"
       "\n" ;
  f.writeComment ("#---", "Include source file list") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include Unix tools") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/unix_gcc_tools.mke\n"
       "\n" ;
  f.writeComment ("#---", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createBuildBatFile (const C_String & inCreatedProjectPathName) {
  const C_String fileName = inCreatedProjectPathName + "/makefile_msys_on_win32/build.bat" ;
  C_TextFileWrite f (fileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ;
  f << "PATH=%PATH%;C:\\msys\\1.0\\bin;C:\\MinGW\\bin\n"
       "sh -c \"make -f makefile.mke\"\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCleanBatFile (const C_String & inCreatedProjectPathName) {
  const C_String fileName = inCreatedProjectPathName + "/makefile_msys_on_win32/clean.bat" ;
  C_TextFileWrite f (fileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ;
  f << "PATH=%PATH%;C:\\msys\\1.0\\bin;C:\\MinGW\\bin\n"
       "sh -c \"make -f makefile.mke clean\"\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCommonMakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/common_files_for_make/makefile.mke" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", "This file is included by every platform makefile") ;
  f.writeComment ("#---", "LIBPM path") ;
  f << "LIB_PM_PATH := ../../libpm\n"
       "\n" ;
  f.writeComment ("#---", "Project source files directories") ;
  f << "SOURCES_DIR := ../galgas_sources/GALGAS_OUTPUT\n"
       "SOURCES_DIR += ../hand_coded_sources\n"
       "\n" ;
  f.writeComment ("#---", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeComment ("#---", "Source files names list (without their actual path)") ;
  f << "SOURCES :=\n"
       "\n" ;
  f.writeComment ("#", "Files from libpm") ;
  f << "SOURCES += AC_galgas_io.cpp\n"
       "SOURCES += AC_galgas_map.cpp\n"
       "SOURCES += C_galgas_terminal_io.cpp\n"
       "SOURCES += MF_Assert.cpp\n"
       "SOURCES += MF_MemoryControl.cpp\n"
       "SOURCES += F_DisplayException.cpp\n"
       "SOURCES += C_Exception.cpp\n"
       "SOURCES += C_Lexique.cpp\n"
       "SOURCES += GGS_bool.cpp\n"
       "SOURCES += GGS_char.cpp\n"
       "SOURCES += GGS_string.cpp\n"
       "SOURCES += GGS_uint.cpp\n"
       "SOURCES += GGS_lbool.cpp\n"
       "SOURCES += GGS_lchar.cpp\n"
       "SOURCES += GGS_lstring.cpp\n"
       "SOURCES += GGS_luint.cpp\n"
       "SOURCES += GGS_stringset.cpp\n"
       "SOURCES += GGS_location.cpp\n"
       "SOURCES += C_String.cpp\n"
       "SOURCES += C_Timer.cpp\n"
       "SOURCES += C_TextFileWrite.cpp\n"
       "SOURCES += C_GGS_Object.cpp\n"
       "SOURCES += C_DateTime.cpp\n"
       "SOURCES += F_GetPrime.cpp\n"
       "SOURCES += AC_OutputStream.cpp\n"
       "SOURCES += C_ConsoleOut.cpp\n"
       "SOURCES += F_Analyze_CLI_Options.cpp\n"
       "SOURCES += F_main.cpp\n"
       "SOURCES += AC_CLI_Options.cpp\n"
       "SOURCES += C_CLI_OptionGroup.cpp\n"
       "SOURCES += C_builtin_CLI_Options.cpp\n" ;
  f.writeComment ("#", "Files generated by GALGAS") ;
  f << "SOURCES += " << projectName << "_lexique.cpp\n"
       "SOURCES += " << projectName << "_semantics.cpp\n"
       "SOURCES += " << projectName << "_syntax.cpp\n"
       "SOURCES += " << projectName << "_grammar.cpp\n"
       "SOURCES += " << projectName << "_program.cpp\n" ;
  f.writeComment ("#", "Hand-coded files") ;
  f << "#SOURCES += \n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

void
createProject (C_Lexique & /* inLexique */,
               const C_String & inCreatedProjectPathName) {
//--- if creation directory exists, emit an error and do nothing
  if (inCreatedProjectPathName.isDirectory ()) {
	  printf ("** Cannot create GALGAS project: '%s' directory already exists.\n", inCreatedProjectPathName.cString ()) ;
	}else{
	//--- Create directories
	  bool ok = createDirectory (inCreatedProjectPathName) ;
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/common_files_for_make") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/galgas_sources") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/hand_coded_sources") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/makefile_i386linux_on_macosx") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/makefile_macosx") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/makefile_mingw_on_macosx") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/makefile_msys_on_win32") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/makefile_unix") ;
    }
  //--- Create build.command files
    if (ok) {
      ok = createBuildCommandFile (inCreatedProjectPathName + "/makefile_i386linux_on_macosx/build.command") ;
    }
    if (ok) {
      ok = createBuildCommandFile (inCreatedProjectPathName + "/makefile_macosx/build.command") ;
    }
    if (ok) {
      ok = createBuildCommandFile (inCreatedProjectPathName + "/makefile_mingw_on_macosx/build.command") ;
    }
  //--- Create clean.command files
    if (ok) {
      ok = createCleanCommandFile (inCreatedProjectPathName + "/makefile_i386linux_on_macosx/clean.command") ;
    }
    if (ok) {
      ok = createCleanCommandFile (inCreatedProjectPathName + "/makefile_macosx/clean.command") ;
    }
    if (ok) {
      ok = createCleanCommandFile (inCreatedProjectPathName + "/makefile_mingw_on_macosx/clean.command") ;
    }
  //--- Create GALGAS sources
    if (ok) {
      ok = createLexiqueFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createSemanticsFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createParserFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createGrammarFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createProgramFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createCompileAllFile (inCreatedProjectPathName) ;
    }
  //--- Create makefile files
    if (ok) {
      ok = createCommonMakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createUnixMakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createMacOSXmakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = create_i386LinuxOnMacOSXmakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createMinGWOnMacOSXmakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createMSYSOnWin32makefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createBuildBatFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createCleanBatFile (inCreatedProjectPathName) ;
    }
	}

}

//---------------------------------------------------------------------------*
