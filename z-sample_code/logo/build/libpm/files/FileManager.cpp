//--------------------------------------------------------------------------------------------------
//
//  'FileManager' : a class for handling files, independantly from platform
//
//  This file is part of libpm library
//
//  Copyright (C) 2012, ..., 2018 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "FileManager.h"
#include "TextFileWrite.h"
#include "BinaryFileWrite.h"
#include "utf32.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>

//--------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//--------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 1
  #include <sys/stat.h>
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Converting into Unix Path
#endif

//--------------------------------------------------------------------------------------------------
//
//   Converting into Unix Path
//
//--------------------------------------------------------------------------------------------------

//--- On Unix: do nothing
#if COMPILE_FOR_WINDOWS == 0
  String FileManager::unixPathWithNativePath (const String & inFilePath) {
    return inFilePath ;
  }
#endif

//--------------------------------------------------------------------------------------------------

//--- On Windows: translate
#if COMPILE_FOR_WINDOWS == 1
  String FileManager::unixPathWithNativePath (const String & inFilePath) {
    String result ;
    const int32_t pathLength = inFilePath.length () ;
    int32_t firstChar = 0 ;
    if ((pathLength > 3)
     && isalpha ((int) inFilePath.charAtIndex (0 COMMA_HERE).u32 ())
     && (inFilePath.charAtIndex (1 COMMA_HERE).u32 () == ':')
     && (inFilePath.charAtIndex (2 COMMA_HERE).u32 () == '\\')) {
      result.appendCString ("/") ;
      result.appendChar (inFilePath.charAtIndex (0 COMMA_HERE)) ;
      result.appendCString ("/") ;
      firstChar = 3 ;
    }
    for (int32_t i=firstChar ; i<pathLength ; i++) {
      const utf32 c = inFilePath.charAtIndex (i COMMA_HERE) ;
      if (c.u32 () == '\\') {
        result.appendCString ("/") ;
      }else{
        result.appendChar (c) ;
      }
    }
    return result ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Converting into Native Path
#endif

//--------------------------------------------------------------------------------------------------
//
//   Converting into Native Path
//
//--------------------------------------------------------------------------------------------------

//--- On Unix: do nothing
#if COMPILE_FOR_WINDOWS == 0
  String FileManager::nativePathWithUnixPath (const String & inFilePath) {
    return inFilePath ;
  }
#endif

//--------------------------------------------------------------------------------------------------

//--- On Windows: convert
#if COMPILE_FOR_WINDOWS == 1
  String FileManager::nativePathWithUnixPath (const String & inFilePath) {
    String winPath ;
      const int32_t fileLength = inFilePath.length () ;
      int32_t firstChar = 0 ;
      if ((fileLength > 3)
       && (inFilePath.charAtIndex (0 COMMA_HERE).u32 () == '/')
       && isalpha ((int) inFilePath.charAtIndex (1 COMMA_HERE).u32 ())
       && (inFilePath.charAtIndex (2 COMMA_HERE).u32 () == '/')) {
        winPath.appendChar (inFilePath.charAtIndex (1 COMMA_HERE)) ;
        winPath.appendCString (":\\") ;
        firstChar = 3 ;
      }
      for (int32_t i=firstChar ; i<fileLength ; i++) {
        const utf32 c = inFilePath.charAtIndex (i COMMA_HERE) ;
        winPath.appendChar ((c.u32 () == '/') ? utf32 ('\\') : c) ;
      }
    return winPath ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Open Text File
#endif

//--------------------------------------------------------------------------------------------------

FILE * FileManager::openTextFileForReading (const String & inFilePath) {
  return ::fopen (nativePathWithUnixPath (inFilePath).cString (), "rt") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Open Binary File
#endif

//--------------------------------------------------------------------------------------------------

FILE * FileManager::openBinaryFileForReading (const String & inFilePath) {
  return ::fopen (nativePathWithUnixPath (inFilePath).cString (), "rb") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Read binary file at once
#endif

//--------------------------------------------------------------------------------------------------

bool FileManager::binaryDataWithContentOfFile (const String & inFilePath,
                                               U8Data & outBinaryData) {
  outBinaryData.free () ;
//--- Open file for binary reading
  const String nativePath = nativePathWithUnixPath (inFilePath) ;
  FILE * inputFile = ::fopen (nativePath.cString (), "rb") ;
  bool ok = inputFile != nullptr ;
//--- Go to the end of the file
  if (ok) {
    ok = ::fseek (inputFile, 0, 2) == 0 ;
  }

//--- Get file size
  int32_t fileSize = 0 ;
  if (ok) {
    fileSize = (int32_t) (ftell (inputFile) & INT32_MAX) ;
    ok = fileSize != -1 ;
  }

//--- Rewind file
  if (ok) {
    ok = ::fseek (inputFile, 0, 0) == 0 ;
  }

//--- Read file
  if (ok) {
    uint8_t * binaryData = nullptr ;
    macroMyNewArray (binaryData, uint8_t, uint32_t (fileSize)) ;
    const int32_t sizeRead = (int32_t) (fread (binaryData, 1, (uint32_t) fileSize, inputFile) & UINT32_MAX) ;
    ok = sizeRead == fileSize ;
    if (ok) {
      outBinaryData.setDataFromPointer (binaryData, fileSize) ;
    }
  }
//--- Close file
  if (inputFile != nullptr) {
    const int32_t result = ::fclose (inputFile) ;
    inputFile = nullptr ;
    if (ok) {
      ok = result == 0 ;
    }
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Read text file at once
#endif

//--------------------------------------------------------------------------------------------------

String FileManager::stringWithContentOfFile (const String & inFilePath,
                                             bool & outOk) {
//--- Read file
  U8Data stringData ;
  outOk = binaryDataWithContentOfFile (inFilePath, stringData) ;
  const int32_t length = stringData.count () ;
//--- Assign C string to String
  String result_string ;
  if (outOk) {
    result_string.setCapacity (length + 2) ;
    outOk = String::parseUTF8 (stringData, 0, result_string) ;
  }
  return result_string ;
}

//--------------------------------------------------------------------------------------------------

String FileManager::stringWithContentOfFile (const String & inFilePath) {
  bool ok = false ;
  const String result_string = stringWithContentOfFile (inFilePath, ok) ;
//--- Assign C string to String
  if (! ok) {
    throw C_TextReadException (inFilePath.cString ()) ;
  }
  return result_string ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Write to File
#endif

//--------------------------------------------------------------------------------------------------

bool FileManager::writeStringToFile (const String & inString,
                                       const String & inFilePath) {
  makeDirectoryIfDoesNotExist (inFilePath.deletingLastPathComponent ()) ;
  TextFileWrite file (inFilePath) ;
  bool success = file.isOpened () ;
  file.appendString (inString) ;
  if (success) {
    success = file.close () ;
  }
  return success ;
}

//--------------------------------------------------------------------------------------------------

bool FileManager::writeStringToExecutableFile (const String & inString,
                                                 const String & inFilePath) {
  makeDirectoryIfDoesNotExist (inFilePath.deletingLastPathComponent()) ;
  TextFileWrite file (inFilePath) ;
  file.appendString (inString) ;
  bool success = file.isOpened () ;
  if (success) {
    success = file.close () ;
    #if COMPILE_FOR_WINDOWS == 0
      struct stat fileStat ;
      ::stat (inFilePath.cString (), & fileStat) ;
      ::chmod (inFilePath.cString (), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
    #endif
  }
  return success ;
}

//--------------------------------------------------------------------------------------------------

bool FileManager::writeBinaryDataToFile (const U8Data & inBinaryData,
                                           const String & inFilePath) {
  makeDirectoryIfDoesNotExist (inFilePath.deletingLastPathComponent()) ;
//---
  BinaryFileWrite binaryFile (inFilePath) ;
  bool success = binaryFile.isOpened () ;
  binaryFile.appendData (inBinaryData) ;
//--- Close file
  if (success) {
    success = binaryFile.close () ;
  }
//---
  return success ;
}

//--------------------------------------------------------------------------------------------------

bool FileManager::writeBinaryDataToExecutableFile (const U8Data & inBinaryData,
                                                     const String & inFilePath) {
  makeDirectoryIfDoesNotExist (inFilePath.deletingLastPathComponent()) ;
//---
  BinaryFileWrite binaryFile (inFilePath) ;
  bool success = binaryFile.isOpened () ;
  binaryFile.appendData (inBinaryData) ;
//--- Close file
  if (success) {
    success = binaryFile.close () ;
    #if COMPILE_FOR_WINDOWS == 0
      struct stat fileStat ;
      ::stat (inFilePath.cString (), & fileStat) ;
      ::chmod (inFilePath.cString (), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
    #endif
  }
//---
  return success ;
}

 //--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Make File Executable
#endif

//--------------------------------------------------------------------------------------------------

bool FileManager::makeFileExecutable (const String & inFilePath) {
  const bool result = fileExistsAtPath (inFilePath) ;
  #if COMPILE_FOR_WINDOWS == 0
    if (result) {
      struct stat fileStat ;
      ::stat (inFilePath.cString (), & fileStat) ;
      ::chmod (inFilePath.cString (), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
    }
  #endif
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Directory Handling
#endif

//--------------------------------------------------------------------------------------------------

bool FileManager::directoryExists (const String & inDirectoryPath) {
  return directoryExistsWithNativePath (nativePathWithUnixPath (inDirectoryPath)) ;
}

//--------------------------------------------------------------------------------------------------

bool FileManager::directoryExistsWithNativePath (const String & inDirectoryNativePath) {
  #if COMPILE_FOR_WINDOWS == 1
    const char dirSep = '\\' ;
  #else
    const char dirSep = '/' ;
  #endif
  String directoryNativePath = inDirectoryNativePath ;
  while ((directoryNativePath.length () > 0) && (directoryNativePath.lastChar(HERE) == dirSep)) {
    directoryNativePath = directoryNativePath.subString (0, directoryNativePath.length () - 1) ;
  }
//--- Get file properties
  bool exists = directoryNativePath.length () > 0 ;
  if (exists) {
    struct stat fileProperties ;
    const int err = ::stat (directoryNativePath.cString (), & fileProperties) ;
    exists = (err == 0) && ((fileProperties.st_mode & S_IFDIR) != 0) ;
  }
 //--- Return result
  return exists ;
}

//--------------------------------------------------------------------------------------------------

String FileManager::currentDirectory (void) {
  char * cwd = getcwd (nullptr, 0) ;
  #if COMPILE_FOR_WINDOWS == 1
    const int32_t fileLength = (int32_t) strlen (cwd) ;
    int32_t firstChar = 0 ;
    if ((fileLength > 3) && isalpha (cwd [0]) && (cwd [1] == ':') && (cwd [2] == '\\')) {
      cwd [1] = cwd [0] ;
      cwd [0] = '/' ;
      cwd [2] = '/' ;
      firstChar = 3 ;
    }
    for (int32_t i=firstChar ; i<fileLength ; i++) {
      if (cwd [i] == '\\') {
        cwd [i] = '/' ;
      }
    }
  #endif
  const String result (cwd) ;
  ::free (cwd) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool FileManager::makeDirectoryIfDoesNotExist (const String & inDirectoryPath) {
  const String directoryPath = absolutePathFromCurrentDirectory (inDirectoryPath) ;
  bool ok = directoryExists (directoryPath) ;
  if (! ok) {
    ok = makeDirectoryIfDoesNotExist (directoryPath.deletingLastPathComponent ()) ;
    if (ok && !directoryExists (directoryPath)) { // Special case when the path contains ../
      const String nativePath = nativePathWithUnixPath (directoryPath) ;
    //--- Create directory (mkdir returns 0 if creation is ok)
      #if COMPILE_FOR_WINDOWS == 1
        const int result = ::mkdir (nativePath.cString ()) ;
      #else
        const int result = ::mkdir (nativePath.cString (), 0770) ;
      #endif
      ok = result == 0 ;
    }
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

String FileManager::removeDirectory (const String & inDirectoryPath) {
 String errorString ;
  const String nativePath = nativePathWithUnixPath (inDirectoryPath) ;
  const int result = rmdir (nativePath.cString ()) ;
  if (result < 0) {
    errorString.appendString (::strerror (errno)) ;
  }
  return errorString ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Path Handling
#endif

//--------------------------------------------------------------------------------------------------

bool FileManager::isAbsolutePath (const String & inPath) {
  return (inPath.length () > 0) && (inPath.charAtIndex (0 COMMA_HERE).u32 () == '/') ;
}

//--------------------------------------------------------------------------------------------------

String FileManager::absolutePathFromCurrentDirectory (const String & inPath) {
  const int32_t stringLength = inPath.length () ;
  String result ;
  if ((stringLength > 0) && (inPath.charAtIndex (0 COMMA_HERE).u32 () == '/')) {
    result = inPath ;
  }else{
    result = currentDirectory () + "/" + inPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//--- If receiver is an absolute path, returns it
//    Otherwise, prepend path argument
//    if path argument it self is relative, current directory is prepended

String FileManager::absolutePathFromPath (const String & inPath,
                                          const String & inFromPath) {
  const int32_t pathLength = inPath.length () ;
  String result ;
  if ((pathLength > 0) && (inPath.charAtIndex (0 COMMA_HERE).u32 () == '/')) {
    result = inPath ;
  }else{
    result = absolutePathFromCurrentDirectory (inFromPath) ;
    if (result.lastChar (HERE).u32 () != '/') {
      result.appendChar (utf32 ('/')) ;
    }
    result.appendString (inPath) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String FileManager::relativePathFromPath (const String & inPath,
                                          const String & inFromPath) {
  GenericUniqueArray <String> absoluteReferencePathComponents ;
  absolutePathFromCurrentDirectory (inFromPath.standardizedPath ()).componentsSeparatedByString("/", absoluteReferencePathComponents) ;
  GenericUniqueArray <String> absoluteReceiverPathComponents ;
  absolutePathFromCurrentDirectory (inPath.standardizedPath ()).componentsSeparatedByString("/", absoluteReceiverPathComponents) ;
  String result ;
  int32_t idx = 0 ;
  while ((idx < absoluteReferencePathComponents.count ())
      && (idx < absoluteReceiverPathComponents.count ())
      && (absoluteReferencePathComponents (idx COMMA_HERE) == absoluteReceiverPathComponents (idx COMMA_HERE))) {
    idx += 1 ;
  }
  for (int32_t i=idx ; i<absoluteReferencePathComponents.count () ; i++) {
    result.appendCString ("../") ;
  }
  for (int32_t i=idx ; i<absoluteReceiverPathComponents.count () ; i++) {
    if (i > idx) {
      result.appendCString ("/") ;
    }
    result.appendString (absoluteReceiverPathComponents (i COMMA_HERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Symbolic Link
#endif

//--------------------------------------------------------------------------------------------------

#if (COMPILE_FOR_WINDOWS == 1) || defined (__CYGWIN__)
  bool FileManager::makeSymbolicLinkWithPath (const String & /* inPath */,
                                                const String & /* inLinkPath */) {
    return true ; // Symbolic links are not supported on Windows
  }
#else
  bool FileManager::makeSymbolicLinkWithPath (const String & inPath,
                                                const String & inLinkPath) {
    const int r = symlink (inPath.cString (), inLinkPath.cString ()) ;
    return r >= 0 ;
  }
#endif

//--------------------------------------------------------------------------------------------------

// See http://www.gnu.org/s/libc/manual/html_node/Symbolic-Links.html

//--- Symbolic links and Windows:
// See http://answers.google.com/answers/threadview/id/341355.html

//--------------------------------------------------------------------------------------------------

#if (COMPILE_FOR_WINDOWS == 1) || defined (__CYGWIN__)
  bool FileManager::isSymbolicLink (const String & /* inLinkPath */) {
    return false ; // Symbolic links are not supported on Windows
  }
#else
  bool FileManager::isSymbolicLink (const String & inLinkPath) {
    char buffer [8] ; // Any value
    return readlink (inLinkPath.cString (), buffer, 8) >= 0 ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#if (COMPILE_FOR_WINDOWS == 1) || defined (__CYGWIN__)
  String FileManager::stringWithSymbolicLinkContents (const String & /* inLinkPath */,
                                                          bool & outOk) {
    outOk = false ; // Symbolic links are not supported on Windows
    return String () ;
  }
#else
  String FileManager::stringWithSymbolicLinkContents (const String & inLinkPath,
                                                          bool & outOk) {
    String result ;
    bool loop = true ;
    outOk = true ;
    char * buffer = nullptr ;
    size_t bufferSize = 128 ;
    while (loop) {
      macroMyReallocPODArray (buffer, char, bufferSize) ;
      const int64_t r = readlink (inLinkPath.cString (), buffer, bufferSize) ;
      if (r < 0) { // Error
        outOk = false ;
        loop = false ;
      }else if (r < (int64_t) bufferSize) { // ok
        buffer [r] = '\0' ;
        result.appendString (buffer) ;
        loop = false ;
      }else{ // Buffer too small
        bufferSize *= 2 ;
      }
    }
    macroMyDeletePODArray (buffer) ;
    return result ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Delete File
#endif

//--------------------------------------------------------------------------------------------------
//
//  Delete file
//
//--------------------------------------------------------------------------------------------------

String FileManager::deleteFile (const String & inFilePath) {
  String returnValue ;
  const String nativePath = nativePathWithUnixPath (inFilePath) ;
  const int result = unlink (nativePath.cString ()) ;
  if (result < 0) {
    returnValue.appendString (::strerror (errno)) ;
  }
  return returnValue ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Search a file in a directory
#endif

//--------------------------------------------------------------------------------------------------

static String recursiveSearchInDirectory (const String & inStartSearchPath,
                                            const String & inFileName,
                                            const int32_t inDirectoriesToExcludeCount,
                                            const GenericUniqueArray <String> & inDirectoriesToExclude) {
  String result ;
  const String nativeStartSearchPath = FileManager::nativePathWithUnixPath (inStartSearchPath) ;
  DIR * dir = ::opendir (nativeStartSearchPath.cString ()) ;
  if (dir != nullptr) {
    String fileName = inStartSearchPath ;
    fileName.appendCString ("/") ;
    fileName.appendString (inFileName) ;
    if (FileManager::fileExistsAtPath (fileName)) {
      result = fileName ;
    }else{
      struct dirent  * current = readdir (dir) ;
      while ((current != nullptr) && (result.length () == 0)) {
        if (current->d_name [0] != '.') {
          String name = inStartSearchPath ;
          name.appendCString ("/") ;
          name.appendString (current->d_name) ;
          if (FileManager::directoryExistsWithNativePath (name)) {
            bool dirOk = true ;
            for (int32_t i=0 ; (i<inDirectoriesToExcludeCount) && dirOk ; i++) {
              if (inDirectoriesToExclude (i COMMA_HERE).charAtIndex (0 COMMA_HERE).u32 () == '.') {
                const char * dotPtr = strrchr (current->d_name, '.') ;
                dirOk = (dotPtr == nullptr) || (inDirectoriesToExclude (i COMMA_HERE).compare (dotPtr) != 0) ;
              }else{
                dirOk = inDirectoriesToExclude (i COMMA_HERE).compare (current->d_name) != 0 ;
              }
            }
            if (dirOk) {
              result = recursiveSearchInDirectory (name, inFileName, inDirectoriesToExcludeCount, inDirectoriesToExclude) ;
            }
          }
        }
        current = readdir (dir) ;
      }
    }
    closedir (dir) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String FileManager::findFileInDirectory (const String & inDirectoryPath,
                                             const String & inFileName,
                                             const GenericUniqueArray <String> & inDirectoriesToExclude) {
  const int32_t directoriesToExcludeCount = inDirectoriesToExclude.count () ;
  return recursiveSearchInDirectory (inDirectoryPath, inFileName, directoriesToExcludeCount, inDirectoriesToExclude) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Find all files in a directory
#endif

//--------------------------------------------------------------------------------------------------

static void recursiveFindAllFilesInDirectory (const String & inStartSearchPath,
                                              const String & inExtension,
                                              GenericUniqueArray <String> & outFoundFilePathes) {
//--- Iterate throught directory
  const String nativeStartSearchPath = FileManager::nativePathWithUnixPath (inStartSearchPath) ;
  DIR * dir = ::opendir (nativeStartSearchPath.cString ()) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = inStartSearchPath ;
        name.appendCString ("/") ;
        name.appendString (current->d_name) ;
        if (FileManager::directoryExistsWithNativePath (name)) {
          recursiveFindAllFilesInDirectory (name, inExtension, outFoundFilePathes) ;
        }else if (FileManager::fileExistsAtPath (name) && (name.pathExtension () == inExtension)) {
          outFoundFilePathes.appendObject (name) ;
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

void FileManager::findAllFilesInDirectoryFromExtension (const String & inDirectoryPath,
                                                          const String & inExtension,
                                                          GenericUniqueArray <String> & outFoundFilePathes) {
  if (directoryExists (inDirectoryPath)) {
    recursiveFindAllFilesInDirectory (inDirectoryPath, inExtension, outFoundFilePathes) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Files Modification Time
#endif

//--------------------------------------------------------------------------------------------------

DateTime FileManager::fileModificationTime (const String & inFilePath) {
  const String nativePath = nativePathWithUnixPath (inFilePath) ;
//--- Get file properties
  time_t modificationTime = 0 ;
  if (nativePath.length () > 0) {
    struct stat fileProperties ;
    const int err = ::stat (nativePath.cString (), & fileProperties) ;
    if ((err == 0) && ((fileProperties.st_mode & S_IFREG) != 0)) {
      modificationTime = fileProperties.st_mtime ;
    }
  }
//--- Return modification date
  return DateTime (modificationTime)  ;
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Files Modification Time
#endif

//--------------------------------------------------------------------------------------------------

uint64_t FileManager::fileSize (const String & inFilePath) {
  uint64_t result = 0 ;
  const String nativePath = nativePathWithUnixPath (inFilePath) ;
  if (nativePath.length () > 0) {
    struct stat fileProperties ;
    const int err = ::stat (nativePath.cString (), & fileProperties) ;
    if ((err == 0) && ((fileProperties.st_mode & S_IFREG) != 0)) {
      result = (uint64_t) fileProperties.st_size ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Files permissions
#endif

//--------------------------------------------------------------------------------------------------

int32_t FileManager::filePosixPermissions (const String & inFilePath) {
  const String nativePath = nativePathWithUnixPath (inFilePath) ;
//--- Get file properties
  int32_t permissions = -1 ;
  struct stat fileProperties ;
  const int err = ::stat (nativePath.cString (), & fileProperties) ;
  if (err == 0) {
    permissions = ((int32_t) fileProperties.st_mode) & 0xFFF ;
  }
 //--- Return result
  return permissions ;
}

//--------------------------------------------------------------------------------------------------

int32_t FileManager::setFilePosixPermissions (const String & inFilePath,
                                                const int32_t inNewFilePosixPermissions) {
  int32_t newMode = -1 ; // Error Code
  const int32_t v = inNewFilePosixPermissions & (int32_t) 0xFFFFF000 ;
  if (v == 0) {
    const String nativePath = nativePathWithUnixPath (inFilePath) ;
    newMode = ::chmod (nativePath.cString (), (uint16_t) (inNewFilePosixPermissions & UINT16_MAX)) ;
  }
  return newMode ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Files exists at path
#endif

//--------------------------------------------------------------------------------------------------

bool FileManager::fileExistsAtPath (const String & inFilePath) {
  const String nativePath = nativePathWithUnixPath (inFilePath) ;
//--- Get file properties
  bool exists = nativePath.length () > 0 ;
  if (exists) {
    struct stat fileProperties ;
    const int err = ::stat (nativePath.cString (), & fileProperties) ;
    exists = (err == 0) && ((fileProperties.st_mode & S_IFREG) != 0) ;
  }
 //--- Return result
  return exists ;
}

//--------------------------------------------------------------------------------------------------

