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

class C_Relation::cVariables : public C_SharedObject {
//--- Constructor
  public : cVariables (LOCATION_ARGS) ;
  public : cVariables (cVariables * inPtr COMMA_LOCATION_ARGS) ;


  public : void addVariable (const C_String & inVariableName,
                             const C_TypeInRelation & inType) ;

//--- Attributes
  private : TC_UniqueArray <uint32_t> mBDDStartIndexArray ;
  private : TC_UniqueArray <C_String> mVariableNameArray ;
  private : TC_UniqueArray <C_TypeInRelation> mVariableTypeArray ;
} ;

//-----------------------------------------------------------------------------*

C_Relation::cVariables::cVariables (LOCATION_ARGS) :
C_SharedObject (THERE),
mBDDStartIndexArray (),
mVariableNameArray (),
mVariableTypeArray () {
}

//-----------------------------------------------------------------------------*

C_Relation::cVariables::cVariables (cVariables * inPtr
                                    COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mVariableNameArray (),
mVariableTypeArray () {
  macroValidSharedObject (inPtr, cVariables) ;
  mBDDStartIndexArray.addObjectsFromArray (inPtr->mBDDStartIndexArray) ;
  mVariableNameArray.addObjectsFromArray (inPtr->mVariableNameArray) ;
  mVariableTypeArray.addObjectsFromArray (inPtr->mVariableTypeArray) ;
}

//-----------------------------------------------------------------------------*

void C_Relation::cVariables::addVariable (const C_String & inVariableName,
                                          const C_TypeInRelation & inType) {
  if (mBDDStartIndexArray.count () == 0) {
    mBDDStartIndexArray.addObject (0) ;
  }else{
    const uint32_t lastIndex = mBDDStartIndexArray.lastObject (HERE) ;
    const uint32_t bitCount = mVariableTypeArray.lastObject (HERE).BDDBitCount() ;
    mBDDStartIndexArray.addObject (lastIndex + bitCount) ;
  }
  mVariableNameArray.addObject (inVariableName) ;
  mVariableTypeArray.addObject (inType) ;
}

//-----------------------------------------------------------------------------*
//  C_Relation                                                                 *
//-----------------------------------------------------------------------------*

C_Relation::C_Relation (void) :
mVariablesPtr (NULL),
mBDD () {
}

//-----------------------------------------------------------------------------*

C_Relation::~C_Relation (void) {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_Relation & inSource) :
mVariablesPtr (NULL),
mBDD (inSource.mBDD) {
}

//-----------------------------------------------------------------------------*

C_Relation & C_Relation::operator = (const C_Relation & inSource) {
  if (this != & inSource) {
    mBDD = inSource.mBDD ;
  }
  return *this ;
}

//-----------------------------------------------------------------------------*

void C_Relation::addVariable (const C_String & inVariableName,
                              const C_TypeInRelation & inType) {
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

void C_Relation::setToEmpty (void) {
  mBDD.setToFalse () ;
}

//-----------------------------------------------------------------------------*

void C_Relation::setToFull (void) {
  mBDD.setToTrue () ;
}

//-----------------------------------------------------------------------------*
