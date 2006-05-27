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

#include <ctype.h>

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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

static bool
createDirectory (const C_String & inDirectoryToCreate) {
  const bool ok = inDirectoryToCreate.makeDirectoryIfDoesNotExists () ;
  if (ok) {
    printf ("  Created '%s' directory.\n", inDirectoryToCreate.cString ()) ;
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
    printf ("  Created '%s' file.\n", inFileName.cString ()) ;
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
    printf ("  Created '%s' file.\n", inFileName.cString ()) ;
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
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
       "  import option " << projectName << "_options in \"" << projectName << "_options.ggs\" ;\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end semantics ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createOptionFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_options.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "option " << projectName << "_options :\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end option ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createMetamodelFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_metamodel.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "metamodel " << projectName << "_metamodel root @" << projectName << "_root :\n"
       "\n"
       "entity @" << projectName << "_root {\n"
       "}\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end metamodel ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createContraintsFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_constraints.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "constraint " << projectName << "_constraints (firstPass) :\n"
       "import metamodel " << projectName << "_metamodel in \"" << projectName << "_metamodel.ggs\" ;\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "on @" << projectName << "_root {\n"
       "  firstPass {\n"
       "  }{\n"
       "  }\n"
       "}\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end constraint ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createParserFile (const C_String & inCreatedProjectPathName,
                  const enumProjectStyle inProjectStyle) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_syntax.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "syntax " << projectName << "_syntax :\n"
       "import lexique " << projectName << "_lexique in \"" << projectName << "_lexique.ggs\" ;\n"
       "import semantics " << projectName << "_semantics in \"" << projectName << "_semantics.ggs\" ;\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "import metamodel " << projectName << "_metamodel in \"" << projectName << "_metamodel.ggs\" ;\n" ;
  }
  f << "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "rule <start_symbol>" ;
  if (inProjectStyle == kMDAproject) {
    f << " -> @" << projectName << "_root" ;
  }
  f << " ;\n"
       "\n"
       "rule <start_symbol>" ;
  if (inProjectStyle == kMDAproject) {
    f << " -> @" << projectName << "_root" ;
  }
  f << " :\n"
       "# ADD YOUR CODE HERE\n"
       "end rule ;\n"
       "\n"
       "end syntax ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createGrammarFile (const C_String & inCreatedProjectPathName,
                   const enumProjectStyle inProjectStyle) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_grammar.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "grammar " << projectName << "_grammar \"LL1\":\n"
       "import lexique " << projectName << "_lexique in \"" << projectName << "_lexique.ggs\" ;\n"
       "import syntax " << projectName << "_syntax in \"" << projectName << "_syntax.ggs\" ;\n"
       "\n"
       "root <start_symbol>" ;
  if (inProjectStyle == kMDAproject) {
    f << " -> " << projectName << "_metamodel" ;
  }
  f << " ;\n"
       "\n"
       "end grammar ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createProgramFile (const C_String & inCreatedProjectPathName,
                   const enumProjectStyle inProjectStyle) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_program.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "program " << projectName << "_program \"version 1.0.0\" . \"???\":\n"
       "import grammar " << projectName << "_grammar in \"" << projectName << "_grammar.ggs\" ;\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "#--- WARNING : metamodel handling will change in future releases\n"
         "import metamodel " << projectName << "_metamodel in \"" << projectName << "_metamodel.ggs\" ;\n"
         "import constraint " << projectName << "_constraints in \"" << projectName << "_constraints.ggs\" ;\n"
         "metamodel " << projectName << "_metamodel (" << projectName << "_constraints) ;\n" ;
  }
  f << "#--- max error and warning count\n"
       "error 100 ;\n"
       "warning 100 ;\n"
       "end program ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCompileAllFile (const C_String & inCreatedProjectPathName,
                      const enumProjectStyle inProjectStyle) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/_all_" + projectName + ".ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "compile \"" << projectName << "_lexique.ggs\" ;\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "compile \"" << projectName << "_metamodel.ggs\" ;\n"
         "compile \"" << projectName << "_constraints.ggs\" ;\n" ;
  }
  f << "compile \"" << projectName << "_options.ggs\" ;\n"
       "compile \"" << projectName << "_semantics.ggs\" ;\n"
       "compile \"" << projectName << "_syntax.ggs\" ;\n"
       "compile \"" << projectName << "_grammar.ggs\" ;\n"
       "compile \"" << projectName << "_program.ggs\" ;\n"
       "\n" ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCppComputationsFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/hand_coded_sources/" + projectName + "_computations.cpp" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeFileHeaderComment ("//", projectName + " Project", "GALGAS Project Creation", false) ;
  f << "#include \"" << projectName << "_semantics.h\"\n"
       "\n" ;
  f.writeHyphenLineComment ("//") ;
  f << "// ADD YOUR CODE HERE\n"
       "\n" ;
  f.writeHyphenLineComment ("//") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Makefiles
