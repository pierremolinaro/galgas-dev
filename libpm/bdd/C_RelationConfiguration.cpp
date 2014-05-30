//
//  C_Relation.cpp
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//  Copyright (c) 2014 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#include "bdd/C_Relation.h"
#include "utilities/C_SharedObject.h"

//-----------------------------------------------------------------------------*
//  cVariablesInRelationConfiguration                                          *
//-----------------------------------------------------------------------------*

class cVariablesInRelationConfiguration : public C_SharedObject {
//--- Constructor
  public : cVariablesInRelationConfiguration (LOCATION_ARGS) ;
  public : cVariablesInRelationConfiguration (cVariablesInRelationConfiguration * inPtr COMMA_LOCATION_ARGS) ;


  public : void addVariable (const C_String & inVariableName,
                             const C_RelationSingleType & inType) ;

//--- Accessors
  public : uint32_t bitCount (void) const ;

  public : C_String nameForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public : C_RelationSingleType typeForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public : uint32_t constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public : void deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) ;

  public : void deleteLastVariable (LOCATION_ARGS) ;

  public : inline int32_t variableCount (void) const {
    return mBDDStartIndexArray.count () ;
  }

  public : inline uint32_t bddStartBitIndexForVariable (const int32_t inIndex
                                                        COMMA_LOCATION_ARGS) const {
    return mBDDStartIndexArray (inIndex COMMA_THERE) ;
  }

  public : inline uint32_t bddBitCountForVariable (const int32_t inIndex
                                                   COMMA_LOCATION_ARGS) const {
    return mVariableTypeArray (inIndex COMMA_THERE).BDDBitCount () ;
  }

  public : C_String constantNameForVariableAndValue (const int32_t inIndex,
                                                     const uint32_t inValue
                                                     COMMA_LOCATION_ARGS) const ;

//---
  public : void checkIdenticalTo (const cVariablesInRelationConfiguration * inVariables
                                  COMMA_LOCATION_ARGS) const ;

//--- Attributes
  private : TC_UniqueArray <uint32_t> mBDDStartIndexArray ;
  private : TC_UniqueArray <C_String> mVariableNameArray ;
  private : TC_UniqueArray <C_RelationSingleType> mVariableTypeArray ;
} ;

//-----------------------------------------------------------------------------*

cVariablesInRelationConfiguration::cVariablesInRelationConfiguration (LOCATION_ARGS) :
C_SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
}

//-----------------------------------------------------------------------------*

cVariablesInRelationConfiguration::cVariablesInRelationConfiguration (cVariablesInRelationConfiguration * inPtr
                                                 COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
  macroValidSharedObject (inPtr, cVariablesInRelationConfiguration) ;
  mBDDStartIndexArray.addObjectsFromArray (inPtr->mBDDStartIndexArray) ;
  mVariableNameArray.addObjectsFromArray (inPtr->mVariableNameArray) ;
  mVariableTypeArray.addObjectsFromArray (inPtr->mVariableTypeArray) ;
}

//-----------------------------------------------------------------------------*

void cVariablesInRelationConfiguration::addVariable (const C_String & inVariableName,
                                                       const C_RelationSingleType & inType) {
  if (mBDDStartIndexArray.count () == 0) {
    mBDDStartIndexArray.addObject (0) ;
  }else{
    mBDDStartIndexArray.addObject (bitCount ()) ;
  }
  mVariableNameArray.addObject (inVariableName) ;
  mVariableTypeArray.addObject (inType) ;
}

//-----------------------------------------------------------------------------*

void cVariablesInRelationConfiguration::checkIdenticalTo (const cVariablesInRelationConfiguration * inVariables
                                                          COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (inVariables, cVariablesInRelationConfiguration) ;
  bool same = mVariableNameArray.count() == inVariables->mVariableNameArray.count() ;
  MF_AssertThere (same,
                  "cVariablesInRelationConfiguration::checkIdenticalTo failure",
                  (int64_t) mVariableNameArray.count(),
                  (int64_t) inVariables->mVariableNameArray.count()) ;
  if (same) {
  
  }else{
    printf ("*** cVariablesInRelationConfiguration::checkIdenticalTo failure ***\n") ;
    exit (1) ;
  }
}

//-----------------------------------------------------------------------------*

void cVariablesInRelationConfiguration::deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) {
  mBDDStartIndexArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
  mVariableNameArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
  mVariableTypeArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

void cVariablesInRelationConfiguration::deleteLastVariable (LOCATION_ARGS) {
  mBDDStartIndexArray.removeLastObject (THERE) ;
  mVariableNameArray.removeLastObject (THERE) ;
  mVariableTypeArray.removeLastObject (THERE) ;
}

//-----------------------------------------------------------------------------*

uint32_t cVariablesInRelationConfiguration::constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE).constantCount () ;
}

//-----------------------------------------------------------------------------*

