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
    co << "  Created '" << inDirectoryToCreate << "' directory.\n" ;
  }else{
    co << "** Cannot create '" << inDirectoryToCreate << "' directory.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCommandFile (const C_String & inFileName,
                   const char * inMakeArguments) {
  C_TextFileWrite f (inFileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ; 
  f << "#!/bin/sh\n"
       "cd `dirname $0` && time make --warn-undefined-variables " << inMakeArguments << "\n" ;
  bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << inFileName << "' file.\n" ;
    #ifndef COMPILE_FOR_WIN32
      const sint32 newPerms = inFileName.filePosixPermissions () | S_IXUSR | S_IXGRP | S_IXOTH ;
      const sint32 actualNewPerms = inFileName.setFilePosixPermissions (newPerms) ;
      if (actualNewPerms < 0) {
        co << "** Cannot set permissions "
           << uintInHex (newPerms)
           << " for '" << inFileName << "' file.\n" ;
        ok = false ;
      }
    #endif
  }else{
    co << "  Cannot create '" << inFileName << "' file.\n" ;
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
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createMetamodelFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_metamodel.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "metamodel " << projectName << "_metamodel root %" << projectName << "_root :\n"
       "\n"
       "class %" << projectName << "_root {\n"
       "}\n"
       "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "end metamodel ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createContraintsFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_constraints.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "constraint " << projectName << "_constraints:\n"
       "import metamodel " << projectName << "_metamodel in \"" << projectName << "_metamodel.ggs\" ;\n"
       "\n"
       "#-1- Declare classes to be overriden\n"
       "override %" << projectName << "_root ;\n"
       "\n"
       "#-2- Declare maps\n"
       "\n"
       "#-2- Override classes\n"
       "class %" << projectName << "_root {\n"
       "}{\n"
       "}\n"
       "\n"
       "end constraint ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
       "import option " << projectName << "_options in \"" << projectName << "_options.ggs\" ;\n"
       "import semantics " << projectName << "_semantics in \"" << projectName << "_semantics.ggs\" ;\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "import metamodel " << projectName << "_metamodel in \"" << projectName << "_metamodel.ggs\" ;\n" ;
  }
  f << "\n"
       "# ADD YOUR CODE HERE\n"
       "\n"
       "rule <start_symbol>" ;
  if (inProjectStyle == kMDAproject) {
    f << " -> %" << projectName << "_root" ;
  }
  f << " ;\n"
       "\n"
       "rule <start_symbol>" ;
  if (inProjectStyle == kMDAproject) {
    f << " -> %" << projectName << "_root" ;
  }
  f << " :\n"
       "# ADD YOUR CODE HERE\n"
       "end rule ;\n"
       "\n"
       "end syntax ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
       "import option " << projectName << "_options in \"" << projectName << "_options.ggs\" ;\n"
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
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
  f << "program " << projectName << "_program \"version 1.0.0\":\n"
       "import grammar " << projectName << "_grammar in \"" << projectName << "_grammar.ggs\" ;\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "#--- WARNING : metamodel handling will change in future releases\n"
         "import metamodel " << projectName << "_metamodel in \"" << projectName << "_metamodel.ggs\" ;\n"
         "import constraint " << projectName << "_constraints in \"" << projectName << "_constraints.ggs\" ;\n" ;
  }
  f << "#--- max error and warning count\n"
       "error 100 ;\n"
       "warning 100 ;\n"
       "when . \"" << projectName << "\":\n"
       "  message \"a source text file with the ." << projectName << " extension\"\n"
       "  grammar " << projectName << "_grammar\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "  metamodel " << projectName << "_metamodel (" << projectName << "_constraints)\n" ;
  }
  f << "  ;\n"
       "end program ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCocoaFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/galgas_sources/" + projectName + "_cocoa.ggs" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "gui " << projectName << "_cocoa \"cocoa\":\n"
       "import grammar " << projectName << "_grammar in \"" << projectName << "_grammar.ggs\" ;\n"
       "end gui ;\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
       "compile \"" << projectName << "_cocoa.ggs\" ;\n"
       "compile \"" << projectName << "_program.ggs\" ;\n"
       "\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
       "#include \"utilities/MF_MemoryControl.h\"\n"
       "\n" ;
  f.writeHyphenLineComment ("//") ;
  f << "// ADD YOUR CODE HERE\n"
       "\n" ;
  f.writeHyphenLineComment ("//") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" 32-bits command line tools for Mac OS X") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeTitleComment ("#", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Mac OS X") ;
  f << "PLATFORM_LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include gcc tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/macosx_gcc_tools_32.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createMacOSXmakefile64File (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_macosx/makefile64" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" 64-bits command line tools for Mac OS X") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "64\n"
       "EXECUTABLE_DEBUG := " << projectName << "64_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects64\n"
       "DEBUG_OBJECTS_DIR := debug_objects64\n"
       "\n" ;
  f.writeTitleComment ("#", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Mac OS X") ;
  f << "PLATFORM_LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include gcc tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/macosx_gcc_tools_64.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
create_ix86LinuxOnMacOSXmakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_x86linux_on_macosx/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" 32-bit command line tools for x86 Linux, built on Mac OS X") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeTitleComment ("#", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeTitleComment ("#", "Link Options for i386 Linux") ;
  f << "PLATFORM_LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include i386 Linux tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/x86linux_on_macosx_gcc_tools_32.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

/*static bool
create_ix86LinuxOnMacOSXmakefile64File (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_x86linux_on_macosx/makefile64" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" 64-bit command line tools for x86 Linux, built on Mac OS X") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "64\n"
       "EXECUTABLE_DEBUG := " << projectName << "64_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects64\n"
       "DEBUG_OBJECTS_DIR := debug_objects64\n"
       "\n" ;
  f.writeTitleComment ("#", "Install directory (for \"install\" goal)") ;
  f << "INSTALL_DIR := /usr/local/bin\n"
       "\n" ;
  f.writeTitleComment ("#", "Link Options for i386 Linux") ;
  f << "PLATFORM_LINKER_OPTIONS :=\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include i386 Linux tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/x86linux_on_macosx_gcc_tools_64.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}
*/
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
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Win32") ;
  f << "PLATFORM_LINKER_OPTIONS := -lcomdlg32\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include MinGW tools for MAC OS X") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/mingw_on_macosx_gcc_tools_32.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Win32") ;
  f << "PLATFORM_LINKER_OPTIONS := -lcomdlg32\n"
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
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createUnixMakefileFile (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_unix/makefile" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" 32-bit command line tools for Unix") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "\n"
       "EXECUTABLE_DEBUG := " << projectName << "_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects\n"
       "DEBUG_OBJECTS_DIR := debug_objects\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Unix") ;
  f << "PLATFORM_LINKER_OPTIONS := \n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Unix tools") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/unix_gcc_tools_32.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createUnixMakefile64File (const C_String & inCreatedProjectPathName) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/makefile_unix/makefile64" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", C_String ("MAKEFILE for building \"") + projectName + "\" 64-bit command line tools for Unix") ;
  f.writeTitleComment ("#", "Executables") ;
  f << "EXECUTABLE := " << projectName << "64\n"
       "EXECUTABLE_DEBUG := " << projectName << "64_debug\n"
       "\n" ;
  f.writeTitleComment ("#", "Object files directories") ;
  f << "OBJECTS_DIR       := objects64\n"
       "DEBUG_OBJECTS_DIR := debug_objects64\n"
       "\n" ;
  f.writeTitleComment ("#", "Linker Options for Unix") ;
  f << "PLATFORM_LINKER_OPTIONS := \n"
       "\n" ;
  f.writeTitleComment ("#", "Include Common Definitions") ;
  f << "include ../common_files_for_make/makefile.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include Unix tools") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/unix_gcc_tools_64.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Include makefile that performs actual work") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createBuildBatFile (const C_String & inCreatedProjectPathName) {
  const C_String fileName = inCreatedProjectPathName + "/makefile_msys_on_win32/build.bat" ;
  C_TextFileWrite f (fileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ;
  f << "PATH=C:\\msys\\1.0\\bin;C:\\MinGW\\bin;%PATH%\n"
       "sh -c \"make -f makefile.mke --warn-undefined-variables\"\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCleanBatFile (const C_String & inCreatedProjectPathName) {
  const C_String fileName = inCreatedProjectPathName + "/makefile_msys_on_win32/clean.bat" ;
  C_TextFileWrite f (fileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ;
  f << "PATH=C:\\msys\\1.0\\bin;C:\\MinGW\\bin;%PATH%\n"
       "sh -c \"make -f makefile.mke clean --warn-undefined-variables\"\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createInstallBatFile (const C_String & inCreatedProjectPathName) {
  const C_String fileName = inCreatedProjectPathName + "/makefile_msys_on_win32/install.bat" ;
  C_TextFileWrite f (fileName COMMA_TEACH_TEXT_CREATOR COMMA_HERE) ;
  f << "PATH=C:\\msys\\1.0\\bin;C:\\MinGW\\bin;%PATH%\n"
       "sh -c \"make -f makefile.mke install --warn-undefined-variables\"\n" ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createCommonMakefileFile (const C_String & inCreatedProjectPathName,
                          const C_String & inLIBPMpath,
                          const enumProjectStyle inProjectStyle) {
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + "/common_files_for_make/makefile.mke" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ;
  f.writeTitleComment ("#", "This file is included by every platform makefile") ;
  f.writeTitleComment ("#", "LIBPM path") ;
  f << "LIB_PM_PATH := " << inLIBPMpath << "\n"
       "\n" ;
  f.writeTitleComment ("#", "Project source files directories") ;
  f << "SOURCES_DIR := ../galgas_sources/GALGAS_OUTPUT\n"
       "SOURCES_DIR += ../hand_coded_sources\n"
       "\n" ;
  f.writeTitleComment ("#", "Default build Options") ;
  f << "include $(LIB_PM_PATH)/included_makefiles/default_build_options.mke\n"
       "\n" ;
  f.writeTitleComment ("#", "Source files names list (without their actual path)") ;
  f << "SOURCES :=\n"
       "\n" ;
  f.writeComment ("#", "Files from libpm") ;
  f << "include $(LIB_PM_PATH)/galgas/galgas_sources_for_makefile.mke\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "include $(LIB_PM_PATH)/galgas/galgas_mda_sources_for_makefile.mke\n" ;
  }
  f << "\n" ;
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
       "SOURCES += " << projectName << "_program.cpp\n"
       "\n" ;
  f.writeComment ("#", "Hand-coded files") ;
  f << "SOURCES += " << projectName << "_computations.cpp\n"
       "\n" ;
  f.writeHyphenLineCommentWithoutExtraBlankLine ("#") ;
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
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
                            const C_String & inLIBPMpath,
                            const enumProjectStyle inProjectStyle) {
  const char * releaseTarget = "Release" ;
  const char * debugTarget = "Debug" ;
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedProjectPathName + inCodeBlockDirectory + "/" + projectName + ".cbp" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "<?xml version=\"1.0\"?>\n"
       "<!DOCTYPE CodeBlocks_project_file>\n"
       "<CodeBlocks_project_file>\n"
       "    <FileVersion major=\"1\" minor=\"1\"/>\n"
       "    <Project>\n"
       "        <Option title=\"" << projectName << "\"/>\n"
       "        <Option makefile=\"Makefile\"/>\n"
       "        <Option makefile_is_custom=\"0\"/>\n"
       "        <Option compiler=\"0\"/>\n"
       "        <Build>\n"
       "            <Target title=\"" << releaseTarget << "\">\n"
       "                <Option output=\"" << projectName << ".exe\"/>\n"
       "                <Option working_dir=\".\"/>\n"
       "                <Option object_output=\"objects\"/>\n"
       "                <Option deps_output=\".deps\"/>\n"
       "                <Option type=\"1\"/>\n"
       "                <Option compiler=\"0\"/>\n"
       "                <Option projectResourceIncludeDirsRelation=\"1\"/>\n"
       "                <Compiler>\n"
       "                    <Add option=\"-O\"/>\n"
       "                    <Add option=\"-W\"/>\n"
       "                    <Add option=\"-Wall\"/>\n"
       "                    <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\"/>\n"
       "                </Compiler>\n"
       "                <Linker>\n"
       "                    <Add option=\"-s\"/>\n"
       "                </Linker>\n"
       "            </Target>\n"
       "            <Target title=\"" << debugTarget << "\">\n"
       "                <Option output=\"" << projectName << "_debug.exe\"/>\n"
       "                <Option working_dir=\".\"/>\n"
       "                <Option object_output=\"objects_debug\"/>\n"
       "                <Option deps_output=\".deps_debug\"/>\n"
       "                <Option type=\"1\"/>\n"
       "                <Option compiler=\"0\"/>\n"
       "                <Option projectResourceIncludeDirsRelation=\"1\"/>\n"
       "                <Compiler>\n"
       "                    <Add option=\"-O\"/>\n"
       "                    <Add option=\"-W\"/>\n"
       "                    <Add option=\"-Wall\"/>\n"
       "                </Compiler>\n"
       "            </Target>\n"
       "        </Build>\n"
       "        <Compiler>\n"
       "            <Add option=\"-I" << inLIBPMpath << "\"/>\n"
       "            <Add option=\"-I../galgas_sources/GALGAS_OUTPUT\"/>\n"
       "            <Add option=\"-I../hand_coded_sources\"/>\n"
       "        </Compiler>\n"
       "        <Linker>\n"
       "            <Add library=\"stdc++\"/>\n"
       "            <Add library=\"m\"/>\n"
       "            <Add library=\"comdlg32\"/>\n"
       "        </Linker>\n"
       "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_lexique.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_metamodel.cpp\">\n"
         "            <Option compilerVar=\"CC\"/>\n"
         "            <Option target=\"" << releaseTarget << "\"/>\n"
         "            <Option target=\"" << debugTarget << "\"/>\n"
         "        </Unit>\n"
         "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_constraints.cpp\">\n"
         "            <Option compilerVar=\"CC\"/>\n"
         "            <Option target=\"" << releaseTarget << "\"/>\n"
         "            <Option target=\"" << debugTarget << "\"/>\n"
         "        </Unit>\n" ;
  }
  f << "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_options.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_semantics.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_syntax.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_grammar.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"..\\galgas_sources\\GALGAS_OUTPUT\\" << projectName << "_program.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"..\\hand_coded_sources\\" << projectName << "_computations.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\bdd\\C_BDD.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\bdd\\C_Display_BDD.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\AC_galgas_io.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\AC_galgas_map.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\AC_galgas_list.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\AC_galgas_sortedlist.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\C_GGS_object.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\C_GGS_entityMap.cpp\">\n"
         "            <Option compilerVar=\"CC\"/>\n"
         "            <Option target=\"" << releaseTarget << "\"/>\n"
         "            <Option target=\"" << debugTarget << "\"/>\n"
         "        </Unit>\n"
         "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\C_GGS_MapIndex.cpp\">\n"
         "            <Option compilerVar=\"CC\"/>\n"
         "            <Option target=\"" << releaseTarget << "\"/>\n"
         "            <Option target=\"" << debugTarget << "\"/>\n"
         "        </Unit>\n" ;
  }
  f << "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\C_galgas_terminal_io.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\C_galgas_CLI_Options.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\C_Lexique.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_bool.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_char.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_string.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_uint.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_uint64.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_sint.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_sint64.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_double.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_location.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_lbool.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_lchar.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_lstring.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_luint.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_luint64.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_lsint.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_lsint64.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_double.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\galgas\\GGS_stringset.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\cache\\C_PrimeCache2.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\cache\\C_PrimeCache3.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\command_line_interface\\AC_CLI_Options.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\command_line_interface\\F_Analyze_CLI_Options.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\command_line_interface\\C_CLI_OptionGroup.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\command_line_interface\\C_builtin_CLI_Options.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\command_line_interface\\F_main.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\files\\C_TextFileWrite.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\streams\\AC_OutputStream.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\streams\\C_ConsoleOut.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\streams\\C_ErrorOut.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\time\\C_Timer.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\time\\C_DateTime.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\utilities\\MF_Assert.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\utilities\\MF_MemoryControl.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\utilities\\F_DisplayException.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\utilities\\C_Exception.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\utilities\\C_String.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "        <Unit filename=\"" << inLIBPMpath << "\\utilities\\F_GetPrime.cpp\">\n"
       "            <Option compilerVar=\"CC\"/>\n"
       "            <Option target=\"" << releaseTarget << "\"/>\n"
       "            <Option target=\"" << debugTarget << "\"/>\n"
       "        </Unit>\n"
       "    </Project>\n"
       "</CodeBlocks_project_file>\n"
       "\n" ;

  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark XCode Project Files
#endif

//---------------------------------------------------------------------------*

