#------------------------------------------------------------------------------*
#                                                                              *
#     Project source files directories                                         *
#                                                                              *
#------------------------------------------------------------------------------*

LIBPM_DIRECTORY_PATH := ../libpm

SOURCES_DIR += ../libpm

#------------------------------------------------------------------------------*
#                                                                              *
#     Source file names for LIBPM (without their actual path)                  *
#                                                                              *
#------------------------------------------------------------------------------*

#--- Command Line Option
SOURCES += C_CommandLineOption.cpp
SOURCES += C_BoolCommandLineOption.cpp
SOURCES += C_UIntCommandLineOption.cpp
SOURCES += C_StringCommandLineOption.cpp
SOURCES += C_builtin_CLI_Options.cpp
SOURCES += F_Analyze_CLI_Options.cpp

#--- BDD
SOURCES += C_BDD.cpp
SOURCES += C_BDD-find-or-add.cpp
SOURCES += C_BDD-single-operand-ops.cpp
SOURCES += C_BDD-and-operation.cpp
SOURCES += C_RelationSingleType.cpp
SOURCES += C_RelationConfiguration.cpp
SOURCES += C_Relation.cpp

#--- Files
SOURCES += C_FileManager.cpp
SOURCES += AC_FileHandleForWriting.cpp
SOURCES += AC_FileHandle.cpp
SOURCES += C_TextFileWrite.cpp
SOURCES += C_HTML_FileWrite.cpp
SOURCES += C_BinaryFileWrite.cpp

#--- Streams
SOURCES += AC_OutputStream.cpp
SOURCES += C_ColoredConsole.cpp
SOURCES += C_ConsoleOut.cpp
SOURCES += C_ErrorOut.cpp
SOURCES += C_TCPSocketOut.cpp

#--- Strings
SOURCES += unicode_character_cpp.cpp
SOURCES += unicode_string_routines.cpp
SOURCES += C_String.cpp
SOURCES += md5.cpp

#--- Time
SOURCES += C_Timer.cpp
SOURCES += C_DateTime.cpp

#--- Utilities
SOURCES += F_mainForLIBPM.cpp
SOURCES += C_PrologueEpilogue.cpp
SOURCES += C_SharedObject.cpp
SOURCES += C_Data.cpp
SOURCES += F_DisplayException.cpp
SOURCES += MF_Assert.cpp
SOURCES += F_GetPrime.cpp
SOURCES += MF_MemoryControl.cpp
SOURCES += cpp-allocation.cpp
SOURCES += basic-allocation.cpp
SOURCES += PMUInt128.cpp
SOURCES += C_UIntSet.cpp
SOURCES += C_DirectedGraph.cpp

#------------------------------------------------------------------------------*
#                                                                              *
#     Command line options                                                     *
#                                                                              *
#------------------------------------------------------------------------------*

USER_COMMAND_LINE_OPTIONS += -DLIBPM_MULTI_THREADING=0

#------------------------------------------------------------------------------*
