//
//  BinaryDecisionDiagramRelation.cpp
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//--------------------------------------------------------------------------------------------------

#include "BinaryDecisionDiagramRelation.h"
#include "SharedObject.h"

//--------------------------------------------------------------------------------------------------
//  PrivateVariablesInRelationConfiguration
//--------------------------------------------------------------------------------------------------

class PrivateVariablesInRelationConfiguration : public SharedObject {
//--- Constructor
  public: PrivateVariablesInRelationConfiguration (LOCATION_ARGS) ;
  public: PrivateVariablesInRelationConfiguration (PrivateVariablesInRelationConfiguration * inPtr COMMA_LOCATION_ARGS) ;


  public: void addVariable (const String & inVariableName,
                             const BinaryDecisionDiagramRelationSingleType & inType) ;

//--- Accessors
  public: uint32_t bitCount (void) const ;

  public: String nameForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelationSingleType typeForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public: uint32_t constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public: void deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) ;

  public: void deleteLastVariable (LOCATION_ARGS) ;

  public: inline int32_t variableCount (void) const {
    return mBDDStartIndexArray.count () ;
  }

  public: inline uint32_t bddStartBitIndexForVariable (const int32_t inIndex
                                                        COMMA_LOCATION_ARGS) const {
    return mBDDStartIndexArray (inIndex COMMA_THERE) ;
  }

  public: inline uint32_t bddBitCountForVariable (const int32_t inIndex
                                                   COMMA_LOCATION_ARGS) const {
    return mVariableTypeArray (inIndex COMMA_THERE).BDDBitCount () ;
  }

  public: String constantNameForVariableAndValue (const int32_t inIndex,
                                                     const uint32_t inValue
                                                     COMMA_LOCATION_ARGS) const ;

//---
  public: void checkIdenticalTo (const PrivateVariablesInRelationConfiguration * inVariables
                                  COMMA_LOCATION_ARGS) const ;

//--- Operations on 3 set configurations
  public: void swap021 (LOCATION_ARGS) ;

  public: void swap102 (LOCATION_ARGS) ;

  public: void swap120 (LOCATION_ARGS) ;

  public: void swap201 (LOCATION_ARGS) ;

  public: void swap210 (LOCATION_ARGS) ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: void checkConfiguration (LOCATION_ARGS) const ;
  #endif

//--- Attributes
  private: GenericUniqueArray <uint32_t> mBDDStartIndexArray ;
  private: GenericUniqueArray <String> mVariableNameArray ;
  private: GenericUniqueArray <BinaryDecisionDiagramRelationSingleType> mVariableTypeArray ;
} ;

//--------------------------------------------------------------------------------------------------

PrivateVariablesInRelationConfiguration::
PrivateVariablesInRelationConfiguration (LOCATION_ARGS) :
SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
}

//--------------------------------------------------------------------------------------------------

