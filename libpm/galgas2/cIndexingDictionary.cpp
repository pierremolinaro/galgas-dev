//--------------------------------------------------------------------------------------------------
//
//  'cIndexingDictionary': dictionary for indexing soures
//
//  This file is part of libpm library
//
//  Copyright (C) 2010, ..., 2012 Pierre Molinaro.
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

#include "cIndexingDictionary.h"
#include "String-class.h"
#include "FileManager.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Entry Dictionary
#endif

//--------------------------------------------------------------------------------------------------
//
//  c I n d e x E n t r y N o d e
//
//--------------------------------------------------------------------------------------------------

class cIndexEntryNode {
  public: cIndexEntryNode * mInfPtr ;
  public: cIndexEntryNode * mSupPtr ;
  public: int32_t mBalance ;
  public: const String mKey ;
  public: TC_UniqueArray <String> mDescriptorArray ;

//--- Constructor
  public: cIndexEntryNode (const String & inKey) ;

//--- Destructor
  public: virtual ~ cIndexEntryNode (void) ;

//--- No copy
  private: cIndexEntryNode (const cIndexEntryNode &) ;
  private: cIndexEntryNode & operator = (const cIndexEntryNode &) ;
} ;

//--------------------------------------------------------------------------------------------------

cIndexEntryNode::cIndexEntryNode (const String & inKey) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey),
mDescriptorArray () {
}

//--------------------------------------------------------------------------------------------------

cIndexEntryNode::~ cIndexEntryNode (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//--------------------------------------------------------------------------------------------------

static void rotateLeft (cIndexEntryNode * & ioRootPtr) {
  cIndexEntryNode * b = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = b->mInfPtr ;
  b->mInfPtr = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance++ ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance++ ;
  }
  ioRootPtr = b ;
}

//---------------------------------------------------------------------

static void rotateRight (cIndexEntryNode * & ioRootPtr) {
  cIndexEntryNode * b = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = b->mSupPtr ;
  b->mSupPtr = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance-- ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance-- ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

cIndexEntryNode * cIndexingDictionary::findOrAddEntry (cIndexEntryNode * & ioRootPtr,
                                                       const String & inKey,
                                                       bool & ioExtension) {
  cIndexEntryNode * result = nullptr ;
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, cIndexEntryNode (inKey)) ;
    ioExtension = true ;
    result = ioRootPtr ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
    if (comparaison > 0) {
      result = findOrAddEntry (ioRootPtr->mInfPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance ++ ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mInfPtr->mBalance == -1) {
            rotateLeft (ioRootPtr->mInfPtr) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else if (comparaison < 0) {
      result = findOrAddEntry (ioRootPtr->mSupPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance-- ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mSupPtr->mBalance == 1) {
            rotateRight (ioRootPtr->mSupPtr) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{ // Entry already exists
      result = ioRootPtr ;
      ioExtension = false ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cIndexingDictionary
#endif

//--------------------------------------------------------------------------------------------------
//
//                 cIndexingDictionary
//
//--------------------------------------------------------------------------------------------------

cIndexingDictionary::cIndexingDictionary (void) :
mEntryRoot (nullptr) {
}

//--------------------------------------------------------------------------------------------------

cIndexingDictionary::~ cIndexingDictionary (void) {
  macroMyDelete (mEntryRoot) ;
}

//--------------------------------------------------------------------------------------------------

void cIndexingDictionary::addIndexedKey (const uint32_t inIndexingKind,
                                         const String & inIndexedKey,
                                         const String & inSourceFilePath,
                                         const uint32_t inTokenLineInSource,
                                         const uint32_t inTokenLocationInSource,
                                         const uint32_t inTokenLengthInSource) {
  // printf ("INDEXING '%s', kind %d, file '%s' at [%d, %d]\n", inIndexedKey.cString (HERE), inIndexingKind, inSourceFilePath.cString (HERE), inTokenLocationInSource, inTokenLocationInSource + inTokenLengthInSource) ;
//--- File Path registering
//  bool extension = false ; // Unused here
//  const uint32_t filePathID = findOrAddFilePath (mFilePathRoot, inSourceFilePath, extension) ;
//--- Entry registering
  bool extension = false ;
  cIndexEntryNode * entryNode = findOrAddEntry (mEntryRoot, inIndexedKey, extension) ;
//--- Register index
  String entryDescriptor ;
  entryDescriptor.addUnsigned (inIndexingKind) ;
  entryDescriptor.addString (":") ;
  entryDescriptor.addUnsigned (inTokenLineInSource) ;
  entryDescriptor.addString (":") ;
  entryDescriptor.addUnsigned (inTokenLocationInSource) ;
  entryDescriptor.addString (":") ;
  entryDescriptor.addUnsigned (inTokenLengthInSource) ;
  entryDescriptor.addString (":") ;
  entryDescriptor.addString (inSourceFilePath) ;
  entryNode->mDescriptorArray.appendObject (entryDescriptor) ;
}

//---------------------------------------------------------------------

static void enumerateEntries (const cIndexEntryNode * inNode,
                              String & ioContents) {
  if (nullptr != inNode) {
    enumerateEntries (inNode->mInfPtr, ioContents) ;
    ioContents.addString ("<key>") ;
    ioContents.addString (inNode->mKey.HTMLRepresentation ()) ;
    ioContents.addString ("</key>") ;
    ioContents.addString ("<array>") ;
    for (int32_t i=0 ; i<inNode->mDescriptorArray.count () ; i++) {
      ioContents.addString ("<string>") ;
      ioContents.addString (inNode->mDescriptorArray (i COMMA_HERE).HTMLRepresentation ()) ;
      ioContents.addString ("</string>") ;
    }
    ioContents.addString ("</array>") ;
    enumerateEntries (inNode->mSupPtr, ioContents) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cIndexingDictionary::generateIndexFile (const String & inOutputIndexFilePath) const {
  String contents = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
                      "<!DOCTYPE plist PUBLIC \"-//Apple Computer//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">"
                      "<plist version=\"1.0\">" ;
//--- Write entries as dictionary
  contents.addString ("<dict>") ;
  enumerateEntries (mEntryRoot, contents) ;
  contents.addString ("</dict>") ;
//--- End of file
  contents.addString ("</plist>") ;
  FileManager::writeStringToFile (contents, inOutputIndexFilePath) ;
}

//--------------------------------------------------------------------------------------------------
