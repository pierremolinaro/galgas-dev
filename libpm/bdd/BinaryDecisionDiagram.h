//--------------------------------------------------------------------------------------------------
//
//     BDD package (implementation of ROBDD)                                                     
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 1999, ..., 2024 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "M_machine.h"
#include "UInt128.h"
#include "GenericUniqueArray.h"
#include "GenericArray.h"
#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

#include <stdio.h>

//--------------------------------------------------------------------------------------------------

class C_bdd_value_traversing ;
class String ;
class AbstractOutputStream ;

//--------------------------------------------------------------------------------------------------

class BinaryDecisionDiagram final {
//--- enum for comparison operators
  public: enum compareEnum {kEqual, kNotEqual, kLowerOrEqual,
                            kStrictLower, kGreaterOrEqual, kStrictGreater} ;

//--- Constructors and destructor
  public: BinaryDecisionDiagram (void) ; // Get a false BDD
  private: BinaryDecisionDiagram (const uint32_t inInternalValue) ; // Internal, do not use
  public: BinaryDecisionDiagram (const uint32_t inVariable, const bool inSign) ;
  public: ~BinaryDecisionDiagram (void) ;

//--- Control copy
  public: BinaryDecisionDiagram (const BinaryDecisionDiagram & inSource) ;
  public: BinaryDecisionDiagram & operator = (const BinaryDecisionDiagram & inSource) ;

//--- Decision diagram root
  private: uint32_t mBDDvalue ;

//--- Link between existing instances
  private: BinaryDecisionDiagram * mPtrToPreviousBDD ;
  private: BinaryDecisionDiagram * mPtrToNextBDD ;

//--- Set to false or true
  public: void setToFalse (void) ;
  public: void setToTrue (void) ;

//--- Test BDD
  public: inline bool isFalse (void) const { return mBDDvalue == 0 ; }
  public: inline bool isTrue (void) const { return mBDDvalue == 1 ; }
  public: bool isComplemented (void) const ;

  public: inline bool operator == (const BinaryDecisionDiagram & inOperand) const { return mBDDvalue == inOperand.mBDDvalue ; }
  public: inline bool operator != (const BinaryDecisionDiagram & inOperand) const { return mBDDvalue != inOperand.mBDDvalue ; }
  public: inline uint32_t integerValue (void) const { return mBDDvalue ; }

//--- Operations on a BDD
  public: void operator &= (const BinaryDecisionDiagram & inOperand) ; // And
  public: void operator |= (const BinaryDecisionDiagram & inOperand) ; // Or
  public: void negate (void) ; 

//--- Operations between BDDs
  public: BinaryDecisionDiagram operator & (const BinaryDecisionDiagram & inOperand) const ; // And
  public: BinaryDecisionDiagram operator | (const BinaryDecisionDiagram & inOperand) const ; // Or
  public: BinaryDecisionDiagram equalTo (const BinaryDecisionDiagram & inOperand) const ; // Equivalent
  public: BinaryDecisionDiagram notEqualTo (const BinaryDecisionDiagram & inOperand) const ; // Different
  public: BinaryDecisionDiagram lowerOrEqual (const BinaryDecisionDiagram & inOperand) const ; 
  public: BinaryDecisionDiagram lowerThan (const BinaryDecisionDiagram & inOperand) const ;
  public: BinaryDecisionDiagram greaterOrEqual (const BinaryDecisionDiagram & inOperand) const ;
  public: BinaryDecisionDiagram greaterThan (const BinaryDecisionDiagram & inOperand) const ;
  public: BinaryDecisionDiagram implies (const BinaryDecisionDiagram & inOperand) const ; // ->
  public: static BinaryDecisionDiagram ite (const BinaryDecisionDiagram & f, const BinaryDecisionDiagram & g, const BinaryDecisionDiagram & h) ; // ite (f, g, h)
  public: BinaryDecisionDiagram operator ~ (void) const ; // get complement
  public: BinaryDecisionDiagram bddByLeftShifting (const uint32_t inLeftShiftCount) const ;
  public: BinaryDecisionDiagram bddByRightShifting (const uint32_t inRightShiftCount) const ;

//--- for all and exists
  public: BinaryDecisionDiagram forallOnBitNumber (const uint32_t numeroBit) const ;
  public: BinaryDecisionDiagram forallOnBitsAfterNumber (const uint32_t numeroBit) const ;

