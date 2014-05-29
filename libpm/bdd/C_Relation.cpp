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
//  C_Relation                                                                 *
//-----------------------------------------------------------------------------*

C_Relation::C_Relation (void) :
mConfiguration (),
mBDD () {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_RelationConfiguration & inConfiguration,
                        const C_BDD inBDD) :
mConfiguration (inConfiguration),
mBDD (inBDD) {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_RelationConfiguration & inConfiguration,
                        const bool isFull) :
mConfiguration (inConfiguration),
mBDD () {
  if (isFull) {
    mBDD.setToTrue () ;
  }
}

//-----------------------------------------------------------------------------*

C_Relation::~C_Relation (void) {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_Relation & inSource) :
mConfiguration (inSource.mConfiguration),
mBDD (inSource.mBDD) {
}

//-----------------------------------------------------------------------------*

C_Relation & C_Relation::operator = (const C_Relation & inSource) {
  if (this != & inSource) {
    mConfiguration = inSource.mConfiguration ;
    mBDD = inSource.mBDD ;
  }
  return *this ;
}

//-----------------------------------------------------------------------------*

void C_Relation::addVariable (const C_String & inVariableName,
                              const C_RelationSingleType & inType) {
  mConfiguration.addVariable (inVariableName, inType) ;
}

//-----------------------------------------------------------------------------*

C_RelationConfiguration C_Relation::configuration (void) const {
  return mConfiguration ;
}

//-----------------------------------------------------------------------------*

C_BDD C_Relation::bdd (void) const {
  return mBDD ;
}

//-----------------------------------------------------------------------------*

void C_Relation::setToEmpty (void) {
  mBDD.setToFalse () ;
}

//-----------------------------------------------------------------------------*

void C_Relation::setToFull (void) {
  mBDD.setToTrue () ;
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_RelationConfiguration & inConfiguration,
                        const int32_t inVariableIndex,
                        const C_BDD::compareEnum inComparaison,
                        const uint64_t inConstant
                        COMMA_LOCATION_ARGS) :
mConfiguration (inConfiguration),
mBDD () {
  mBDD = C_BDD::varCompareConst (inConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE),
                                 inConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE),
                                 inComparaison,
                                 inConstant) ;
}

//-----------------------------------------------------------------------------*

void C_Relation::operator &= (const C_Relation & inRelation) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration) ;
  mBDD &= inRelation.mBDD ;
}

//-----------------------------------------------------------------------------*

void C_Relation::operator |= (const C_Relation & inRelation) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration) ;
  mBDD |= inRelation.mBDD ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::operator & (const C_Relation & inRelation) const {
  C_Relation result = *this ;
  result &= inRelation ;
  return result ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::operator | (const C_Relation & inRelation) const {
  C_Relation result = *this ;
  result |= inRelation ;
  return result ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::operator ~ (void) const {
  C_Relation result = *this ;
  result.mBDD.negate () ;
  return result ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::accessibleStatesFrom (const C_Relation & inStartStates,
                                             int32_t * outIterationCount
                                             COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    const uint32_t startRelationVariableCount = inStartStates.variableCount () ;
    const uint32_t accessibilityVariableCount = variableCount () ;
  #endif
  MF_AssertThere ((startRelationVariableCount + startRelationVariableCount) == accessibilityVariableCount,
                  "C_Relation::accessibleStatesFrom error: start state has %lld variables, accessibility relation has %lld variables",
                  (int64_t) startRelationVariableCount,
                  (int64_t) accessibilityVariableCount) ;
  const uint32_t bitCount = inStartStates.bitCount () ;
//--- Current object is edge [x, y].
//    Accessible states set is computed by:
// accessible [x] += initial [x] | exists y (accessible [y] & edge [y, x]) ;
//
//--- Compute edge [y, x]
  const C_BDD edgeYX = mBDD.swap21 (bitCount, bitCount) ;
  C_BDD accessible = inStartStates.mBDD ;
  C_BDD v ;
  C_BDD accessibleY ;
  int32_t iterationCount = 0 ;
  do{
    v = accessible ;
    iterationCount ++ ;
    accessibleY = accessible.translate (bitCount, bitCount) ;
    accessible |= (accessibleY & edgeYX).existsOnBitsAfterNumber (bitCount) ;
  }while (v != accessible) ;
  if (outIterationCount != NULL) {
    * outIterationCount = iterationCount ;
  }
  return C_Relation (inStartStates.configuration(), accessible) ;

}

//-----------------------------------------------------------------------------*

bool C_Relation::containsValue (const int32_t inVariableIndex,
                                const uint64_t inValue
                                COMMA_LOCATION_ARGS) const {
  return mBDD.containsValue64 (inValue,
                               mConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE),
                               mConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE)) ;
}

//-----------------------------------------------------------------------------*

void C_Relation::getValueArray (TC_UniqueArray <uint64_t> & outArray) const {
  mBDD.buildValue64Array (outArray, mConfiguration.bitCount ()) ;
}

//-----------------------------------------------------------------------------*
