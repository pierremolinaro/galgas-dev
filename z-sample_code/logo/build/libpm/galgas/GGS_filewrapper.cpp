//--------------------------------------------------------------------------------------------------
//
//  GGS_filewrapper : class for GALGAS file wrappers
//
//  Started february 23th, 2008.
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2023 Pierre Molinaro.
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

#include "all-predefined-types.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

cRegularFileWrapper::cRegularFileWrapper (const char * inName,
                                          const char * inExtension,
                                          const bool inIsTextFile,
                                          const uint32_t inFileLength,
                                          const char * inContents) :
mName (inName),
mExtension (inExtension),
mIsTextFile (inIsTextFile),
mFileLength (inFileLength),
mContents (inContents) {
}

//--------------------------------------------------------------------------------------------------

cDirectoryWrapper::cDirectoryWrapper (const char * inDirectoryName,
                                      const uint32_t inFileCount,
                                      const cRegularFileWrapper * * const inFiles,
                                      const uint32_t inDirectoryCount,
                                      const cDirectoryWrapper * * inDirectories) :
mDirectoryName (inDirectoryName),
mFileCount (inFileCount),
mFiles (inFiles),
mDirectoryCount (inDirectoryCount),
mDirectories (inDirectories) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapper::GGS_filewrapper (const cDirectoryWrapper & inRootDirectory) :
AC_GALGAS_root (),
mRootDirectoryPtr (& inRootDirectory),
mCurrentDirectory ("/") {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapper::GGS_filewrapper (void) :
mRootDirectoryPtr (nullptr),
mCurrentDirectory () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapper::GGS_filewrapper (const GGS_filewrapper & inSource) :
AC_GALGAS_root (),
mRootDirectoryPtr (inSource.mRootDirectoryPtr),
mCurrentDirectory (inSource.mCurrentDirectory) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapper & GGS_filewrapper::operator = (const GGS_filewrapper & inSource) {
  mRootDirectoryPtr = inSource.mRootDirectoryPtr ;
  mCurrentDirectory = inSource.mCurrentDirectory ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

static void internalEnumerateFiles (const cDirectoryWrapper & inDirectory,
                                    const String & inWrapperPath,
                                    const bool inEnumerateTextFile,
                                    GGS_stringlist & ioList) {
//--- Enumerate regular files
  const cRegularFileWrapper * * mFiles = inDirectory.mFiles ;
  while ((* mFiles) != nullptr) {
    String path = inWrapperPath ;
    path.appendString ((* mFiles)->mName) ;
    if ((* mFiles)->mIsTextFile == inEnumerateTextFile) {
      ioList.addAssignOperation (GGS_string (path) COMMA_HERE) ;
    }
    mFiles += 1 ;
  }
//--- Walk throught directories
  const cDirectoryWrapper * * mDirs = inDirectory.mDirectories ;
  while ((* mDirs) != nullptr) {
    String path = inWrapperPath ;
    path.appendString ((* mDirs)->mDirectoryName) ;
    path.appendCString ("/") ;
    internalEnumerateFiles (* * mDirs, path, inEnumerateTextFile, ioList) ;
    mDirs += 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_allTextFilePathes (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (mRootDirectoryPtr != nullptr) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    internalEnumerateFiles (* mRootDirectoryPtr, "/", true, result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_allBinaryFilePathes (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (mRootDirectoryPtr != nullptr) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    internalEnumerateFiles (* mRootDirectoryPtr, "/", false, result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void internalEnumerateDirectories (const cDirectoryWrapper & inDirectory,
                                          const String & inWrapperPath,
                                          GGS_stringlist & ioList) {
//--- Enumerate regular files
  ioList.addAssignOperation (GGS_string (inWrapperPath) COMMA_HERE) ;
//--- Walk throught directories
  const cDirectoryWrapper * * mDirs = inDirectory.mDirectories ;
  while ((* mDirs) != nullptr) {
    String path = inWrapperPath ;
    path.appendString ((* mDirs)->mDirectoryName) ;
    path.appendCString ("/") ;
    internalEnumerateDirectories (* * mDirs, path, ioList) ;
    mDirs += 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_allDirectoryPathes (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (mRootDirectoryPtr != nullptr) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    internalEnumerateDirectories (* mRootDirectoryPtr, "/", result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void internalEnumerateFilesWithExtension (const cDirectoryWrapper & inDirectory,
                                                 const String & inWrapperPath,
                                                 GGS_stringlist & ioList,
                                                 const String & inExtension) {
//--- Enumerate regular files
  const cRegularFileWrapper * * mFiles = inDirectory.mFiles ;
  while ((* mFiles) != nullptr) {
    String path = inWrapperPath ;
    if (inExtension.compare ((* mFiles)->mExtension) == 0) {
      path.appendString ((* mFiles)->mName) ;
      ioList.addAssignOperation (GGS_string (path) COMMA_HERE) ;
    }
    mFiles += 1 ;
  }
//--- Walk throught directories
  const cDirectoryWrapper * * mDirs = inDirectory.mDirectories ;
  while ((* mDirs) != nullptr) {
    String path = inWrapperPath ;
    path.appendString ((* mDirs)->mDirectoryName) ;
    path.appendCString ("/") ;
    internalEnumerateFilesWithExtension (* * mDirs, path, ioList, inExtension) ;
    mDirs += 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_allFilePathesWithExtension (const GGS_string & inExtension
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if ((mRootDirectoryPtr != nullptr) && inExtension.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    internalEnumerateFilesWithExtension (* mRootDirectoryPtr, "/", result, inExtension.stringValue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void enumerateWrapper (String & ioString,
                              const cDirectoryWrapper * inDir,
                              const String & inPath,
                              const int32_t inIndentation) {
  const String currentPath = inPath + inDir->mDirectoryName + "/" ;
  ioString.appendCString ("\n") ;
  for (int32_t i=0 ; i<inIndentation ; i++) { ioString.appendCString (" ") ; }
  ioString.appendCString ("'") ;
  ioString.appendString (currentPath) ;
  ioString.appendCString ("'") ;
  for (uint32_t i=0 ; i<inDir->mFileCount ; i++) {
    ioString.appendCString ("\n") ;
    for (int32_t j=0 ; j<inIndentation ; j++) { ioString.appendCString (" ") ; }
    ioString.appendCString ("'") ;
    ioString.appendString (currentPath) ;
    ioString.appendString (inDir->mFiles [i]->mName) ;
    ioString.appendCString ("'") ;
  }
  for (uint32_t i=0 ; i<inDir->mDirectoryCount ; i++) {
    enumerateWrapper (ioString,
                      inDir->mDirectories [i],
                      currentPath,
                      inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapper::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<@filewrapper") ;
  if (isValid ()) {
    enumerateWrapper (ioString, mRootDirectoryPtr, "", inIndentation + 2) ;
  }else{
    ioString.appendCString (" (not built)") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapper::getter_currentDirectory (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (mRootDirectoryPtr != nullptr) {
    result = GGS_string (mCurrentDirectory) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static const cDirectoryWrapper * findDirectoryInDirectory (const cDirectoryWrapper * inDir,
                                                           const String & inSearchedDir) {
  const cDirectoryWrapper * result = nullptr ;
  if (inDir != nullptr) {
    int32_t first = 0 ;
    int32_t last = (int32_t) inDir->mDirectoryCount - 1 ;
    bool found = false ;
    while ((first <= last) && ! found) {
      const int32_t mid = (first + last) / 2 ;
      const int32_t c = inSearchedDir.compare (inDir->mDirectories [mid]->mDirectoryName) ;
      if (c > 0) {
        first = mid + 1 ;
      }else if (c < 0) {
        last = mid - 1 ;
      }else{
        found = true ;
        result = inDir->mDirectories [mid] ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static const cRegularFileWrapper * findFileInDirectory (const cDirectoryWrapper * inDir,
                                                        const String & inSearchedFile) {
  const cRegularFileWrapper * result = nullptr ;
  if (inDir != nullptr) {
    int32_t first = 0 ;
    int32_t last = (int32_t) inDir->mFileCount - 1 ;
    bool found = false ;
    while ((first <= last) && ! found) {
      const int32_t mid = (first + last) / 2 ;
      const int32_t c = inSearchedFile.compare (inDir->mFiles [mid]->mName) ;
      if (c > 0) {
        first = mid + 1 ;
      }else if (c < 0) {
        last = mid - 1 ;
      }else{
        found = true ;
        result = inDir->mFiles [mid] ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static const cDirectoryWrapper * getDirectory (const String & inDirectory,
                                               const cDirectoryWrapper * inRootDirectoryPtr) {
  GenericUniqueArray <String> componentArray ;
  inDirectory.componentsSeparatedByString ("/", componentArray) ;
  const cDirectoryWrapper * dir = inRootDirectoryPtr ;
  for (int32_t i=1 ; i<componentArray.count () ; i++) {
    dir = findDirectoryInDirectory (dir, componentArray (i COMMA_HERE)) ;
  }
  return dir ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapper::getter_directoryExistsAtPath (const GGS_string & inPath,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inPath.isValid ()) {
    const GGS_string dir = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (dir.isValid ()) {
      result = GGS_bool (getDirectory (dir.stringValue (), mRootDirectoryPtr)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapper::getter_fileExistsAtPath (const GGS_string & inPath,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inPath.isValid ()) {
    const GGS_string path = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (path.isValid ()) {
      const String directoryPath = path.stringValue ().deletingLastPathComponent () ;
      const cDirectoryWrapper * dir = getDirectory (directoryPath, mRootDirectoryPtr) ;
      const cRegularFileWrapper * file = findFileInDirectory (dir, path.stringValue ().lastPathComponent ()) ;
      result = GGS_bool (file != nullptr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapper::getter_textFileContentsAtPath (const GGS_string & inPath,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inPath.isValid ()) {
    const GGS_string path = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (path.isValid ()) {
      const String directoryPath = path.stringValue ().deletingLastPathComponent () ;
      const cDirectoryWrapper * dir = getDirectory (directoryPath, mRootDirectoryPtr) ;
      const cRegularFileWrapper * file = findFileInDirectory (dir, path.stringValue ().lastPathComponent ()) ;
      if (file == nullptr) {
        String errorMessage ;
        errorMessage.appendCString ("textFileContentsAtPath: the '") ;
        errorMessage.appendString (inPath.stringValue ()) ;
        errorMessage.appendCString ("' path does not exist") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else if (! file->mIsTextFile) {
        String errorMessage ;
        errorMessage.appendCString ("textFileContentsAtPath: the '") ;
        errorMessage.appendString (inPath.stringValue ()) ;
        errorMessage.appendCString ("' path points on a binary file") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS_string (file->mContents) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_data GGS_filewrapper::getter_binaryFileContentsAtPath (const GGS_string & inPath,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_data result ;
  if (isValid () && inPath.isValid ()) {
    const GGS_string path = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (path.isValid ()) {
      const String directoryPath = path.stringValue ().deletingLastPathComponent () ;
      const cDirectoryWrapper * dir = getDirectory (directoryPath, mRootDirectoryPtr) ;
      const cRegularFileWrapper * file = findFileInDirectory (dir, path.stringValue ().lastPathComponent ()) ;
      if (file == nullptr) {
        String errorMessage = "binaryFileContentsAtPath: the '" ;
        errorMessage.appendString (inPath.stringValue ()) ;
        errorMessage.appendCString ("' path does not exist") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        const uint8_t * sourcePtr = (const uint8_t *) file->mContents ;
        const uint32_t sourceLength = file->mFileLength ;
        U8Data data ;
        data.appendDataFromPointer (sourcePtr, (int32_t) sourceLength) ;
        result = GGS_data (data) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapper::setter_setCurrentDirectory (const GGS_string inNewDirectory,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if ((mRootDirectoryPtr != nullptr) && inNewDirectory.isValid ()) {
    GGS_string absolutePath = getter_absolutePathForPath (inNewDirectory, inCompiler COMMA_THERE) ;
    if (absolutePath.isValid ()) {
      const String absolutePathString = absolutePath.stringValue () ;
      if (getDirectory (absolutePath.stringValue (), mRootDirectoryPtr) != nullptr) {
        mCurrentDirectory = absolutePath.stringValue () ;
      }else{
        String errorMessage = "setCurrentDirectory: the '" ;
        errorMessage.appendString (inNewDirectory.stringValue ()) ;
        errorMessage.appendCString ("' path does not exist") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapper::getter_absolutePathForPath (const GGS_string & inPath,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inPath.isValid ()) {
    const String path = inPath.stringValue () ;
  //--- Build absolute path
    String absolutePath = path ;
    if ((path.length () == 0) || (path.charAtIndex (0 COMMA_HERE).u32 () != '/')) {
      absolutePath = mCurrentDirectory ;
      absolutePath.appendString (path) ;
    }
  //--- Normalize path
    GenericUniqueArray <String> componentArray ;
    absolutePath.componentsSeparatedByString ("/", componentArray) ;
  //--- Remove empty components (but the first one)
    int32_t componentIndex = 1 ;
    while (componentIndex < componentArray.count ()) {
      if (componentArray (componentIndex COMMA_HERE).length () == 0) {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex += 1 ;
      }
    }
  //--- Remove '.' components
    componentIndex = 0 ;
    while (componentIndex < componentArray.count ()) {
      if (componentArray (componentIndex COMMA_HERE) == ".") {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex += 1 ;
      }
    }
  //--- Remove '..' components
    componentIndex = 1 ;
    bool validPath = true ;
    while ((componentIndex < componentArray.count ()) && validPath) {
      validPath = (componentIndex > 1) || (componentArray (1 COMMA_HERE) != "..") ;
      if (validPath && (componentArray (componentIndex COMMA_HERE) == "..")) {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
        componentIndex -= 1 ;
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex += 1 ;
      }
    }
  //--- Error ?
    if (! validPath) {
      String errorMessage = "absolutePathForPath: the '" ;
      errorMessage.appendString (path) ;
      errorMessage.appendCString ("' path is mal-formed") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{ //--- Recompose path
      result = GGS_string (String::componentsJoinedByString (componentArray, "/")) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_directoriesAtPath (const GGS_string & inPath,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if ((mRootDirectoryPtr != nullptr) && inPath.isValid ()) {
    const GGS_string path = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (path.isValid ()) {
      const cDirectoryWrapper * dir = getDirectory (path.stringValue (), mRootDirectoryPtr) ;
      if (nullptr != dir) {
        result = GGS_stringlist::class_func_emptyList (THERE) ;
        const cDirectoryWrapper * * dirs = dir->mDirectories ;
        while ((*dirs) != nullptr) {
          result.addAssignOperation (GGS_string ((*dirs)->mDirectoryName) COMMA_HERE) ;
          dirs += 1 ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_textFilesAtPath (const GGS_string & inPath,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if ((mRootDirectoryPtr != nullptr) && inPath.isValid ()) {
    const GGS_string path = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (path.isValid ()) {
      const cDirectoryWrapper * dir = getDirectory (path.stringValue (), mRootDirectoryPtr) ;
      if (nullptr != dir) {
        result = GGS_stringlist::class_func_emptyList (THERE) ;
        const cRegularFileWrapper * * files = dir->mFiles ;
        while ((*files) != nullptr) {
          if ((*files)->mIsTextFile) {
            result.addAssignOperation (GGS_string ((*files)->mName) COMMA_HERE) ;
          }
          files += 1 ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_filewrapper::getter_binaryFilesAtPath (const GGS_string & inPath,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if ((mRootDirectoryPtr != nullptr) && inPath.isValid ()) {
    const GGS_string path = getter_absolutePathForPath (inPath, inCompiler COMMA_THERE) ;
    if (path.isValid ()) {
      const cDirectoryWrapper * dir = getDirectory (path.stringValue (), mRootDirectoryPtr) ;
      if (nullptr != dir) {
        result = GGS_stringlist::class_func_emptyList (THERE) ;
        const cRegularFileWrapper * * files = dir->mFiles ;
        while ((*files) != nullptr) {
          if (! (*files)->mIsTextFile) {
            result.addAssignOperation (GGS_string ((*files)->mName) COMMA_HERE) ;
          }
          files += 1 ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