  public: BinaryDecisionDiagram existsOnBitNumber (const uint32_t numeroBit) const ;
  public: BinaryDecisionDiagram existsOnBitRange (const uint32_t inFirstBit, const uint32_t inBitCount) const ;
  public: BinaryDecisionDiagram existsOnBitsAfterNumber (const uint32_t numeroBit) const ;

//--- Comparison between BDDs
  public: BinaryDecisionDiagram compareWithBDD (const compareEnum inComparison, const BinaryDecisionDiagram & inOperand) const ;

//--- Build a BDD result of integer comparison
  public: static BinaryDecisionDiagram varCompareVar (const uint32_t inLeftFirstIndex,
                                       const uint32_t inDimension,
                                       const compareEnum inComparison,
                                       const uint32_t inRightFirstIndex) ;

  public: static BinaryDecisionDiagram varCompareConst (const uint32_t inFirstIndex,
                                         const uint32_t inDimension,
                                         const compareEnum inComparison,
                                         const uint64_t inComparisonConstant) ;

  public: static BinaryDecisionDiagram bddWithConstants (const uint32_t * inValues,
                                         const uint32_t * inBitCountArray,
                                         const int32_t inEntryCount) ;

//--- Buil a BDD from a value list. This method sorts value list in ascending order
  public: static BinaryDecisionDiagram buildBDDFromValueList (uint64_t * ioValueArray,
                                              const uint32_t inValueCount,
                                              const uint32_t inBitCount) ;

//--- Get BDD values count
  public: uint64_t valueCount64 (const uint32_t inVariableCount) const ;

  public: UInt128 valueCount128 (const uint32_t inVariableCount) const ;

  public: BigSigned valueCount (const uint32_t inVariableCount) const ;

  public: uint64_t valueCount64UsingCache (const uint32_t inVariableCount,
                                           GenericUniqueArray <uint64_t> & ioDirectCacheArray,
                                           GenericUniqueArray <uint64_t> & ioComplementCacheArray) const ;

  public: UInt128 valueCount128UsingCache (const uint32_t inVariableCount,
                                           GenericUniqueArray <UInt128> & ioDirectCacheArray,
                                           GenericUniqueArray <UInt128> & ioComplementCacheArray) const ;

  public: BigSigned valueCountUsingCache (const uint32_t inVariableCount,
                                          GenericUniqueArray <BigSigned> & ioDirectCacheArray,
                                          GenericUniqueArray <BigSigned> & ioComplementCacheArray) const ;

//--- Return highest bit index + 1
  public: uint32_t significantVariableCount (void) const ;

//--- Get nth BDD value
  public: BinaryDecisionDiagram getNthBDD (const uint64_t inNthBDDvalue,
                            const uint32_t inVariableCount) const ;

//--- Get BDD range in 'inOperand' BDD
  public: uint64_t getBDDrange (const BinaryDecisionDiagram & inOperand,
                               const uint32_t inVariableCount) const ;

//--- Get BDD absolute value
  public: uint64_t getBDDabsoluteValue (const uint32_t inVariableCount) const ;
  
//--- Get BDD nodes count
  public: uint32_t getBDDnodesCount (void) const ;

//--- Test if a BDD does contain a value
  public: bool containsValue64 (const uint64_t inValue,
                                const uint32_t inFirstBit,
                                const uint32_t inBitCount) const ;

  public: bool containsValue (const GenericArray <bool> & inValue,
                              const uint32_t inFirstBit,
                              const uint32_t inBitCount) const ;

//------------------------ Updating a relation
  public: BinaryDecisionDiagram updateRelation (const uint32_t * inRelationBitNeededCountArray,
                                uint32_t* * inRelationBitCurrentCountArray,
                                const int32_t inRelationCardinality) const ;

//--- Translate BDD bits
  public: BinaryDecisionDiagram translate (const uint32_t inVariableCount,
                           const uint32_t inTranslation) const ;

