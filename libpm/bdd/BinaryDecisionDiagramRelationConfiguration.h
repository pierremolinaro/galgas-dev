//
//  BinaryDecisionDiagramRelation.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "BinaryDecisionDiagram.h"
#include "BinaryDecisionDiagramRelationSingleType.h"

//--------------------------------------------------------------------------------------------------

class BinaryDecisionDiagramRelationConfiguration final {
//--- Default constructor (no variable, empty)
  public: BinaryDecisionDiagramRelationConfiguration (void) ;

//--- Destructor
  public: ~ BinaryDecisionDiagramRelationConfiguration (void) ;

//--- Handling copy
  public: BinaryDecisionDiagramRelationConfiguration (const BinaryDecisionDiagramRelationConfiguration & inSource) ;
  public: BinaryDecisionDiagramRelationConfiguration & operator = (const BinaryDecisionDiagramRelationConfiguration & inSource) ;

//--- Add variable
  public: void addVariable (const String & inVariableName,
                            const BinaryDecisionDiagramRelationSingleType & inType) ;

  public: void appendConfiguration (const BinaryDecisionDiagramRelationConfiguration & inConfiguration) ;

//--- Accessors
  public: int32_t variableCount (void) const ;
  public: uint32_t bitCount (void) const ;
  public: String nameForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public: BinaryDecisionDiagramRelationSingleType typeForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public: uint32_t constantCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public: uint32_t bddStartBitIndexForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public: uint32_t bddBitCountForVariable (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public: String constantNameForVariableAndValue (const int32_t inIndex,
                                                  const uint32_t inValue
                                                  COMMA_LOCATION_ARGS) const ;
  public: void deleteVariableAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) ;
  public: void deleteLastVariable (LOCATION_ARGS) ;
  
//---
  public: void checkIdenticalTo (const BinaryDecisionDiagramRelationConfiguration & inConfiguration
                                 COMMA_LOCATION_ARGS) const ;

//--- Operations on 3 set configurations  
  public: BinaryDecisionDiagramRelationConfiguration swap021 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelationConfiguration swap102 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelationConfiguration swap120 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelationConfiguration swap201 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelationConfiguration swap210 (LOCATION_ARGS) const ;

//--- Private method
  private: void insulate (LOCATION_ARGS) ;

//--- Attributes
  private: class PrivateVariablesInRelationConfiguration * mVariablesPtr ; 
} ;

//--------------------------------------------------------------------------------------------------