PrivateVariablesInRelationConfiguration::
PrivateVariablesInRelationConfiguration (PrivateVariablesInRelationConfiguration * inPtr
                                   COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
  macroValidSharedObjectThere (inPtr, PrivateVariablesInRelationConfiguration) ;
  mBDDStartIndexArray.appendObjectsFromArray (inPtr->mBDDStartIndexArray) ;
  mVariableNameArray.appendObjectsFromArray (inPtr->mVariableNameArray) ;
  mVariableTypeArray.appendObjectsFromArray (inPtr->mVariableTypeArray) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void PrivateVariablesInRelationConfiguration::checkConfiguration (LOCATION_ARGS) const {
    macroAssertThere (mBDDStartIndexArray.count () == mVariableNameArray.count (),
                    "mBDDStartIndexArray.count () == %lld != mVariableNameArray.count () == %lld",
                    mBDDStartIndexArray.count (),
                    mVariableNameArray.count ()) ;
    macroAssertThere (mBDDStartIndexArray.count () == mVariableTypeArray.count (),
                    "mBDDStartIndexArray.count () == %lld != mVariableTypeArray.count () == %lld",
                    mBDDStartIndexArray.count (),
                    mVariableTypeArray.count ()) ;
    uint32_t bddIndex = 0 ;
    for (int32_t i=0 ; i<mBDDStartIndexArray.count () ; i++) {
      macroAssertThere (bddIndex == mBDDStartIndexArray (i COMMA_HERE),
                      "bddIndex == %lld != mBDDStartIndexArray (i COMMA_HERE) == %lld",
                      bddIndex,
                      mBDDStartIndexArray (i COMMA_HERE)) ;
      bddIndex += mVariableTypeArray (i COMMA_HERE).BDDBitCount() ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::addVariable (const String & inVariableName,
                                                     const BinaryDecisionDiagramRelationSingleType & inType) {
  if (mBDDStartIndexArray.count () == 0) {
    mBDDStartIndexArray.appendObject (0) ;
  }else{
    mBDDStartIndexArray.appendObject (bitCount ()) ;
  }
  mVariableNameArray.appendObject (inVariableName) ;
  mVariableTypeArray.appendObject (inType) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::checkIdenticalTo (const PrivateVariablesInRelationConfiguration * inVariables
                                                          COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (inVariables, PrivateVariablesInRelationConfiguration) ;
  bool same = mVariableTypeArray.count() == inVariables->mVariableTypeArray.count() ;
  for (int32_t i=0 ; (i<mVariableTypeArray.count()) && same ; i++) {
    same = mVariableTypeArray (i COMMA_HERE) == inVariables->mVariableTypeArray (i COMMA_HERE) ;
  }
  macroAssertThere (same,
                  "PrivateVariablesInRelationConfiguration::checkIdenticalTo failure",
                  0,
                  0) ;

  if (! same) {
    printf ("*** PrivateVariablesInRelationConfiguration::checkIdenticalTo failure ***\n") ;
    exit (1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  uint32_t idx = mBDDStartIndexArray (inIndex COMMA_THERE) ;
  mBDDStartIndexArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
  mVariableNameArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
  mVariableTypeArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
  for (int32_t i=inIndex ; i<mBDDStartIndexArray.count () ; i++) {
    mBDDStartIndexArray.setObjectAtIndex (idx, i COMMA_HERE) ;
    idx += mVariableTypeArray (i COMMA_HERE).BDDBitCount () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::deleteLastVariable (LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  mBDDStartIndexArray.removeLastObject (THERE) ;
  mVariableNameArray.removeLastObject (THERE) ;
  mVariableTypeArray.removeLastObject (THERE) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

uint32_t PrivateVariablesInRelationConfiguration::constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE).constantCount () ;
}

//--------------------------------------------------------------------------------------------------

uint32_t PrivateVariablesInRelationConfiguration::bitCount (void) const {
  return mBDDStartIndexArray.lastObject (HERE) + mVariableTypeArray.lastObject (HERE).BDDBitCount() ;
}

//--------------------------------------------------------------------------------------------------

String PrivateVariablesInRelationConfiguration::constantNameForVariableAndValue (const int32_t inIndex,
                                                                             const uint32_t inValue
                                                                             COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE).nameForValue(inValue COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

String PrivateVariablesInRelationConfiguration::nameForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableNameArray (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType PrivateVariablesInRelationConfiguration::typeForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::swap021 (LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  mVariableNameArray.exchangeObjectAtIndexes (1, 2 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (1, 2 COMMA_THERE) ;
  uint32_t bitIndex = mVariableTypeArray (0 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 1 COMMA_THERE) ;
  bitIndex += mVariableTypeArray (1 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 2 COMMA_THERE) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::swap102 (LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  mVariableNameArray.exchangeObjectAtIndexes (0, 1 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (0, 1 COMMA_THERE) ;
  mBDDStartIndexArray.setObjectAtIndex (0, 0 COMMA_THERE) ;
  uint32_t bitIndex = mVariableTypeArray (0 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 1 COMMA_THERE) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::swap120 (LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  mVariableNameArray.exchangeObjectAtIndexes (0, 1 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (0, 1 COMMA_THERE) ;
  mVariableNameArray.exchangeObjectAtIndexes (1, 2 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (1, 2 COMMA_THERE) ;
  mBDDStartIndexArray.setObjectAtIndex (0, 0 COMMA_THERE) ;
  uint32_t bitIndex = mVariableTypeArray (0 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 1 COMMA_THERE) ;
  bitIndex += mVariableTypeArray (1 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 2 COMMA_THERE) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::swap201 (LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  mVariableNameArray.exchangeObjectAtIndexes (1, 2 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (1, 2 COMMA_THERE) ;
  mVariableNameArray.exchangeObjectAtIndexes (0, 1 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (0, 1 COMMA_THERE) ;
  mBDDStartIndexArray.setObjectAtIndex (0, 0 COMMA_THERE) ;
  uint32_t bitIndex = mVariableTypeArray (0 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 1 COMMA_THERE) ;
  bitIndex += mVariableTypeArray (1 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 2 COMMA_THERE) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void PrivateVariablesInRelationConfiguration::swap210 (LOCATION_ARGS) {
  macroUniqueSharedObject (this) ;
  mVariableNameArray.exchangeObjectAtIndexes (0, 2 COMMA_THERE) ;
  mVariableTypeArray.exchangeObjectAtIndexes (0, 2 COMMA_THERE) ;
  mBDDStartIndexArray.setObjectAtIndex (0, 0 COMMA_THERE) ;
  uint32_t bitIndex = mVariableTypeArray (0 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 1 COMMA_THERE) ;
  bitIndex += mVariableTypeArray (1 COMMA_THERE).BDDBitCount() ;
  mBDDStartIndexArray.setObjectAtIndex (bitIndex, 2 COMMA_THERE) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkConfiguration (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------
//  BinaryDecisionDiagramRelationConfiguration
//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration::BinaryDecisionDiagramRelationConfiguration (void) :
mVariablesPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration::~BinaryDecisionDiagramRelationConfiguration (void) {
  macroDetachSharedObject (mVariablesPtr) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration::BinaryDecisionDiagramRelationConfiguration (const BinaryDecisionDiagramRelationConfiguration & inSource) :
mVariablesPtr (nullptr) {
  macroAssignSharedObject (mVariablesPtr, inSource.mVariablesPtr) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration & BinaryDecisionDiagramRelationConfiguration::operator = (const BinaryDecisionDiagramRelationConfiguration & inSource) {
  if (this != & inSource) {
    macroAssignSharedObject (mVariablesPtr, inSource.mVariablesPtr) ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelationConfiguration::insulate (LOCATION_ARGS) {
  if (nullptr == mVariablesPtr) {
    macroMyNew (mVariablesPtr, PrivateVariablesInRelationConfiguration (THERE)) ;
  }else{
    macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
    if (!mVariablesPtr->isUniquelyReferenced ()) {
      PrivateVariablesInRelationConfiguration * ptr = nullptr ;
      macroMyNew (ptr, PrivateVariablesInRelationConfiguration (mVariablesPtr COMMA_THERE)) ;
      macroAssignSharedObject (mVariablesPtr, ptr) ;
      macroDetachSharedObject (ptr) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelationConfiguration::addVariable (const String & inVariableName,
                                           const BinaryDecisionDiagramRelationSingleType & inType) {
  insulate (HERE) ;
  macroValidSharedObject (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  mVariablesPtr->addVariable (inVariableName, inType) ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelationConfiguration::appendConfiguration (const BinaryDecisionDiagramRelationConfiguration & inConfiguration) {
  insulate (HERE) ;
  for (int32_t i=0 ; i<inConfiguration.variableCount() ; i++) {
    const String variableName = inConfiguration.nameForVariable (i COMMA_HERE) ;
    const BinaryDecisionDiagramRelationSingleType type = inConfiguration.typeForVariable (i COMMA_HERE) ;
    mVariablesPtr->addVariable (variableName, type) ;
  }
}

//--------------------------------------------------------------------------------------------------

String BinaryDecisionDiagramRelationConfiguration::nameForVariable (const int32_t inIndex
                                                   COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->nameForVariable (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType BinaryDecisionDiagramRelationConfiguration::typeForVariable (const int32_t inIndex
                                                               COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->typeForVariable (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BinaryDecisionDiagramRelationConfiguration::bitCount (void) const {
  uint32_t result = 0 ;
  if (nullptr != mVariablesPtr) {
    macroValidSharedObject (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
    result = mVariablesPtr->bitCount () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t BinaryDecisionDiagramRelationConfiguration::variableCount (void) const {
  int32_t result = 0 ;
  if (nullptr != mVariablesPtr) {
    macroValidSharedObject (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
    result = mVariablesPtr->variableCount () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BinaryDecisionDiagramRelationConfiguration::constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->constantCountForVariable (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BinaryDecisionDiagramRelationConfiguration::bddStartBitIndexForVariable (const int32_t inIndex
                                                               COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->bddStartBitIndexForVariable (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

uint32_t BinaryDecisionDiagramRelationConfiguration::bddBitCountForVariable (const int32_t inIndex
                                                          COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->bddBitCountForVariable (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

String BinaryDecisionDiagramRelationConfiguration::constantNameForVariableAndValue (const int32_t inIndex,
                                                                   const uint32_t inValue
                                                                   COMMA_LOCATION_ARGS) const {
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->constantNameForVariableAndValue (inIndex, inValue COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelationConfiguration::checkIdenticalTo (const BinaryDecisionDiagramRelationConfiguration & inConfiguration
                                                 COMMA_LOCATION_ARGS) const {
  bool same = mVariablesPtr == inConfiguration.mVariablesPtr ;
  if ((! same) && (nullptr != mVariablesPtr) && (nullptr != inConfiguration.mVariablesPtr)) {
    macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
    mVariablesPtr->checkIdenticalTo (inConfiguration.mVariablesPtr COMMA_THERE) ;
  }else if (! same) {
    printf ("*** BinaryDecisionDiagramRelationConfiguration::checkIdenticalTo failure ***\n") ;
    exit (1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelationConfiguration::deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) {
  insulate (THERE) ;
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->deleteVariableAtIndex (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelationConfiguration::deleteLastVariable (LOCATION_ARGS) {
  insulate (THERE) ;
  macroValidSharedObjectThere (mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  return mVariablesPtr->deleteLastVariable (THERE) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration BinaryDecisionDiagramRelationConfiguration::swap021 (LOCATION_ARGS) const {
  BinaryDecisionDiagramRelationConfiguration result = *this ;
  result.insulate (THERE) ;
  macroValidSharedObjectThere (result.mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  result.mVariablesPtr->swap021 (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration BinaryDecisionDiagramRelationConfiguration::swap102 (LOCATION_ARGS) const {
  BinaryDecisionDiagramRelationConfiguration result = *this ;
  result.insulate (THERE) ;
  macroValidSharedObjectThere (result.mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  result.mVariablesPtr->swap102 (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration BinaryDecisionDiagramRelationConfiguration::swap120 (LOCATION_ARGS) const {
  BinaryDecisionDiagramRelationConfiguration result = *this ;
  result.insulate (THERE) ;
  macroValidSharedObjectThere (result.mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  result.mVariablesPtr->swap120 (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration BinaryDecisionDiagramRelationConfiguration::swap201 (LOCATION_ARGS) const {
  BinaryDecisionDiagramRelationConfiguration result = *this ;
  result.insulate (THERE) ;
  macroValidSharedObjectThere (result.mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  result.mVariablesPtr->swap201 (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration BinaryDecisionDiagramRelationConfiguration::swap210 (LOCATION_ARGS) const {
  BinaryDecisionDiagramRelationConfiguration result = *this ;
  result.insulate (THERE) ;
  macroValidSharedObjectThere (result.mVariablesPtr, PrivateVariablesInRelationConfiguration) ;
  result.mVariablesPtr->swap210 (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
