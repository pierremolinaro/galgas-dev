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
//  C_Relation::cVariables                                                     *
//-----------------------------------------------------------------------------*

class C_RelationConfiguration::cVariables : public C_SharedObject {
//--- Constructor
  public : cVariables (LOCATION_ARGS) ;
  public : cVariables (cVariables * inPtr COMMA_LOCATION_ARGS) ;


  public : void addVariable (const C_String & inVariableName,
                             const C_RelationSingleType & inType) ;

//--- Accessors
  public : uint32_t bitCount (void) const ;

  public : uint32_t constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

  public : inline uint32_t variableCount (void) const {
    return (uint32_t) mBDDStartIndexArray.count () ;
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
  public : void checkIdenticalTo (const cVariables * inVariables) const ;

//--- Attributes
  private : TC_UniqueArray <uint32_t> mBDDStartIndexArray ;
  private : TC_UniqueArray <C_String> mVariableNameArray ;
  private : TC_UniqueArray <C_RelationSingleType> mVariableTypeArray ;
} ;

//-----------------------------------------------------------------------------*

C_RelationConfiguration::cVariables::cVariables (LOCATION_ARGS) :
C_SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
}

//-----------------------------------------------------------------------------*

C_RelationConfiguration::cVariables::cVariables (cVariables * inPtr
                                                 COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
  macroValidSharedObject (inPtr, cVariables) ;
  mBDDStartIndexArray.addObjectsFromArray (inPtr->mBDDStartIndexArray) ;
  mVariableNameArray.addObjectsFromArray (inPtr->mVariableNameArray) ;
  mVariableTypeArray.addObjectsFromArray (inPtr->mVariableTypeArray) ;
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::cVariables::addVariable (const C_String & inVariableName,
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

void C_RelationConfiguration::cVariables::checkIdenticalTo (const cVariables * inVariables) const {
  macroValidSharedObject (inVariables, cVariables) ;
  bool same = mVariableNameArray.count() == inVariables->mVariableNameArray.count() ;
  if (same) {
  
  }else{
    printf ("*** C_RelationConfiguration::cVariables::checkIdenticalTo failure ***\n") ;
    exit (1) ;
  }
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::cVariables::constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE).constantCount () ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::cVariables::bitCount (void) const {
  return mBDDStartIndexArray.lastObject (HERE) + mVariableTypeArray.lastObject (HERE).BDDBitCount() ;
}

//-----------------------------------------------------------------------------*

C_String C_RelationConfiguration::cVariables::constantNameForVariableAndValue (const int32_t inIndex,
                                                                               const uint32_t inValue
                                                                               COMMA_LOCATION_ARGS) const {
  return mVariableTypeArray (inIndex COMMA_THERE).nameForValue(inValue COMMA_THERE) ;
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

void C_RelationConfiguration::addVariable (const C_String & inVariableName,
                                           const C_RelationSingleType & inType) {
  if (NULL == mVariablesPtr) {
    macroMyNew (mVariablesPtr, cVariables (HERE)) ;
  }else{
    macroValidSharedObject (mVariablesPtr, cVariables) ;
    if (mVariablesPtr->retainCount () > 1) {
      cVariables * ptr = NULL ;
      macroMyNew (ptr, cVariables (mVariablesPtr COMMA_HERE)) ;
      macroAssignSharedObject (mVariablesPtr, ptr) ;
      macroDetachSharedObject (ptr) ;
    }
  }
  mVariablesPtr->addVariable (inVariableName, inType) ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::bitCount (void) const {
  uint32_t result = 0 ;
  if (NULL != mVariablesPtr) {
    macroValidSharedObject (mVariablesPtr, cVariables) ;
    result = mVariablesPtr->bitCount () ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::variableCount (void) const {
  uint32_t result = 0 ;
  if (NULL != mVariablesPtr) {
    macroValidSharedObject (mVariablesPtr, cVariables) ;
    result = mVariablesPtr->variableCount () ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariables) ;
  return mVariablesPtr->constantCountForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::bddStartBitIndexForVariable (const int32_t inIndex
                                                               COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariables) ;
  return mVariablesPtr->bddStartBitIndexForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

uint32_t C_RelationConfiguration::bddBitCountForVariable (const int32_t inIndex
                                                          COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariables) ;
  return mVariablesPtr->bddBitCountForVariable (inIndex COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

C_String C_RelationConfiguration::constantNameForVariableAndValue (const int32_t inIndex,
                                                                   const uint32_t inValue
                                                                   COMMA_LOCATION_ARGS) const {
  macroValidSharedObject (mVariablesPtr, cVariables) ;
  return mVariablesPtr->constantNameForVariableAndValue (inIndex, inValue COMMA_THERE) ;
}

//-----------------------------------------------------------------------------*

void C_RelationConfiguration::checkIdenticalTo (const C_RelationConfiguration & inConfiguration) const {
  bool same = mVariablesPtr == inConfiguration.mVariablesPtr ;
  if ((! same) && (NULL != mVariablesPtr) && (NULL != inConfiguration.mVariablesPtr)) {
    macroValidSharedObject (mVariablesPtr, cVariables) ;
    mVariablesPtr->checkIdenticalTo (inConfiguration.mVariablesPtr) ;
  }else if (! same) {
    printf ("*** C_RelationConfiguration::checkIdenticalTo failure ***\n") ;
    exit (1) ;
  }
}

//-----------------------------------------------------------------------------*