uint32_t cVariablesInRelationConfiguration::bitCount (void) const {
  return mBDDStartIndexArray.lastObject (HERE) + mVariableTypeArray.lastObject (HERE).BDDBitCount() ;
}

//-----------------------------------------------------------------------------*

C_String cVariablesInRelationConfiguration::constantNameForVariableAndValue (const int32_t inIndex,
                                                                               const uint32_t inValue
                                                                               COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE).nameForValue(inValue COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

C_String cVariablesInRelationConfiguration::nameForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableNameArray (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

C_RelationSingleType cVariablesInRelationConfiguration::typeForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*
//  C_RelationConfiguration                                                    *
//-----------------------------------------------------------------------------*

C_RelationConfiguration::C_RelationConfiguration (void) :
mVariablesPtr (NULL) {
}

//-----------------------------------------------------------------------------*

C_RelationConfiguration::~C_RelationConfiguration (void) {
  macroDetachSharedObject (mVariablesPtr) ;
}

//-----------------------------------------------------------------------------*

C_RelationConfiguration::C_RelationConfiguration (const C_RelationConfiguration & inSource) :
mVariablesPtr (NULL) {
  macroAssignSharedObject (mVariablesPtr, inSource.mVariablesPtr) ;
}

//-----------------------------------------------------------------------------*

C_RelationConfiguration & C_RelationConfiguration::operator = (const C_RelationConfiguration & inSource) {
  if (this != & inSource) {
    macroAssignSharedObject (mVariablesPtr, inSource.mVariablesPtr) ;
  }
  return *this ;
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::insulate (void) {
  if (NULL == mVariablesPtr) {
    macroMyNew (mVariablesPtr, cVariablesInRelationConfiguration (HERE)) ;
  }else{
    macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
    if (mVariablesPtr->retainCount () > 1) {
      cVariablesInRelationConfiguration * ptr = NULL ;
      macroMyNew (ptr, cVariablesInRelationConfiguration (mVariablesPtr COMMA_HERE)) ;
      macroAssignSharedObject (mVariablesPtr, ptr) ;
      macroDetachSharedObject (ptr) ;
    }
  }
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::addVariable (const C_String & inVariableName,
                                           const C_RelationSingleType & inType) {
  insulate () ;
  mVariablesPtr->addVariable (inVariableName, inType) ;
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::appendConfiguration (const C_RelationConfiguration & inConfiguration) {
  insulate () ;
  for (int32_t i=0 ; i<inConfiguration.variableCount() ; i++) {
    const C_String variableName = inConfiguration.nameForVariable (i COMMA_HERE) ;
    const C_RelationSingleType type = inConfiguration.typeForVariable (i COMMA_HERE) ;
    mVariablesPtr->addVariable (variableName, type) ;
  }
}

//-----------------------------------------------------------------------------*

C_String C_RelationConfiguration::nameForVariable (const int32_t inIndex
                                                   COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->nameForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

C_RelationSingleType C_RelationConfiguration::typeForVariable (const int32_t inIndex
                                                               COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->typeForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::bitCount (void) const {
  uint32_t result = 0 ;
  if (NULL != mVariablesPtr) {
    macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
    result = mVariablesPtr->bitCount () ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*

int32_t C_RelationConfiguration::variableCount (void) const {
  int32_t result = 0 ;
  if (NULL != mVariablesPtr) {
    macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
    result = mVariablesPtr->variableCount () ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->constantCountForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::bddStartBitIndexForVariable (const int32_t inIndex
                                                               COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->bddStartBitIndexForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::bddBitCountForVariable (const int32_t inIndex
                                                          COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->bddBitCountForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

C_String C_RelationConfiguration::constantNameForVariableAndValue (const int32_t inIndex,
                                                                   const uint32_t inValue
                                                                   COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->constantNameForVariableAndValue (inIndex, inValue COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::checkIdenticalTo (const C_RelationConfiguration & inConfiguration
                                                 COMMA_LOCATION_ARGS) const {
  bool same = mVariablesPtr == inConfiguration.mVariablesPtr ;
  if ((! same) && (NULL != mVariablesPtr) && (NULL != inConfiguration.mVariablesPtr)) {
    macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
    mVariablesPtr->checkIdenticalTo (inConfiguration.mVariablesPtr COMMA_THERE) ;
  }else if (! same) {
    printf ("*** C_RelationConfiguration::checkIdenticalTo failure ***\n") ;
    exit (1) ;
  }
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) {
  insulate () ;
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->deleteVariableAtIndex (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::deleteLastVariable (LOCATION_ARGS) {
  insulate () ;
  macroValidSharedObject (mVariablesPtr, cVariablesInRelationConfiguration) ;
  return mVariablesPtr->deleteLastVariable (THERE) ;
}

//-----------------------------------------------------------------------------*
