//--------------------------------------------------------------------------------------------------
//
//  DirectedGraph : algorithms on ordered graphs                                               
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2013, ..., 2025 Pierre Molinaro.
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

#include "GenericArray.h"
#include "UInt32Set.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

class GraphEdge final {
  public: uint32_t mSource ;
  public: uint32_t mTarget ;

  public: GraphEdge (void) :
  mSource (UINT32_MAX),
  mTarget (UINT32_MAX) {
  }

  public: GraphEdge (const uint32_t inSource, const uint32_t inTarget) :
  mSource (inSource),
  mTarget (inTarget) {
  }
} ;

//--------------------------------------------------------------------------------------------------

class DirectedGraph final {
//--- Default constructor
  public: DirectedGraph (void) ;

//--- Example
  public: static void example (void) ;
  
//--- Methods
  public: void addNode (const uint32_t inNodeIndex) ;

  public: void addNodes (const UInt32Set inNodes) ;

  public: void removeNode (const uint32_t inNodeIndex) ;

  public: void addEdge (const uint32_t inSourceNodeIndex,
                        const uint32_t inTargetNodeIndex) ;

  public: void print (void) const ;

//--- Accessors
  public: uint32_t unusedNodeIndex (void) const ;

  public: String graphvizString (const GenericUniqueArray <String> & inNodeNameArray) const ;
  
  public: void getNodeBoolArray (GenericUniqueArray <bool> & outNodes) const ;
  
  public: void getNodeValueArray (GenericUniqueArray <uint32_t> & outNodes) const ;
  
  public: bool isNodeDefined (const uint32_t inNodeIndex) const ;
  
  public: uint32_t nodeCount (void) const ;
  
  public: uint32_t edgeCount (void) const ;
  
  public: void getNodesWithNoPredecessor (GenericUniqueArray <uint32_t> & outNodes) const ;
  
  public: void getNodesWithNoSuccessor (GenericUniqueArray <uint32_t> & outNodes) const ;
  
  public: void getNodesInvolvedInCircularities (GenericUniqueArray <uint32_t> & outNodes) const ;
  
  public: void getDominators (GenericUniqueArray <UInt32Set> & outDominators
                              COMMA_LOCATION_ARGS) const ;
  
  public: void removeEdgesToDominator (LOCATION_ARGS) ;
  
  public: void removeEdgesToNode (const uint32_t inNodeIndex COMMA_LOCATION_ARGS) ;
  
  public: void getEdges (GenericUniqueArray <GraphEdge> & outEdges) const ;
  
  public: void topologicalSort (GenericUniqueArray <uint32_t> & outSortedNodes,
                                GenericUniqueArray <uint32_t> & outUnsortedNodes) const ;
  
  public: void depthFirstTopologicalSort (GenericUniqueArray <uint32_t> & outSortedNodes,
                                          GenericUniqueArray <uint32_t> & outUnsortedNodes) const ;
  
  public: DirectedGraph reversedGraph (void) const ;
  
  public: DirectedGraph subGraphFromNodes (const UInt32Set & inStartNodes,
                                           const UInt32Set & inNodesToExclude) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: void checkGraph (LOCATION_ARGS) const ;
  #endif

//--- Attributes
  private: UInt32Set mNodes ;
  private: GenericArray <UInt32Set> mEdges ;
  private: GenericArray <UInt32Set> mReverseEdges ;
} ;

//--------------------------------------------------------------------------------------------------
