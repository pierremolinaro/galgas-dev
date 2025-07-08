//
//  BinaryDecisionDiagramRelationSingleType.cpp
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//--------------------------------------------------------------------------------------------------

#include "BinaryDecisionDiagramRelationSingleType.h"
#include "SharedObject.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

static uint32_t bitCountForCount (const uint32_t inCount) {
  uint32_t result = 0 ;
  uint32_t v = inCount - 1 ;
  while (v != 0) {
    result += 1 ;
    v >>= 1 ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  BinaryDecisionDiagramRelationSingleType::InternalType
//--------------------------------------------------------------------------------------------------

static BinaryDecisionDiagramRelationSingleType::InternalType * gFirstRelation ;
static BinaryDecisionDiagramRelationSingleType::InternalType * gLastRelation ;

//--------------------------------------------------------------------------------------------------

class BinaryDecisionDiagramRelationSingleType::InternalType : public SharedObject {
//--- Constructor
  public: inline InternalType (const String & inTypeName,
                               const uint32_t inBDDBitCount
                               COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mTypeName (inTypeName),
  mBDDBitCount (inBDDBitCount),
  mNextPtr (gFirstRelation),
  mPreviousPtr (nullptr) {
    if (nullptr != gFirstRelation) {
      gFirstRelation->mPreviousPtr = this ;
    }
    gFirstRelation = this ;
  }

//--- Desctructor
  public: inline virtual ~InternalType (void) {
    if (nullptr == mNextPtr) {
      gLastRelation = mPreviousPtr ;
    }else{
      mNextPtr->mPreviousPtr = mPreviousPtr ;
    }
    if (nullptr == mPreviousPtr) {
      gFirstRelation = mNextPtr ;
    }else{
      mPreviousPtr->mNextPtr = mNextPtr ;
    }
  }

//--- No copy
  private: InternalType (const InternalType &) = delete ;
  private: InternalType & operator = (const InternalType &) = delete ;

//--- Accessors
  public: virtual uint32_t constantCount (void) const = 0 ;
  public: virtual String nameForValue (const uint32_t inIndex
                                          COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties
  public: const String mTypeName ;
  public: const uint32_t mBDDBitCount ;
  public: InternalType * mNextPtr ;
  private: InternalType * mPreviousPtr ;
} ;

//--------------------------------------------------------------------------------------------------
//  PrivateEnumeratedTypeInRelation
//--------------------------------------------------------------------------------------------------

class PrivateEnumeratedTypeInRelation final : public BinaryDecisionDiagramRelationSingleType::InternalType {
//--- Constructor
  public: PrivateEnumeratedTypeInRelation (const String & inTypeName,
                                       const GenericUniqueArray <String> & inConstantNameArray
                                       COMMA_LOCATION_ARGS) ;

//--- Accessors
  public: virtual uint32_t constantCount (void) const {
    return (uint32_t) mConstantNameArray.count () ;
  }

  public: virtual String nameForValue (const uint32_t inIndex
                                          COMMA_LOCATION_ARGS) const {
    return mConstantNameArray ((int32_t) inIndex COMMA_THERE) ;
  }

  public: inline bool isConstantArrayEqualTo (const GenericUniqueArray <String> & inConstantNameArray) const {
    return mConstantNameArray == inConstantNameArray ;
  }

//--- Attributes
  private: GenericUniqueArray <String> mConstantNameArray ;
} ;

//--------------------------------------------------------------------------------------------------

PrivateEnumeratedTypeInRelation::
PrivateEnumeratedTypeInRelation (const String & inTypeName,
                                 const GenericUniqueArray <String> & inConstantNameArray
                                 COMMA_LOCATION_ARGS) :
InternalType (inTypeName, bitCountForCount ((uint32_t) inConstantNameArray.count ()) COMMA_THERE),
mConstantNameArray () {
  mConstantNameArray.appendObjectsFromArray (inConstantNameArray) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType::
BinaryDecisionDiagramRelationSingleType (const String & inTypeName,
                                         const GenericUniqueArray <String> & inConstantNameArray
                                         COMMA_LOCATION_ARGS) :
mTypePtr (nullptr) {
//--- Check type is unique
  InternalType * result = nullptr ;
  InternalType * p = gFirstRelation ;
  while ((nullptr == result) && (nullptr != p)) {
    PrivateEnumeratedTypeInRelation * ptr = dynamic_cast <PrivateEnumeratedTypeInRelation *> (p) ;
    if ((nullptr != ptr) && (ptr->mTypeName == inTypeName) && (ptr->isConstantArrayEqualTo (inConstantNameArray))) {
      result = ptr ;
    }
    p = p->mNextPtr ;
  }
//---
  if (nullptr == result) {
    macroMyNew (mTypePtr, PrivateEnumeratedTypeInRelation (inTypeName, inConstantNameArray COMMA_THERE)) ;
  }else{
    macroAssignSharedObject (mTypePtr, result) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  C_UnsignedTypeInRelation
//--------------------------------------------------------------------------------------------------

class C_UnsignedTypeInRelation : public BinaryDecisionDiagramRelationSingleType::InternalType {
//--- Constructor
  public: C_UnsignedTypeInRelation (const String & inTypeName,
                                     const uint32_t inValueCount
                                     COMMA_LOCATION_ARGS) ;

//--- Accessors
  public: virtual uint32_t constantCount (void) const {
    return mValueCount ;
  }

  public: virtual String nameForValue (const uint32_t inIndex
                                          COMMA_UNUSED_LOCATION_ARGS) const {
    return stringWithUnsigned (inIndex) ;
  }

//--- Attributes
  private: const uint32_t mValueCount ;
} ;

//--------------------------------------------------------------------------------------------------

C_UnsignedTypeInRelation::
C_UnsignedTypeInRelation (const String & inTypeName,
                          const uint32_t inValueCount
                          COMMA_LOCATION_ARGS) :
InternalType (inTypeName, bitCountForCount (inValueCount) COMMA_THERE),
mValueCount (inValueCount) {
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType::
BinaryDecisionDiagramRelationSingleType (const String & inTypeName,
                      const uint32_t inValueCount
                      COMMA_LOCATION_ARGS) :
mTypePtr (nullptr) {
//--- Check type is unique
  InternalType * result = nullptr ;
  InternalType * p = gFirstRelation ;
  while ((nullptr == result) && (nullptr != p)) {
    C_UnsignedTypeInRelation * ptr = dynamic_cast <C_UnsignedTypeInRelation *> (p) ;
    if ((nullptr != ptr) && (ptr->mTypeName == inTypeName) && (ptr->constantCount () == inValueCount)) {
      result = ptr ;
    }
    p = p->mNextPtr ;
  }
//---
  if (nullptr == result) {
    macroMyNew (mTypePtr, C_UnsignedTypeInRelation (inTypeName, inValueCount COMMA_THERE)) ;
  }else{
    macroAssignSharedObject (mTypePtr, result) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Accessors
//--------------------------------------------------------------------------------------------------

String BinaryDecisionDiagramRelationSingleType::typeName (void) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->mTypeName ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BinaryDecisionDiagramRelationSingleType::BDDBitCount (void) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->mBDDBitCount ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BinaryDecisionDiagramRelationSingleType::constantCount (void) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->constantCount () ;
}

//--------------------------------------------------------------------------------------------------

String BinaryDecisionDiagramRelationSingleType::nameForValue (const uint32_t inIndex
                                             COMMA_LOCATION_ARGS) const {
  macroValidPointer (mTypePtr) ;
  return mTypePtr->nameForValue (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//  Handling copy
//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType::~BinaryDecisionDiagramRelationSingleType (void) {
  macroDetachSharedObject (mTypePtr) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType::BinaryDecisionDiagramRelationSingleType (const BinaryDecisionDiagramRelationSingleType & inSource) :
mTypePtr (nullptr) {
  macroAssignSharedObject (mTypePtr, inSource.mTypePtr) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType & BinaryDecisionDiagramRelationSingleType::operator = (const BinaryDecisionDiagramRelationSingleType & inSource) {
  macroAssignSharedObject (mTypePtr, inSource.mTypePtr) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------
