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

#include "DirectedGraph.h"

//--------------------------------------------------------------------------------------------------

DirectedGraph::DirectedGraph (void) :
mNodes (),
mEdges (),
mReverseEdges () {
}

//--------------------------------------------------------------------------------------------------

DirectedGraph DirectedGraph::reversedGraph (void) const {
  DirectedGraph result ;
  result.mNodes = mNodes ;
  result.mEdges = mReverseEdges ;
  result.mReverseEdges = mEdges ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    result.checkGraph (HERE) ;
  #endif
  return result ;
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::addNode (const uint32_t inNodeIndex) {
  mNodes.add (inNodeIndex) ;
  while (int32_t (inNodeIndex) >= mEdges.count ()) {
    mEdges.appendObject (UInt32Set ()) ;
    mReverseEdges.appendObject (UInt32Set ()) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::addNodes (const UInt32Set inNodes) {
  mNodes |= inNodes ;
  const uint32_t lastPlusOne = mNodes.firstValueNotInSet () ;
  while (lastPlusOne > uint32_t (mEdges.count ())) {
    mEdges.appendObject (UInt32Set ()) ;
    mReverseEdges.appendObject (UInt32Set ()) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::removeNode (const uint32_t inNodeIndex) {
  if (inNodeIndex < uint32_t (mEdges.count ())) {
    mNodes.remove (inNodeIndex) ;
    const UInt32Set targetSet = mEdges (int32_t (inNodeIndex) COMMA_HERE) ;
    GenericUniqueArray <uint32_t> targetList ; targetSet.getValueArray (targetList) ;
    for (int32_t i = 0 ; i < targetList.count () ; i++) {
      const uint32_t targetIndex = targetList (i COMMA_HERE) ;
      mReverseEdges (int32_t (targetIndex) COMMA_HERE).remove (inNodeIndex) ;
    }
    mEdges.setObjectAtIndex (UInt32Set (), int32_t (inNodeIndex) COMMA_HERE) ;
  }
  const uint32_t f = mNodes.firstValueNotInSet () ;
  while (f < uint32_t (mEdges.count ())) {
    mEdges.removeLastObject (HERE) ;
    mReverseEdges.removeLastObject (HERE) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::getNodeBoolArray (GenericUniqueArray <bool> & outNodes) const {
  mNodes.getBoolValueArray (outNodes) ;
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::getNodeValueArray (GenericUniqueArray <uint32_t> & outNodes) const {
  mNodes.getValueArray (outNodes) ;
}

//--------------------------------------------------------------------------------------------------

bool DirectedGraph::isNodeDefined (const uint32_t inNodeIndex) const {
  return mNodes.contains (inNodeIndex) ;
}

//--------------------------------------------------------------------------------------------------

uint32_t DirectedGraph::nodeCount (void) const {
  return mNodes.count () ;
}

//--------------------------------------------------------------------------------------------------

uint32_t DirectedGraph::edgeCount (void) const {
  uint32_t result = 0 ;
  for (int32_t i = 0 ; i < mEdges.count () ; i++) {
    if (isNodeDefined (uint32_t (i))) {
      result += mEdges (i COMMA_HERE).count () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t DirectedGraph::unusedNodeIndex (void) const {
  uint32_t result = nodeCount () ;
  while (isNodeDefined (result)) {
    result += 1 ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String DirectedGraph::graphvizString (const GenericUniqueArray <String> & inNodeNameArray) const {
  String s = "digraph G {\n" ;
  for (int32_t i = 0 ; i < mEdges.count () ; i++) {
    if (isNodeDefined (uint32_t (i))) {
      s.appendCString ("  ") ;
      s.appendString (inNodeNameArray (i COMMA_HERE).utf8RepresentationEnclosedWithin ('"', false)) ;
      s.appendCString (" [shape=rectangle] ;\n") ;
      const UInt32Set targetSet = mEdges (i COMMA_HERE) ;
      GenericUniqueArray <uint32_t> targetList ; targetSet.getValueArray (targetList) ;
      for (int32_t j = 0 ; j < targetList.count () ; j++) {
        const uint32_t targetIndex = targetList (j COMMA_HERE) ;
        s.appendCString ("  ") ;
        s.appendString (inNodeNameArray (i COMMA_HERE).utf8RepresentationEnclosedWithin ('"', false)) ;
        s.appendCString (" -> ") ;
        s.appendString (inNodeNameArray (int32_t (targetIndex) COMMA_HERE).utf8RepresentationEnclosedWithin ('"', false)) ;
        s.appendCString (" ;\n") ;
      }
    }
  }
  s.appendCString ("}\n") ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void DirectedGraph::checkGraph (LOCATION_ARGS) const {
    macroAssertThere (mEdges.count () == mReverseEdges.count (), "mEdges.count () %lld != mReverseEdges.count () %lld", mEdges.count (), mReverseEdges.count ()) ;
    macroAssertThere (mNodes.firstValueNotInSet () == (uint32_t) (mEdges.count ()), "mNodes.firstValueNotIsSet () %lld != mEdges.count () %lld", mNodes.firstValueNotInSet (), mEdges.count ()) ;
  //---
    for (uint32_t i = 0 ; i < uint32_t (mEdges.count ()) ; i++) {
      GenericUniqueArray <uint32_t> targetList ; mEdges ((int32_t) i COMMA_HERE).getValueArray (targetList) ;
      for (int32_t j = 0 ; j < targetList.count () ; j++) {
        const uint32_t target = targetList (j COMMA_HERE) ;
        macroAssertThere (mReverseEdges ((int32_t) target COMMA_HERE).contains (i), "! mReverseEdges (%lld COMMA_HERE).contains (%lld)", target, i) ;
      }
    }
  //---
    for (uint32_t i = 0 ; i < uint32_t (mReverseEdges.count ()) ; i++) {
      GenericUniqueArray <uint32_t> sourceList ; mReverseEdges ((int32_t) i COMMA_HERE).getValueArray (sourceList) ;
      for (int32_t j = 0 ; j < sourceList.count () ; j++) {
        const uint32_t source = sourceList (j COMMA_HERE) ;
        macroAssertThere (mEdges (int32_t (source) COMMA_HERE).contains (i), "! mEdges (%lld COMMA_HERE).contains (%lld)", source, i) ;
      }
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

void DirectedGraph::getEdges (GenericUniqueArray <GraphEdge> & outEdges) const {
  outEdges.removeAllKeepingCapacity () ;
  for (int32_t i = 0 ; i < mEdges.count () ; i++) {
    GenericUniqueArray <uint32_t> targetList ; mEdges (i COMMA_HERE).getValueArray (targetList) ;
    for (int32_t j = 0 ; j < targetList.count () ; j++) {
      const GraphEdge edge (uint32_t (i), targetList (j COMMA_HERE)) ;
      outEdges.appendObject (edge) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::getNodesWithNoPredecessor (GenericUniqueArray <uint32_t> & outNodes) const {
  outNodes.removeAllKeepingCapacity () ;
  for (uint32_t i = 0 ; i < uint32_t (mReverseEdges.count ()) ; i++) {
    if (isNodeDefined (i) && mReverseEdges (int32_t (i) COMMA_HERE).isEmpty ()) {
      outNodes.appendObject (i) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::getNodesWithNoSuccessor (GenericUniqueArray <uint32_t> & outNodes) const {
  outNodes.removeAllKeepingCapacity () ;
  for (uint32_t i = 0 ; i < uint32_t (mEdges.count ()) ; i++) {
    if (isNodeDefined (i) && mEdges (int32_t (i) COMMA_HERE).isEmpty ()) {
      outNodes.appendObject (i) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::getNodesInvolvedInCircularities (GenericUniqueArray <uint32_t> & outNodes) const {
  outNodes.removeAllKeepingCapacity () ;
//--- Get working copies
  GenericUniqueArray <bool> nodes ; getNodeBoolArray (nodes) ;
  GenericUniqueArray <uint32_t> successorCount ;
  GenericUniqueArray <uint32_t> predecessorCount ;
  for (int32_t i = 0 ; i < mEdges.count () ; i++) {
    successorCount.appendObject (mEdges (i COMMA_HERE).count ()) ;
  }
  for (int32_t i = 0 ; i < mReverseEdges.count () ; i++) {
    predecessorCount.appendObject (mReverseEdges (i COMMA_HERE).count ()) ;
  }
//--- Eliminate nodes that have no successor or no predecessor
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (int32_t i = 0 ; i < nodes.count () ; i++) {
      if (nodes (i COMMA_HERE) && ((successorCount (i COMMA_HERE) == 0) || (predecessorCount (i COMMA_HERE) == 0))) {
        loop = true ;
        nodes.setObjectAtIndex (false, i COMMA_HERE) ;
        GenericUniqueArray <uint32_t> s ; mEdges (i COMMA_HERE).getValueArray (s) ;
        for (int32_t j = 0 ; j < s.count () ; j++) {
          predecessorCount.decrementAtIndex ((int32_t) s (j COMMA_HERE) COMMA_HERE) ;
        }
        mReverseEdges (i COMMA_HERE).getValueArray (s) ;
        for (int32_t j = 0 ; j < s.count () ; j++) {
          successorCount.decrementAtIndex (int32_t (s (j COMMA_HERE)) COMMA_HERE) ;
        }
      }
    }
  }

//--- Add circular nodes
  for (int32_t i = 0 ; i < nodes.count () ; i++) {
    if (nodes (i COMMA_HERE)) {
      outNodes.appendObject (uint32_t (i)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

DirectedGraph DirectedGraph::subGraphFromNodes (const UInt32Set & inStartNodes,
                                                const UInt32Set & inNodesToExclude) const {
  GenericUniqueArray <bool> nodeBoolArray ; mNodes.getBoolValueArray (nodeBoolArray) ;
  DirectedGraph result ;
  { UInt32Set nodeSet = inStartNodes ;
    nodeSet -= inNodesToExclude ;
    result.addNodes (nodeSet) ;
  }
  bool loop = true ;
  while (loop) {
    loop = false ;
    GenericUniqueArray <uint32_t> sourceNodeArray ; result.getNodeValueArray (sourceNodeArray) ;
    for (int32_t i = 0 ; i < sourceNodeArray.count () ; i++) {
      const uint32_t sourceNodeIndex = sourceNodeArray (i COMMA_HERE) ;
      if (nodeBoolArray (int32_t (sourceNodeIndex) COMMA_HERE)) {
        loop = true ;
        nodeBoolArray.setObjectAtIndex (false, (int32_t) sourceNodeIndex COMMA_HERE) ;
        UInt32Set s = mEdges ((int32_t) sourceNodeIndex COMMA_HERE) ;
        s -= inNodesToExclude ;
        GenericUniqueArray <uint32_t> targetNodeArray ; s.getValueArray (targetNodeArray) ;
        for (int32_t j = 0 ; j < targetNodeArray.count () ; j++) {
          result.addEdge (sourceNodeIndex, targetNodeArray (j COMMA_HERE)) ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::removeEdgesToNode (const uint32_t inNodeIndex
                                       COMMA_LOCATION_ARGS) {
//--- get nodes that have edges to this node
  const UInt32Set nodeSet = mReverseEdges (int32_t (inNodeIndex) COMMA_THERE) ;
//--- Remove edges in reverse egde array
  mReverseEdges.setObjectAtIndex (UInt32Set (), int32_t (inNodeIndex) COMMA_THERE) ;
//--- Remove edge in direct edge array
  GenericUniqueArray <uint32_t> sourceNodeArray ; nodeSet.getValueArray (sourceNodeArray) ;
  for (int32_t i = 0 ; i < sourceNodeArray.count () ; i++) {
    const uint32_t sourceNodeIndex = sourceNodeArray (i COMMA_HERE) ;
    mEdges (int32_t (sourceNodeIndex) COMMA_HERE).remove (inNodeIndex) ;
  }
//--- Check
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::addEdge (const uint32_t inSourceNodeIndex,
                             const uint32_t inTargetNodeIndex) {
  addNode (inSourceNodeIndex) ;
  addNode (inTargetNodeIndex) ;
  mEdges (int32_t (inSourceNodeIndex) COMMA_HERE).add (inTargetNodeIndex) ;
  mReverseEdges (int32_t (inTargetNodeIndex) COMMA_HERE).add (inSourceNodeIndex) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::print (void) const {
  for (int32_t i = 0 ; i < mEdges.count () ; i++) {
    if (isNodeDefined (uint32_t (i))) {
      printf ("Node %d:\n", i) ;
      GenericUniqueArray <uint32_t> s ; mEdges (i COMMA_HERE).getValueArray (s) ;
      for (int32_t j = 0 ; j < s.count () ; j++) {
        printf ("  %d --> %d\n", i, s (j COMMA_HERE)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::topologicalSort (GenericUniqueArray <uint32_t> & outSortedNodes,
                                     GenericUniqueArray <uint32_t> & outUnsortedNodes) const {
  outSortedNodes.removeAllKeepingCapacity () ;
  outUnsortedNodes.removeAllKeepingCapacity () ;
//--- Get working copies
  GenericUniqueArray <bool> nodes ; getNodeBoolArray (nodes) ;
  GenericUniqueArray <uint32_t> dependencyCount (mReverseEdges.count (), 0 COMMA_HERE) ;
  for (int32_t i = 0 ; i < mReverseEdges.count () ; i++) {
    GenericUniqueArray <uint32_t> s ; mReverseEdges (i COMMA_HERE).getValueArray (s) ;
    for (int32_t j = 0 ; j < s.count () ; j++) {
      dependencyCount.incrementAtIndex (int32_t (s (j COMMA_HERE)) COMMA_HERE) ;
    }
  }
//--- Loop
  bool loop = true ;
  GenericUniqueArray <uint32_t> s ;
  while (loop) {
    loop = false ;
    for (int32_t i = 0 ; i < nodes.count () ; i++) {
      if (nodes (i COMMA_HERE) && (dependencyCount (i COMMA_HERE) == 0)) {
        loop = true ;
        outSortedNodes.appendObject (uint32_t (i)) ;
        nodes.setObjectAtIndex (false, i COMMA_HERE) ;
        mReverseEdges (i COMMA_HERE).getValueArray (s) ;
        for (int32_t j = 0 ; j < s.count () ; j++) {
          dependencyCount.decrementAtIndex (int32_t (s (j COMMA_HERE)) COMMA_HERE) ;
        }
      }
    }
  }
//--- Add unusorted nodes
  for (int32_t i = 0 ; i < nodes.count () ; i++) {
    if (nodes (i COMMA_HERE)) {
      outUnsortedNodes.appendObject (uint32_t (i)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::depthFirstTopologicalSort (GenericUniqueArray <uint32_t> & outSortedNodes,
                                               GenericUniqueArray <uint32_t> & outUnsortedNodes) const {
  outSortedNodes.removeAllKeepingCapacity () ;
  outUnsortedNodes.removeAllKeepingCapacity () ;
//--- Get working copies
  GenericUniqueArray <bool> nodes ; getNodeBoolArray (nodes) ;
  GenericUniqueArray <uint32_t> dependencyCount (mReverseEdges.count (), 0 COMMA_HERE) ;
  for (int32_t i = 0 ; i < mReverseEdges.count () ; i++) {
    GenericUniqueArray <uint32_t> s ; mReverseEdges (i COMMA_HERE).getValueArray (s) ;
    for (int32_t j = 0 ; j < s.count () ; j++) {
      dependencyCount.incrementAtIndex (int32_t (s (j COMMA_HERE)) COMMA_HERE) ;
    }
  }
//--- Loop
  GenericUniqueArray <uint32_t> workingArray ;
  GenericUniqueArray <uint32_t> s ;
  bool loop = true ;
  while (loop) {
  //--- Find a node without any dependence  
    for (int32_t i = 0 ; (i < dependencyCount.count ()) && (workingArray.count () == 0) ; i++) {
      if (nodes (i COMMA_HERE) && (dependencyCount (i COMMA_HERE) == 0)) {
        nodes.setObjectAtIndex (false, i COMMA_HERE) ;
        workingArray.appendObject ((uint32_t) i) ;
      }
    }
    loop = workingArray.count () > 0 ;
    if (loop) {
      const uint32_t node = workingArray.lastObject (HERE) ;
      workingArray.removeLastObject (HERE) ;
      outSortedNodes.appendObject (node) ;
      mReverseEdges (int32_t (node) COMMA_HERE).getValueArray (s) ;
      for (int32_t j = 0 ; j < s.count () ; j++) {
        const uint32_t candidate = s (j COMMA_HERE) ;
        dependencyCount.decrementAtIndex (int32_t (candidate) COMMA_HERE) ;
        if (dependencyCount (int32_t (candidate) COMMA_HERE) == 0) {
          workingArray.appendObject (candidate) ;
          nodes.setObjectAtIndex (false, int32_t (candidate) COMMA_HERE) ;
        }
      }
    }
  }
//--- Add unusorted nodes
  for (int32_t i = 0 ; i < nodes.count () ; i++) {
    if (nodes (i COMMA_HERE)) {
      outUnsortedNodes.appendObject (uint32_t (i)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// http://en.wikipedia.org/wiki/Dominator_(graph_theory)
// a node d dominates a node n if every path from the start node to n must go through d

void DirectedGraph::getDominators (GenericUniqueArray <UInt32Set> & outDominators
                                   COMMA_LOCATION_ARGS) const {
  outDominators.removeAllKeepingCapacity () ;
//--- Enter initial dominators
  GenericUniqueArray <bool> startNodeFlag ;
  for (int32_t i = 0 ; i < mEdges.count () ; i++) {
    startNodeFlag.appendObject (false) ;
    outDominators.appendObject (isNodeDefined (uint32_t (i)) ? mNodes : UInt32Set ()) ;
  }
//--- Start nodes are their own dominator
  GenericUniqueArray <uint32_t> startNodeArray ;
  getNodesWithNoPredecessor (startNodeArray) ;
  macroAssertThere (startNodeArray.count () == 1, "startNodeArray.count () == %lld != 1", startNodeArray.count (), 0) ;
  for (int32_t i = 0 ; i < startNodeArray.count () ; i++) {
    const uint32_t startNode = startNodeArray (i COMMA_HERE) ;
    outDominators.setObjectAtIndex (UInt32Set (startNode), int32_t (startNode) COMMA_HERE) ;
    startNodeFlag.setObjectAtIndex (true, int32_t (startNode) COMMA_HERE) ;
  }
//--- 
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (int32_t node = 0 ; node < mEdges.count () ; node++) {
      if (isNodeDefined (uint32_t (node)) && ! startNodeFlag (node COMMA_HERE)) {
        UInt32Set newDominators = mNodes ;
      //--- Add dominators of predecessor nodes
        GenericUniqueArray <uint32_t> s ; mReverseEdges (node COMMA_HERE).getValueArray (s) ;
        for (int32_t j = 0 ; j < s.count () ; j++) {
          const uint32_t aPredecessor = s (j COMMA_HERE) ;
          newDominators &= outDominators (int32_t (aPredecessor) COMMA_HERE) ;
        }
      //--- A node dominates itself
        newDominators.add (uint32_t (node)) ;
      //--- Replace if not equal
        if (newDominators != outDominators (node COMMA_HERE)) {
          outDominators.setObjectAtIndex (newDominators, node COMMA_HERE) ;
          loop = true ;
        }
      }    
    }
  }
}

//--------------------------------------------------------------------------------------------------

void DirectedGraph::removeEdgesToDominator (LOCATION_ARGS) {
  GenericUniqueArray <UInt32Set> dominators ; getDominators (dominators COMMA_THERE) ;
  for (int32_t node = 0 ; node < mEdges.count () ; node++) {
    if (isNodeDefined (uint32_t (node))) {
      const UInt32Set dom = dominators (node COMMA_HERE) ;
      GenericUniqueArray <uint32_t> s ; mEdges (node COMMA_HERE).getValueArray (s) ;
      for (int32_t i = 0 ; i < s.count () ; i++) {
        const uint32_t target = s (i COMMA_HERE) ;
        if (dom.contains (target)) {
          mEdges (node COMMA_HERE).remove (target) ;
          mReverseEdges (int32_t (target) COMMA_HERE).remove (uint32_t (node)) ;
        }
      }
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------
//    E X A M P L E
//--------------------------------------------------------------------------------------------------

void DirectedGraph::example (void) {
  DirectedGraph g ;

  g.addEdge (17, 33) ;
  g.addEdge (17, 35) ;
  g.addEdge (17, 36) ;
  g.addEdge (33, 37) ;
  g.addEdge (37, 39) ;
  g.addEdge (36, 35) ;
  g.addEdge (37, 40) ;
  g.addEdge (40, 35) ;
  g.addEdge (39, 35) ;
  g.addEdge (40, 42) ;
  g.addEdge (42, 35) ;
  g.addEdge (35, 45) ;
  g.addEdge (35, 46) ;
  g.addEdge (45, 47) ;
  g.addEdge (45, 48) ;
  g.addEdge (46, 51) ;
  g.addEdge (46, 52) ;
  g.addEdge (51, 54) ;
  g.addEdge (51, 47) ;
  g.addEdge (52, 57) ;
  g.addEdge (52, 58) ;
  g.addEdge (54, 47) ;
  g.addEdge (57, 47) ;
  g.addEdge (57, 60) ;
  g.addEdge (58, 63) ;
  g.addEdge (58, 64) ;
  g.addEdge (60, 47) ;
  g.addEdge (63, 47) ;
  g.addEdge (63, 66) ;
  g.addEdge (64, 69) ;
  g.addEdge (64, 70) ;
  g.addEdge (66, 47) ;
  g.addEdge (69, 47) ;
  g.addEdge (69, 72) ;
  g.addEdge (70, 47) ;
  g.addEdge (70, 75) ;
  g.addEdge (72, 47) ;
  g.addEdge (75, 47) ;
  g.addEdge (75, 78) ;
  g.addEdge (78, 47) ;
  g.addEdge (78, 47) ;

//--- Print
  printf ("--- Graph\n") ;
  g.print () ;
  printf ("--- Nodes with no predecessor:") ;
  GenericUniqueArray <uint32_t> nodes ;
  g.getNodesWithNoPredecessor (nodes) ;
  for (int32_t i=0 ; i<nodes.count () ; i++) {
    printf (" %u", nodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Nodes with no successor:") ;
  g.getNodesWithNoSuccessor (nodes) ;
  for (int32_t i=0 ; i<nodes.count () ; i++) {
    printf (" %u", nodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Circularities:") ;
  g.getNodesInvolvedInCircularities (nodes) ;
  for (int32_t i=0 ; i<nodes.count () ; i++) {
    printf (" %u", nodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  GenericUniqueArray <UInt32Set> dominators  ;
  g.getDominators (dominators COMMA_HERE) ;
  printf ("--- Dominators:\n") ;
  for (int32_t i=0 ; i<dominators.count () ; i++) {
    if (g.isNodeDefined ((uint32_t) i)) {
      printf ("  Node %u:", i) ;
      dominators (i COMMA_HERE).getValueArray (nodes) ;
      for (int32_t j=0 ; j<nodes.count () ; j++) {
        printf (" %u", nodes (j COMMA_HERE)) ;
      }
      printf ("\n") ;
    }
  }
  printf ("--- Topological sort\n") ;
  GenericUniqueArray <uint32_t> sortedNodes ;
  GenericUniqueArray <uint32_t> unsortedNodes ;
  g.topologicalSort (sortedNodes, unsortedNodes) ;
  printf ("  Sorted nodes:") ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    printf (" %u", sortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("  Unsorted nodes:") ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    printf (" %u", unsortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Remove edges to dominators:\n") ;
  g.removeEdgesToDominator (HERE) ;
  g.print () ;
  printf ("--- Reverse topological sort\n") ;
  g.reversedGraph ().topologicalSort (sortedNodes, unsortedNodes) ;
  printf ("  Sorted nodes:") ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    printf (" %u", sortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("  Unsorted nodes:") ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    printf (" %u", unsortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Reverse depth first topological sort\n") ;
  g.reversedGraph ().depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;
  printf ("  Sorted nodes:") ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    printf (" %u", sortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("  Unsorted nodes:") ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    printf (" %u", unsortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("Remove nodes\n") ;
  bool loop = true ;
  while (loop) {
    GenericUniqueArray <uint32_t> theNodes ; g.getNodeValueArray (theNodes) ;
    loop = theNodes.count () > 0 ;
    if (loop) {
      g.removeNode (theNodes (theNodes.count () / 2 COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