#endif

//---------------------------------------------------------------------------*

static bool
createMacOSXmakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_macosx/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" command line tools for Mac OS X") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Mac OS X") ;
  f << "PLATFORM_LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_CHECKINGS\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include gcc tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/macosx_gcc_tools.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeTitleComment ("#", "Link Options for i386 Linux") ;
  f << "PLATFORM_LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_CHECKINGS\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include i386 Linux tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/i386linux_on_macosx_gcc_tools.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << ".exe\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug.exe\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Win32") ;
  f << "PLATFORM_LINKER_OPTIONS := -lcomdlg32\n"
       "\n" ;
  f.writeTitleComment ("#", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_CHECKINGS\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include MinGW tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/mingw_on_macosx_gcc_tools.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << ".exe\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug.exe\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Win32") ;
  f << "PLATFORM_LINKER_OPTIONS := -lcomdlg32\n"
       "\n" ;
  f.writeTitleComment ("#", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_CHECKINGS\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include MinGW tools for MSYS") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/msys_on_win32.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Unix") ;
  f << "PLATFORM_LINKER_OPTIONS := \n"
       "\n" ;
  f.writeTitleComment ("#", "Release version compile options") ;
  f << "RELEASE_OPTIONS := -DDO_NOT_GENERATE_CHECKINGS\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Unix tools") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/unix_gcc_tools.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
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
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCommonMakefileFile (const C_String & inCreatedProjectPathName,
                          const enumProjectStyle inProjectStyle) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/common_files_for_make/makefile.mke" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", "This file is included by every platform makefile") ;
  f.writeTitleComment ("#", "LIBPM path") ;
  f << "LIB_PM_PATH := ../../libpm\n"
       "\n" ;
  f.writeTitleComment ("#", "Project source files directories") ;
  f << "SOURCES_DIR := ../galgas_sources/GALGAS_OUTPUT\n"
       "SOURCES_DIR += ../hand_coded_sources\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeTitleComment ("#", "Compiler Options") ;
  f << "#--- Options for all compilers\n"
       "COMPILER_OPTIONS := -Wall -Werror -Wreturn-type -Wsign-promo\n"
       "\n"
       "#--- Options for release mode\n"
       "COMPILER_OPTIONS_RELEASE := -O1 -fomit-frame-pointer  -DDO_NOT_GENERATE_CHECKINGS\n"
       "\n"
       "#--- Options for debug mode\n"
       "COMPILER_OPTIONS_DEBUG := -g\n"
       "\n"
       "#--- Options for C compiling (.c extension)\n"
       "C_COMPILER_OPTIONS :=\n"
       "\n"
       "#--- Options for C++ compiling (.cpp extension)\n"
       "CPP_COMPILER_OPTIONS := -Woverloaded-virtual\n"
       "\n"
       "#--- Options for Objective-C compiling (.m extension)\n"
       "OC_COMPILER_OPTIONS :=\n"
       "\n"
       "#--- Options for Objective-C++ compiling (.mm extension)\n"
       "OCPP_COMPILER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options") ;
  f << "#--- Options for all platforms \n"
       "LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Source files names list (without their actual path)") ;
  f << "SOURCES :=\n"
       "\n" ;
  f.writeComment ("#", "Files from libpm") ;
  f << "SOURCES += AC_galgas_io.cpp\n"
       "SOURCES += AC_galgas_map.cpp\n"
       "SOURCES += C_GGS_Object.cpp\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "SOURCES += C_GGS_entityMap.cpp\n"
         "SOURCES += C_GGS_MapIndex.cpp\n" ;
  }
  f << "SOURCES += C_galgas_terminal_io.cpp\n"
       "SOURCES += MF_Assert.cpp\n"
       "SOURCES += MF_MemoryControl.cpp\n"
       "SOURCES += F_DisplayException.cpp\n"
       "SOURCES += C_Exception.cpp\n"
       "SOURCES += C_galgas_CLI_Options.cpp\n"
       "SOURCES += C_Lexique.cpp\n"
       "SOURCES += GGS_bool.cpp\n"
       "SOURCES += GGS_char.cpp\n"
       "SOURCES += GGS_string.cpp\n"
       "SOURCES += GGS_uint.cpp\n"
       "SOURCES += GGS_sint.cpp\n"
       "SOURCES += GGS_double.cpp\n"
       "SOURCES += GGS_lbool.cpp\n"
       "SOURCES += GGS_lchar.cpp\n"
       "SOURCES += GGS_lstring.cpp\n"
       "SOURCES += GGS_luint.cpp\n"
       "SOURCES += GGS_lsint.cpp\n"
       "SOURCES += GGS_ldouble.cpp\n"
       "SOURCES += GGS_stringset.cpp\n"
       "SOURCES += GGS_location.cpp\n"
       "SOURCES += C_BDD.cpp\n"
       "SOURCES += C_Display_BDD.cpp\n"
       "SOURCES += C_PrimeCache2.cpp\n"
       "SOURCES += C_PrimeCache3.cpp\n"
       "SOURCES += C_String.cpp\n"
       "SOURCES += C_Timer.cpp\n"
       "SOURCES += C_TextFileWrite.cpp\n"
       "SOURCES += C_DateTime.cpp\n"
       "SOURCES += F_GetPrime.cpp\n"
       "SOURCES += AC_OutputStream.cpp\n"
       "SOURCES += C_ConsoleOut.cpp\n"
       "SOURCES += F_Analyze_CLI_Options.cpp\n"
       "SOURCES += F_main.cpp\n"
       "SOURCES += AC_CLI_Options.cpp\n"
       "SOURCES += C_CLI_OptionGroup.cpp\n"
       "SOURCES += C_builtin_CLI_Options.cpp\n"
       "SOURCES += " << projectName << "_computations.cpp\n" ;
  f.writeComment ("#", "Files generated by GALGAS") ;
  f << "SOURCES += " << projectName << "_lexique.cpp\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "SOURCES += " << projectName << "_metamodel.cpp\n"
         "SOURCES += " << projectName << "_constraints.cpp\n" ;
  }
  f << "SOURCES += " << projectName << "_options.cpp\n"
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
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Code::Blocks Project File
#endif