static bool
createXCodeMainFile (const C_String & inCreatedXcodeProjectPathName) {
  const C_String projectName = inCreatedXcodeProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedXcodeProjectPathName + "/project_xcode/main.m" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "#import <Cocoa/Cocoa.h>\n"
       "\n"
       "int main(int argc, char * argv []) {\n"
       "  return NSApplicationMain(argc, (const char **) argv) ;\n"
       "}\n\n" ;
  
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createXCodeInfoPListFile (const C_String & inCreatedXcodeProjectPathName) {
  const C_String projectName = inCreatedXcodeProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedXcodeProjectPathName + "/project_xcode/Info.plist" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f <<    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
          "<!DOCTYPE plist PUBLIC \"-//Apple Computer//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
          "<plist version=\"1.0\">\n"
          "<dict>\n"
          "     <key>CFBundleDevelopmentRegion</key>\n"
          "     <string>English</string>\n"
          "     <key>CFBundleExecutable</key>\n"
          "     <string>${EXECUTABLE_NAME}</string>\n"
          "     <key>CFBundleIconFile</key>\n"
          "     <string></string>\n"
          "     <key>CFBundleIdentifier</key>\n"
          "     <string>com.yourcompany." << projectName << "</string>\n"
          "     <key>CFBundleInfoDictionaryVersion</key>\n"
          "     <string>6.0</string>\n"
          "     <key>CFBundleName</key>\n"
          "     <string>${PRODUCT_NAME}</string>\n"
          "     <key>CFBundlePackageType</key>\n"
          "     <string>APPL</string>\n"
          "     <key>CFBundleSignature</key>\n"
          "     <string>\?\?\?\?</string>\n"
          "     <key>CFBundleVersion</key>\n"
          "     <string>1.0</string>\n"
          "     <key>NSMainNibFile</key>\n"
          "     <string>MainMenu</string>\n"
          "     <key>NSPrincipalClass</key>\n"
          "     <string>NSApplication</string>\n"
          "    <key>CFBundleDocumentTypes</key>\n"
          "    <array>\n"
          "        <dict>\n"
          "            <key>CFBundleTypeExtensions</key>\n"
          "            <array>\n"
          "                <string>" << projectName << "</string>\n"
          "            </array>\n"
          "            <key>CFBundleTypeName</key>\n"
          "            <string>" << projectName << " Source</string>\n"
          "            <key>CFBundleTypeOSTypes</key>\n"
          "            <array>\n"
          "                <string>TEXT</string>\n"
          "            </array>\n"
          "            <key>CFBundleTypeRole</key>\n"
          "            <string>Editor</string>\n"
          "            <key>LSTypeIsPackage</key>\n"
          "            <false/>\n"
          "            <key>NSDocumentClass</key>\n"
          "            <string>OC_GGS_Document</string>\n"
          "        </dict>\n"
          "    </array>\n"
          "</dict>\n"
          "</plist>\n" ;
  
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createXCodeInfoPlistStringsFile (const C_String & inCreatedXcodeProjectPathName) {
  const C_String projectName = inCreatedXcodeProjectPathName.lastPathComponent () ;
  const C_String projectNameWithUpperCase = projectName.stringWithUpperCaseFirstLetter () ;
  const C_String fileName = inCreatedXcodeProjectPathName + "/project_xcode/English.lproj/InfoPlist.strings" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "/* Localized versions of Info.plist keys */"
       "\n"
       "CFBundleName = \"cocoa" << projectNameWithUpperCase << "\";\n"
       "CFBundleShortVersionString = \"1.0.0\";\n"
       "CFBundleGetInfoString = \"Cocoa " << projectNameWithUpperCase << " version 1.0.0, Copyright __MyCompanyName__.\";\n"
       "NSHumanReadableCopyright = \"Copyright __MyCompanyName__.\";\n"
       "LSMinimumSystemVersion = \"10.3.9\";\n"
       "\n" ;
  
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createXCodeCreditsFile (const C_String & inCreatedXcodeProjectPathName) {
  const C_String projectName = inCreatedXcodeProjectPathName.lastPathComponent () ;
  const C_String fileName = inCreatedXcodeProjectPathName + "/project_xcode/English.lproj/Credits.rtf" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "{\\rtf1\\mac\\ansicpg10000\\cocoartf824\\cocoasubrtf380\n"
       "{\\fonttbl\\f0\\fswiss\\fcharset77 Helvetica-Bold;}\n"
       "{\\colortbl;\\red255\\green255\\blue255;}\n"
       "\\vieww9000\\viewh8400\\viewkind0\n"
       "\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n"
       "\n"
       "\\f0\\b\\fs24 \\cf0 GALGAS Cocoa Project\\\n"
       "}\n" ;
  
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

static bool
createXCodeProjectFile (const C_String & inCreatedXcodeProjectPathName,
                        const C_String & inLIBPMpath,
                        const enumProjectStyle inProjectStyle) {
//--- Create file
  const C_String projectName = inCreatedXcodeProjectPathName.lastPathComponent () ;
  const C_String projectNameWithUpperCase = projectName.stringWithUpperCaseFirstLetter () ;
  const C_String fileName = inCreatedXcodeProjectPathName + "/project_xcode/" + projectName + ".xcodeproj/project.pbxproj" ;
  C_TextFileWrite f (fileName COMMA_GALGAS_CREATOR COMMA_HERE) ; 
  f << "// !$*UTF8*$!\n"
       "{\n"
       "        archiveVersion = 1;\n"
       "        classes = {\n"
       "        };\n"
       "        objectVersion = 42;\n"
       "        objects = {\n"
       "\n"
       "/* Begin PBXBuildFile section */\n"
       "                8D15AC2C0486D014006FF6A4 /* Credits.rtf in Resources */ = {isa = PBXBuildFile; fileRef = 2A37F4B9FDCFA73011CA2CEA /* Credits.rtf */; };\n"

       "                8D15AC2F0486D014006FF6A4 /* InfoPlist.strings in Resources */ = {isa = PBXBuildFile; fileRef = 089C165FFE840EACC02AAC07 /* InfoPlist.strings */; };\n"

       "                8D15AC340486D014006FF6A4 /* Cocoa.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 1058C7A7FEA54F5311CA2CBB /* Cocoa.framework */; };\n"

       "                CF2A8827058CCF12003EF2F4 /* C_galgas_null_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF86361A0586289600B23462 /* C_galgas_null_io.cpp */; };\n"
       "                CF2A8828058CCF2B003EF2F4 /* C_galgas_null_io.h in Headers */ = {isa = PBXBuildFile; fileRef = CF86361B0586289600B23462 /* C_galgas_null_io.h */; };\n"

       "                CF2A882D058CCF2F003EF2F4 /* C_galgas_terminal_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF86365005862B0600B23462 /* C_galgas_terminal_io.cpp */; };\n"
       "                CF2A882E058CCF30003EF2F4 /* C_galgas_terminal_io.h in Headers */ = {isa = PBXBuildFile; fileRef = CF86365105862B0600B23462 /* C_galgas_terminal_io.h */; };\n"

       "                CF2A8841058CCF42003EF2F4 /* galgas_header.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C005877B62000D2F8C /* galgas_header.h */; };\n"

       "                CF2A8842058CCF43003EF2F4 /* GGS_bool.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53881057A558F00854C83 /* GGS_bool.cpp */; };\n"
       "                CF2A8843058CCF43003EF2F4 /* GGS_bool.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C105877B62000D2F8C /* GGS_bool.h */; };\n"
       "                CF7A148E058D010A007126C1 /* GGS_bool.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53881057A558F00854C83 /* GGS_bool.cpp */; };\n"
       "                CF7A148F058D010B007126C1 /* GGS_bool.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C105877B62000D2F8C /* GGS_bool.h */; };\n"

       "                CF2A8844058CCF44003EF2F4 /* GGS_char.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53883057A558F00854C83 /* GGS_char.cpp */; };\n"
       "                CF2A8845058CCF45003EF2F4 /* GGS_char.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C205877B62000D2F8C /* GGS_char.h */; };\n"
       "                CF7A1490058D010C007126C1 /* GGS_char.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53883057A558F00854C83 /* GGS_char.cpp */; };\n"
       "                CF7A1491058D010D007126C1 /* GGS_char.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C205877B62000D2F8C /* GGS_char.h */; };\n"

       "                CF2A8848058CCF4A003EF2F4 /* GGS_lbool.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53889057A558F00854C83 /* GGS_lbool.cpp */; };\n"
       "                CF2A8849058CCF4B003EF2F4 /* GGS_lbool.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C405877B62000D2F8C /* GGS_lbool.h */; };\n"
       "                CF7A1494058D0110007126C1 /* GGS_lbool.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53889057A558F00854C83 /* GGS_lbool.cpp */; };\n"
       "                CF7A1495058D0110007126C1 /* GGS_lbool.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C405877B62000D2F8C /* GGS_lbool.h */; };\n"

       "                CF2A884A058CCF4B003EF2F4 /* GGS_lchar.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF5388B057A558F00854C83 /* GGS_lchar.cpp */; };\n"
       "                CF2A884B058CCF4C003EF2F4 /* GGS_lchar.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C505877B62000D2F8C /* GGS_lchar.h */; };\n"
       "                CF7A1496058D0111007126C1 /* GGS_lchar.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF5388B057A558F00854C83 /* GGS_lchar.cpp */; };\n"
       "                CF7A1497058D0112007126C1 /* GGS_lchar.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C505877B62000D2F8C /* GGS_lchar.h */; };\n"

       "                CF2A884E058CCF4F003EF2F4 /* GGS_location.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF5388F057A558F00854C83 /* GGS_location.cpp */; };\n"
       "                CF2A884F058CCF50003EF2F4 /* GGS_location.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C705877B62000D2F8C /* GGS_location.h */; };\n"
       "                CF7A149A058D0115007126C1 /* GGS_location.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF5388F057A558F00854C83 /* GGS_location.cpp */; };\n"
       "                CF7A149B058D0116007126C1 /* GGS_location.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C705877B62000D2F8C /* GGS_location.h */; };\n"

       "                CF2A8850058CCF51003EF2F4 /* GGS_lstring.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53891057A558F00854C83 /* GGS_lstring.cpp */; };\n"
       "                CF2A8851058CCF52003EF2F4 /* GGS_lstring.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C805877B62000D2F8C /* GGS_lstring.h */; };\n"
       "                CF7A149C058D011D007126C1 /* GGS_lstring.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53891057A558F00854C83 /* GGS_lstring.cpp */; };\n"
       "                CF7A149D058D011E007126C1 /* GGS_lstring.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C805877B62000D2F8C /* GGS_lstring.h */; };\n"

       "                CF2A8852058CCF53003EF2F4 /* GGS_luint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53893057A558F00854C83 /* GGS_luint.cpp */; };\n"
       "                CF2A8853058CCF54003EF2F4 /* GGS_luint.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C905877B62000D2F8C /* GGS_luint.h */; };\n"
       "                CF7A149E058D011F007126C1 /* GGS_luint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53893057A558F00854C83 /* GGS_luint.cpp */; };\n"
       "                CF7A149F058D0120007126C1 /* GGS_luint.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C905877B62000D2F8C /* GGS_luint.h */; };\n"

       "                CF2A8856058CCF56003EF2F4 /* GGS_uint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057A558F00854C83 /* GGS_uint.cpp */; };\n"
       "                CF7A14A2058D0123007126C1 /* GGS_uint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057A558F00854C83 /* GGS_uint.cpp */; };\n"
       "                CF2A8857058CCF57003EF2F4 /* GGS_uint.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2F8C /* GGS_uint.h */; };\n"
       "                CF7A14A3058D0124007126C1 /* GGS_uint.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2F8C /* GGS_uint.h */; };\n"

       "                CF2A8856058CDF56003EF2F4 /* GGS_sint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057D558F00854C83 /* GGS_sint.cpp */; };\n"
       "                CF2A8856058CDF56003EF2F5 /* GGS_sint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057D558F00854C83 /* GGS_sint.cpp */; };\n"
       "                CF2A8857058CCF57003EF2FF /* GGS_sint.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2F8F /* GGS_sint.h */; };\n"
       "                CF7A14A3058D0124007126CF /* GGS_sint.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2F8F /* GGS_sint.h */; };\n"

       "                4F2A8856058CDF56003EF2F4 /* GGS_lsint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = 4FF53897057D558F00854C83 /* GGS_lsint.cpp */; };\n"
       "                4F2A8856058CDF56003EF2F5 /* GGS_lsint.cpp in Sources */ = {isa = PBXBuildFile; fileRef = 4FF53897057D558F00854C83 /* GGS_lsint.cpp */; };\n"
       "                4F2A8857058CCF57003EF2FF /* GGS_lsint.h in Headers */ = {isa = PBXBuildFile; fileRef = 4F3FF0CB05877B62000D2F8F /* GGS_lsint.h */; };\n"
       "                4F7A14A3058D0124007126CF /* GGS_lsint.h in Headers */ = {isa = PBXBuildFile; fileRef = 4F3FF0CB05877B62000D2F8F /* GGS_lsint.h */; };\n"

       "                CF2A8856058CDF56003EF2FF /* GGS_sint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057D558F00854C8F /* GGS_sint64.cpp */; };\n"
       "                CF2A8856058CDF56003EF2FE /* GGS_sint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057D558F00854C8F /* GGS_sint64.cpp */; };\n"
       "                CF2A8857058CCF57003EFFFF /* GGS_sint64.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2FEF /* GGS_sint64.h */; };\n"
       "                CF2A8857058CCF57003FFFFF /* GGS_sint64.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2FEF /* GGS_sint64.h */; };\n"

       "                AF2A8856058CDF56003EF2FF /* GGS_lsint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = AFF53897057D558F00854C8F /* GGS_lsint64.cpp */; };\n"
       "                AF2A8856058CDF56003EF2FE /* GGS_lsint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = AFF53897057D558F00854C8F /* GGS_lsint64.cpp */; };\n"
       "                AF2A8857058CCF57003EFFFF /* GGS_lsint64.h in Headers */ = {isa = PBXBuildFile; fileRef = AF3FF0CB05877B62000D2FEF /* GGS_lsint64.h */; };\n"
       "                AF2A8857058CCF57003FFFFF /* GGS_lsint64.h in Headers */ = {isa = PBXBuildFile; fileRef = AF3FF0CB05877B62000D2FEF /* GGS_lsint64.h */; };\n"

       "                CF2A8856058CCF56003EF2F5 /* GGS_uint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057A558F00854C84 /* GGS_uint64.cpp */; };\n"
       "                CF7A14A2058D0123007126C2 /* GGS_uint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53897057A558F00854C84 /* GGS_uint64.cpp */; };\n"
       "                CF2A8857058CCF57003EF2F5 /* GGS_uint64.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2F8D /* GGS_uint64.h */; };\n"
       "                CF7A14A3058D0124007126C2 /* GGS_uint64.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CB05877B62000D2F8D /* GGS_uint64.h */; };\n"

       "                4F2A8856058CCF56003EF2F5 /* GGS_luint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = 4FF53897057A558F00854C84 /* GGS_luint64.cpp */; };\n"
       "                4F7A14A2058D0123007126C2 /* GGS_luint64.cpp in Sources */ = {isa = PBXBuildFile; fileRef = 4FF53897057A558F00854C84 /* GGS_luint64.cpp */; };\n"
       "                4F2A8857058CCF57003EF2F5 /* GGS_luint64.h in Headers */ = {isa = PBXBuildFile; fileRef = 4F3FF0CB05877B62000D2F8D /* GGS_luint64.h */; };\n"
       "                4F7A14A3058D0124007126C2 /* GGS_luint64.h in Headers */ = {isa = PBXBuildFile; fileRef = 4F3FF0CB05877B62000D2F8D /* GGS_luint64.h */; };\n"

       "                CF7A14A0058D0121007126C1 /* GGS_string.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53895057A558F00854C83 /* GGS_string.cpp */; };\n"
       "                CF7A14A1058D0122007126C1 /* GGS_string.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CA05877B62000D2F8C /* GGS_string.h */; };\n"
       "                CF2A8854058CCF55003EF2F4 /* GGS_string.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53895057A558F00854C83 /* GGS_string.cpp */; };\n"
       "                CF2A8855058CCF55003EF2F4 /* GGS_string.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0CA05877B62000D2F8C /* GGS_string.h */; };\n"

       "                CF825DDF0853878C0077AEAF /* C_String.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD10853878C0077AEAF /* C_String.cpp */; };\n"
       "                CF825DE00853878C0077AEAF /* C_String.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD20853878C0077AEAF /* C_String.h */; };\n"
       "                CF825E04085388410077AEAF /* C_String.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD10853878C0077AEAF /* C_String.cpp */; };\n"
       "                CF825DED0853878C0077AEAF /* C_String.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD10853878C0077AEAF /* C_String.cpp */; };\n"
       "                CF825DEE0853878C0077AEAF /* C_String.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD20853878C0077AEAF /* C_String.h */; };\n"

       "                CF3B8A81058CD05D00D682D2 /* AC_galgas_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53872057A558F00854C83 /* AC_galgas_io.cpp */; };\n"
       "                CF7A1486058D00FD007126C1 /* AC_galgas_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53872057A558F00854C83 /* AC_galgas_io.cpp */; };\n"
       "                CF3B8A80058CD05C00D682D2 /* AC_galgas_io.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0B705877B62000D2F8C /* AC_galgas_io.h */; };\n"
       "                CF7A1487058D00FE007126C1 /* AC_galgas_io.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0B705877B62000D2F8C /* AC_galgas_io.h */; };\n"
       "                CF337A2C09EFAED600EC41F6 /* C_SourceTextForCoca.mm in Sources */ = {isa = PBXBuildFile; fileRef = CF337A2A09EFAED600EC41F6 /* C_SourceTextForCoca.mm */; };\n"
       "                CF3B8A9C058CD21900D682D2 /* libstdc++.a in Frameworks */ = {isa = PBXBuildFile; fileRef = CF3B8A9B058CD21900D682D2 /* libstdc++.a */; };\n"
       "                CF512D9C092B3023008F7E87 /* C_Display_BDD.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D84092B3023008F7E87 /* C_Display_BDD.cpp */; };\n"
       "                CF512D9D092B3023008F7E87 /* C_Display_BDD.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D85092B3023008F7E87 /* C_Display_BDD.h */; };\n"
       "                CF512DA0092B3040008F7E87 /* C_builtin_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D9E092B3040008F7E87 /* C_builtin_CLI_Options.cpp */; };\n"
       "                CF512DA1092B3040008F7E87 /* C_builtin_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D9F092B3040008F7E87 /* C_builtin_CLI_Options.h */; };\n"
       "                CF512DA2092B3040008F7E87 /* C_builtin_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D9E092B3040008F7E87 /* C_builtin_CLI_Options.cpp */; };\n"
       "                CF512DA3092B3040008F7E87 /* C_builtin_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D9F092B3040008F7E87 /* C_builtin_CLI_Options.h */; };\n"
       "                CF512DA4092B3040008F7E87 /* C_builtin_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D9E092B3040008F7E87 /* C_builtin_CLI_Options.cpp */; };\n"
       "                CF6557C70A25EB5900979050 /* C_galgas_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF6557C50A25EB5900979050 /* C_galgas_CLI_Options.cpp */; };\n"
       "                CF6557C80A25EB5900979050 /* C_galgas_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF6557C50A25EB5900979050 /* C_galgas_CLI_Options.cpp */; };\n"
       "                CF6557C90A25EB5900979050 /* C_galgas_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF6557C60A25EB5900979050 /* C_galgas_CLI_Options.h */; };\n"
       "                CF6557CA0A25EB5900979050 /* C_galgas_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF6557C50A25EB5900979050 /* C_galgas_CLI_Options.cpp */; };\n"
       "                CF6557CB0A25EB5900979050 /* C_galgas_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF6557C60A25EB5900979050 /* C_galgas_CLI_Options.h */; };\n"
       "                CF7A1470058D00B1007126C1 /* C_galgas_null_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF86361A0586289600B23462 /* C_galgas_null_io.cpp */; };\n"
       "                CF7A1471058D00B2007126C1 /* C_galgas_null_io.h in Headers */ = {isa = PBXBuildFile; fileRef = CF86361B0586289600B23462 /* C_galgas_null_io.h */; };\n"
       "                CF7A1476058D00B6007126C1 /* C_galgas_terminal_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF86365005862B0600B23462 /* C_galgas_terminal_io.cpp */; };\n"
       "                CF7A1477058D00B7007126C1 /* C_galgas_terminal_io.h in Headers */ = {isa = PBXBuildFile; fileRef = CF86365105862B0600B23462 /* C_galgas_terminal_io.h */; };\n"
       "                CF7A148D058D0109007126C1 /* galgas_header.h in Headers */ = {isa = PBXBuildFile; fileRef = CF3FF0C005877B62000D2F8C /* galgas_header.h */; };\n"
       "                CF825D54085386810077AEAF /* I_Action.tiff in Resources */ = {isa = PBXBuildFile; fileRef = CF825D45085386810077AEAF /* I_Action.tiff */; };\n"
       "                CF825D55085386810077AEAF /* I_SaveAs.tiff in Resources */ = {isa = PBXBuildFile; fileRef = CF825D46085386810077AEAF /* I_SaveAs.tiff */; };\n"
       "                CF825D56085386810077AEAF /* I_Stop.tiff in Resources */ = {isa = PBXBuildFile; fileRef = CF825D47085386810077AEAF /* I_Stop.tiff */; };\n"
       "                CF825D57085386810077AEAF /* I_Window.png in Resources */ = {isa = PBXBuildFile; fileRef = CF825D48085386810077AEAF /* I_Window.png */; };\n"
       "                CF825D58085386810077AEAF /* OC_GGS_BuildWindowController.mm in Sources */ = {isa = PBXBuildFile; fileRef = CF825D4A085386810077AEAF /* OC_GGS_BuildWindowController.mm */; };\n"
       "                CF825D59085386810077AEAF /* OC_GGS_Document.mm in Sources */ = {isa = PBXBuildFile; fileRef = CF825D4C085386810077AEAF /* OC_GGS_Document.mm */; };\n"
       "                CF825D5A085386810077AEAF /* OC_GGS_PreferencesController.mm in Sources */ = {isa = PBXBuildFile; fileRef = CF825D4E085386810077AEAF /* OC_GGS_PreferencesController.mm */; };\n"
       "                CF825D5B085386810077AEAF /* OC_GGS_RulerView.mm in Sources */ = {isa = PBXBuildFile; fileRef = CF825D50085386810077AEAF /* OC_GGS_RulerView.mm */; };\n"
       "                CF825D5C085386810077AEAF /* OC_GGS_TextView.mm in Sources */ = {isa = PBXBuildFile; fileRef = CF825D52085386810077AEAF /* OC_GGS_TextView.mm */; };\n"
       "                CFBC76070AC67F9900443ACA /* OC_GGS_BuildResultTextView.mm in Sources */ = {isa = PBXBuildFile; fileRef = CFBC76060AC67F9900443ACA /* OC_GGS_BuildResultTextView.mm */; };\n"
       "                CF825D610853868A0077AEAF /* MainMenu.nib in Resources */ = {isa = PBXBuildFile; fileRef = CF825D5D0853868A0077AEAF /* MainMenu.nib */; };\n"
       "                CF825D620853868A0077AEAF /* OC_GGS_Document.nib in Resources */ = {isa = PBXBuildFile; fileRef = CF825D5F0853868A0077AEAF /* OC_GGS_Document.nib */; };\n"
       "                CF825D67085386A80077AEAF /* C_PrimeCache2.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D63085386A80077AEAF /* C_PrimeCache2.cpp */; };\n"
       "                CF825D68085386A80077AEAF /* C_PrimeCache2.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D64085386A80077AEAF /* C_PrimeCache2.h */; };\n"
       "                CF825D69085386A80077AEAF /* C_PrimeCache3.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D65085386A80077AEAF /* C_PrimeCache3.cpp */; };\n"
       "                CF825D6A085386A80077AEAF /* C_PrimeCache3.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D66085386A80077AEAF /* C_PrimeCache3.h */; };\n"
       "                CF825D6B085386A80077AEAF /* C_PrimeCache2.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D63085386A80077AEAF /* C_PrimeCache2.cpp */; };\n"
       "                CF825D6C085386A80077AEAF /* C_PrimeCache2.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D64085386A80077AEAF /* C_PrimeCache2.h */; };\n"
       "                CF825D6D085386A80077AEAF /* C_PrimeCache3.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D65085386A80077AEAF /* C_PrimeCache3.cpp */; };\n"
       "                CF825D6E085386A80077AEAF /* C_PrimeCache3.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D66085386A80077AEAF /* C_PrimeCache3.h */; };\n"
       "                CF825D7F085386E10077AEAF /* AC_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D75085386E00077AEAF /* AC_CLI_Options.cpp */; };\n"
       "                CF825D80085386E10077AEAF /* AC_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D76085386E00077AEAF /* AC_CLI_Options.h */; };\n"
       "                CF825D83085386E10077AEAF /* C_CLI_OptionGroup.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D79085386E00077AEAF /* C_CLI_OptionGroup.cpp */; };\n"
       "                CF825D84085386E10077AEAF /* C_CLI_OptionGroup.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D7A085386E10077AEAF /* C_CLI_OptionGroup.h */; };\n"
       "                CF825D85085386E10077AEAF /* F_Analyze_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D7B085386E10077AEAF /* F_Analyze_CLI_Options.cpp */; };\n"
       "                CF825D86085386E10077AEAF /* F_Analyze_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D7C085386E10077AEAF /* F_Analyze_CLI_Options.h */; };\n"
       "                CF825D87085386E10077AEAF /* F_main.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D7D085386E10077AEAF /* F_main.cpp */; };\n"
       "                CF825D88085386E10077AEAF /* mainForLIBPM.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D7E085386E10077AEAF /* mainForLIBPM.h */; };\n"
       "                CF825D89085386E10077AEAF /* AC_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D75085386E00077AEAF /* AC_CLI_Options.cpp */; };\n"
       "                CF825D8A085386E10077AEAF /* AC_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D76085386E00077AEAF /* AC_CLI_Options.h */; };\n"
       "                CF825D8D085386E10077AEAF /* C_CLI_OptionGroup.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D79085386E00077AEAF /* C_CLI_OptionGroup.cpp */; };\n"
       "                CF825D8E085386E10077AEAF /* C_CLI_OptionGroup.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D7A085386E10077AEAF /* C_CLI_OptionGroup.h */; };\n"
       "                CF825D8F085386E10077AEAF /* F_Analyze_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D7B085386E10077AEAF /* F_Analyze_CLI_Options.cpp */; };\n"
       "                CF825D90085386E10077AEAF /* F_Analyze_CLI_Options.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D7C085386E10077AEAF /* F_Analyze_CLI_Options.h */; };\n"
       "                CF825D91085386E10077AEAF /* F_main.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D7D085386E10077AEAF /* F_main.cpp */; };\n"
       "                CF825D92085386E10077AEAF /* mainForLIBPM.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D7E085386E10077AEAF /* mainForLIBPM.h */; };\n"
       "                CF825D97085386FD0077AEAF /* C_TextFileWrite.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D95085386FD0077AEAF /* C_TextFileWrite.cpp */; };\n"
       "                CF825D98085386FD0077AEAF /* C_TextFileWrite.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D96085386FD0077AEAF /* C_TextFileWrite.h */; };\n"
       "                CF825D99085386FD0077AEAF /* C_TextFileWrite.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D95085386FD0077AEAF /* C_TextFileWrite.cpp */; };\n"
       "                CF825D9A085386FD0077AEAF /* C_TextFileWrite.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825D96085386FD0077AEAF /* C_TextFileWrite.h */; };\n"
       "                CF825DA7085387240077AEAF /* C_Lexique.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DA1085387240077AEAF /* C_Lexique.cpp */; };\n"
       "                CF825DA8085387240077AEAF /* C_Lexique.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DA2085387240077AEAF /* C_Lexique.h */; };\n"
       "                CF825DAD085387240077AEAF /* C_Lexique.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DA1085387240077AEAF /* C_Lexique.cpp */; };\n"
       "                CF825DAE085387240077AEAF /* C_Lexique.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DA2085387240077AEAF /* C_Lexique.h */; };\n"
       "                CF825DB3085387390077AEAF /* TC_UniqueArray.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DB1085387390077AEAF /* TC_UniqueArray.h */; };\n"
       "                CF825DB4085387390077AEAF /* TC_UniqueFixedSizeArray.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DB2085387390077AEAF /* TC_UniqueFixedSizeArray.h */; };\n"
       "                CF825DB5085387390077AEAF /* TC_UniqueArray.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DB1085387390077AEAF /* TC_UniqueArray.h */; };\n"
       "                CF825DB6085387390077AEAF /* TC_UniqueFixedSizeArray.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DB2085387390077AEAF /* TC_UniqueFixedSizeArray.h */; };\n"
       "                CF825DBD085387530077AEAF /* AC_OutputStream.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DB9085387530077AEAF /* AC_OutputStream.cpp */; };\n"
       "                CF825DBE085387530077AEAF /* AC_OutputStream.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DBA085387530077AEAF /* AC_OutputStream.h */; };\n"
       "                CF825DBF085387530077AEAF /* C_ConsoleOut.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DBB085387530077AEAF /* C_ConsoleOut.cpp */; };\n"
       "                CF825DC0085387530077AEAF /* C_ConsoleOut.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DBC085387530077AEAF /* C_ConsoleOut.h */; };\n"
       "                CF825DC1085387530077AEAF /* AC_OutputStream.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DB9085387530077AEAF /* AC_OutputStream.cpp */; };\n"
       "                CF825DC2085387530077AEAF /* AC_OutputStream.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DBA085387530077AEAF /* AC_OutputStream.h */; };\n"
       "                CF825DC3085387530077AEAF /* C_ConsoleOut.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DBB085387530077AEAF /* C_ConsoleOut.cpp */; };\n"
       "                CF825DC4085387530077AEAF /* C_ConsoleOut.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DBC085387530077AEAF /* C_ConsoleOut.h */; };\n"
       "                CF825DC9085387680077AEAF /* C_DateTime.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DC7085387680077AEAF /* C_DateTime.cpp */; };\n"
       "                CF825DCA085387680077AEAF /* C_DateTime.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DC8085387680077AEAF /* C_DateTime.h */; };\n"
       "                CF825DCB085387680077AEAF /* C_DateTime.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DC7085387680077AEAF /* C_DateTime.cpp */; };\n"
       "                CF825DCC085387680077AEAF /* C_DateTime.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DC8085387680077AEAF /* C_DateTime.h */; };\n"
       "                CF825DDD0853878C0077AEAF /* C_Exception.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DCF0853878C0077AEAF /* C_Exception.cpp */; };\n"
       "                CF825DDE0853878C0077AEAF /* C_Exception.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD00853878C0077AEAF /* C_Exception.h */; };\n"
       "                CF825DE10853878C0077AEAF /* F_DisplayException.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD30853878C0077AEAF /* F_DisplayException.cpp */; };\n"
       "                CF825DE20853878C0077AEAF /* F_DisplayException.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD40853878C0077AEAF /* F_DisplayException.h */; };\n"
       "                CF825DE50853878C0077AEAF /* M_machine.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD70853878C0077AEAF /* M_machine.h */; };\n"
       "                CF825DE60853878C0077AEAF /* M_SourceLocation.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD80853878C0077AEAF /* M_SourceLocation.h */; };\n"
       "                CF825DE70853878C0077AEAF /* MF_Assert.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD90853878C0077AEAF /* MF_Assert.cpp */; };\n"
       "                CF825DE80853878C0077AEAF /* MF_Assert.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DDA0853878C0077AEAF /* MF_Assert.h */; };\n"
       "                CF825DE90853878C0077AEAF /* MF_MemoryControl.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DDB0853878C0077AEAF /* MF_MemoryControl.cpp */; };\n"
       "                CF825DEA0853878C0077AEAF /* MF_MemoryControl.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DDC0853878C0077AEAF /* MF_MemoryControl.h */; };\n"
       "                CF825DEB0853878C0077AEAF /* C_Exception.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DCF0853878C0077AEAF /* C_Exception.cpp */; };\n"
       "                CF825DEC0853878C0077AEAF /* C_Exception.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD00853878C0077AEAF /* C_Exception.h */; };\n"
       "                CF825DEF0853878C0077AEAF /* F_DisplayException.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD30853878C0077AEAF /* F_DisplayException.cpp */; };\n"
       "                CF825DF00853878C0077AEAF /* F_DisplayException.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD40853878C0077AEAF /* F_DisplayException.h */; };\n"
       "                CF825DF10853878C0077AEAF /* F_GetPrime.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD50853878C0077AEAF /* F_GetPrime.cpp */; };\n"
       "                CF825DF20853878C0077AEAF /* F_GetPrime.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD60853878C0077AEAF /* F_GetPrime.h */; };\n"
       "                CF825DF30853878C0077AEAF /* M_machine.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD70853878C0077AEAF /* M_machine.h */; };\n"
       "                CF825DF40853878C0077AEAF /* M_SourceLocation.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD80853878C0077AEAF /* M_SourceLocation.h */; };\n"
       "                CF825DF50853878C0077AEAF /* MF_Assert.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD90853878C0077AEAF /* MF_Assert.cpp */; };\n"
       "                CF825DF60853878C0077AEAF /* MF_Assert.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DDA0853878C0077AEAF /* MF_Assert.h */; };\n"
       "                CF825DF70853878C0077AEAF /* MF_MemoryControl.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DDB0853878C0077AEAF /* MF_MemoryControl.cpp */; };\n"
       "                CF825DF80853878C0077AEAF /* MF_MemoryControl.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DDC0853878C0077AEAF /* MF_MemoryControl.h */; };\n"
       "                CF825DFB085387EC0077AEAF /* C_Timer.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DF9085387EC0077AEAF /* C_Timer.cpp */; };\n"
       "                CF825DFC085387EC0077AEAF /* C_Timer.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DFA085387EC0077AEAF /* C_Timer.h */; };\n"
       "                CF825DFD085387EC0077AEAF /* C_Timer.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DF9085387EC0077AEAF /* C_Timer.cpp */; };\n"
       "                CF825DFE085387EC0077AEAF /* C_Timer.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DFA085387EC0077AEAF /* C_Timer.h */; };\n"
       "                CF825DFF085388270077AEAF /* C_CLI_OptionGroup.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D79085386E00077AEAF /* C_CLI_OptionGroup.cpp */; };\n"
       "                CF825E01085388290077AEAF /* AC_CLI_Options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D75085386E00077AEAF /* AC_CLI_Options.cpp */; };\n"
       "                CF825E020853882D0077AEAF /* C_Lexique.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DA1085387240077AEAF /* C_Lexique.cpp */; };\n"
       "                CF825E05085388470077AEAF /* C_Exception.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DCF0853878C0077AEAF /* C_Exception.cpp */; };\n"
       "                CF825E060853884D0077AEAF /* C_ConsoleOut.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DBB085387530077AEAF /* C_ConsoleOut.cpp */; };\n"
       "                CF825E070853884E0077AEAF /* AC_OutputStream.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DB9085387530077AEAF /* AC_OutputStream.cpp */; };\n"
       "                CF825E080853885D0077AEAF /* C_TextFileWrite.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825D95085386FD0077AEAF /* C_TextFileWrite.cpp */; };\n"
       "                CF825E09085388600077AEAF /* C_DateTime.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DC7085387680077AEAF /* C_DateTime.cpp */; };\n"
       "                CFA5D1630A32F661009B4370 /* C_ErrorOut.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA5D1610A32F661009B4370 /* C_ErrorOut.cpp */; };\n"
       "                CFA5D1640A32F661009B4370 /* C_ErrorOut.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA5D1610A32F661009B4370 /* C_ErrorOut.cpp */; };\n"
       "                CFA5D1650A32F661009B4370 /* C_ErrorOut.h in Headers */ = {isa = PBXBuildFile; fileRef = CFA5D1620A32F661009B4370 /* C_ErrorOut.h */; };\n"
       "                CFA5D1660A32F661009B4370 /* C_ErrorOut.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA5D1610A32F661009B4370 /* C_ErrorOut.cpp */; };\n"
       "                CFA5D1670A32F661009B4370 /* C_ErrorOut.h in Headers */ = {isa = PBXBuildFile; fileRef = CFA5D1620A32F661009B4370 /* C_ErrorOut.h */; };\n"
       "                CFA61CD5061091C90089CEA5 /* AC_galgas_map.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA61CD4061091C90089CEA5 /* AC_galgas_map.cpp */; };\n"
       "                CFA61CD6061091C90089CEA5 /* AC_galgas_map.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA61CD4061091C90089CEA5 /* AC_galgas_map.cpp */; };\n"
       "                CFA61CD5061091C90089CEB5 /* AC_galgas_list.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA61CD4061091C90089CEB5 /* AC_galgas_list.cpp */; };\n"
       "                CFA61CD6061091C90089CEB5 /* AC_galgas_list.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA61CD4061091C90089CEB5 /* AC_galgas_list.cpp */; };\n"
       "                CFA61CD5061091C90089CEB6 /* AC_galgas_sortedlist.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA61CD4061091C90089CEB6 /* AC_galgas_sortedlist.cpp */; };\n"
       "                CFA61CD6061091C90089CEB6 /* AC_galgas_sortedlist.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFA61CD4061091C90089CEB6 /* AC_galgas_sortedlist.cpp */; };\n"
       "                CFA61CFA0610951F0089CEA5 /* " << projectName << " in Resources */ = {isa = PBXBuildFile; fileRef = CFA61CF6061095160089CEA5 /* " << projectName << " */; };\n"
       "                CFA7ADBD058DB57E009AC1FE /* AC_galgas_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF53872057A558F00854C83 /* AC_galgas_io.cpp */; };\n"
       "                CFA7ADD7058DB5DF009AC1FE /* C_galgas_null_io.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF86361A0586289600B23462 /* C_galgas_null_io.cpp */; };\n"
       "                CFC30F93058A225E003D0386 /* Info.plist in Resources */ = {isa = PBXBuildFile; fileRef = CFC30F92058A225E003D0386 /* Info.plist */; };\n"
       "                CFCD26D90850D5D000A26954 /* " << projectName << "Debug in Resources */ = {isa = PBXBuildFile; fileRef = CFA61CF8061095160089CEA5 /* " << projectName << "Debug */; };\n"
       "                CFD284A70A3C3F5B0066AF65 /* main.m in Sources */ = {isa = PBXBuildFile; fileRef = CFD284A60A3C3F5B0066AF65 /* main.m */; };\n"
       "                CFD284A90A3C411C0066AF65 /* " << projectName << "_lexique.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAAF0A3C303800C9F7EC /* " << projectName << "_lexique.cpp */; };\n"
       "                CFD284AC0A3C41EC0066AF65 /* " << projectName << "_cocoa.mm in Sources */ = {isa = PBXBuildFile; fileRef = CFD284AB0A3C41EC0066AF65 /* " << projectName << "_cocoa.mm */; };\n"
       "                CFD284AE0A3C42030066AF65 /* " << projectName << "_options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB10A3C303800C9F7EC /* " << projectName << "_options.cpp */; };\n"
       "                CFDA45C5090E688B00D522A4 /* AC_galgas_map.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDA45C4090E688B00D522A4 /* AC_galgas_map.h */; };\n"
       "                CFDA45C6090E688B00D522A4 /* AC_galgas_map.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDA45C4090E688B00D522A4 /* AC_galgas_map.h */; };\n"
       "                CFDA45C5090E688B00D522B4 /* AC_galgas_list.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDA45C4090E688B00D522B4 /* AC_galgas_list.h */; };\n"
       "                CFDA45C6090E688B00D522B4 /* AC_galgas_list.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDA45C4090E688B00D522B4 /* AC_galgas_list.h */; };\n"
       "                CFDA45C5090E688B00D522B5 /* AC_galgas_sortedlist.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDA45C4090E688B00D522B5 /* AC_galgas_sortedlist.h */; };\n"
       "                CFDA45C6090E688B00D522B5 /* AC_galgas_sortedlist.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDA45C4090E688B00D522B5 /* AC_galgas_sortedlist.h */; };\n"
       "                CF825DE30853878C0077AEAF /* F_GetPrime.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF825DD50853878C0077AEAF /* F_GetPrime.cpp */; };\n"
       "                CF825DE40853878C0077AEAF /* F_GetPrime.h in Headers */ = {isa = PBXBuildFile; fileRef = CF825DD60853878C0077AEAF /* F_GetPrime.h */; };\n"
       "                CFDC50A20961ACE0006A0AFD /* GGS_stringset.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFDC50A00961ACE0006A0AFD /* GGS_stringset.cpp */; };\n"
       "                CFDC50A30961ACE0006A0AFD /* GGS_stringset.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDC50A10961ACE0006A0AFD /* GGS_stringset.h */; };\n"
       "                CFDC50A40961ACE0006A0AFD /* GGS_stringset.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFDC50A00961ACE0006A0AFD /* GGS_stringset.cpp */; };\n"
       "                CFDC50A50961ACE0006A0AFD /* GGS_stringset.h in Headers */ = {isa = PBXBuildFile; fileRef = CFDC50A10961ACE0006A0AFD /* GGS_stringset.h */; };\n" ;
 if (inProjectStyle == kMDAproject) {
   f << "                CFD286CF0A3C969A0066AF65 /* " << projectName << "_constraints.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFD286CB0A3C969A0066AF65 /* " << projectName << "_constraints.cpp */; };\n"
        "                CFD286D00A3C969A0066AF65 /* " << projectName << "_constraints.h in Headers */ = {isa = PBXBuildFile; fileRef = CFD286CC0A3C969A0066AF65 /* " << projectName << "_constraints.h */; };\n"
        "                CFD286D10A3C969A0066AF65 /* " << projectName << "_metamodel.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFD286CD0A3C969A0066AF65 /* " << projectName << "_metamodel.cpp */; };\n"
        "                CFD286D20A3C969A0066AF65 /* " << projectName << "_metamodel.h in Headers */ = {isa = PBXBuildFile; fileRef = CFD286CE0A3C969A0066AF65 /* " << projectName << "_metamodel.h */; };\n"
        "                CFD286D30A3C969A0066AF65 /* " << projectName << "_constraints.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFD286CB0A3C969A0066AF65 /* " << projectName << "_constraints.cpp */; };\n"
        "                CFD286D40A3C969A0066AF65 /* " << projectName << "_constraints.h in Headers */ = {isa = PBXBuildFile; fileRef = CFD286CC0A3C969A0066AF65 /* " << projectName << "_constraints.h */; };\n"
        "                CFD286D50A3C969A0066AF65 /* " << projectName << "_metamodel.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFD286CD0A3C969A0066AF65 /* " << projectName << "_metamodel.cpp */; };\n"
        "                CFD286D60A3C969A0066AF65 /* " << projectName << "_metamodel.h in Headers */ = {isa = PBXBuildFile; fileRef = CFD286CE0A3C969A0066AF65 /* " << projectName << "_metamodel.h */; };\n"

        "                CF5871830A3D68B9009C9D26 /* C_GGS_entityMap.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_GGS_entityMap.cpp; sourceTree = \"<group>\"; };\n"
        "                CF5871840A3D68B9009C9D26 /* C_GGS_entityMap.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_GGS_entityMap.h; sourceTree = \"<group>\"; };\n"
        "                CF5871850A3D68B9009C9D26 /* C_GGS_MapIndex.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_GGS_MapIndex.cpp; sourceTree = \"<group>\"; };\n"
        "                CF5871860A3D68B9009C9D26 /* C_GGS_MapIndex.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_GGS_MapIndex.h; sourceTree = \"<group>\"; };\n"

       "                CF512D86092B3023008F7E87 /* C_BDD_Descriptor.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D7A092B3023008F7E87 /* C_BDD_Descriptor.cpp */; };\n"
       "                CF512D87092B3023008F7E87 /* C_BDD_Descriptor.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D7B092B3023008F7E87 /* C_BDD_Descriptor.h */; };\n"
       "                CF512D88092B3023008F7E87 /* C_BDD_Set1.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D7C092B3023008F7E87 /* C_BDD_Set1.cpp */; };\n"
       "                CF512D89092B3023008F7E87 /* C_BDD_Set1.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D7D092B3023008F7E87 /* C_BDD_Set1.h */; };\n"
       "                CF512D8A092B3023008F7E87 /* C_BDD_Set2.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D7E092B3023008F7E87 /* C_BDD_Set2.cpp */; };\n"
       "                CF512D8B092B3023008F7E87 /* C_BDD_Set2.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D7F092B3023008F7E87 /* C_BDD_Set2.h */; };\n"
       "                CF512D8C092B3023008F7E87 /* C_BDD_Set3.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D80092B3023008F7E87 /* C_BDD_Set3.cpp */; };\n"
       "                CF512D8D092B3023008F7E87 /* C_BDD_Set3.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D81092B3023008F7E87 /* C_BDD_Set3.h */; };\n"
       "                CF512D8E092B3023008F7E87 /* C_BDD.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D82092B3023008F7E87 /* C_BDD.cpp */; };\n"
       "                CF512D8F092B3023008F7E87 /* C_BDD.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D83092B3023008F7E87 /* C_BDD.h */; };\n"
       "                CF512D90092B3023008F7E87 /* C_Display_BDD.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D84092B3023008F7E87 /* C_Display_BDD.cpp */; };\n"
       "                CF512D91092B3023008F7E87 /* C_Display_BDD.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D85092B3023008F7E87 /* C_Display_BDD.h */; };\n"
       "                CF512D92092B3023008F7E87 /* C_BDD_Descriptor.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D7A092B3023008F7E87 /* C_BDD_Descriptor.cpp */; };\n"
       "                CF512D93092B3023008F7E87 /* C_BDD_Descriptor.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D7B092B3023008F7E87 /* C_BDD_Descriptor.h */; };\n"
       "                CF512D94092B3023008F7E87 /* C_BDD_Set1.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D7C092B3023008F7E87 /* C_BDD_Set1.cpp */; };\n"
       "                CF512D95092B3023008F7E87 /* C_BDD_Set1.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D7D092B3023008F7E87 /* C_BDD_Set1.h */; };\n"
       "                CF512D96092B3023008F7E87 /* C_BDD_Set2.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D7E092B3023008F7E87 /* C_BDD_Set2.cpp */; };\n"
       "                CF512D97092B3023008F7E87 /* C_BDD_Set2.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D7F092B3023008F7E87 /* C_BDD_Set2.h */; };\n"
       "                CF512D98092B3023008F7E87 /* C_BDD_Set3.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D80092B3023008F7E87 /* C_BDD_Set3.cpp */; };\n"
       "                CF512D99092B3023008F7E87 /* C_BDD_Set3.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D81092B3023008F7E87 /* C_BDD_Set3.h */; };\n"
       "                CF512D9A092B3023008F7E87 /* C_BDD.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF512D82092B3023008F7E87 /* C_BDD.cpp */; };\n"
       "                CF512D9B092B3023008F7E87 /* C_BDD.h in Headers */ = {isa = PBXBuildFile; fileRef = CF512D83092B3023008F7E87 /* C_BDD.h */; };\n" ;
 }
 f <<  "                CFE9BABA0A3C303800C9F7EC /* " << projectName << "_grammar.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAAD0A3C303800C9F7EC /* " << projectName << "_grammar.cpp */; };\n"
       "                CFE9BABB0A3C303800C9F7EC /* " << projectName << "_grammar.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAAE0A3C303800C9F7EC /* " << projectName << "_grammar.h */; };\n"
       "                CFE9BABC0A3C303800C9F7EC /* " << projectName << "_lexique.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAAF0A3C303800C9F7EC /* " << projectName << "_lexique.cpp */; };\n"
       "                CFE9BABD0A3C303800C9F7EC /* " << projectName << "_lexique.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB00A3C303800C9F7EC /* " << projectName << "_lexique.h */; };\n"
       "                CFE9BABE0A3C303800C9F7EC /* " << projectName << "_options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB10A3C303800C9F7EC /* " << projectName << "_options.cpp */; };\n"
       "                CFE9BABF0A3C303800C9F7EC /* " << projectName << "_options.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB20A3C303800C9F7EC /* " << projectName << "_options.h */; };\n"
       "                CFE9BAC00A3C303800C9F7EC /* " << projectName << "_program.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB30A3C303800C9F7EC /* " << projectName << "_program.cpp */; };\n"
       "                CFE9BAC10A3C303800C9F7EC /* " << projectName << "_program.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB40A3C303800C9F7EC /* " << projectName << "_program.h */; };\n"
       "                CFE9BAC20A3C303800C9F7EC /* " << projectName << "_semantics.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB50A3C303800C9F7EC /* " << projectName << "_semantics.cpp */; };\n"
       "                CFE9BAC30A3C303800C9F7EC /* " << projectName << "_semantics.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB60A3C303800C9F7EC /* " << projectName << "_semantics.h */; };\n"
       "                CFE9BAC40A3C303800C9F7EC /* " << projectName << "_syntax.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB70A3C303800C9F7EC /* " << projectName << "_syntax.cpp */; };\n"
       "                CFE9BAC50A3C303800C9F7EC /* " << projectName << "_syntax.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB80A3C303800C9F7EC /* " << projectName << "_syntax.h */; };\n"
       "                CFE9BAC60A3C303800C9F7EC /* grammar_" << projectName << "_program.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB90A3C303800C9F7EC /* grammar_" << projectName << "_program.h */; };\n"
       "                CFE9BAC70A3C303800C9F7EC /* " << projectName << "_grammar.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAAD0A3C303800C9F7EC /* " << projectName << "_grammar.cpp */; };\n"
       "                CFE9BAC80A3C303800C9F7EC /* " << projectName << "_grammar.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAAE0A3C303800C9F7EC /* " << projectName << "_grammar.h */; };\n"
       "                CFE9BAC90A3C303800C9F7EC /* " << projectName << "_lexique.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAAF0A3C303800C9F7EC /* " << projectName << "_lexique.cpp */; };\n"
       "                CFE9BACA0A3C303800C9F7EC /* " << projectName << "_lexique.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB00A3C303800C9F7EC /* " << projectName << "_lexique.h */; };\n"
       "                CFE9BACB0A3C303800C9F7EC /* " << projectName << "_options.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB10A3C303800C9F7EC /* " << projectName << "_options.cpp */; };\n"
       "                CFE9BACC0A3C303800C9F7EC /* " << projectName << "_options.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB20A3C303800C9F7EC /* " << projectName << "_options.h */; };\n"
       "                CFE9BACD0A3C303800C9F7EC /* " << projectName << "_program.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB30A3C303800C9F7EC /* " << projectName << "_program.cpp */; };\n"
       "                CFE9BACE0A3C303800C9F7EC /* " << projectName << "_program.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB40A3C303800C9F7EC /* " << projectName << "_program.h */; };\n"
       "                CFE9BACF0A3C303800C9F7EC /* " << projectName << "_semantics.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB50A3C303800C9F7EC /* " << projectName << "_semantics.cpp */; };\n"
       "                CFE9BAD00A3C303800C9F7EC /* " << projectName << "_semantics.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB60A3C303800C9F7EC /* " << projectName << "_semantics.h */; };\n"
       "                CFE9BAD10A3C303800C9F7EC /* " << projectName << "_syntax.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAB70A3C303800C9F7EC /* " << projectName << "_syntax.cpp */; };\n"
       "                CFE9BAD20A3C303800C9F7EC /* " << projectName << "_syntax.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB80A3C303800C9F7EC /* " << projectName << "_syntax.h */; };\n"
       "                CFE9BAD30A3C303800C9F7EC /* grammar_" << projectName << "_program.h in Headers */ = {isa = PBXBuildFile; fileRef = CFE9BAB90A3C303800C9F7EC /* grammar_" << projectName << "_program.h */; };\n"
       "                CFE9BAD70A3C392600C9F7EC /* " << projectName << "_computations.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAD60A3C392600C9F7EC /* " << projectName << "_computations.cpp */; };\n"
       "                CFE9BAD80A3C392600C9F7EC /* " << projectName << "_computations.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFE9BAD60A3C392600C9F7EC /* " << projectName << "_computations.cpp */; };\n"
       "                CFF8619009C0DA6100F90D05 /* C_GGS_Object.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF8618E09C0DA6100F90D05 /* C_GGS_Object.cpp */; };\n"
       "                CFF8619109C0DA6100F90D05 /* C_GGS_Object.h in Headers */ = {isa = PBXBuildFile; fileRef = CFF8618F09C0DA6100F90D05 /* C_GGS_Object.h */; };\n"
       "                CFF8619209C0DA6100F90D05 /* C_GGS_Object.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF8618E09C0DA6100F90D05 /* C_GGS_Object.cpp */; };\n"
       "                CFF8619309C0DA6100F90D05 /* C_GGS_Object.h in Headers */ = {isa = PBXBuildFile; fileRef = CFF8618F09C0DA6100F90D05 /* C_GGS_Object.h */; };\n"
       "                CFF8619409C0DA6100F90D05 /* C_GGS_Object.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CFF8618E09C0DA6100F90D05 /* C_GGS_Object.cpp */; };\n"
       "/* End PBXBuildFile section */\n"
       "\n"
       "/* Begin PBXContainerItemProxy section */\n"
       "                CF819BE607AE65D0000408D9 /* PBXContainerItemProxy */ = {\n"
       "                        isa = PBXContainerItemProxy;\n"
       "                        containerPortal = 2A37F4A9FDCFA73011CA2CEA /* Project object */;\n"
       "                        proxyType = 1;\n"
       "                        remoteGlobalIDString = 8DD76F620486A84900D96B5E;\n"
       "                        remoteInfo = \"" << projectName << " tool\";\n"
       "                };\n"
       "                CF93CB120855CA1B0003EC0E /* PBXContainerItemProxy */ = {\n"
       "                        isa = PBXContainerItemProxy;\n"
       "                        containerPortal = 2A37F4A9FDCFA73011CA2CEA /* Project object */;\n"
       "                        proxyType = 1;\n"
       "                        remoteGlobalIDString = CF7A1402058CEFE2007126C1;\n"
       "                        remoteInfo = \"" << projectName << " tool debug\";\n"
       "                };\n"
       "/* End PBXContainerItemProxy section */\n"
       "\n"
       "/* Begin PBXCopyFilesBuildPhase section */\n"
       "                8DD76F690486A84900D96B5E /* CopyFiles */ = {\n"
       "                        isa = PBXCopyFilesBuildPhase;\n"
       "                        buildActionMask = 8;\n"
       "                        dstPath = /usr/share/man/man1/;\n"
       "                        dstSubfolderSpec = 0;\n"
       "                        files = (\n"
       "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 1;\n"
       "                };\n"
       "/* End PBXCopyFilesBuildPhase section */\n"
       "\n"
       "/* Begin PBXFileReference section */\n"
       "                089C1660FE840EACC02AAC07 /* English */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = text.plist.strings; name = English; path = English.lproj/InfoPlist.strings; sourceTree = \"<group>\"; };\n"
       "                1058C7A7FEA54F5311CA2CBB /* Cocoa.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Cocoa.framework; path = /System/Library/Frameworks/Cocoa.framework; sourceTree = \"<absolute>\"; };\n"
       "                2A37F4BAFDCFA73011CA2CEA /* English */ = {isa = PBXFileReference; lastKnownFileType = text.rtf; name = English; path = English.lproj/Credits.rtf; sourceTree = \"<group>\"; };\n"
       "                2A37F4C4FDCFA73011CA2CEA /* AppKit.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = AppKit.framework; path = /System/Library/Frameworks/AppKit.framework; sourceTree = \"<absolute>\"; };\n"
       "                2A37F4C5FDCFA73011CA2CEA /* Foundation.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Foundation.framework; path = /System/Library/Frameworks/Foundation.framework; sourceTree = \"<absolute>\"; };\n"
       "                8D15AC370486D014006FF6A4 /* cocoa" << projectNameWithUpperCase << ".app */ = {isa = PBXFileReference; explicitFileType = wrapper.application; includeInIndex = 0; path = cocoa" << projectNameWithUpperCase << ".app; sourceTree = BUILT_PRODUCTS_DIR; };\n"
       "                CF337A2A09EFAED600EC41F6 /* C_SourceTextForCoca.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = C_SourceTextForCoca.mm; sourceTree = \"<group>\"; };\n"
       "                CF337A2B09EFAED600EC41F6 /* C_SourceTextForCocoa.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_SourceTextForCocoa.h; sourceTree = \"<group>\"; };\n"
       "                CF3B8A9B058CD21900D682D2 /* libstdc++.a */ = {isa = PBXFileReference; lastKnownFileType = archive.ar; name = \"libstdc++.a\"; path = \"/usr/lib/gcc/darwin/3.3/libstdc++.a\"; sourceTree = \"<absolute>\"; };\n"
       "                CF3FF0B705877B62000D2F8C /* AC_galgas_io.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = AC_galgas_io.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C005877B62000D2F8C /* galgas_header.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = galgas_header.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C105877B62000D2F8C /* GGS_bool.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_bool.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C205877B62000D2F8C /* GGS_char.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_char.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C405877B62000D2F8C /* GGS_lbool.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_lbool.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C505877B62000D2F8C /* GGS_lchar.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_lchar.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C705877B62000D2F8C /* GGS_location.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_location.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C805877B62000D2F8C /* GGS_lstring.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_lstring.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0C905877B62000D2F8C /* GGS_luint.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_luint.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0CA05877B62000D2F8C /* GGS_string.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_string.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0CB05877B62000D2F8C /* GGS_uint.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_uint.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0CB05877B62000D2F8F /* GGS_sint.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_sint.h; sourceTree = \"<group>\"; };\n"
       "                4F3FF0CB05877B62000D2F8F /* GGS_lsint.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_lsint.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0CB05877B62000D2FEF /* GGS_sint64.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_sint64.h; sourceTree = \"<group>\"; };\n"
       "                AF3FF0CB05877B62000D2FEF /* GGS_lsint64.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_lsint64.h; sourceTree = \"<group>\"; };\n"
       "                CF3FF0CB05877B62000D2F8D /* GGS_uint64.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_uint64.h; sourceTree = \"<group>\"; };\n"
       "                4F3FF0CB05877B62000D2F8D /* GGS_luint64.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = GGS_luint64.h; sourceTree = \"<group>\"; };\n"
       "                CF512D9E092B3040008F7E87 /* C_builtin_CLI_Options.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_builtin_CLI_Options.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D9F092B3040008F7E87 /* C_builtin_CLI_Options.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_builtin_CLI_Options.h; sourceTree = \"<group>\"; };\n"
       "                CF6557C50A25EB5900979050 /* C_galgas_CLI_Options.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_galgas_CLI_Options.cpp; sourceTree = \"<group>\"; };\n"
       "                CF6557C60A25EB5900979050 /* C_galgas_CLI_Options.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_galgas_CLI_Options.h; sourceTree = \"<group>\"; };\n"
       "                CF825D44085386810077AEAF /* F_CocoaWrapperForGalgas.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = F_CocoaWrapperForGalgas.h; sourceTree = \"<group>\"; };\n"
       "                CF825D45085386810077AEAF /* I_Action.tiff */ = {isa = PBXFileReference; lastKnownFileType = image.tiff; path = I_Action.tiff; sourceTree = \"<group>\"; };\n"
       "                CF825D46085386810077AEAF /* I_SaveAs.tiff */ = {isa = PBXFileReference; lastKnownFileType = image.tiff; path = I_SaveAs.tiff; sourceTree = \"<group>\"; };\n"
       "                CF825D47085386810077AEAF /* I_Stop.tiff */ = {isa = PBXFileReference; lastKnownFileType = image.tiff; path = I_Stop.tiff; sourceTree = \"<group>\"; };\n"
       "                CF825D48085386810077AEAF /* I_Window.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = I_Window.png; sourceTree = \"<group>\"; };\n"
       "                CF825D49085386810077AEAF /* OC_GGS_BuildWindowController.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = OC_GGS_BuildWindowController.h; sourceTree = \"<group>\"; };\n"
       "                CF825D4A085386810077AEAF /* OC_GGS_BuildWindowController.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = OC_GGS_BuildWindowController.mm; sourceTree = \"<group>\"; };\n"
       "                CF825D4B085386810077AEAF /* OC_GGS_Document.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = OC_GGS_Document.h; sourceTree = \"<group>\"; };\n"
       "                CF825D4C085386810077AEAF /* OC_GGS_Document.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = OC_GGS_Document.mm; sourceTree = \"<group>\"; };\n"
       "                CF825D4D085386810077AEAF /* OC_GGS_PreferencesController.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = OC_GGS_PreferencesController.h; sourceTree = \"<group>\"; };\n"
       "                CF825D4E085386810077AEAF /* OC_GGS_PreferencesController.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = OC_GGS_PreferencesController.mm; sourceTree = \"<group>\"; };\n"
       "                CF825D4F085386810077AEAF /* OC_GGS_RulerView.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = OC_GGS_RulerView.h; sourceTree = \"<group>\"; };\n"
       "                CF825D50085386810077AEAF /* OC_GGS_RulerView.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = OC_GGS_RulerView.mm; sourceTree = \"<group>\"; };\n"
       "                CF825D51085386810077AEAF /* OC_GGS_TextView.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = OC_GGS_TextView.h; sourceTree = \"<group>\"; };\n"
       "                CF825D52085386810077AEAF /* OC_GGS_TextView.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = OC_GGS_TextView.mm; sourceTree = \"<group>\"; };\n"
       "                CFBC75C70AC6785A00443ACA /* OC_GGS_BuildResultTextView.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = OC_GGS_BuildResultTextView.h; sourceTree = \"<group>\"; };\n"
       "                CFBC76060AC67F9900443ACA /* OC_GGS_BuildResultTextView.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = OC_GGS_BuildResultTextView.mm; sourceTree = \"<group>\"; };\n"
       "                CF825D53085386810077AEAF /* PP_CocoaGalgasPrefix.pch */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = PP_CocoaGalgasPrefix.pch; sourceTree = \"<group>\"; };\n"
       "                CF825D5E0853868A0077AEAF /* English */ = {isa = PBXFileReference; lastKnownFileType = wrapper.nib; name = English; path = English.lproj/MainMenu.nib; sourceTree = \"<group>\"; };\n"
       "                CF825D600853868A0077AEAF /* English */ = {isa = PBXFileReference; lastKnownFileType = wrapper.nib; name = English; path = English.lproj/OC_GGS_Document.nib; sourceTree = \"<group>\"; };\n"
       "                CF825D63085386A80077AEAF /* C_PrimeCache2.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_PrimeCache2.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D64085386A80077AEAF /* C_PrimeCache2.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_PrimeCache2.h; sourceTree = \"<group>\"; };\n"
       "                CF825D65085386A80077AEAF /* C_PrimeCache3.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_PrimeCache3.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D66085386A80077AEAF /* C_PrimeCache3.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_PrimeCache3.h; sourceTree = \"<group>\"; };\n"
       "                CF825D75085386E00077AEAF /* AC_CLI_Options.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = AC_CLI_Options.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D76085386E00077AEAF /* AC_CLI_Options.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = AC_CLI_Options.h; sourceTree = \"<group>\"; };\n"
       "                CF825D79085386E00077AEAF /* C_CLI_OptionGroup.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_CLI_OptionGroup.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D7A085386E10077AEAF /* C_CLI_OptionGroup.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_CLI_OptionGroup.h; sourceTree = \"<group>\"; };\n"
       "                CF825D7B085386E10077AEAF /* F_Analyze_CLI_Options.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = F_Analyze_CLI_Options.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D7C085386E10077AEAF /* F_Analyze_CLI_Options.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = F_Analyze_CLI_Options.h; sourceTree = \"<group>\"; };\n"
       "                CF825D7D085386E10077AEAF /* F_main.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = F_main.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D7E085386E10077AEAF /* mainForLIBPM.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = mainForLIBPM.h; sourceTree = \"<group>\"; };\n"
       "                CF825D95085386FD0077AEAF /* C_TextFileWrite.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_TextFileWrite.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825D96085386FD0077AEAF /* C_TextFileWrite.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_TextFileWrite.h; sourceTree = \"<group>\"; };\n"
       "                CF825DA1085387240077AEAF /* C_Lexique.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_Lexique.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DA2085387240077AEAF /* C_Lexique.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_Lexique.h; sourceTree = \"<group>\"; };\n"
       "                CF825DB1085387390077AEAF /* TC_UniqueArray.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = TC_UniqueArray.h; sourceTree = \"<group>\"; };\n"
       "                CF825DB2085387390077AEAF /* TC_UniqueFixedSizeArray.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = TC_UniqueFixedSizeArray.h; sourceTree = \"<group>\"; };\n"
       "                CF825DB9085387530077AEAF /* AC_OutputStream.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = AC_OutputStream.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DBA085387530077AEAF /* AC_OutputStream.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = AC_OutputStream.h; sourceTree = \"<group>\"; };\n"
       "                CF825DBB085387530077AEAF /* C_ConsoleOut.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_ConsoleOut.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DBC085387530077AEAF /* C_ConsoleOut.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_ConsoleOut.h; sourceTree = \"<group>\"; };\n"
       "                CF825DC7085387680077AEAF /* C_DateTime.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_DateTime.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DC8085387680077AEAF /* C_DateTime.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_DateTime.h; sourceTree = \"<group>\"; };\n"
       "                CF825DCF0853878C0077AEAF /* C_Exception.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_Exception.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DD00853878C0077AEAF /* C_Exception.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_Exception.h; sourceTree = \"<group>\"; };\n"
       "                CF825DD10853878C0077AEAF /* C_String.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_String.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DD20853878C0077AEAF /* C_String.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_String.h; sourceTree = \"<group>\"; };\n"
       "                CF825DD30853878C0077AEAF /* F_DisplayException.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = F_DisplayException.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DD40853878C0077AEAF /* F_DisplayException.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = F_DisplayException.h; sourceTree = \"<group>\"; };\n"
       "                CF825DD70853878C0077AEAF /* M_machine.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = M_machine.h; sourceTree = \"<group>\"; };\n"
       "                CF825DD80853878C0077AEAF /* M_SourceLocation.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = M_SourceLocation.h; sourceTree = \"<group>\"; };\n"
       "                CF825DD90853878C0077AEAF /* MF_Assert.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = MF_Assert.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DDA0853878C0077AEAF /* MF_Assert.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = MF_Assert.h; sourceTree = \"<group>\"; };\n"
       "                CF825DDB0853878C0077AEAF /* MF_MemoryControl.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = MF_MemoryControl.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DDC0853878C0077AEAF /* MF_MemoryControl.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = MF_MemoryControl.h; sourceTree = \"<group>\"; };\n"
       "                CF825DF9085387EC0077AEAF /* C_Timer.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_Timer.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DFA085387EC0077AEAF /* C_Timer.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_Timer.h; sourceTree = \"<group>\"; };\n"
       "                CF86361A0586289600B23462 /* C_galgas_null_io.cpp */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.cpp.cpp; path = C_galgas_null_io.cpp; sourceTree = \"<group>\"; };\n"
       "                CF86361B0586289600B23462 /* C_galgas_null_io.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = C_galgas_null_io.h; sourceTree = \"<group>\"; };\n"
       "                CF86365005862B0600B23462 /* C_galgas_terminal_io.cpp */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.cpp.cpp; path = C_galgas_terminal_io.cpp; sourceTree = \"<group>\"; };\n"
       "                CF86365105862B0600B23462 /* C_galgas_terminal_io.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = C_galgas_terminal_io.h; sourceTree = \"<group>\"; };\n"
       "                CF9041F0057F687D007362F4 /* C_galgas_cocoa_io.h */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.c.h; path = C_galgas_cocoa_io.h; sourceTree = \"<group>\"; };\n"
       "                CF904220057F6B8D007362F4 /* C_galgas_cocoa_io.cpp */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.cpp.cpp; path = C_galgas_cocoa_io.cpp; sourceTree = \"<group>\"; };\n"
       "                CFA5D1610A32F661009B4370 /* C_ErrorOut.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_ErrorOut.cpp; sourceTree = \"<group>\"; };\n"
       "                CFA5D1620A32F661009B4370 /* C_ErrorOut.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_ErrorOut.h; sourceTree = \"<group>\"; };\n"
       "                CFA61CD4061091C90089CEA5 /* AC_galgas_map.cpp */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.cpp.cpp; path = AC_galgas_map.cpp; sourceTree = \"<group>\"; };\n"
       "                CFA61CD4061091C90089CEB5 /* AC_galgas_list.cpp */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.cpp.cpp; path = AC_galgas_list.cpp; sourceTree = \"<group>\"; };\n"
       "                CFA61CD4061091C90089CEB6 /* AC_galgas_sortedlist.cpp */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = sourcecode.cpp.cpp; path = AC_galgas_sortedlist.cpp; sourceTree = \"<group>\"; };\n"
       "                CFA61CF6061095160089CEA5 /* " << projectName << " */ = {isa = PBXFileReference; includeInIndex = 0; lastKnownFileType = \"compiled.mach-o.executable\"; path = " << projectName << "; sourceTree = BUILT_PRODUCTS_DIR; };\n"
       "                CFA61CF8061095160089CEA5 /* " << projectName << "Debug */ = {isa = PBXFileReference; explicitFileType = \"compiled.mach-o.executable\"; includeInIndex = 0; path = " << projectName << "Debug; sourceTree = BUILT_PRODUCTS_DIR; };\n"
       "                CFC30F92058A225E003D0386 /* Info.plist */ = {isa = PBXFileReference; fileEncoding = 30; lastKnownFileType = text.plist; path = Info.plist; sourceTree = \"<group>\"; };\n"
       "                CFD284A60A3C3F5B0066AF65 /* main.m */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.objc; path = main.m; sourceTree = \"<group>\"; };\n"
       "                CF825DD50853878C0077AEAF /* F_GetPrime.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = F_GetPrime.cpp; sourceTree = \"<group>\"; };\n"
       "                CF825DD60853878C0077AEAF /* F_GetPrime.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = F_GetPrime.h; sourceTree = \"<group>\"; };\n"
       "                CFD284AB0A3C41EC0066AF65 /* " << projectName << "_cocoa.mm */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.objcpp; path = " << projectName << "_cocoa.mm; sourceTree = \"<group>\"; };\n"
       "                CFDA45C4090E688B00D522A4 /* AC_galgas_map.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = AC_galgas_map.h; sourceTree = \"<group>\"; };\n"
       "                CFDA45C4090E688B00D522B4 /* AC_galgas_list.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = AC_galgas_list.h; sourceTree = \"<group>\"; };\n"
       "                CFDA45C4090E688B00D522B5 /* AC_galgas_sortedlist.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = AC_galgas_sortedlist.h; sourceTree = \"<group>\"; };\n"
       "                CFDC50A00961ACE0006A0AFD /* GGS_stringset.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_stringset.cpp; sourceTree = \"<group>\"; };\n"
       "                CFDC50A10961ACE0006A0AFD /* GGS_stringset.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = GGS_stringset.h; sourceTree = \"<group>\"; };\n" ;
 if (inProjectStyle == kMDAproject) {
   f << "                CFD286CB0A3C969A0066AF65 /* " << projectName << "_constraints.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_constraints.cpp; sourceTree = \"<group>\"; };\n"
        "                CFD286CC0A3C969A0066AF65 /* " << projectName << "_constraints.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_constraints.h; sourceTree = \"<group>\"; };\n"
        "                CFD286CD0A3C969A0066AF65 /* " << projectName << "_metamodel.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_metamodel.cpp; sourceTree = \"<group>\"; };\n"
        "                CFD286CE0A3C969A0066AF65 /* " << projectName << "_metamodel.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_metamodel.h; sourceTree = \"<group>\"; };\n"
        "                CF5871870A3D68B9009C9D26 /* C_GGS_entityMap.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF5871830A3D68B9009C9D26 /* C_GGS_entityMap.cpp */; };\n"
        "                CF5871880A3D68B9009C9D26 /* C_GGS_entityMap.h in Headers */ = {isa = PBXBuildFile; fileRef = CF5871840A3D68B9009C9D26 /* C_GGS_entityMap.h */; };\n"
        "                CF5871890A3D68B9009C9D26 /* C_GGS_MapIndex.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF5871850A3D68B9009C9D26 /* C_GGS_MapIndex.cpp */; };\n"
        "                CF58718A0A3D68B9009C9D26 /* C_GGS_MapIndex.h in Headers */ = {isa = PBXBuildFile; fileRef = CF5871860A3D68B9009C9D26 /* C_GGS_MapIndex.h */; };\n"
        "                CF58718B0A3D68B9009C9D26 /* C_GGS_entityMap.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF5871830A3D68B9009C9D26 /* C_GGS_entityMap.cpp */; };\n"
        "                CF58718C0A3D68B9009C9D26 /* C_GGS_entityMap.h in Headers */ = {isa = PBXBuildFile; fileRef = CF5871840A3D68B9009C9D26 /* C_GGS_entityMap.h */; };\n"
        "                CF58718D0A3D68B9009C9D26 /* C_GGS_MapIndex.cpp in Sources */ = {isa = PBXBuildFile; fileRef = CF5871850A3D68B9009C9D26 /* C_GGS_MapIndex.cpp */; };\n"
        "                CF58718E0A3D68B9009C9D26 /* C_GGS_MapIndex.h in Headers */ = {isa = PBXBuildFile; fileRef = CF5871860A3D68B9009C9D26 /* C_GGS_MapIndex.h */; };\n"

       "                CF512D7A092B3023008F7E87 /* C_BDD_Descriptor.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_BDD_Descriptor.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D7B092B3023008F7E87 /* C_BDD_Descriptor.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_BDD_Descriptor.h; sourceTree = \"<group>\"; };\n"
       "                CF512D7C092B3023008F7E87 /* C_BDD_Set1.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_BDD_Set1.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D7D092B3023008F7E87 /* C_BDD_Set1.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_BDD_Set1.h; sourceTree = \"<group>\"; };\n"
       "                CF512D7E092B3023008F7E87 /* C_BDD_Set2.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_BDD_Set2.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D7F092B3023008F7E87 /* C_BDD_Set2.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_BDD_Set2.h; sourceTree = \"<group>\"; };\n"
       "                CF512D80092B3023008F7E87 /* C_BDD_Set3.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_BDD_Set3.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D81092B3023008F7E87 /* C_BDD_Set3.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_BDD_Set3.h; sourceTree = \"<group>\"; };\n"
       "                CF512D82092B3023008F7E87 /* C_BDD.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_BDD.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D83092B3023008F7E87 /* C_BDD.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_BDD.h; sourceTree = \"<group>\"; };\n"
       "                CF512D84092B3023008F7E87 /* C_Display_BDD.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_Display_BDD.cpp; sourceTree = \"<group>\"; };\n"
       "                CF512D85092B3023008F7E87 /* C_Display_BDD.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_Display_BDD.h; sourceTree = \"<group>\"; };\n" ;
 }
 f <<  "                CFE9BAAD0A3C303800C9F7EC /* " << projectName << "_grammar.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_grammar.cpp; sourceTree = \"<group>\"; };\n"
       "                CFE9BAAE0A3C303800C9F7EC /* " << projectName << "_grammar.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_grammar.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAAF0A3C303800C9F7EC /* " << projectName << "_lexique.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_lexique.cpp; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB00A3C303800C9F7EC /* " << projectName << "_lexique.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_lexique.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB10A3C303800C9F7EC /* " << projectName << "_options.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_options.cpp; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB20A3C303800C9F7EC /* " << projectName << "_options.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_options.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB30A3C303800C9F7EC /* " << projectName << "_program.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_program.cpp; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB40A3C303800C9F7EC /* " << projectName << "_program.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_program.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB50A3C303800C9F7EC /* " << projectName << "_semantics.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_semantics.cpp; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB60A3C303800C9F7EC /* " << projectName << "_semantics.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_semantics.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB70A3C303800C9F7EC /* " << projectName << "_syntax.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_syntax.cpp; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB80A3C303800C9F7EC /* " << projectName << "_syntax.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = " << projectName << "_syntax.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAB90A3C303800C9F7EC /* grammar_" << projectName << "_program.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = grammar_" << projectName << "_program.h; sourceTree = \"<group>\"; };\n"
       "                CFE9BAD60A3C392600C9F7EC /* " << projectName << "_computations.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = " << projectName << "_computations.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53872057A558F00854C83 /* AC_galgas_io.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = AC_galgas_io.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF8618E09C0DA6100F90D05 /* C_GGS_Object.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = C_GGS_Object.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF8618F09C0DA6100F90D05 /* C_GGS_Object.h */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.c.h; path = C_GGS_Object.h; sourceTree = \"<group>\"; };\n"
       "                CFF53881057A558F00854C83 /* GGS_bool.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_bool.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53883057A558F00854C83 /* GGS_char.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_char.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53889057A558F00854C83 /* GGS_lbool.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_lbool.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF5388B057A558F00854C83 /* GGS_lchar.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_lchar.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF5388F057A558F00854C83 /* GGS_location.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_location.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53891057A558F00854C83 /* GGS_lstring.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_lstring.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53893057A558F00854C83 /* GGS_luint.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_luint.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53895057A558F00854C83 /* GGS_string.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_string.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53897057A558F00854C83 /* GGS_uint.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_uint.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53897057D558F00854C83 /* GGS_sint.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_sint.cpp; sourceTree = \"<group>\"; };\n"
       "                4FF53897057D558F00854C83 /* GGS_lsint.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_lsint.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53897057D558F00854C8F /* GGS_sint64.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_sint64.cpp; sourceTree = \"<group>\"; };\n"
       "                AFF53897057D558F00854C8F /* GGS_lsint64.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_lsint64.cpp; sourceTree = \"<group>\"; };\n"
       "                CFF53897057A558F00854C84 /* GGS_uint64.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_uint64.cpp; sourceTree = \"<group>\"; };\n"
       "                4FF53897057A558F00854C84 /* GGS_luint64.cpp */ = {isa = PBXFileReference; fileEncoding = 5; lastKnownFileType = sourcecode.cpp.cpp; path = GGS_luint64.cpp; sourceTree = \"<group>\"; };\n"
       "/* End PBXFileReference section */\n"
       "\n"
       "/* Begin PBXFrameworksBuildPhase section */\n"
       "                8D15AC330486D014006FF6A4 /* Frameworks */ = {\n"
       "                        isa = PBXFrameworksBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                8D15AC340486D014006FF6A4 /* Cocoa.framework in Frameworks */,\n"
       "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "                8DD76F660486A84900D96B5E /* Frameworks */ = {\n"
       "                        isa = PBXFrameworksBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                CF3B8A9C058CD21900D682D2 /* libstdc++.a in Frameworks */,\n"
       "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "/* End PBXFrameworksBuildPhase section */\n"
       "\n"
       "/* Begin PBXGroup section */\n"
       "                1058C7A6FEA54F5311CA2CBB /* Linked Frameworks */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                1058C7A7FEA54F5311CA2CBB /* Cocoa.framework */,\n"
       "                        );\n"
       "                        name = \"Linked Frameworks\";\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                1058C7A8FEA54F5311CA2CBB /* Other Frameworks */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF3B8A9B058CD21900D682D2 /* libstdc++.a */,\n"
       "                                2A37F4C5FDCFA73011CA2CEA /* Foundation.framework */,\n"
       "                                2A37F4C4FDCFA73011CA2CEA /* AppKit.framework */,\n"
       "                        );\n"
       "                        name = \"Other Frameworks\";\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                19C28FB0FE9D524F11CA2CBB /* Products */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                8D15AC370486D014006FF6A4 /* cocoa" << projectNameWithUpperCase << ".app */,\n"
       "                                CFA61CF6061095160089CEA5 /* " << projectName << " */,\n"
       "                                CFA61CF8061095160089CEA5 /* " << projectName << "Debug */,\n"
       "                        );\n"
       "                        name = Products;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                2A37F4AAFDCFA73011CA2CEA /* " << projectName << "_cocoa */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CFF53732057A4E5000854C83 /* Generated By Galgas */,\n"
       "                                CFF53737057A4E9400854C83 /* Hand Coded Sources */,\n"
       "                                CFF5381C057A545B00854C83 /* libpm */,\n"
       "                                2A37F4AFFDCFA73011CA2CEA /* Other Sources */,\n"
       "                                2A37F4B8FDCFA73011CA2CEA /* Resources */,\n"
       "                                2A37F4C3FDCFA73011CA2CEA /* Frameworks */,\n"
       "                                CFF98D79058CCDA000176BCE /* Documentation */,\n"
       "                                19C28FB0FE9D524F11CA2CBB /* Products */,\n"
       "                        );\n"
       "                        name = " << projectName << "_cocoa;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                2A37F4AFFDCFA73011CA2CEA /* Other Sources */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CFD284A60A3C3F5B0066AF65 /* main.m */,\n"
       "                        );\n"
       "                        name = \"Other Sources\";\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                2A37F4B8FDCFA73011CA2CEA /* Resources */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                2A37F4B9FDCFA73011CA2CEA /* Credits.rtf */,\n"
       "                                CFC30F92058A225E003D0386 /* Info.plist */,\n"
       "                                089C165FFE840EACC02AAC07 /* InfoPlist.strings */,\n"
       "                        );\n"
       "                        name = Resources;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                2A37F4C3FDCFA73011CA2CEA /* Frameworks */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                1058C7A6FEA54F5311CA2CBB /* Linked Frameworks */,\n"
       "                                1058C7A8FEA54F5311CA2CBB /* Other Frameworks */,\n"
       "                        );\n"
       "                        name = Frameworks;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CF31E0ED0598DF5400814123 /* command_line_interface */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF512D9E092B3040008F7E87 /* C_builtin_CLI_Options.cpp */,\n"
       "                                CF512D9F092B3040008F7E87 /* C_builtin_CLI_Options.h */,\n"
       "                                CF825D75085386E00077AEAF /* AC_CLI_Options.cpp */,\n"
       "                                CF825D76085386E00077AEAF /* AC_CLI_Options.h */,\n"
       "                                CF825D79085386E00077AEAF /* C_CLI_OptionGroup.cpp */,\n"
       "                                CF825D7A085386E10077AEAF /* C_CLI_OptionGroup.h */,\n"
       "                                CF825D7B085386E10077AEAF /* F_Analyze_CLI_Options.cpp */,\n"
       "                                CF825D7C085386E10077AEAF /* F_Analyze_CLI_Options.h */,\n"
       "                                CF825D7D085386E10077AEAF /* F_main.cpp */,\n"
       "                                CF825D7E085386E10077AEAF /* mainForLIBPM.h */,\n"
       "                        );\n"
       "                        path = command_line_interface;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CF3FF14005878B33000D2F8C /* generic_arraies */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF825DB1085387390077AEAF /* TC_UniqueArray.h */,\n"
       "                                CF825DB2085387390077AEAF /* TC_UniqueFixedSizeArray.h */,\n"
       "                        );\n"
       "                        path = generic_arraies;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFAD482E0591BCF700BF8381 /* cocoa_galgas */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF825D53085386810077AEAF /* PP_CocoaGalgasPrefix.pch */,\n"
       "                                CF825D5D0853868A0077AEAF /* MainMenu.nib */,\n"
       "                                CF825D5F0853868A0077AEAF /* OC_GGS_Document.nib */,\n"
       "                                CF825D44085386810077AEAF /* F_CocoaWrapperForGalgas.h */,\n"
       "                                CF825D45085386810077AEAF /* I_Action.tiff */,\n"
       "                                CF825D46085386810077AEAF /* I_SaveAs.tiff */,\n"
       "                                CF825D47085386810077AEAF /* I_Stop.tiff */,\n"
       "                                CF825D48085386810077AEAF /* I_Window.png */,\n"
       "                                CF337A2A09EFAED600EC41F6 /* C_SourceTextForCoca.mm */,\n"
       "                                CF337A2B09EFAED600EC41F6 /* C_SourceTextForCocoa.h */,\n"
       "                                CF825D49085386810077AEAF /* OC_GGS_BuildWindowController.h */,\n"
       "                                CF825D4A085386810077AEAF /* OC_GGS_BuildWindowController.mm */,\n"
       "                                CF825D4B085386810077AEAF /* OC_GGS_Document.h */,\n"
       "                                CF825D4C085386810077AEAF /* OC_GGS_Document.mm */,\n"
       "                                CF825D4D085386810077AEAF /* OC_GGS_PreferencesController.h */,\n"
       "                                CF825D4E085386810077AEAF /* OC_GGS_PreferencesController.mm */,\n"
       "                                CF825D4F085386810077AEAF /* OC_GGS_RulerView.h */,\n"
       "                                CF825D50085386810077AEAF /* OC_GGS_RulerView.mm */,\n"
       "                                CF825D51085386810077AEAF /* OC_GGS_TextView.h */,\n"
       "                                CF825D52085386810077AEAF /* OC_GGS_TextView.mm */,\n"
       "                                CFBC75C70AC6785A00443ACA /* OC_GGS_BuildResultTextView.h */,\n"
       "                                CFBC76060AC67F9900443ACA /* OC_GGS_BuildResultTextView.mm */,\n"
       "                        );\n"
       "                        path = cocoa_galgas;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFD21A8A0913D1890011F11E /* Sources Files */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n" ;
 if (inProjectStyle == kMDAproject) {
     f << "                                CFD286CB0A3C969A0066AF65 /* " << projectName << "_constraints.cpp */,\n"
          "                                CFD286CC0A3C969A0066AF65 /* " << projectName << "_constraints.h */,\n"
          "                                CFD286CD0A3C969A0066AF65 /* " << projectName << "_metamodel.cpp */,\n"
          "                                CFD286CE0A3C969A0066AF65 /* " << projectName << "_metamodel.h */,\n" ;
 }
 f <<  "                                CFD284AB0A3C41EC0066AF65 /* " << projectName << "_cocoa.mm */,\n"
       "                                CFE9BAAD0A3C303800C9F7EC /* " << projectName << "_grammar.cpp */,\n"
       "                                CFE9BAAE0A3C303800C9F7EC /* " << projectName << "_grammar.h */,\n"
       "                                CFE9BAAF0A3C303800C9F7EC /* " << projectName << "_lexique.cpp */,\n"
       "                                CFE9BAB00A3C303800C9F7EC /* " << projectName << "_lexique.h */,\n"
       "                                CFE9BAB10A3C303800C9F7EC /* " << projectName << "_options.cpp */,\n"
       "                                CFE9BAB20A3C303800C9F7EC /* " << projectName << "_options.h */,\n"
       "                                CFE9BAB30A3C303800C9F7EC /* " << projectName << "_program.cpp */,\n"
       "                                CFE9BAB40A3C303800C9F7EC /* " << projectName << "_program.h */,\n"
       "                                CFE9BAB50A3C303800C9F7EC /* " << projectName << "_semantics.cpp */,\n"
       "                                CFE9BAB60A3C303800C9F7EC /* " << projectName << "_semantics.h */,\n"
       "                                CFE9BAB70A3C303800C9F7EC /* " << projectName << "_syntax.cpp */,\n"
       "                                CFE9BAB80A3C303800C9F7EC /* " << projectName << "_syntax.h */,\n"
       "                                CFE9BAB90A3C303800C9F7EC /* grammar_" << projectName << "_program.h */,\n"
       "                        );\n"
       "                        name = \"Sources Files\";\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFD21A8B0913D19F0011F11E /* Include Files */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                        );\n"
       "                        name = \"Include Files\";\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFF53732057A4E5000854C83 /* Generated By Galgas */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CFD21A8B0913D19F0011F11E /* Include Files */,\n"
       "                                CFD21A8A0913D1890011F11E /* Sources Files */,\n"
       "                        );\n"
       "                        name = \"Generated By Galgas\";\n"
       "                        path = ../galgas_sources/GALGAS_OUTPUT;\n"
       "                        sourceTree = SOURCE_ROOT;\n"
       "                };\n"
       "                CFF53737057A4E9400854C83 /* Hand Coded Sources */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CFE9BAD60A3C392600C9F7EC /* " << projectName << "_computations.cpp */,\n"
       "                        );\n"
       "                        name = \"Hand Coded Sources\";\n"
       "                        path = ../hand_coded_sources;\n"
       "                        sourceTree = SOURCE_ROOT;\n"
       "                };\n"
       "                CFF5381C057A545B00854C83 /* libpm */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n" ;
 if (inProjectStyle == kMDAproject) {
   f << "                                CFF538F7057A560F00854C83 /* bdd */,\n" ;
 }
 f <<  "                                CFF538EE057A55F400854C83 /* cache */,\n"
       "                                CFAD482E0591BCF700BF8381 /* cocoa_galgas */,\n"
       "                                CF31E0ED0598DF5400814123 /* command_line_interface */,\n"
       "                                CFF538CC057A559D00854C83 /* files */,\n"
       "                                CFF53871057A555E00854C83 /* galgas */,\n"
       "                                CF3FF14005878B33000D2F8C /* generic_arraies */,\n"
       "                                CFF53851057A54FB00854C83 /* streams */,\n"
       "                                CFF53846057A54DF00854C83 /* time */,\n"
       "                                CFF5381F057A549B00854C83 /* utilities */,\n"
       "                        );\n"
       "                        name = libpm;\n"
       "                        path = " << inLIBPMpath << ";\n"
       "                        sourceTree = " << (inLIBPMpath.isAbsolutePath () ? "\"<absolute>\"" : "SOURCE_ROOT") << ";\n"
       "                };\n"
       "                CFF5381F057A549B00854C83 /* utilities */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF825DCF0853878C0077AEAF /* C_Exception.cpp */,\n"
       "                                CF825DD00853878C0077AEAF /* C_Exception.h */,\n"
       "                                CF825DD10853878C0077AEAF /* C_String.cpp */,\n"
       "                                CF825DD20853878C0077AEAF /* C_String.h */,\n"
       "                                CF825DD30853878C0077AEAF /* F_DisplayException.cpp */,\n"
       "                                CF825DD40853878C0077AEAF /* F_DisplayException.h */,\n"
       "                                CF825DD50853878C0077AEAF /* F_GetPrime.cpp */,\n"
       "                                CF825DD60853878C0077AEAF /* F_GetPrime.h */,\n"
       "                                CF825DD70853878C0077AEAF /* M_machine.h */,\n"
       "                                CF825DD80853878C0077AEAF /* M_SourceLocation.h */,\n"
       "                                CF825DD90853878C0077AEAF /* MF_Assert.cpp */,\n"
       "                                CF825DDA0853878C0077AEAF /* MF_Assert.h */,\n"
       "                                CF825DDB0853878C0077AEAF /* MF_MemoryControl.cpp */,\n"
       "                                CF825DDC0853878C0077AEAF /* MF_MemoryControl.h */,\n"
       "                        );\n"
       "                        path = utilities;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFF53846057A54DF00854C83 /* time */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF825DF9085387EC0077AEAF /* C_Timer.cpp */,\n"
       "                                CF825DFA085387EC0077AEAF /* C_Timer.h */,\n"
       "                                CF825DC7085387680077AEAF /* C_DateTime.cpp */,\n"
       "                                CF825DC8085387680077AEAF /* C_DateTime.h */,\n"
       "                        );\n"
       "                        path = time;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFF53851057A54FB00854C83 /* streams */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CFA5D1610A32F661009B4370 /* C_ErrorOut.cpp */,\n"
       "                                CFA5D1620A32F661009B4370 /* C_ErrorOut.h */,\n"
       "                                CF825DB9085387530077AEAF /* AC_OutputStream.cpp */,\n"
       "                                CF825DBA085387530077AEAF /* AC_OutputStream.h */,\n"
       "                                CF825DBB085387530077AEAF /* C_ConsoleOut.cpp */,\n"
       "                                CF825DBC085387530077AEAF /* C_ConsoleOut.h */,\n"
       "                        );\n"
       "                        path = streams;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFF53871057A555E00854C83 /* galgas */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n" ;
  if (inProjectStyle == kMDAproject) {
    f << "                                CF5871830A3D68B9009C9D26 /* C_GGS_entityMap.cpp */,\n"
                 "                                CF5871840A3D68B9009C9D26 /* C_GGS_entityMap.h */,\n"
                 "                                CF5871850A3D68B9009C9D26 /* C_GGS_MapIndex.cpp */,\n"
                 "                                CF5871860A3D68B9009C9D26 /* C_GGS_MapIndex.h */,\n" ;
  }
  f << "                                CF6557C50A25EB5900979050 /* C_galgas_CLI_Options.cpp */,\n"
       "                                CF6557C60A25EB5900979050 /* C_galgas_CLI_Options.h */,\n"
       "                                CFF8618E09C0DA6100F90D05 /* C_GGS_Object.cpp */,\n"
       "                                CFF8618F09C0DA6100F90D05 /* C_GGS_Object.h */,\n"
       "                                CFDC50A00961ACE0006A0AFD /* GGS_stringset.cpp */,\n"
       "                                CFDC50A10961ACE0006A0AFD /* GGS_stringset.h */,\n"
       "                                CFA61CD4061091C90089CEA5 /* AC_galgas_map.cpp */,\n"
       "                                CFDA45C4090E688B00D522A4 /* AC_galgas_map.h */,\n"
       "                                CFA61CD4061091C90089CEB5 /* AC_galgas_list.cpp */,\n"
       "                                CFDA45C4090E688B00D522B4 /* AC_galgas_list.h */,\n"
       "                                CFA61CD4061091C90089CEB6 /* AC_galgas_sortedlist.cpp */,\n"
       "                                CFDA45C4090E688B00D522B5 /* AC_galgas_sortedlist.h */,\n"
       "                                CF825DA1085387240077AEAF /* C_Lexique.cpp */,\n"
       "                                CF825DA2085387240077AEAF /* C_Lexique.h */,\n"
       "                                CFF53872057A558F00854C83 /* AC_galgas_io.cpp */,\n"
       "                                CF3FF0B705877B62000D2F8C /* AC_galgas_io.h */,\n"
       "                                CF904220057F6B8D007362F4 /* C_galgas_cocoa_io.cpp */,\n"
       "                                CF9041F0057F687D007362F4 /* C_galgas_cocoa_io.h */,\n"
       "                                CF86365005862B0600B23462 /* C_galgas_terminal_io.cpp */,\n"
       "                                CF86365105862B0600B23462 /* C_galgas_terminal_io.h */,\n"
       "                                CF86361A0586289600B23462 /* C_galgas_null_io.cpp */,\n"
       "                                CF86361B0586289600B23462 /* C_galgas_null_io.h */,\n"
       "                                CF3FF0C005877B62000D2F8C /* galgas_header.h */,\n"
       "                                CFF53889057A558F00854C83 /* GGS_lbool.cpp */,\n"
       "                                CF3FF0C405877B62000D2F8C /* GGS_lbool.h */,\n"
       "                                CFF5388F057A558F00854C83 /* GGS_location.cpp */,\n"
       "                                CF3FF0C705877B62000D2F8C /* GGS_location.h */,\n"
       "                                CFF5388B057A558F00854C83 /* GGS_lchar.cpp */,\n"
       "                                CF3FF0C505877B62000D2F8C /* GGS_lchar.h */,\n"
       "                                CFF53891057A558F00854C83 /* GGS_lstring.cpp */,\n"
       "                                CF3FF0C805877B62000D2F8C /* GGS_lstring.h */,\n"
       "                                CFF53893057A558F00854C83 /* GGS_luint.cpp */,\n"
       "                                CF3FF0C905877B62000D2F8C /* GGS_luint.h */,\n"
       "                                CFF53881057A558F00854C83 /* GGS_bool.cpp */,\n"
       "                                CF3FF0C105877B62000D2F8C /* GGS_bool.h */,\n"
       "                                CFF53883057A558F00854C83 /* GGS_char.cpp */,\n"
       "                                CF3FF0C205877B62000D2F8C /* GGS_char.h */,\n"
       "                                CFF53895057A558F00854C83 /* GGS_string.cpp */,\n"
       "                                CF3FF0CA05877B62000D2F8C /* GGS_string.h */,\n"
       "                                CFF53897057A558F00854C83 /* GGS_uint.cpp */,\n"
       "                                CF3FF0CB05877B62000D2F8C /* GGS_uint.h */,\n"
       "                                CFF53897057D558F00854C83 /* GGS_sint.cpp */,\n"
       "                                4FF53897057D558F00854C83 /* GGS_lsint.cpp */,\n"
       "                                CF3FF0CB05877B62000D2F8F /* GGS_sint.h */,\n"
       "                                4F3FF0CB05877B62000D2F8F /* GGS_lsint.h */,\n"
       "                                CF3FF0CB05877B62000D2FEF /* GGS_sint64.h */,\n"
       "                                AF3FF0CB05877B62000D2FEF /* GGS_lsint64.h */,\n"
       "                                CFF53897057D558F00854C8F /* GGS_sint64.cpp */,\n"
       "                                AFF53897057D558F00854C8F /* GGS_lsint64.cpp */,\n"
       "                                CFF53897057A558F00854C84 /* GGS_uint64.cpp */,\n"
       "                                4FF53897057A558F00854C84 /* GGS_luint64.cpp */,\n"
       "                                CF3FF0CB05877B62000D2F8D /* GGS_uint64.h */,\n"
       "                                4F3FF0CB05877B62000D2F8D /* GGS_luint64.h */,\n"
       "                        );\n"
       "                        path = galgas;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFF538CC057A559D00854C83 /* files */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF825D95085386FD0077AEAF /* C_TextFileWrite.cpp */,\n"
       "                                CF825D96085386FD0077AEAF /* C_TextFileWrite.h */,\n"
       "                        );\n"
       "                        path = files;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CFF538EE057A55F400854C83 /* cache */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF825D63085386A80077AEAF /* C_PrimeCache2.cpp */,\n"
       "                                CF825D64085386A80077AEAF /* C_PrimeCache2.h */,\n"
       "                                CF825D65085386A80077AEAF /* C_PrimeCache3.cpp */,\n"
       "                                CF825D66085386A80077AEAF /* C_PrimeCache3.h */,\n"
       "                        );\n"
       "                        path = cache;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n" ;
 if (inProjectStyle == kMDAproject) {
  f << "                CFF538F7057A560F00854C83 /* bdd */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                                CF512D7A092B3023008F7E87 /* C_BDD_Descriptor.cpp */,\n"
       "                                CF512D7B092B3023008F7E87 /* C_BDD_Descriptor.h */,\n"
       "                                CF512D7C092B3023008F7E87 /* C_BDD_Set1.cpp */,\n"
       "                                CF512D7D092B3023008F7E87 /* C_BDD_Set1.h */,\n"
       "                                CF512D7E092B3023008F7E87 /* C_BDD_Set2.cpp */,\n"
       "                                CF512D7F092B3023008F7E87 /* C_BDD_Set2.h */,\n"
       "                                CF512D80092B3023008F7E87 /* C_BDD_Set3.cpp */,\n"
       "                                CF512D81092B3023008F7E87 /* C_BDD_Set3.h */,\n"
       "                                CF512D82092B3023008F7E87 /* C_BDD.cpp */,\n"
       "                                CF512D83092B3023008F7E87 /* C_BDD.h */,\n"
       "                                CF512D84092B3023008F7E87 /* C_Display_BDD.cpp */,\n"
       "                                CF512D85092B3023008F7E87 /* C_Display_BDD.h */,\n"
       "                        );\n"
       "                        path = bdd;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n" ;
 }
 f <<  "                CFF98D79058CCDA000176BCE /* Documentation */ = {\n"
       "                        isa = PBXGroup;\n"
       "                        children = (\n"
       "                        );\n"
       "                        name = Documentation;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "/* End PBXGroup section */\n"
       "\n"
       "/* Begin PBXHeadersBuildPhase section */\n"
       "                8DD76F630486A84900D96B5E /* Headers */ = {\n"
       "                        isa = PBXHeadersBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                CF2A8828058CCF2B003EF2F4 /* C_galgas_null_io.h in Headers */,\n"
       "                                CF2A882E058CCF30003EF2F4 /* C_galgas_terminal_io.h in Headers */,\n"
       "                                CF2A8841058CCF42003EF2F4 /* galgas_header.h in Headers */,\n"
       "                                CF2A8843058CCF43003EF2F4 /* GGS_bool.h in Headers */,\n"
       "                                CF2A8845058CCF45003EF2F4 /* GGS_char.h in Headers */,\n"
       "                                CF2A8849058CCF4B003EF2F4 /* GGS_lbool.h in Headers */,\n"
       "                                CF2A884B058CCF4C003EF2F4 /* GGS_lchar.h in Headers */,\n"
       "                                CF2A884F058CCF50003EF2F4 /* GGS_location.h in Headers */,\n"
       "                                CF2A8851058CCF52003EF2F4 /* GGS_lstring.h in Headers */,\n"
       "                                CF2A8853058CCF54003EF2F4 /* GGS_luint.h in Headers */,\n"
       "                                CF2A8855058CCF55003EF2F4 /* GGS_string.h in Headers */,\n"
       "                                CF2A8857058CCF57003EF2F4 /* GGS_uint.h in Headers */,\n"
       "                                CF2A8857058CCF57003EF2FF /* GGS_sint.h in Headers */,\n"
       "                                4F2A8857058CCF57003EF2FF /* GGS_lsint.h in Headers */,\n"
       "                                CF2A8857058CCF57003EFFFF /* GGS_sint64.h in Headers */,\n"
       "                                AF2A8857058CCF57003EFFFF /* GGS_lsint64.h in Headers */,\n"
       "                                CF2A8857058CCF57003EF2F5 /* GGS_uint64.h in Headers */,\n"
       "                                4F2A8857058CCF57003EF2F5 /* GGS_luint64 in Headers */,\n"
       "                                CF3B8A80058CD05C00D682D2 /* AC_galgas_io.h in Headers */,\n"
       "                                CF825D6C085386A80077AEAF /* C_PrimeCache2.h in Headers */,\n"
       "                                CF825D6E085386A80077AEAF /* C_PrimeCache3.h in Headers */,\n"
       "                                CF825D8A085386E10077AEAF /* AC_CLI_Options.h in Headers */,\n"
       "                                CF825D8E085386E10077AEAF /* C_CLI_OptionGroup.h in Headers */,\n"
       "                                CF825D90085386E10077AEAF /* F_Analyze_CLI_Options.h in Headers */,\n"
       "                                CF825D92085386E10077AEAF /* mainForLIBPM.h in Headers */,\n"
       "                                CF825D9A085386FD0077AEAF /* C_TextFileWrite.h in Headers */,\n"
       "                                CF825DAE085387240077AEAF /* C_Lexique.h in Headers */,\n"
       "                                CF825DB5085387390077AEAF /* TC_UniqueArray.h in Headers */,\n"
       "                                CF825DB6085387390077AEAF /* TC_UniqueFixedSizeArray.h in Headers */,\n"
       "                                CF825DC2085387530077AEAF /* AC_OutputStream.h in Headers */,\n"
       "                                CF825DC4085387530077AEAF /* C_ConsoleOut.h in Headers */,\n"
       "                                CF825DCC085387680077AEAF /* C_DateTime.h in Headers */,\n"
       "                                CF825DEC0853878C0077AEAF /* C_Exception.h in Headers */,\n"
       "                                CF825DEE0853878C0077AEAF /* C_String.h in Headers */,\n"
       "                                CF825DF00853878C0077AEAF /* F_DisplayException.h in Headers */,\n"
       "                                CF825DF30853878C0077AEAF /* M_machine.h in Headers */,\n"
       "                                CF825DF40853878C0077AEAF /* M_SourceLocation.h in Headers */,\n"
       "                                CF825DF60853878C0077AEAF /* MF_Assert.h in Headers */,\n"
       "                                CF825DF80853878C0077AEAF /* MF_MemoryControl.h in Headers */,\n"
       "                                CF825DFE085387EC0077AEAF /* C_Timer.h in Headers */,\n"
       "                                CFDA45C5090E688B00D522A4 /* AC_galgas_map.h in Headers */,\n"
       "                                CFDA45C5090E688B00D522B4 /* AC_galgas_list.h in Headers */,\n"
       "                                CFDA45C5090E688B00D522B5 /* AC_galgas_sortedlist.h in Headers */,\n"
       "                                CF512DA1092B3040008F7E87 /* C_builtin_CLI_Options.h in Headers */,\n"
       "                                CFDC50A30961ACE0006A0AFD /* GGS_stringset.h in Headers */,\n"
       "                                CFF8619109C0DA6100F90D05 /* C_GGS_Object.h in Headers */,\n"
       "                                CF6557C90A25EB5900979050 /* C_galgas_CLI_Options.h in Headers */,\n"
       "                                CFA5D1650A32F661009B4370 /* C_ErrorOut.h in Headers */,\n"
       "                                CFE9BABB0A3C303800C9F7EC /* " << projectName << "_grammar.h in Headers */,\n"
       "                                CFE9BABD0A3C303800C9F7EC /* " << projectName << "_lexique.h in Headers */,\n"
       "                                CFE9BABF0A3C303800C9F7EC /* " << projectName << "_options.h in Headers */,\n"
       "                                CFE9BAC10A3C303800C9F7EC /* " << projectName << "_program.h in Headers */,\n"
       "                                CFE9BAC30A3C303800C9F7EC /* " << projectName << "_semantics.h in Headers */,\n"
       "                                CFE9BAC50A3C303800C9F7EC /* " << projectName << "_syntax.h in Headers */,\n"
       "                                CF825DF20853878C0077AEAF /* F_GetPrime.h in Headers */,\n"
       "                                CFE9BAC60A3C303800C9F7EC /* grammar_" << projectName << "_program.h in Headers */,\n" ;
 if (inProjectStyle == kMDAproject) {
   f << "                                CFD286D00A3C969A0066AF65 /* " << projectName << "_constraints.h in Headers */,\n"
        "                                CF5871880A3D68B9009C9D26 /* C_GGS_entityMap.h in Headers */,\n"
        "                                CF58718A0A3D68B9009C9D26 /* C_GGS_MapIndex.h in Headers */,\n"
        "                                CF512D87092B3023008F7E87 /* C_BDD_Descriptor.h in Headers */,\n"
        "                                CF512D89092B3023008F7E87 /* C_BDD_Set1.h in Headers */,\n"
        "                                CF512D8B092B3023008F7E87 /* C_BDD_Set2.h in Headers */,\n"
        "                                CF512D8D092B3023008F7E87 /* C_BDD_Set3.h in Headers */,\n"
        "                                CF512D8F092B3023008F7E87 /* C_BDD.h in Headers */,\n"
        "                                CF512D91092B3023008F7E87 /* C_Display_BDD.h in Headers */,\n"
                "                                CFD286D20A3C969A0066AF65 /* " << projectName << "_metamodel.h in Headers */,\n" ;
 }
 f <<  "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "                CF7A1400058CEFE2007126C1 /* Headers */ = {\n"
       "                        isa = PBXHeadersBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                CF7A1471058D00B2007126C1 /* C_galgas_null_io.h in Headers */,\n"
       "                                CF7A1477058D00B7007126C1 /* C_galgas_terminal_io.h in Headers */,\n"
       "                                CF7A1487058D00FE007126C1 /* AC_galgas_io.h in Headers */,\n"
       "                                CF7A148D058D0109007126C1 /* galgas_header.h in Headers */,\n"
       "                                CF7A148F058D010B007126C1 /* GGS_bool.h in Headers */,\n"
       "                                CF7A1491058D010D007126C1 /* GGS_char.h in Headers */,\n"
       "                                CF7A1495058D0110007126C1 /* GGS_lbool.h in Headers */,\n"
       "                                CF7A1497058D0112007126C1 /* GGS_lchar.h in Headers */,\n"
       "                                CF7A149B058D0116007126C1 /* GGS_location.h in Headers */,\n"
       "                                CF7A149D058D011E007126C1 /* GGS_lstring.h in Headers */,\n"
       "                                CF7A149F058D0120007126C1 /* GGS_luint.h in Headers */,\n"
       "                                CF7A14A1058D0122007126C1 /* GGS_string.h in Headers */,\n"
       "                                CF7A14A3058D0124007126C1 /* GGS_uint.h in Headers */,\n"
       "                                CF7A14A3058D0124007126CF /* GGS_sint.h in Headers */,\n"
       "                                4F7A14A3058D0124007126CF /* GGS_lsint.h in Headers */,\n"
       "                                CF2A8857058CCF57003FFFFF /* GGS_sint64.h in Headers */,\n"
       "                                AF2A8857058CCF57003FFFFF /* GGS_lsint64.h in Headers */,\n"
       "                                CF7A14A3058D0124007126C2 /* GGS_uint64.h in Headers */,\n"
       "                                4F7A14A3058D0124007126C2 /* GGS_luint64.h in Headers */,\n"
       "                                CF825D68085386A80077AEAF /* C_PrimeCache2.h in Headers */,\n"
       "                                CF825D6A085386A80077AEAF /* C_PrimeCache3.h in Headers */,\n"
       "                                CF825D80085386E10077AEAF /* AC_CLI_Options.h in Headers */,\n"
       "                                CF825D84085386E10077AEAF /* C_CLI_OptionGroup.h in Headers */,\n"
       "                                CF825D86085386E10077AEAF /* F_Analyze_CLI_Options.h in Headers */,\n"
       "                                CF825D88085386E10077AEAF /* mainForLIBPM.h in Headers */,\n"
       "                                CF825D98085386FD0077AEAF /* C_TextFileWrite.h in Headers */,\n"
       "                                CF825DA8085387240077AEAF /* C_Lexique.h in Headers */,\n"
       "                                CF825DB3085387390077AEAF /* TC_UniqueArray.h in Headers */,\n"
       "                                CF825DB4085387390077AEAF /* TC_UniqueFixedSizeArray.h in Headers */,\n"
       "                                CF825DBE085387530077AEAF /* AC_OutputStream.h in Headers */,\n"
       "                                CF825DC0085387530077AEAF /* C_ConsoleOut.h in Headers */,\n"
       "                                CF825DCA085387680077AEAF /* C_DateTime.h in Headers */,\n"
       "                                CF825DDE0853878C0077AEAF /* C_Exception.h in Headers */,\n"
       "                                CF825DE00853878C0077AEAF /* C_String.h in Headers */,\n"
       "                                CF825DE20853878C0077AEAF /* F_DisplayException.h in Headers */,\n"
       "                                CF825DE50853878C0077AEAF /* M_machine.h in Headers */,\n"
       "                                CF825DE60853878C0077AEAF /* M_SourceLocation.h in Headers */,\n"
       "                                CF825DE80853878C0077AEAF /* MF_Assert.h in Headers */,\n"
       "                                CF825DEA0853878C0077AEAF /* MF_MemoryControl.h in Headers */,\n"
       "                                CF825DFC085387EC0077AEAF /* C_Timer.h in Headers */,\n"
       "                                CFDA45C6090E688B00D522A4 /* AC_galgas_map.h in Headers */,\n"
       "                                CFDA45C6090E688B00D522B4 /* AC_galgas_list.h in Headers */,\n"
       "                                CFDA45C6090E688B00D522B5 /* AC_galgas_sortedlist.h in Headers */,\n"
       "                                CF512DA3092B3040008F7E87 /* C_builtin_CLI_Options.h in Headers */,\n"
       "                                CFDC50A50961ACE0006A0AFD /* GGS_stringset.h in Headers */,\n"
       "                                CFF8619309C0DA6100F90D05 /* C_GGS_Object.h in Headers */,\n"
       "                                CF6557CB0A25EB5900979050 /* C_galgas_CLI_Options.h in Headers */,\n"
       "                                CFA5D1670A32F661009B4370 /* C_ErrorOut.h in Headers */,\n"
       "                                CF825DE40853878C0077AEAF /* F_GetPrime.h in Headers */,\n"
       "                                CFE9BAC80A3C303800C9F7EC /* " << projectName << "_grammar.h in Headers */,\n"
       "                                CFE9BACA0A3C303800C9F7EC /* " << projectName << "_lexique.h in Headers */,\n"
       "                                CFE9BACC0A3C303800C9F7EC /* " << projectName << "_options.h in Headers */,\n"
       "                                CFE9BACE0A3C303800C9F7EC /* " << projectName << "_program.h in Headers */,\n"
       "                                CFE9BAD00A3C303800C9F7EC /* " << projectName << "_semantics.h in Headers */,\n"
       "                                CFE9BAD20A3C303800C9F7EC /* " << projectName << "_syntax.h in Headers */,\n"
       "                                CFE9BAD30A3C303800C9F7EC /* grammar_" << projectName << "_program.h in Headers */,\n" ;
 if (inProjectStyle == kMDAproject) {
     f << "                                CFD286D40A3C969A0066AF65 /* " << projectName << "_constraints.h in Headers */,\n"
        "                                CF58718C0A3D68B9009C9D26 /* C_GGS_entityMap.h in Headers */,\n"
        "                                CF58718E0A3D68B9009C9D26 /* C_GGS_MapIndex.h in Headers */,\n"
        "                                CF512D93092B3023008F7E87 /* C_BDD_Descriptor.h in Headers */,\n"
        "                                CF512D95092B3023008F7E87 /* C_BDD_Set1.h in Headers */,\n"
        "                                CF512D97092B3023008F7E87 /* C_BDD_Set2.h in Headers */,\n"
        "                                CF512D99092B3023008F7E87 /* C_BDD_Set3.h in Headers */,\n"
        "                                CF512D9B092B3023008F7E87 /* C_BDD.h in Headers */,\n"
        "                                CF512D9D092B3023008F7E87 /* C_Display_BDD.h in Headers */,\n"
                "                                CFD286D60A3C969A0066AF65 /* " << projectName << "_metamodel.h in Headers */,\n" ;
 }
 f <<  "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "/* End PBXHeadersBuildPhase section */\n"
       "\n"
       "/* Begin PBXNativeTarget section */\n"
       "                8D15AC270486D014006FF6A4 /* Cocoa " << projectNameWithUpperCase << " */ = {\n"
       "                        isa = PBXNativeTarget;\n"
       "                        buildConfigurationList = CF32C9540856F9220042CEEB /* Build configuration list for PBXNativeTarget \"Cocoa " << projectNameWithUpperCase << "\" */;\n"
       "                        buildPhases = (\n"
       "                                8D15AC2B0486D014006FF6A4 /* Resources */,\n"
       "                                8D15AC300486D014006FF6A4 /* Sources */,\n"
       "                                8D15AC330486D014006FF6A4 /* Frameworks */,\n"
       "                        );\n"
       "                        buildRules = (\n"
       "                        );\n"
       "                        dependencies = (\n"
       "                                CF819BE707AE65D0000408D9 /* PBXTargetDependency */,\n"
       "                                CF93CB130855CA1B0003EC0E /* PBXTargetDependency */,\n"
       "                        );\n"
       "                        name = \"Cocoa " << projectNameWithUpperCase << "\";\n"
       "                        productInstallPath = \"$(HOME)/Applications\";\n"
       "                        productName = " << projectName << "_cocoa;\n"
       "                        productReference = 8D15AC370486D014006FF6A4 /* cocoa" << projectNameWithUpperCase << ".app */;\n"
       "                        productType = \"com.apple.product-type.application\";\n"
       "                };\n"
       "                8DD76F620486A84900D96B5E /* " << projectNameWithUpperCase << " tool */ = {\n"
       "                        isa = PBXNativeTarget;\n"
       "                        buildConfigurationList = CF32C94E0856F9220042CEEB /* Build configuration list for PBXNativeTarget \"" << projectNameWithUpperCase << " tool\" */;\n"
       "                        buildPhases = (\n"
       "                                8DD76F630486A84900D96B5E /* Headers */,\n"
       "                                8DD76F640486A84900D96B5E /* Sources */,\n"
       "                                8DD76F660486A84900D96B5E /* Frameworks */,\n"
       "                                8DD76F680486A84900D96B5E /* Rez */,\n"
       "                                8DD76F690486A84900D96B5E /* CopyFiles */,\n"
       "                        );\n"
       "                        buildRules = (\n"
       "                        );\n"
       "                        dependencies = (\n"
       "                        );\n"
       "                        name = \"" << projectNameWithUpperCase << " tool\";\n"
       "                        productInstallPath = \"$(HOME)/bin\";\n"
       "                        productName = galgas;\n"
       "                        productReference = CFA61CF6061095160089CEA5 /* " << projectName << " */;\n"
       "                        productType = \"com.apple.product-type.tool\";\n"
       "                };\n"
       "                CF7A1402058CEFE2007126C1 /* " << projectNameWithUpperCase << " tool debug */ = {\n"
       "                        isa = PBXNativeTarget;\n"
       "                        buildConfigurationList = CF32C9510856F9220042CEEB /* Build configuration list for PBXNativeTarget \"" << projectNameWithUpperCase << " tool debug\" */;\n"
       "                        buildPhases = (\n"
       "                                CF7A1400058CEFE2007126C1 /* Headers */,\n"
       "                                CF7A1401058CEFE2007126C1 /* Sources */,\n"
       "                        );\n"
       "                        buildRules = (\n"
       "                        );\n"
       "                        dependencies = (\n"
       "                        );\n"
       "                        name = \"" << projectNameWithUpperCase << " tool debug\";\n"
       "                        productName = galgasDebug;\n"
       "                        productReference = CFA61CF8061095160089CEA5 /* " << projectName << "Debug */;\n"
       "                        productType = \"com.apple.product-type.tool\";\n"
       "                };\n"
       "/* End PBXNativeTarget section */\n"
       "\n"
       "/* Begin PBXProject section */\n"
       "                2A37F4A9FDCFA73011CA2CEA /* Project object */ = {\n"
       "                        isa = PBXProject;\n"
       "                        buildConfigurationList = CF32C9570856F9220042CEEB /* Build configuration list for PBXProject \"" << projectName << "\" */;\n"
       "                        hasScannedForEncodings = 1;\n"
       "                        mainGroup = 2A37F4AAFDCFA73011CA2CEA /* " << projectName << "_cocoa */;\n"
       "                        projectDirPath = \"\";\n"
       "                        targets = (\n"
       "                                8D15AC270486D014006FF6A4 /* Cocoa " << projectNameWithUpperCase << " */,\n"
       "                                8DD76F620486A84900D96B5E /* " << projectNameWithUpperCase << " tool */,\n"
       "                                CF7A1402058CEFE2007126C1 /* " << projectNameWithUpperCase << " tool debug */,\n"
       "                        );\n"
       "                };\n"
       "/* End PBXProject section */\n"
       "\n"
       "/* Begin PBXResourcesBuildPhase section */\n"
       "                8D15AC2B0486D014006FF6A4 /* Resources */ = {\n"
       "                        isa = PBXResourcesBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                8D15AC2C0486D014006FF6A4 /* Credits.rtf in Resources */,\n"
       "                                8D15AC2F0486D014006FF6A4 /* InfoPlist.strings in Resources */,\n"
       "                                CFC30F93058A225E003D0386 /* Info.plist in Resources */,\n"
       "                                CFA61CFA0610951F0089CEA5 /* " << projectName << " in Resources */,\n"
       "                                CFCD26D90850D5D000A26954 /* " << projectName << "Debug in Resources */,\n"
       "                                CF825D54085386810077AEAF /* I_Action.tiff in Resources */,\n"
       "                                CF825D55085386810077AEAF /* I_SaveAs.tiff in Resources */,\n"
       "                                CF825D56085386810077AEAF /* I_Stop.tiff in Resources */,\n"
       "                                CF825D57085386810077AEAF /* I_Window.png in Resources */,\n"
       "                                CF825D610853868A0077AEAF /* MainMenu.nib in Resources */,\n"
       "                                CF825D620853868A0077AEAF /* OC_GGS_Document.nib in Resources */,\n"
       "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "/* End PBXResourcesBuildPhase section */\n"
       "\n"
       "/* Begin PBXRezBuildPhase section */\n"
       "                8DD76F680486A84900D96B5E /* Rez */ = {\n"
       "                        isa = PBXRezBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "/* End PBXRezBuildPhase section */\n"
       "\n"
       "/* Begin PBXSourcesBuildPhase section */\n"
       "                8D15AC300486D014006FF6A4 /* Sources */ = {\n"
       "                        isa = PBXSourcesBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                CFA7ADBD058DB57E009AC1FE /* AC_galgas_io.cpp in Sources */,\n"
       "                                CFA7ADD7058DB5DF009AC1FE /* C_galgas_null_io.cpp in Sources */,\n"
       "                                CF825D58085386810077AEAF /* OC_GGS_BuildWindowController.mm in Sources */,\n"
       "                                CF825D59085386810077AEAF /* OC_GGS_Document.mm in Sources */,\n"
       "                                CF825D5A085386810077AEAF /* OC_GGS_PreferencesController.mm in Sources */,\n"
       "                                CF825D5B085386810077AEAF /* OC_GGS_RulerView.mm in Sources */,\n"
       "                                CFBC76070AC67F9900443ACA /* OC_GGS_BuildResultTextView.mm in Sources */,\n"
       "                                CF825D5C085386810077AEAF /* OC_GGS_TextView.mm in Sources */,\n"
       "                                CF825DFF085388270077AEAF /* C_CLI_OptionGroup.cpp in Sources */,\n"
       "                                CF825E01085388290077AEAF /* AC_CLI_Options.cpp in Sources */,\n"
       "                                CF825E020853882D0077AEAF /* C_Lexique.cpp in Sources */,\n"
       "                                CF825E04085388410077AEAF /* C_String.cpp in Sources */,\n"
       "                                CF825E05085388470077AEAF /* C_Exception.cpp in Sources */,\n"
       "                                CF825E060853884D0077AEAF /* C_ConsoleOut.cpp in Sources */,\n"
       "                                CF825E070853884E0077AEAF /* AC_OutputStream.cpp in Sources */,\n"
       "                                CF825E080853885D0077AEAF /* C_TextFileWrite.cpp in Sources */,\n"
       "                                CF825E09085388600077AEAF /* C_DateTime.cpp in Sources */,\n"
       "                                CF512DA4092B3040008F7E87 /* C_builtin_CLI_Options.cpp in Sources */,\n"
       "                                CFF8619409C0DA6100F90D05 /* C_GGS_Object.cpp in Sources */,\n"
       "                                CF337A2C09EFAED600EC41F6 /* C_SourceTextForCoca.mm in Sources */,\n"
       "                                CF6557C70A25EB5900979050 /* C_galgas_CLI_Options.cpp in Sources */,\n"
       "                                CFA5D1630A32F661009B4370 /* C_ErrorOut.cpp in Sources */,\n"
       "                                CFD284A70A3C3F5B0066AF65 /* main.m in Sources */,\n"
       "                                CFD284A90A3C411C0066AF65 /* " << projectName << "_lexique.cpp in Sources */,\n"
       "                                CFD284AC0A3C41EC0066AF65 /* " << projectName << "_cocoa.mm in Sources */,\n"
       "                                CFD284AE0A3C42030066AF65 /* " << projectName << "_options.cpp in Sources */,\n"
       "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "                8DD76F640486A84900D96B5E /* Sources */ = {\n"
       "                        isa = PBXSourcesBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                CFA61CD5061091C90089CEA5 /* AC_galgas_map.cpp in Sources */,\n"
       "                                CFA61CD5061091C90089CEB5 /* AC_galgas_list.cpp in Sources */,\n"
       "                                CFA61CD5061091C90089CEB6 /* AC_galgas_sortedlist.cpp in Sources */,\n"
       "                                CF2A8827058CCF12003EF2F4 /* C_galgas_null_io.cpp in Sources */,\n"
       "                                CF2A882D058CCF2F003EF2F4 /* C_galgas_terminal_io.cpp in Sources */,\n"
       "                                CF2A8842058CCF43003EF2F4 /* GGS_bool.cpp in Sources */,\n"
       "                                CF2A8844058CCF44003EF2F4 /* GGS_char.cpp in Sources */,\n"
       "                                CF2A8848058CCF4A003EF2F4 /* GGS_lbool.cpp in Sources */,\n"
       "                                CF2A884A058CCF4B003EF2F4 /* GGS_lchar.cpp in Sources */,\n"
       "                                CF2A884E058CCF4F003EF2F4 /* GGS_location.cpp in Sources */,\n"
       "                                CF2A8850058CCF51003EF2F4 /* GGS_lstring.cpp in Sources */,\n"
       "                                CF2A8852058CCF53003EF2F4 /* GGS_luint.cpp in Sources */,\n"
       "                                CF2A8854058CCF55003EF2F4 /* GGS_string.cpp in Sources */,\n"
       "                                CF2A8856058CCF56003EF2F4 /* GGS_uint.cpp in Sources */,\n"
       "                                CF2A8856058CDF56003EF2F4 /* GGS_sint.cpp in Sources */,\n"
       "                                4F2A8856058CDF56003EF2F4 /* GGS_lsint.cpp in Sources */,\n"
       "                                CF2A8856058CDF56003EF2FF /* GGS_sint64.cpp in Sources */,\n"
       "                                AF2A8856058CDF56003EF2FF /* GGS_lsint64.cpp in Sources */,\n"
       "                                CF2A8856058CCF56003EF2F5 /* GGS_uint64.cpp in Sources */,\n"
       "                                CF3B8A81058CD05D00D682D2 /* AC_galgas_io.cpp in Sources */,\n"
       "                                CF825D6B085386A80077AEAF /* C_PrimeCache2.cpp in Sources */,\n"
       "                                CF825D6D085386A80077AEAF /* C_PrimeCache3.cpp in Sources */,\n"
       "                                CF825D89085386E10077AEAF /* AC_CLI_Options.cpp in Sources */,\n"
       "                                CF825D8D085386E10077AEAF /* C_CLI_OptionGroup.cpp in Sources */,\n"
       "                                CF825D8F085386E10077AEAF /* F_Analyze_CLI_Options.cpp in Sources */,\n"
       "                                CF825D91085386E10077AEAF /* F_main.cpp in Sources */,\n"
       "                                CF825D99085386FD0077AEAF /* C_TextFileWrite.cpp in Sources */,\n"
       "                                CF825DAD085387240077AEAF /* C_Lexique.cpp in Sources */,\n"
       "                                CF825DC1085387530077AEAF /* AC_OutputStream.cpp in Sources */,\n"
       "                                CF825DC3085387530077AEAF /* C_ConsoleOut.cpp in Sources */,\n"
       "                                CF825DCB085387680077AEAF /* C_DateTime.cpp in Sources */,\n"
       "                                CF825DEB0853878C0077AEAF /* C_Exception.cpp in Sources */,\n"
       "                                CF825DED0853878C0077AEAF /* C_String.cpp in Sources */,\n"
       "                                CF825DEF0853878C0077AEAF /* F_DisplayException.cpp in Sources */,\n"
       "                                CF825DF50853878C0077AEAF /* MF_Assert.cpp in Sources */,\n"
       "                                CF825DF70853878C0077AEAF /* MF_MemoryControl.cpp in Sources */,\n"
       "                                CF825DFD085387EC0077AEAF /* C_Timer.cpp in Sources */,\n"
       "                                CF512DA0092B3040008F7E87 /* C_builtin_CLI_Options.cpp in Sources */,\n"
       "                                CFDC50A20961ACE0006A0AFD /* GGS_stringset.cpp in Sources */,\n"
       "                                CFF8619009C0DA6100F90D05 /* C_GGS_Object.cpp in Sources */,\n"
       "                                CF6557C80A25EB5900979050 /* C_galgas_CLI_Options.cpp in Sources */,\n"
       "                                CF825DF10853878C0077AEAF /* F_GetPrime.cpp in Sources */,\n"
       "                                CFA5D1640A32F661009B4370 /* C_ErrorOut.cpp in Sources */,\n"
       "                                CFE9BABA0A3C303800C9F7EC /* " << projectName << "_grammar.cpp in Sources */,\n"
       "                                CFE9BABC0A3C303800C9F7EC /* " << projectName << "_lexique.cpp in Sources */,\n"
       "                                CFE9BABE0A3C303800C9F7EC /* " << projectName << "_options.cpp in Sources */,\n"
       "                                CFE9BAC00A3C303800C9F7EC /* " << projectName << "_program.cpp in Sources */,\n"
       "                                CFE9BAC20A3C303800C9F7EC /* " << projectName << "_semantics.cpp in Sources */,\n"
       "                                CFE9BAC40A3C303800C9F7EC /* " << projectName << "_syntax.cpp in Sources */,\n"
       "                                CFE9BAD70A3C392600C9F7EC /* " << projectName << "_computations.cpp in Sources */,\n" ;
 if (inProjectStyle == kMDAproject) {
   f << "                                CFD286CF0A3C969A0066AF65 /* " << projectName << "_constraints.cpp in Sources */,\n"
                "                                CFD286D10A3C969A0066AF65 /* " << projectName << "_metamodel.cpp in Sources */,\n"
                "                                         CF5871870A3D68B9009C9D26 /* C_GGS_entityMap.cpp in Sources */,\n"
                "                                CF5871890A3D68B9009C9D26 /* C_GGS_MapIndex.cpp in Sources */,\n"
        "                                CF512D86092B3023008F7E87 /* C_BDD_Descriptor.cpp in Sources */,\n"
        "                                CF512D88092B3023008F7E87 /* C_BDD_Set1.cpp in Sources */,\n"
        "                                CF512D8A092B3023008F7E87 /* C_BDD_Set2.cpp in Sources */,\n"
        "                                CF512D8C092B3023008F7E87 /* C_BDD_Set3.cpp in Sources */,\n"
        "                                CF512D8E092B3023008F7E87 /* C_BDD.cpp in Sources */,\n"
        "                                CF512D90092B3023008F7E87 /* C_Display_BDD.cpp in Sources */,\n" ;
 }
 f <<  "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "                CF7A1401058CEFE2007126C1 /* Sources */ = {\n"
       "                        isa = PBXSourcesBuildPhase;\n"
       "                        buildActionMask = 2147483647;\n"
       "                        files = (\n"
       "                                CF7A1470058D00B1007126C1 /* C_galgas_null_io.cpp in Sources */,\n"
       "                                CF7A1476058D00B6007126C1 /* C_galgas_terminal_io.cpp in Sources */,\n"
       "                                CF7A1486058D00FD007126C1 /* AC_galgas_io.cpp in Sources */,\n"
       "                                CF7A148E058D010A007126C1 /* GGS_bool.cpp in Sources */,\n"
       "                                CF7A1490058D010C007126C1 /* GGS_char.cpp in Sources */,\n"
       "                                CF7A1494058D0110007126C1 /* GGS_lbool.cpp in Sources */,\n"
       "                                CF7A1496058D0111007126C1 /* GGS_lchar.cpp in Sources */,\n"
       "                                CF7A149A058D0115007126C1 /* GGS_location.cpp in Sources */,\n"
       "                                CF7A149C058D011D007126C1 /* GGS_lstring.cpp in Sources */,\n"
       "                                CF7A149E058D011F007126C1 /* GGS_luint.cpp in Sources */,\n"
       "                                CF7A14A0058D0121007126C1 /* GGS_string.cpp in Sources */,\n"
       "                                CF7A14A2058D0123007126C1 /* GGS_uint.cpp in Sources */,\n"
       "                                CF2A8856058CDF56003EF2F5 /* GGS_sint.cpp in Sources */,\n"
       "                                4F2A8856058CDF56003EF2F5 /* GGS_lsint.cpp in Sources */,\n"
       "                                CF2A8856058CDF56003EF2FE /* GGS_sint64.cpp in Sources */,\n"
       "                                AF2A8856058CDF56003EF2FE /* GGS_lsint64.cpp in Sources */,\n"
       "                                CF7A14A2058D0123007126C2 /* GGS_uint64.cpp in Sources */,\n"
       "                                4F7A14A2058D0123007126C2 /* GGS_luint64.cpp in Sources */,\n"
       "                                CFA61CD6061091C90089CEA5 /* AC_galgas_map.cpp in Sources */,\n"
       "                                CFA61CD6061091C90089CEB5 /* AC_galgas_list.cpp in Sources */,\n"
       "                                CFA61CD6061091C90089CEB6 /* AC_galgas_sortedlist.cpp in Sources */,\n"
       "                                CF825D67085386A80077AEAF /* C_PrimeCache2.cpp in Sources */,\n"
       "                                CF825D69085386A80077AEAF /* C_PrimeCache3.cpp in Sources */,\n"
       "                                CF825D7F085386E10077AEAF /* AC_CLI_Options.cpp in Sources */,\n"
       "                                CF825D83085386E10077AEAF /* C_CLI_OptionGroup.cpp in Sources */,\n"
       "                                CF825D85085386E10077AEAF /* F_Analyze_CLI_Options.cpp in Sources */,\n"
       "                                CF825D87085386E10077AEAF /* F_main.cpp in Sources */,\n"
       "                                CF825D97085386FD0077AEAF /* C_TextFileWrite.cpp in Sources */,\n"
       "                                CF825DA7085387240077AEAF /* C_Lexique.cpp in Sources */,\n"
       "                                CF825DBD085387530077AEAF /* AC_OutputStream.cpp in Sources */,\n"
       "                                CF825DBF085387530077AEAF /* C_ConsoleOut.cpp in Sources */,\n"
       "                                CF825DC9085387680077AEAF /* C_DateTime.cpp in Sources */,\n"
       "                                CF825DDD0853878C0077AEAF /* C_Exception.cpp in Sources */,\n"
       "                                CF825DDF0853878C0077AEAF /* C_String.cpp in Sources */,\n"
       "                                CF825DE10853878C0077AEAF /* F_DisplayException.cpp in Sources */,\n"
       "                                CF825DE70853878C0077AEAF /* MF_Assert.cpp in Sources */,\n"
       "                                CF825DE90853878C0077AEAF /* MF_MemoryControl.cpp in Sources */,\n"
       "                                CF825DFB085387EC0077AEAF /* C_Timer.cpp in Sources */,\n"
       "                                CF512DA2092B3040008F7E87 /* C_builtin_CLI_Options.cpp in Sources */,\n"
       "                                CFDC50A40961ACE0006A0AFD /* GGS_stringset.cpp in Sources */,\n"
       "                                CFF8619209C0DA6100F90D05 /* C_GGS_Object.cpp in Sources */,\n"
       "                                CF6557CA0A25EB5900979050 /* C_galgas_CLI_Options.cpp in Sources */,\n"
       "                                CFA5D1660A32F661009B4370 /* C_ErrorOut.cpp in Sources */,\n"
       "                                CF825DE30853878C0077AEAF /* F_GetPrime.cpp in Sources */,\n"
       "                                CFE9BAC70A3C303800C9F7EC /* " << projectName << "_grammar.cpp in Sources */,\n"
       "                                CFE9BAC90A3C303800C9F7EC /* " << projectName << "_lexique.cpp in Sources */,\n"
       "                                CFE9BACB0A3C303800C9F7EC /* " << projectName << "_options.cpp in Sources */,\n"
       "                                CFE9BACD0A3C303800C9F7EC /* " << projectName << "_program.cpp in Sources */,\n"
       "                                CFE9BACF0A3C303800C9F7EC /* " << projectName << "_semantics.cpp in Sources */,\n"
       "                                CFE9BAD10A3C303800C9F7EC /* " << projectName << "_syntax.cpp in Sources */,\n"
       "                                CFE9BAD80A3C392600C9F7EC /* " << projectName << "_computations.cpp in Sources */,\n" ;
 if (inProjectStyle == kMDAproject) {
   f << "                                CFD286D30A3C969A0066AF65 /* " << projectName << "_constraints.cpp in Sources */,\n"
       "                                CF58718B0A3D68B9009C9D26 /* C_GGS_entityMap.cpp in Sources */,\n"
       "                                CF58718D0A3D68B9009C9D26 /* C_GGS_MapIndex.cpp in Sources */,\n"
       "                                CF512D92092B3023008F7E87 /* C_BDD_Descriptor.cpp in Sources */,\n"
       "                                CF512D94092B3023008F7E87 /* C_BDD_Set1.cpp in Sources */,\n"
       "                                CF512D96092B3023008F7E87 /* C_BDD_Set2.cpp in Sources */,\n"
       "                                CF512D98092B3023008F7E87 /* C_BDD_Set3.cpp in Sources */,\n"
       "                                CF512D9A092B3023008F7E87 /* C_BDD.cpp in Sources */,\n"
       "                                CF512D9C092B3023008F7E87 /* C_Display_BDD.cpp in Sources */,\n"
                "                                CFD286D50A3C969A0066AF65 /* " << projectName << "_metamodel.cpp in Sources */,\n" ;
 }
 f <<  "                        );\n"
       "                        runOnlyForDeploymentPostprocessing = 0;\n"
       "                };\n"
       "/* End PBXSourcesBuildPhase section */\n"
       "\n"
       "/* Begin PBXTargetDependency section */\n"
       "                CF819BE707AE65D0000408D9 /* PBXTargetDependency */ = {\n"
       "                        isa = PBXTargetDependency;\n"
       "                        target = 8DD76F620486A84900D96B5E /* " << projectNameWithUpperCase << " tool */;\n"
       "                        targetProxy = CF819BE607AE65D0000408D9 /* PBXContainerItemProxy */;\n"
       "                };\n"
       "                CF93CB130855CA1B0003EC0E /* PBXTargetDependency */ = {\n"
       "                        isa = PBXTargetDependency;\n"
       "                        target = CF7A1402058CEFE2007126C1 /* " << projectNameWithUpperCase << " tool debug */;\n"
       "                        targetProxy = CF93CB120855CA1B0003EC0E /* PBXContainerItemProxy */;\n"
       "                };\n"
       "/* End PBXTargetDependency section */\n"
       "\n"
       "/* Begin PBXVariantGroup section */\n"
       "                089C165FFE840EACC02AAC07 /* InfoPlist.strings */ = {\n"
       "                        isa = PBXVariantGroup;\n"
       "                        children = (\n"
       "                                089C1660FE840EACC02AAC07 /* English */,\n"
       "                        );\n"
       "                        name = InfoPlist.strings;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                2A37F4B9FDCFA73011CA2CEA /* Credits.rtf */ = {\n"
       "                        isa = PBXVariantGroup;\n"
       "                        children = (\n"
       "                                2A37F4BAFDCFA73011CA2CEA /* English */,\n"
       "                        );\n"
       "                        name = Credits.rtf;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CF825D5D0853868A0077AEAF /* MainMenu.nib */ = {\n"
       "                        isa = PBXVariantGroup;\n"
       "                        children = (\n"
       "                                CF825D5E0853868A0077AEAF /* English */,\n"
       "                        );\n"
       "                        name = MainMenu.nib;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "                CF825D5F0853868A0077AEAF /* OC_GGS_Document.nib */ = {\n"
       "                        isa = PBXVariantGroup;\n"
       "                        children = (\n"
       "                                CF825D600853868A0077AEAF /* English */,\n"
       "                        );\n"
       "                        name = OC_GGS_Document.nib;\n"
       "                        sourceTree = \"<group>\";\n"
       "                };\n"
       "/* End PBXVariantGroup section */\n"
       "\n"
       "/* Begin XCBuildConfiguration section */\n"
       "                CF32C9500856F9220042CEEB /* Default */ = {\n"
       "                        isa = XCBuildConfiguration;\n"
       "                        buildSettings = {\n"
       "                                GCC_OPTIMIZATION_LEVEL = 1;\n"
       "                                GCC_PRECOMPILE_PREFIX_HEADER = YES;\n"
       "                                GCC_PREFIX_HEADER = " << inLIBPMpath << "/galgas/PP_GalgasPrefix.pch;\n"
       "                                PRODUCT_NAME = " << projectName << ";\n"
       "                        };\n"
       "                        name = Default;\n"
       "                };\n"
       "                CF32C9530856F9220042CEEB /* Default */ = {\n"
       "                        isa = XCBuildConfiguration;\n"
       "                        buildSettings = {\n"
       "                                GCC_OPTIMIZATION_LEVEL = 0;\n"
       "                                GCC_WARN_UNINITIALIZED_AUTOS = NO;\n"
       "                                PRODUCT_NAME = " << projectName << "Debug;\n"
       "                        };\n"
       "                        name = Default;\n"
       "                };\n"
       "                CF32C9560856F9220042CEEB /* Default */ = {\n"
       "                        isa = XCBuildConfiguration;\n"
       "                        buildSettings = {\n"
       "                                GCC_OPTIMIZATION_LEVEL = 1;\n"
       "                                GCC_PREFIX_HEADER = " << inLIBPMpath << "/cocoa_galgas/PP_CocoaGalgasPrefix.pch;\n"
       "                                GCC_WARN_UNUSED_PARAMETER = NO;\n"
       "                                INFOPLIST_FILE = Info.plist;\n"
       "                                PRODUCT_NAME = cocoa" << projectNameWithUpperCase << ";\n"
       "                                WRAPPER_EXTENSION = app;\n"
       "                        };\n"
       "                        name = Default;\n"
       "                };\n"
       "                CF32C9590856F9220042CEEB /* Default */ = {\n"
       "                        isa = XCBuildConfiguration;\n"
       "                        buildSettings = {\n"
       "                                ALWAYS_SEARCH_USER_PATHS = NO;\n"
       "                                ARCHS = (\n"
       "                                        ppc,\n"
       "                                        i386,\n"
       "                                );\n"
       "                                GCC_C_LANGUAGE_STANDARD = c99;\n"
       "                                GCC_TREAT_WARNINGS_AS_ERRORS = YES;\n"
       "                                GCC_DEBUGGING_SYMBOLS = default;\n"
       "                                GCC_GENERATE_DEBUGGING_SYMBOLS = NO;\n"
       "                                GCC_PRECOMPILE_PREFIX_HEADER = YES;\n"
       "                                GCC_THREADSAFE_STATICS = NO;\n"
       "                                GCC_TREAT_NONCONFORMANT_CODE_ERRORS_AS_WARNINGS = NO;\n"
       "                                GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES;\n"
       "                                GCC_WARN_ABOUT_MISSING_NEWLINE = YES;\n"
       "                                GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES;\n"
       "                                GCC_WARN_ABOUT_RETURN_TYPE = YES;\n"
       "                                GCC_WARN_CHECK_SWITCH_STATEMENTS = YES;\n"
       "                                GCC_WARN_EFFECTIVE_CPLUSPLUS_VIOLATIONS = NO;\n"
       "                                GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES;\n"
       "                                GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES;\n"
       "                                GCC_WARN_INHIBIT_ALL_WARNINGS = NO;\n"
       "                                GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES;\n"
       "                                GCC_WARN_MISSING_PARENTHESES = YES;\n"
       "                                GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES;\n"
       "                                GCC_WARN_PEDANTIC = NO;\n"
       "                                GCC_WARN_SIGN_COMPARE = YES;\n"
       "                                GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES;\n"
       "                                GCC_WARN_UNINITIALIZED_AUTOS = YES;\n"
       "                                GCC_WARN_UNKNOWN_PRAGMAS = YES;\n"
       "                                GCC_WARN_UNUSED_FUNCTION = YES;\n"
       "                                GCC_WARN_UNUSED_LABEL = YES;\n"
       "                                GCC_WARN_UNUSED_PARAMETER = YES;\n"
       "                                GCC_WARN_UNUSED_VALUE = YES;\n"
       "                                GCC_WARN_UNUSED_VARIABLE = YES;\n"
       "                                HEADER_SEARCH_PATHS = (\n"
       "                                        ../galgas_sources/GALGAS_OUTPUT,\n"
       "                                        ../hand_coded_sources,\n"
       "                                        " << inLIBPMpath << ",\n"
       "                                );\n"
       "                                PREBINDING = NO;\n"
       "                                SDKROOT = /Developer/SDKs/MacOSX10.4u.sdk;\n"
       "                                WARNING_CFLAGS = (\n"
       "                                        \"-Wno-four-char-constants\",\n"
       "                                        \"-Wno-unknown-pragmas\",\n"
       "                                );\n"
       "                        };\n"
       "                        name = Default;\n"
       "                };\n"
       "/* End XCBuildConfiguration section */\n"
       "\n"
       "/* Begin XCConfigurationList section */\n"
       "                CF32C94E0856F9220042CEEB /* Build configuration list for PBXNativeTarget \"" << projectNameWithUpperCase << " tool\" */ = {\n"
       "                        isa = XCConfigurationList;\n"
       "                        buildConfigurations = (\n"
       "                                CF32C9500856F9220042CEEB /* Default */,\n"
       "                        );\n"
       "                        defaultConfigurationIsVisible = 0;\n"
       "                        defaultConfigurationName = Default;\n"
       "                };\n"
       "                CF32C9510856F9220042CEEB /* Build configuration list for PBXNativeTarget \"" << projectNameWithUpperCase << " tool debug\" */ = {\n"
       "                        isa = XCConfigurationList;\n"
       "                        buildConfigurations = (\n"
       "                                CF32C9530856F9220042CEEB /* Default */,\n"
       "                        );\n"
       "                        defaultConfigurationIsVisible = 0;\n"
       "                        defaultConfigurationName = Default;\n"
       "                };\n"
       "                CF32C9540856F9220042CEEB /* Build configuration list for PBXNativeTarget \"Cocoa " << projectNameWithUpperCase << "\" */ = {\n"
       "                        isa = XCConfigurationList;\n"
       "                        buildConfigurations = (\n"
       "                                CF32C9560856F9220042CEEB /* Default */,\n"
       "                        );\n"
       "                        defaultConfigurationIsVisible = 0;\n"
       "                        defaultConfigurationName = Default;\n"
       "                };\n"
       "                CF32C9570856F9220042CEEB /* Build configuration list for PBXProject \"" << projectName << "\" */ = {\n"
       "                        isa = XCConfigurationList;\n"
       "                        buildConfigurations = (\n"
       "                                CF32C9590856F9220042CEEB /* Default */,\n"
       "                        );\n"
       "                        defaultConfigurationIsVisible = 0;\n"
       "                        defaultConfigurationName = Default;\n"
       "                };\n"
       "/* End XCConfigurationList section */\n"
       "        };\n"
       "        rootObject = 2A37F4A9FDCFA73011CA2CEA /* Project object */;\n"
       "}\n" ;
  
  const bool ok = f.close () ;
  if (ok) {
    co << "  Created '" << fileName << "' file.\n" ;
  }else{
    co << "  Cannot Create '" << fileName << "' file.\n" ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Project Creation
#endif

//---------------------------------------------------------------------------*

static C_String
libpmPathFromOptionValue (const C_String & inLIBPMpathInCommandLineOption) {
  C_String path ;
  if (inLIBPMpathInCommandLineOption == ".") { // No option
    path << "../../libpm" ;
  }else if (! inLIBPMpathInCommandLineOption.isAbsolutePath ()) {
    path << "../../" << inLIBPMpathInCommandLineOption ;
  }else{
    path << inLIBPMpathInCommandLineOption ;
  }
  return path.stringByStandardizingPath () ;
}

//---------------------------------------------------------------------------*

void
createProject (const C_String & inCreatedProjectPathName,
               const C_String & inLIBPMpathInCommandLineOption,
               const enumProjectStyle inProjectStyle) {
//--- Message
  switch (inProjectStyle) {
  case kClassicProject:
    co << "*** PERFORM PROJECT CREATION (--create-project=" << inCreatedProjectPathName << " option) ***\n" ;
    break ;
  case kMDAproject:
    co << "*** PERFORM PROJECT CREATION (--create-mda-project=" << inCreatedProjectPathName << " option) ***\n" ;
    break ;
  }
//--- First check the project name is correct (not empty, only letters, digits and '_')
  const C_String projectName = inCreatedProjectPathName.lastPathComponent () ;
  bool projectNameIsCorrect = (projectName.length () > 0) && isalpha (projectName (0 COMMA_HERE)) ;
  for (sint32 i=1 ; (i<projectName.length ()) && projectNameIsCorrect ; i++) {
    const char c = projectName (i COMMA_HERE) ;
    projectNameIsCorrect = isalnum (c) || (c == '_') ;
  }
  if (projectName.length () == 0) {
    co << "** Cannot create GALGAS project: the project name is empty.\n" ;
  }else if (! projectNameIsCorrect) {
    co << "** Cannot create GALGAS project: the project name should begin by a letter followed by zero, one or more letters, digits and underscore character.\n" ;
//--- if creation directory exists, emit an error and do nothing
  }else if (inCreatedProjectPathName.isDirectory ()) {
    co << "** Cannot create GALGAS project: '" << inCreatedProjectPathName << "' directory already exists.\n" ;
  }else{
  //--- LIBPM path
    const C_String libpmPath = libpmPathFromOptionValue (inLIBPMpathInCommandLineOption.stringByStandardizingPath ()) ;
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
      ok = createDirectory (inCreatedProjectPathName + "/makefile_x86linux_on_macosx") ;
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
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_x86linux_on_macosx/build.command", "all") ;
    }
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_macosx/build.command", "all") ;
    }
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_mingw_on_macosx/build.command", "all") ;
    }
  //--- Create build64.command files
//    if (ok) {
//      ok = createCommandFile (inCreatedProjectPathName + "/makefile_x86linux_on_macosx/build64.command", "-f makefile64 all") ;
//    }
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_macosx/build64.command", "-f makefile64 all") ;
    }
  //--- Create clean.command files
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_x86linux_on_macosx/clean.command", "clean") ;
    }
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_macosx/clean.command", "clean") ;
    }
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_mingw_on_macosx/clean.command", "clean") ;
    }
  //--- Create clean64.command files
//    if (ok) {
//      ok = createCommandFile (inCreatedProjectPathName + "/makefile_x86linux_on_macosx/clean64.command", "-f makefile64 clean") ;
//    }
    if (ok) {
      ok = createCommandFile (inCreatedProjectPathName + "/makefile_macosx/clean64.command", "-f makefile64 clean") ;
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
      ok = createCocoaFile (inCreatedProjectPathName) ;
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
      ok = createCommonMakefileFile (inCreatedProjectPathName, libpmPath, inProjectStyle) ;
    }
    if (ok) {
      ok = createUnixMakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createUnixMakefile64File (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createMacOSXmakefileFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createMacOSXmakefile64File (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = create_ix86LinuxOnMacOSXmakefileFile (inCreatedProjectPathName) ;
    }
//    if (ok) {
//      ok = create_ix86LinuxOnMacOSXmakefile64File (inCreatedProjectPathName) ;
//    }
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
      ok = createInstallBatFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createCleanBatFile (inCreatedProjectPathName) ;
    }
  //--- Codeblock Project
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_codeblocks") ;
    }
    if (ok) {
      ok = createCodeBlockProjectFile (inCreatedProjectPathName, "/project_codeblocks", libpmPath, inProjectStyle) ;
    }
  //--- Xcode Project
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_xcode") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_xcode/English.lproj") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_xcode/build") ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_xcode/build/Default") ;
    }
    if (ok) {
      ok = createXCodeMainFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createXCodeInfoPListFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createXCodeInfoPlistStringsFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createXCodeCreditsFile (inCreatedProjectPathName) ;
    }
    if (ok) {
      ok = createDirectory (inCreatedProjectPathName + "/project_xcode/" + projectName + ".xcodeproj") ;
    }
    if (ok) {
      ok = createXCodeProjectFile (inCreatedProjectPathName, libpmPath, inProjectStyle) ;
    }
    }
  co << "*** END OF PROJECT CREATION ***\n" ;
}

//---------------------------------------------------------------------------*
