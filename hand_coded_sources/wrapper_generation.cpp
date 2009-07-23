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
#include "strings/unicode_character_cpp.h"

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
  GGS_wrapperDirectorySortedList::cEnumerator d (inDirectorySortedList, true) ;
  while (d.hasCurrentObject ()) {
    count += wrapperFileCount (d._mRegularFileSortedList (HERE),
                               d._mDirectorySortedList (HERE)) ;
    d.next () ;  
  }
  return count ;
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  inHfile.appendCppTitleComment (C_String ("Declarations for '") + mWrapperName + "' wrapper") ;
  const sint32 n = wrapperFileCount (mRegularFileSortedList, mDirectorySortedList) ;
  for (sint32 i=0 ; i<n ; i++) {
    inHfile << "extern const char * gWrapperFileContent_"
            << cStringWithSigned (i)
            << "_" << mWrapperName
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
  GGS_wrapperDirectorySortedList::cEnumerator d (inDirectorySortedList, true) ;
  while (d.hasCurrentObject ()) {
    generateWrapperContents (inCppFile,
                             d._mRegularFileSortedList (HERE),
                             d._mDirectorySortedList (HERE),
                             inWrapperName,
                             d._mDirectoryName (HERE).string (),
                             d._mWrapperDirectoryIndex (HERE).uintValue ()) ;
    subDirectories.addObject (d._mWrapperDirectoryIndex (HERE).uintValue ()) ;
    d.next () ;  
  }
//--- Generate regular files
  TC_UniqueArray <uint32> wrapperFileIndexes ;
  GGS_wrapperFileSortedList::cEnumerator f (inRegularFileSortedList, true) ;
  while (f.hasCurrentObject ()) {
    TC_UniqueArray <unsigned char> binaryData ;
    const bool ok = f._mAbsoluteFilePath (HERE).string ().binaryDataWithContentOfFile (binaryData) ;
    if (! ok) {
      printf ("*** error: cannot read file '%s' ***\n", f._mAbsoluteFilePath (HERE).string ().cString (HERE)) ;
    }
    inCppFile.appendCppHyphenLineComment () ;
    wrapperFileIndexes.addObject (f._mWrapperFileIndex (HERE).uintValue ()) ;
    inCppFile << "//--- File '" << inWrapperDirectory << "/" << f._mRegularFileName (HERE) << "'\n\n"
                 "const char * gWrapperFileContent_" ;
    inCppFile.appendUnsigned (f._mWrapperFileIndex (HERE).uintValue ()) ;
    inCppFile << "_" << inWrapperName
              << " = // " ;
    inCppFile.appendSigned (binaryData.count () + 1) ;
    inCppFile << " bytes\n" ;
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
        inCppFile.appendUnicodeCharacter (TO_UNICODE (c) COMMA_HERE) ;
      }else{
        char buffer [12] ;
        const sint32 n = UTF8StringFromUTF32Character (TO_UNICODE (c), buffer) ;
        for (sint32 j=0 ; j<n ; j++) {
          inCppFile.appendCString ("\\x") ;
          inCppFile.appendUnsignedHex2 (buffer [j]) ;
          inCppFile.appendCString ("\"\"") ;
        }
      }
    }
    if (header) {
      inCppFile << "\"\n" ;
    }
    inCppFile << ";\n\n"
                 "static const cRegularFileWrapper gWrapperFile_" ;
    inCppFile.appendUnsigned (f._mWrapperFileIndex (HERE).uintValue ()) ;
    inCppFile << "_" << inWrapperName
              << " = {\n"
              << "  \"" << f._mRegularFileName (HERE) << "\",\n"
              << "  \"" << f._mRegularFileName (HERE).string ().pathExtension () << "\",\n"
                 "  gWrapperFileContent_" ;
    inCppFile.appendUnsigned (f._mWrapperFileIndex (HERE).uintValue ()) ;
    inCppFile << "_" << inWrapperName << "\n"
                 "} ;\n\n" ;
    f.next () ;  
  }
//--- Generate all File wrapper list
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "//--- All files of '" << inWrapperDirectory << "' directory\n\n"
               "static const cRegularFileWrapper * gWrapperAllFiles_" << inWrapperName
            << "_" ;
  inCppFile.appendUnsigned (inWrapperDirectoryIndex) ;
  inCppFile << " [" ;
  inCppFile.appendSigned (wrapperFileIndexes.count () + 1) ;
  inCppFile << "] = {\n" ;
  for (sint32 i=0 ; i<wrapperFileIndexes.count () ; i++) {
    inCppFile << "  & gWrapperFile_" ;
    inCppFile.appendUnsigned (wrapperFileIndexes (i COMMA_HERE)) ;
    inCppFile << "_" << inWrapperName
              << ",\n" ;
  }
  inCppFile << "  NULL\n"
               "} ;\n\n" ;
//--- Generate all directory wrapper list
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "//--- All sub-directories of '" << inWrapperDirectory << "' directory\n\n"
               "static const cDirectoryWrapper * gWrapperAllDirectories_" << inWrapperName
            << "_" ;
  inCppFile.appendUnsigned (inWrapperDirectoryIndex) ;
  inCppFile << " [" ;
  inCppFile.appendSigned (subDirectories.count () + 1) ; 
  inCppFile << "] = {\n" ;
  for (sint32 i=0 ; i<subDirectories.count () ; i++) {
    inCppFile << "  & gWrapperDirectory_" ;
    inCppFile.appendUnsigned (subDirectories (i COMMA_HERE)) ;
    inCppFile << "_" << inWrapperName << ",\n" ;
  }
  inCppFile << "  NULL\n"
               "} ;\n\n" ;
//--- Generate directory wrapper
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "//--- Directory '" << inWrapperDirectory << "'\n\n"
               "const cDirectoryWrapper gWrapperDirectory_" ;
  inCppFile.appendUnsigned (inWrapperDirectoryIndex) ;
  inCppFile << "_" << inWrapperName
            << " = {\n"
               "  \"" << inWrapperDirectory << "\",\n"
            << "  " ;
  inCppFile.appendSigned (inRegularFileSortedList.count ()) ;
  inCppFile << ",\n"
               "  " << "gWrapperAllFiles_" << inWrapperName
            << "_" ;
  inCppFile.appendUnsigned (inWrapperDirectoryIndex) ;
  inCppFile << ",\n"
               "  " ;
  inCppFile.appendSigned (subDirectories.count ()) ;
  inCppFile << ",\n"
               "  " << "gWrapperAllDirectories_" << inWrapperName
            << "_" ;
  inCppFile.appendUnsigned (inWrapperDirectoryIndex) ;
  inCppFile << "\n"
               "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_wrapperToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.appendCppTitleComment (C_String ("Implementation of wrapper '") + mWrapperName + "'") ;
  generateWrapperContents (inCppFile, mRegularFileSortedList, mDirectorySortedList, mWrapperName, "", 0) ;
}  

//---------------------------------------------------------------------------*
