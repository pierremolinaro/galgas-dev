/*
 *  wrapper_generation.cpp
 *  galgas
 *
 *  Created by Pierre Molinaro on 24/02/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */
//---------------------------------------------------------------------------*

#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

static sint32
wrapperFileCount (const GGS_wrapperFileSortedList & inRegularFileSortedList,
                  const GGS_wrapperDirectorySortedList & inDirectorySortedList) {
  sint32 count = inRegularFileSortedList.count () ;
  GGS_wrapperDirectorySortedList::cElement * d = inDirectorySortedList.firstObject () ;
  while (d != NULL) {
    macroValidPointer (d) ;
    count += wrapperFileCount (d->mRegularFileSortedList,
                               d->mDirectorySortedList) ;
    d = d->nextObject () ;  
  }
  return count ;
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  inHfile.writeCppTitleComment (C_String ("Declarations for '") + mWrapperName + "' wrapper") ;
  const sint32 n = wrapperFileCount (mRegularFileSortedList, mDirectorySortedList) ;
  for (sint32 i=0 ; i<n ; i++) {
    inHfile << "extern const char * gWrapperFileContent_"
            << i
            << '_' << mWrapperName
            << " ;\n" ;
  }
  inHfile << "extern const cDirectoryWrapper gWrapperDirectory_0_" << mWrapperName << " ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_wrapperToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                             const C_String & /* inTargetFileName */,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

static void
generateWrapperContents (AC_OutputStream & inCppFile,
                         const GGS_wrapperFileSortedList & inRegularFileSortedList,
                         const GGS_wrapperDirectorySortedList & inDirectorySortedList,
                         const C_String & inWrapperName,
                         const C_String & inWrapperDirectory,
                         const uint32 inWrapperDirectoryIndex) {
//--- Recursively generate sub directories
  TC_UniqueArray <uint32> subDirectories ;
  GGS_wrapperDirectorySortedList::cElement * d = inDirectorySortedList.firstObject () ;
  while (d != NULL) {
    macroValidPointer (d) ;
    generateWrapperContents (inCppFile,
                             d->mRegularFileSortedList,
                             d->mDirectorySortedList,
                             inWrapperName,
                             d->mDirectoryName,
                             d->mWrapperDirectoryIndex.uintValue ()) ;
    subDirectories.addObject (d->mWrapperDirectoryIndex.uintValue ()) ;
    d = d->nextObject () ;  
  }
//--- Generate regular files
  TC_UniqueArray <uint32> wrapperFileIndexes ;
  GGS_wrapperFileSortedList::cElement * f = inRegularFileSortedList.firstObject () ;
  while (f != NULL) {
    macroValidPointer (f) ;
    TC_UniqueArray <unsigned char> binaryData ;
    const bool ok = f->mAbsoluteFilePath.binaryDataWithContentOfFile (binaryData) ;
    if (! ok) {
      printf ("*** error: cannot read file '%s' ***\n", f->mAbsoluteFilePath.string ().cString ()) ;
    }
    inCppFile.writeCppHyphenLineComment () ;
    wrapperFileIndexes.addObject (f->mWrapperFileIndex.uintValue ()) ;
    inCppFile << "//--- File '" << inWrapperDirectory << "/" << f->mRegularFileName << "'\n\n"
                 "const char * gWrapperFileContent_"
              << f->mWrapperFileIndex.uintValue ()
              << '_' << inWrapperName
              << " = // " << (binaryData.count () + 1) << " bytes\n" ;
    bool header = false ;
    for (sint32 i=0 ; i<binaryData.count () ; i++) {
      if (! header) {
        inCppFile << "  \"" ;
        header = true ;
      }
      const unsigned char c = binaryData (i COMMA_HERE) ;
      if (c == '\n') {
        inCppFile << "\\n\"\n" ;
        header = false ;
      }else if (c == '"') {
        inCppFile << "\\\"" ;
      }else if (c == '\\') {
        inCppFile << "\\\\" ;
      }else if ((c >= ' ') && (c <= 0x7E)) {
        inCppFile << ((char) c) ;
      }else{
        inCppFile << "\\x" << uintInHexWithoutPrefix (c) << "\"\"" ;
      }
    }
    if (header) {
      inCppFile << "\"\n" ;
    }
    inCppFile << ";\n\n"
                 "static const cRegularFileWrapper gWrapperFile_"
              << f->mWrapperFileIndex.uintValue ()
              << '_' << inWrapperName
              << " = {\n"
              << "  \"" << f->mRegularFileName << "\",\n"
              << "  \"" << f->mRegularFileName.pathExtension () << "\",\n"
                 "  gWrapperFileContent_"
              << f->mWrapperFileIndex.uintValue ()
              << '_' << inWrapperName << "\n"
                 "} ;\n\n" ;
    f = f->nextObject () ;  
  }
//--- Generate all File wrapper list
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "//--- All files of '" << inWrapperDirectory << "' directory\n\n"
               "static const cRegularFileWrapper * gWrapperAllFiles_" << inWrapperName
            << "_" << inWrapperDirectoryIndex << " ["
            << (wrapperFileIndexes.count () + 1) << "] = {\n" ;
  for (sint32 i=0 ; i<wrapperFileIndexes.count () ; i++) {
    inCppFile << "  & gWrapperFile_"
              << wrapperFileIndexes (i COMMA_HERE)
              << '_' << inWrapperName
              << ",\n" ;
  }
  inCppFile << "  NULL\n"
               "} ;\n\n" ;
//--- Generate all directory wrapper list
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "//--- All sub-directories of '" << inWrapperDirectory << "' directory\n\n"
               "static const cDirectoryWrapper * gWrapperAllDirectories_" << inWrapperName
            << "_" << inWrapperDirectoryIndex << " [" << (subDirectories.count () + 1) << "] = {\n" ;
  for (sint32 i=0 ; i<subDirectories.count () ; i++) {
    inCppFile << "  & gWrapperDirectory_" << subDirectories (i COMMA_HERE) << "_" << inWrapperName << ",\n" ;
  }
  inCppFile << "  NULL\n"
               "} ;\n\n" ;
//--- Generate directory wrapper
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "//--- Directory '" << inWrapperDirectory << "'\n\n"
               "const cDirectoryWrapper gWrapperDirectory_" << inWrapperDirectoryIndex << "_" << inWrapperName
            << " = {\n"
               "  \"" << inWrapperDirectory << "\",\n"
            << "  " << inRegularFileSortedList.count () << ",\n"
               "  " << "gWrapperAllFiles_" << inWrapperName
            << "_" << inWrapperDirectoryIndex << ",\n"
               "  " << subDirectories.count () << ",\n"
               "  " << "gWrapperAllDirectories_" << inWrapperName
            << "_" << inWrapperDirectoryIndex << "\n"
               "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("Implementation of wrapper '") + mWrapperName + "'") ;
  generateWrapperContents (inCppFile, mRegularFileSortedList, mDirectorySortedList, mWrapperName, "", 0) ;
}  

//---------------------------------------------------------------------------*