  public: void getBoolArray (GenericUniqueArray <bool> & outArray,
                             const uint32_t inMaxValues,
                             const uint32_t inBitSize) const ;

//---- Substituing variables
  public: BinaryDecisionDiagram substitution (const uint32_t * inSubstitutionArray,
                              const uint32_t inVariableCount
                              COMMA_LOCATION_ARGS) const ;

  public: BinaryDecisionDiagram exchangeVariables (const uint32_t var1, const uint32_t var2) const ;

  public: BinaryDecisionDiagram rollDownVariables (const uint32_t var1, const uint32_t var2) const ;

  public: BinaryDecisionDiagram rollUpVariables (const uint32_t var1, const uint32_t var2) const ;

//--- BDD as 2-relations
  public: BinaryDecisionDiagram swap10 (const uint32_t inBitSize1,
                        const uint32_t inBitSize2) const ;

  public: BinaryDecisionDiagram accessibleStates (const BinaryDecisionDiagram & inInitialStateSet,
                                  const uint32_t inBitSize,
                                  int32_t * outIterationCount) const ;

  public: BinaryDecisionDiagram transitiveClosure (const uint32_t inBitSize,
                                   int32_t * outIterationCount) const ;

  public: void getArray2 (GenericUniqueArray <GenericUniqueArray <uint64_t> > & outArray,
                          const uint32_t inMaxValueCount,
                          const uint32_t inBitSize1,
                          const uint32_t inBitSize2) const ;

//--- BDD as 3-relations
  public: BinaryDecisionDiagram swap021 (const uint32_t inBitSize1,
                         const uint32_t inBitSize2,
                         const uint32_t inBitSize3) const ;

  public: BinaryDecisionDiagram swap102 (const uint32_t inBitSize1,
                         const uint32_t inBitSize2,
                         const uint32_t inBitSize3) const ;

  public: BinaryDecisionDiagram swap120 (const uint32_t inBitSize1,
                         const uint32_t inBitSize2,
                         const uint32_t inBitSize3) const ;

  public: BinaryDecisionDiagram swap201 (const uint32_t inBitSize1,
                         const uint32_t inBitSize2,
                         const uint32_t inBitSize3) const ;

  public: BinaryDecisionDiagram swap210 (const uint32_t inBitSize1,
                         const uint32_t inBitSize2,
                         const uint32_t inBitSize3) const ;



//--- Printing
  public: String graphvizRepresentation (void) const ;
  public: String graphvizRepresentationWithNames (const GenericUniqueArray <String> & inBitNames) const ;

  public: void print (AbstractOutputStream & outputStream) const ;

  public: void printHeader (AbstractOutputStream & outputStream) const ;

  public: void printWithHeader (AbstractOutputStream & outputStream) const ;

  public: void print (AbstractOutputStream & outputStream,
                       const GenericUniqueArray <String> & inVariablesNames,
                       const GenericUniqueArray <int32_t> & inBitCounts) const ;

  public: void print (AbstractOutputStream & outputStream,
                       const GenericUniqueArray <int32_t> & inValueSeparation,
                       const GenericUniqueArray <int32_t> & inBitCounts,
                       const int32_t inPrefixedSpaceCount) const ;

//--- Buid string compressed representation
  public: void buildCompressedLittleEndianStringValueArray (GenericUniqueArray <String> & outStringArray
                                                             COMMA_LOCATION_ARGS) const ;

  public: void buildCompressedLittleEndianStringValueArray (GenericUniqueArray <String> & outStringArray,
                                                             const uint32_t inVariableCount
                                                             COMMA_LOCATION_ARGS) const ;

  public: void buildCompressedBigEndianStringValueArray (GenericUniqueArray <String> & outStringArray
                                                          COMMA_LOCATION_ARGS) const ;

