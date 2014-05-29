//
//  C_Relation.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//  Copyright (c) 2014 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#ifndef galgas_developer_C_Relation_h
#define galgas_developer_C_Relation_h

//-----------------------------------------------------------------------------*

#include "bdd/C_BDD.h"
#include "bdd/C_RelationSingleType.h"

//-----------------------------------------------------------------------------*

class C_RelationConfiguration {
  private : class cVariables ;
//--- Default constructor (no variable, empty)
  public : C_RelationConfiguration (void) ;

//--- Destructor
  public : virtual ~ C_RelationConfiguration (void) ;

//--- Handling copy
  public : C_RelationConfiguration (const C_RelationConfiguration & inSource) ;
  public : C_RelationConfiguration & operator = (const C_RelationConfiguration & inSource) ;

//--- Add variable
  public : void addVariable (const C_String & inVariableName,
                             const C_RelationSingleType & inType) ;

//--- Accessors
  public : uint32_t variableCount (void) const ;
  public : uint32_t bitCount (void) const ;
  public : uint32_t bddStartBitIndexForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public : uint32_t bddBitCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public : C_String constantNameForVariableAndValue (const int32_t inIndex,
                                                     const uint32_t inValue
                                                     COMMA_LOCATION_ARGS) const ;

//---
  public : void checkIdenticalTo (const C_RelationConfiguration & inConfiguration) const ;
  
//--- Attributes
  private : cVariables * mVariablesPtr ; 
} ;

//-----------------------------------------------------------------------------*

class C_Relation {
//--- Default constructor (no variable, empty)
  public : C_Relation (void) ;

//--- Constructor (variables, empty or full)
  public : C_Relation (const C_RelationConfiguration & inConfiguration,
                       const bool isFull) ;

//--- Private constructor (variables, eBDD)
  private : C_Relation (const C_RelationConfiguration & inConfiguration,
                        const C_BDD inBDD) ;

//--- Constructor (Variable compared with constant)
  public : C_Relation (const C_RelationConfiguration & inConfiguration,
                       const int32_t inVariableIndex,
                       const C_BDD::compareEnum inComparaison,
                       const uint64_t inConstant
                       COMMA_LOCATION_ARGS) ;

//--- Destructor
  public : virtual ~ C_Relation (void) ;

//--- Handling copy
  public : C_Relation (const C_Relation & inSource) ;
  public : C_Relation & operator = (const C_Relation & inSource) ;

//--- Add variable
  public : void addVariable (const C_String & inVariableName,
                             const C_RelationSingleType & inType) ;

//--- Set
  public : void setToEmpty (void) ;
  public : void setToFull (void) ;

//--- Operators
  public : void operator &= (const C_Relation & inRelation) ;
  public : void operator |= (const C_Relation & inRelation) ;
  public : C_Relation operator & (const C_Relation & inRelation) const ;
  public : C_Relation operator | (const C_Relation & inRelation) const ;
  public : C_Relation operator ~ (void) const ;

  public : C_Relation accessibleStatesFrom (const C_Relation & inStartStates,
                                            int32_t * outIterationCount
                                            COMMA_LOCATION_ARGS) const ;

  public : bool containsValue (const int32_t inVariableIndex,
                               const uint64_t inValue
                               COMMA_LOCATION_ARGS) const ;

  public : void getValueArray (TC_UniqueArray <uint64_t> & outArray) const ;

//--- Accessors
  public : inline uint32_t variableCount (void) const {
    return mConfiguration.variableCount () ;
  }
  
  public : inline uint32_t bitCount (void) const {
    return mConfiguration.bitCount () ;
  }
  
  public : C_RelationConfiguration configuration (void) const ;
  public : C_BDD bdd (void) const ;
  
//--- Attributes
  private : C_RelationConfiguration mConfiguration ; 
  private : C_BDD mBDD ;
} ;

//-----------------------------------------------------------------------------*


#endif