//---------------------------------------------------------------------------*

static bool
createCodeBlockProjectFile (const C_String & inCreatedProjectPathName,
                            const C_String & inCodeBlockDirectory,
                            const enumProjectStyle inProjectStyle) {
  const char * releaseTarget = "Release" ;
  const char * debugTarget = "Debug" ;
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + inCodeBlockDirectory + "/" + projectName + ".cbp" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "<?xml version=\"1.0\"?>\n"
       "<!DOCTYPE CodeBlocks_project_file>\n"
       "<CodeBlocks_project_file>\n"
       "	<FileVersion major=\"1\" minor=\"1\"/>\n"
       "	<Project>\n"
       "		<Option title=\"" << projectName << "\"/>\n"
       "		<Option makefile=\"Makefile\"/>\n"
       "		<Option makefile_is_custom=\"0\"/>\n"
       "		<Option compiler=\"0\"/>\n"
       "		<Build>\n"
       "			<Target title=\"" << releaseTarget << "\">\n"
       "				<Option output=\"" << projectName << ".exe\"/>\n"
       "				<Option working_dir=\".\"/>\n"
       "				<Option object_output=\"objects\"/>\n"
       "				<Option deps_output=\".deps\"/>\n"
       "				<Option type=\"1\"/>\n"
       "				<Option compiler=\"0\"/>\n"
       "				<Option projectResourceIncludeDirsRelation=\"1\"/>\n"
       "				<Compiler>\n"
       "					<Add option=\"-O\"/>\n"
       "					<Add option=\"-W\"/>\n"
       "					<Add option=\"-Wall\"/>\n"
       "					<Add option=\"-DDO_NOT_GENERATE_CHECKINGS\"/>\n"
       "				</Compiler>\n"
       "				<Linker>\n"
       "					<Add option=\"-s\"/>\n"
       "				</Linker>\n"
       "			</Target>\n"
       "			<Target title=\"" << debugTarget << "\">\n"
       "				<Option output=\"" << projectName << "_debug.exe\"/>\n"
       "				<Option working_dir=\".\"/>\n"
       "				<Option object_output=\"objects_debug\"/>\n"
       "				<Option deps_output=\".deps_debug\"/>\n"
       "				<Option type=\"1\"/>\n"
       "				<Option compiler=\"0\"/>\n"
       "				<Option projectResourceIncludeDirsRelation=\"1\"/>\n"
       "				<Compiler>\n"
       "					<Add option=\"-O\"/>\n"
       "					<Add option=\"-W\"/>\n"
       "					<Add option=\"-Wall\"/>\n"
       "				</Compiler>\n"
       "			</Target>\n"
       "		</Build>\n"
       "		<Compiler>\n"
       "			<Add option=\"-I../../libpm\"/>\n"
       "			<Add option=\"-I../galgas_sources/GALGAS_OUTPUT\"/>\n"
       "			<Add option=\"-I../hand_coded_sources\"/>\n"
       "		</Compiler>\n"
       "		<Linker>\n"
       "			<Add library=\"stdc++\"/>\n"
       "			<Add library=\"m\"/>\n"
       "			<Add library=\"comdlg32\"/>\n"
       "		</Linker>\n"
       "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_lexique.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_metamodel.cpp\">\n"
         "			<Option compilerVar=\"CC\"/>\n"
         "			<Option target=\"" << releaseTarget << "\"/>\n"
         "			<Option target=\"" << debugTarget << "\"/>\n"
         "		</Unit>\n"
         "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_constraints.cpp\">\n"
         "			<Option compilerVar=\"CC\"/>\n"
         "			<Option target=\"" << releaseTarget << "\"/>\n"
         "			<Option target=\"" << debugTarget << "\"/>\n"
         "		</Unit>\n" ;
  }
  f << "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_options.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_semantics.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_syntax.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_grammar.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_program.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\hand_coded_sources\\" << projectName << "_computations.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\bdd\\C_BDD.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\bdd\\C_Display_BDD.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\AC_galgas_io.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\AC_galgas_map.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\C_GGS_object.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "		<Unit filename=\"..\\..\\libpm\\galgas\\C_GGS_entityMap.cpp\">\n"
         "			<Option compilerVar=\"CC\"/>\n"
         "			<Option target=\"" << releaseTarget << "\"/>\n"
         "			<Option target=\"" << debugTarget << "\"/>\n"
         "		</Unit>\n"
         "		<Unit filename=\"..\\..\\libpm\\galgas\\C_GGS_MapIndex.cpp\">\n"
         "			<Option compilerVar=\"CC\"/>\n"
         "			<Option target=\"" << releaseTarget << "\"/>\n"
         "			<Option target=\"" << debugTarget << "\"/>\n"
         "		</Unit>\n" ;
  }
  f << "		<Unit filename=\"..\\..\\libpm\\galgas\\C_galgas_terminal_io.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\C_galgas_CLI_Options.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\C_Lexique.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_bool.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_char.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_string.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_uint.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_sint.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_double.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_location.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_lbool.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_lchar.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_lstring.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_luint.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_lsint.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_double.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\galgas\\GGS_stringset.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\cache\\C_PrimeCache2.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\cache\\C_PrimeCache3.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\command_line_interface\\AC_CLI_Options.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\command_line_interface\\F_Analyze_CLI_Options.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\command_line_interface\\C_CLI_OptionGroup.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\command_line_interface\\C_builtin_CLI_Options.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\command_line_interface\\F_main.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\files\\C_TextFileWrite.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\streams\\AC_OutputStream.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\streams\\C_ConsoleOut.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\time\\C_Timer.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\time\\C_DateTime.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\utilities\\MF_Assert.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\utilities\\MF_MemoryControl.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\utilities\\F_DisplayException.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\utilities\\C_Exception.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\utilities\\C_String.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "		<Unit filename=\"..\\..\\libpm\\utilities\\F_GetPrime.cpp\">\n"
       "			<Option compilerVar=\"CC\"/>\n"
       "			<Option target=\"" << releaseTarget << "\"/>\n"
       "			<Option target=\"" << debugTarget << "\"/>\n"
       "		</Unit>\n"
       "	</Project>\n"
       "</CodeBlocks_project_file>\n"
       "\n" ;

  const bool ok = f.close () ;
  if (ok) {
    printf ("  Created '%s' file.\n", fileName.cString ()) ;
  }else{
    printf ("** Cannot create '%s' file.\n", fileName.cString ()) ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Project Creation
#endif

//---------------------------------------------------------------------------*

void
createProject (C_Lexique & /* inLexique */,
               const C_String & inCreatedProjectPathName,
               const enumProjectStyle inProjectStyle) {
  printf ("*** PERFORM PROJECT CREATION (--create-project=%s option) ***\n", inCreatedProjectPathName.cString ()) ;
//--- First check the project name is correct (not empty, only letters, digits and '_')
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  bool projectNameIsCorrect = true ;
  for (sint32 i=0 ; (i<projectName.length ()) && projectNameIsCorrect ; i++) {
    const char c = projectName (i COMMA_HERE) ;
    projectNameIsCorrect = isalnum (c) || (c == '_') ;
  }
  if (projectName.length () == 0) {
	  printf ("** Cannot create GALGAS project: the project name is empty.\n") ;
  }else if (! projectNameIsCorrect) {
	  printf ("** Cannot create GALGAS project: the project name should contain only letters, digits and underscore character.\n") ;
//--- if creation directory exists, emit an error and do nothing
  }else if (inCreatedProjectPathName.isDirectory ()) {
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
    if (ok && (inProjectStyle == kMDAproject)) {
      ok = createMetamodelFile (inCreatedProjectPathName) ;
    }
    if (ok && (inProjectStyle == kMDAproject)) {
      ok = createContraintsFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createOptionFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createSemanticsFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createParserFile (inCreatedProjectPathName, inProjectStyle) ;
    }
    if (ok) {
      ok = createGrammarFile (inCreatedProjectPathName, inProjectStyle) ;
    }
    if (ok) {
      ok = createProgramFile (inCreatedProjectPathName, inProjectStyle) ;
    }
    if (ok) {
      ok = createCompileAllFile (inCreatedProjectPathName, inProjectStyle) ;
    }
    if (ok) {
      ok = createCppComputationsFile (inCreatedProjectPathName) ;
    }
  //--- Create makefile files
    if (ok) {
      ok = createCommonMakefileFile (inCreatedProjectPathName, inProjectStyle) ;
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
  //--- Codeblock Project
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_codeblocks") ;
    }
    if (ok) {
      ok = createCodeBlockProjectFile (inCreatedProjectPathName, "/project_codeblocks", inProjectStyle) ;
    }
	}
  printf ("*** END OF PROJECT CREATION ***\n") ;
}

//---------------------------------------------------------------------------*
