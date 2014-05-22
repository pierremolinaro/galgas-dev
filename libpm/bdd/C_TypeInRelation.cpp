//
//  C_TypeInRelation.cpp
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//  Copyright (c) 2014 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#include "C_TypeInRelation.h"
#include "utilities/C_SharedObject.h"
#include "strings/C_String.h"

//-----------------------------------------------------------------------------*

static uint32_t bitCountForCount (const uint32_t inCount) {
  uint32_t result = 0 ;
  uint32_t v = inCount - 1 ;
  while (v != 0) {
    result ++ ;
    v >>= 1 ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*
//  C_TypeInRelation::cType                                                    *
//-----------------------------------------------------------------------------*

class C_TypeInRelation::cType : public C_SharedObject {
//--- Constructor
  public : inline cType (const C_String & inTypeName,
                         const uint32_t inBDDBitCount
                         COMMA_LOCATION_ARGS) :
  C_SharedObject (THERE),
  mTypeName (inTypeName),
  mBDDBitCount (inBDDBitCount) {
  }

//--- Accessors
  public : virtual uint32_t valueCount (void) const = 0 ;
  public : virtual C_String nameForValue (const uint32_t inIndex
                                          COMMA_LOCATION_ARGS) const = 0 ;

//--- Attribute
  public : const C_String mTypeName ;
  public : const uint32_t mBDDBitCount ;
} ;

//-----------------------------------------------------------------------------*
//  C_EnumeratedTypeInRelation                                                 *
//-----------------------------------------------------------------------------*

class C_EnumeratedTypeInRelation : public C_TypeInRelation::cType {
//--- Constructor
  public : C_EnumeratedTypeInRelation (const C_String & inTypeName,
                                       const TC_UniqueArray <C_String> & inConstantNameArray
                                       COMMA_LOCATION_ARGS) ;

//--- Accessors
  public : virtual uint32_t valueCount (void) const {
    return (uint32_t) mConstantNameArray.count () ;
  }

  public : virtual C_String nameForValue (const uint32_t inIndex
                                          COMMA_LOCATION_ARGS) const {
    return mConstantNameArray ((int32_t) inIndex COMMA_THERE) ;
  }


//--- Attributes
  private : TC_UniqueArray <C_String> mConstantNameArray ;
} ;

//-----------------------------------------------------------------------------*

C_EnumeratedTypeInRelation::
C_EnumeratedTypeInRelation (const C_String & inTypeName,
                            const TC_UniqueArray <C_String> & inConstantNameArray
                            COMMA_LOCATION_ARGS) :
cType (inTypeName, bitCountForCount ((uint32_t) inConstantNameArray.count ()) COMMA_THERE),
mConstantNameArray () {
  mConstantNameArray.addObjectsFromArray (inConstantNameArray) ;
}

//-----------------------------------------------------------------------------*

C_TypeInRelation::
C_TypeInRelation (const C_String & inTypeName,
                  const TC_UniqueArray <C_String> & inConstantNameArray
                  COMMA_LOCATION_ARGS) :
mTypePtr (NULL) {
  macroMyNew (mTypePtr, C_EnumeratedTypeInRelation (inTypeName, inConstantNameArray COMMA_THERE)) ;
}

//-----------------------------------------------------------------------------*
//  C_UnsignedTypeInRelation                                                   *
//-----------------------------------------------------------------------------*

class C_UnsignedTypeInRelation : public C_TypeInRelation::cType {
//--- Constructor
  public : C_UnsignedTypeInRelation (const C_String & inTypeName,
                                     const uint32_t inValueCount
                                     COMMA_LOCATION_ARGS) ;

//--- Accessors
  public : virtual uint32_t valueCount (void) const {
    return mValueCount ;
  }

  public : virtual C_String nameForValue (const uint32_t inIndex
                                          COMMA_UNUSED_LOCATION_ARGS) const {
    return cStringWithUnsigned (inIndex) ;
  }

//--- Attributes
  private : const uint32_t mValueCount ;
} ;

//-----------------------------------------------------------------------------*

C_UnsignedTypeInRelation::
C_UnsignedTypeInRelation (const C_String & inTypeName,
                          const uint32_t inValueCount
                          COMMA_LOCATION_ARGS) :
cType (inTypeName, bitCountForCount (inValueCount) COMMA_THERE),
mValueCount (inValueCount) {
}

//-----------------------------------------------------------------------------*

C_TypeInRelation::
C_TypeInRelation (const C_String & inTypeName,
                  const uint32_t inMaxValue
                  COMMA_LOCATION_ARGS) :
mTypePtr (NULL) {
  macroMyNew (mTypePtr, C_UnsignedTypeInRelation (inTypeName, inMaxValue COMMA_THERE)) ;
}

//-----------------------------------------------------------------------------*
//  Accessors                                                                  *
//-----------------------------------------------------------------------------*

C_String C_TypeInRelation::typeName (void) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->mTypeName ;
}

//-----------------------------------------------------------------------------*

uint32_t C_TypeInRelation::BDDBitCount (void) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->mBDDBitCount ;
}

//-----------------------------------------------------------------------------*

uint32_t C_TypeInRelation::valueCount (void) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->valueCount () ;
}

//-----------------------------------------------------------------------------*

C_String C_TypeInRelation::nameForValue (const uint32_t inIndex
                                         COMMA_LOCATION_ARGS) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->nameForValue (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*
//  Handling copy                                                              *
//-----------------------------------------------------------------------------*

C_TypeInRelation::~C_TypeInRelation (void) {
  macroDetachSharedObject (mTypePtr) ;
}

//-----------------------------------------------------------------------------*

C_TypeInRelation::C_TypeInRelation (const C_TypeInRelation & inSource) :
mTypePtr (NULL) {
  macroAssignSharedObject (mTypePtr, inSource.mTypePtr) ;
}

//-----------------------------------------------------------------------------*

C_TypeInRelation & C_TypeInRelation::operator = (const C_TypeInRelation & inSource) {
  macroAssignSharedObject (mTypePtr, inSource.mTypePtr) ;
  return * this ;
}

//-----------------------------------------------------------------------------*
