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
#include "BinaryDecisionDiagramRelationConfiguration.h"

//--------------------------------------------------------------------------------------------------

class BinaryDecisionDiagramRelation final {
//--- Default constructor (no variable, empty)
  public: BinaryDecisionDiagramRelation (void) ;

//--- Constructor (One variable, type, empty or full)
  public: BinaryDecisionDiagramRelation (const String & inVariableName,
                                         const BinaryDecisionDiagramRelationSingleType & inVariableType,
                                         const bool isFull) ;

//--- Constructor (variables, empty or full)
  public: BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelationConfiguration & inConfiguration,
                                         const bool isFull) ;

//--- Private constructor (variables, eBDD)
  private: BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelationConfiguration & inConfiguration,
                                          const BinaryDecisionDiagram inBDD) ;

//--- Constructor (Variable compared with constant)
  public: BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelationConfiguration & inConfiguration,
                                         const int32_t inVariableIndex,
                                         const BinaryDecisionDiagram::compareEnum inComparaison,
                                         const uint64_t inConstant
                                         COMMA_LOCATION_ARGS) ;

//--- Destructor
  public: ~ BinaryDecisionDiagramRelation (void) ;

//--- Handling copy
  public: BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelation & inSource) ;
  public: BinaryDecisionDiagramRelation & operator = (const BinaryDecisionDiagramRelation & inSource) ;

//--- Add variable
  public: void addVariable (const String & inVariableName,
                            const BinaryDecisionDiagramRelationSingleType & inType) ;

  public: void appendConfiguration (const BinaryDecisionDiagramRelationConfiguration & inConfiguration) ;

//--- Set
  public: void setToEmpty (void) ;
  public: void setToFull (void) ;

//--- Operators
  public: inline bool isEmpty (void) const { return mBDD.isFalse () ; }
  public: inline bool isFull (void) const { return mBDD.isTrue () ; }

  public: bool operator == (const BinaryDecisionDiagramRelation & inRelation) const ;
  public: bool operator != (const BinaryDecisionDiagramRelation & inRelation) const ;

  public: void andWith (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) ;
  public: void orWith (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) ;
  public: BinaryDecisionDiagramRelation andOp (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) const ;
  public: BinaryDecisionDiagramRelation orOp (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) const ;
  public: BinaryDecisionDiagramRelation operator ~ (void) const ;

  public: BinaryDecisionDiagramRelation accessibleStatesFrom (const BinaryDecisionDiagramRelation & inStartStates,
                                                              int32_t * outIterationCount
                                                              COMMA_LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation transitiveClosure (int32_t * outIterationCount) const ;

  public: bool containsValue (const int32_t inVariableIndex,
                              const uint64_t inValue
                              COMMA_LOCATION_ARGS) const ;

  public: void getValueArray (GenericUniqueArray <uint64_t> & outArray) const ;

  public: uint64_t value64Count (void) const ;

  public: void getArray (GenericUniqueArray <GenericUniqueArray <uint64_t> > & outArray
                         COMMA_LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation relationByDeletingLastVariable (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation exitsOnVariable (const int32_t inVariableIndex COMMA_LOCATION_ARGS) const ;

//--- Operations on 2 set relations  
  public: BinaryDecisionDiagramRelation transposedRelation (LOCATION_ARGS) const ;

//--- Operations on 3 set relations  
  public: BinaryDecisionDiagramRelation swap021 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation swap102 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation swap120 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation swap201 (LOCATION_ARGS) const ;

  public: BinaryDecisionDiagramRelation swap210 (LOCATION_ARGS) const ;

//--- Accessors
  public: inline int32_t variableCount (void) const {
    return mConfiguration.variableCount () ;
  }
  
  public: inline uint32_t bitCount (void) const {
    return mConfiguration.bitCount () ;
  }
  
  public: BinaryDecisionDiagramRelationConfiguration configuration (void) const ;
  public: BinaryDecisionDiagram bdd (void) const ;
  
//--- Attributes
  private: BinaryDecisionDiagramRelationConfiguration mConfiguration ; 
  private: BinaryDecisionDiagram mBDD ;
} ;

//--------------------------------------------------------------------------------------------------
