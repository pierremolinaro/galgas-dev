//
//  BinaryDecisionDiagramRelationSingleType.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "String-class.h"

//--------------------------------------------------------------------------------------------------

class BinaryDecisionDiagramRelationSingleType final {
//--- Internal class
  public: class InternalType ;

//--- Default constructor
  public: inline BinaryDecisionDiagramRelationSingleType (void) : mTypePtr (nullptr) {}

//--- Constructor with an enumerated type
  public: BinaryDecisionDiagramRelationSingleType (const String & inTypeName,
                                                   const GenericUniqueArray <String> & inConstantNameArray
                                                   COMMA_LOCATION_ARGS) ;

//--- Constructor with an unsigned type
  public: BinaryDecisionDiagramRelationSingleType (const String & inTypeName,
                                                   const uint32_t inValueCount // [0, inValueCount - 1]
                                                   COMMA_LOCATION_ARGS) ;

//--- Accessors
  public: String typeName (void) const ;
  public: uint32_t BDDBitCount (void) const ;
  public: uint32_t constantCount (void) const ;
  public: String nameForValue (const uint32_t inIndex
                               COMMA_LOCATION_ARGS) const ;

//--- Destructor
  public: ~ BinaryDecisionDiagramRelationSingleType (void) ;

//--- Handling copy
  public: BinaryDecisionDiagramRelationSingleType (const BinaryDecisionDiagramRelationSingleType & inSource) ;
  public: BinaryDecisionDiagramRelationSingleType & operator = (const BinaryDecisionDiagramRelationSingleType & inSource) ;

//--- Identical type ?
  public: inline bool operator == (const BinaryDecisionDiagramRelationSingleType & inOperand) const {
    return mTypePtr == inOperand.mTypePtr ;
  }

//--- Private property
  private: InternalType * mTypePtr ;
} ;

//--------------------------------------------------------------------------------------------------
