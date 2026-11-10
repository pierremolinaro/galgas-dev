//--------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "GenericUniqueArray.h"

//--------------------------------------------------------------------------------------------------
//
//  GALGAS type reference (for type introspection)                                               
//
//--------------------------------------------------------------------------------------------------

class GALGAS_TypeDescriptor final {
//--- Attributes
  private: GALGAS_TypeDescriptor * mNextType ;
  private: GALGAS_TypeDescriptor * mPreviousType ;
  private: int32_t mBalance ;
  public: const char * const mGalgasTypeName ; // Without the leading '@'
  public: const int32_t mSlotID ;
  public: const GALGAS_TypeDescriptor * mSuperclassDescriptor ;

//--- Constructor
  public: GALGAS_TypeDescriptor (const char * inGalgasTypeName,
                              const GALGAS_TypeDescriptor * inSuperClassDescriptor) ;

//--- Get Type list
  public: static void typeListRoot (GenericUniqueArray <GALGAS_TypeDescriptor *> & outTypeList) ;
  
//--- No copy
  private: GALGAS_TypeDescriptor (const GALGAS_TypeDescriptor &) = delete ;
  private: GALGAS_TypeDescriptor & operator = (const GALGAS_TypeDescriptor &) = delete ;

//--- Internal methods
  private: static void recursiveInsert (GALGAS_TypeDescriptor * & ioRoot,
                                        GALGAS_TypeDescriptor * inDescriptor,
                                        bool & ioExtension) ;

  private: static void rotateLeft (GALGAS_TypeDescriptor * & ioRootPtr) ;

  private: static void rotateRight (GALGAS_TypeDescriptor * & ioRootPtr) ;

  public: static void recursiveGetSortedTypeList (GALGAS_TypeDescriptor * inRoot,
                                                  GenericUniqueArray <GALGAS_TypeDescriptor *> & ioTypeList) ;
} ;

//--------------------------------------------------------------------------------------------------
