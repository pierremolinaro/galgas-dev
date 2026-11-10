//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "M_machine.h"

//--------------------------------------------------------------------------------------------------

class String ;
class cIndexEntryNode ;

//--------------------------------------------------------------------------------------------------
//                 IndexingDictionary
//--------------------------------------------------------------------------------------------------

class IndexingDictionary final {

//--- Constructor
  public: IndexingDictionary (void) ;

//--- Destructor
  public: ~ IndexingDictionary (void) ;

//--- No copy
  private: IndexingDictionary (const IndexingDictionary &) = delete ;
  private: IndexingDictionary & operator = (const IndexingDictionary &) = delete ;

//--- Add indexed entry
  public: void addIndexedKey (const uint32_t inIndexingKind,
                               const String & inIndexedKey,
                               const String & inSourceFilePath,
                               const uint32_t inTokenLineInSource,
                               const uint32_t inTokenLocationInSource,
                               const uint32_t inTokenLengthInSource) ;

//--- Generate Index file (in a plist format)
  public: void generateIndexFile (const String & inOutputIndexFilePath) const ;

//--- Internal private method
  private: cIndexEntryNode * findOrAddEntry (cIndexEntryNode * & ioRootPtr,
                                              const String & inKey,
                                              bool & ioExtension) ;

//--- Private attributes
  private: cIndexEntryNode * mEntryRoot ;
} ;

//--------------------------------------------------------------------------------------------------