  public: void buildCompressedBigEndianStringValueArray (GenericUniqueArray <String> & outStringArray,
                                                          const uint32_t inVariableCount
                                                          COMMA_LOCATION_ARGS) const ;

//--- Mark all nodes 
  public: void markAllBDDnodes (void) ;

//--- Check all BDDs are well formed 
  public: static void checkAllBDDsAreWellFormed (LOCATION_ARGS) ;

//--- Check a BDD is well formed 
  public:  void checkBDDIsWellFormed (LOCATION_ARGS) ;

//--- Traversing BDD : build an array containing all values
  public: void buildValue64Array (GenericUniqueArray <uint64_t> & outValuesArray,
                                   const uint32_t inVariableCount) const ;

  public: void buildValueArray (GenericUniqueArray <GenericArray <bool> > & outValuesArray,
                                  const uint32_t inVariableCount) const ;

  public: void buildLittleEndianStringValueArray (GenericUniqueArray <String> & outStringArray,
                                                   const uint32_t inVariableCount) const ;

  public: void buildBigEndianStringValueArray (GenericUniqueArray <String> & outStringArray,
                                                const uint32_t inVariableCount) const ;

  public: String queryStringValue (LOCATION_ARGS) const ;

//--- Build a BDD from the string returned by 'queryStringValue'
  public: static BinaryDecisionDiagram BDDWithPredicateString (const String & inPredicateStringValue
                                                COMMA_LOCATION_ARGS) ;

//--- Traversing BBD (call C_bdd_value_traversing::action method for every value) 
  public: void traverseBDDvalues (C_bdd_value_traversing & inTraversing,
                                   const uint32_t inVariableCount) const ;

//--- Internal method
  private: void initLinks (void) ;

//--- Controlling nodes unique map
  public: static void setHashMapMaxSize (const uint32_t inPowerOfTwoSize) ;

//--- Controlling caches (constraints max size of cache to be < 2**inPowerOfTwo)
  public: static void setSingleOperandOperationCacheMaxSize (const uint32_t inPowerOfTwo) ;
  public: static void setANDOperationCacheMaxSize (const uint32_t inPowerOfTwo) ;

//--- Controlling information message display (by default: no display)
  public: static bool displaysInformationMessages (void) ;
  public: static void setDisplaysInformationMessages (const bool inFlag) ;

//--- Memory Usage
  public: static uint32_t currentMemoryUsage (void) ; // In MB
  public: static uint32_t maximumMemoryUsage (void) ; // In MB
  public: static void setMaximumMemoryUsage (const uint32_t inMaxMemoryUsage) ; // In MB

//--- Unmark all BDD nodes
  public: static void unmarkAllExistingBDDnodes (void) ;

//--- Marked nodes count
  public: static uint32_t getMarkedNodesCount (void) ;

//--- Get existing nodes count
  public: static uint32_t getExistingNodesCount (void) ;

//---- Suppress unused nodes
  public: static void markAndSweepUnusedNodes (void) ;

//--- Size of a node 
  public: static uint32_t getBDDnodeSize (void) ;
  public: static uint32_t getBDDinstancesCount (void) ;
  public: static uint32_t getCreatedNodesCount (void)  ;

//--- Print BDD package statistics 
  public: static void printBDDpackageOperationsSummary (AbstractOutputStream & inStream) ;

//--- Free BDD data structures
  public: static void freeBDDStataStructures (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//
//   Abstract class for value traversing of a BDD                                                
//
//--------------------------------------------------------------------------------------------------

class C_bdd_value_traversing {
//--- Constructor et destructor
  public: C_bdd_value_traversing (void) {}
  public: virtual ~C_bdd_value_traversing (void) {}

//--- Virtual method called for every value
  public: virtual void action (const bool * tableauDesValeurs,
                               const uint32_t inVariableCount) = 0 ;

//--- No instance copy
  private: C_bdd_value_traversing (const C_bdd_value_traversing &) = delete ;
  private: C_bdd_value_traversing & operator = (const C_bdd_value_traversing &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
