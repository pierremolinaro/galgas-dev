//---------------------------------------------------------------------------*
//                                                                           *
//  C_DirectedGraph : algorithms on ordered graphs                           *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2013, ..., 2013 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "utilities/C_DirectedGraph.h"

//---------------------------------------------------------------------------*

#include <stdio.h>

//---------------------------------------------------------------------------*

C_DirectedGraph::C_DirectedGraph (void) :
mNodeDefinition (),
mEdges (),
mReverseEdges () {
}

//---------------------------------------------------------------------------*

C_DirectedGraph C_DirectedGraph::reversedGraph (void) const {
  C_DirectedGraph result ;
  result.mNodeDefinition = mNodeDefinition ;
  result.mEdges = mReverseEdges ;
  result.mReverseEdges = mEdges ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    result.checkGraph (HERE) ;
  #endif
  return result ;
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::defineNode (const PMUInt32 inNodeIndex) {
  mNodeDefinition.add (inNodeIndex) ;
  while (((PMSInt32) inNodeIndex) >= mEdges.count ()) {
    mEdges.addObject (C_UIntSet ()) ;
    mReverseEdges.addObject (C_UIntSet ()) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::definedNodes (TC_UniqueArray <bool> & outNodes) const {
  mNodeDefinition.getBoolValueArray (outNodes) ;
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::definedNodeArray (TC_Array <PMUInt32> & outNodes) const {
  mNodeDefinition.getValueArray (outNodes) ;
}

//---------------------------------------------------------------------------*

bool C_DirectedGraph::isNodeDefined (const PMUInt32 inNodeIndex) const {
  return mNodeDefinition.contains (inNodeIndex) ;
}

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void C_DirectedGraph::checkGraph (LOCATION_ARGS) const {
    MF_AssertThere (mEdges.count () == mReverseEdges.count (), "mEdges.count () %lld != mReverseEdges.count () %lld", mEdges.count (), mReverseEdges.count ()) ;
  //---
    for (PMSInt32 i=0 ; i<mEdges.count () ; i++) {
      TC_UniqueArray <PMUInt32> targetList ; mEdges (i COMMA_HERE).getValueArray (targetList) ;
      for (PMSInt32 j=0 ; j<targetList.count () ; j++) {
        const PMUInt32 target = targetList (j COMMA_HERE) ;
        MF_AssertThere (mReverseEdges (target COMMA_HERE).contains (i), "! mReverseEdges (%lld COMMA_HERE).contains (%lld)", target, i) ;
      }
    }
  //---
    for (PMSInt32 i=0 ; i<mReverseEdges.count () ; i++) {
      TC_UniqueArray <PMUInt32> sourceList ; mReverseEdges (i COMMA_HERE).getValueArray (sourceList) ;
      for (PMSInt32 j=0 ; j<sourceList.count () ; j++) {
        const PMUInt32 source = sourceList (j COMMA_HERE) ;
        MF_AssertThere (mEdges (source COMMA_HERE).contains (i), "! mEdges (%lld COMMA_HERE).contains (%lld)", source, i) ;
      }
    }
  }
#endif

//---------------------------------------------------------------------------*

void C_DirectedGraph::edges (TC_UniqueArray <cEdge> & outEdges) const {
  outEdges.setCountToZero () ;
  for (PMSInt32 i=0 ; i<mEdges.count () ; i++) {
    TC_UniqueArray <PMUInt32> targetList ; mEdges (i COMMA_HERE).getValueArray (targetList) ;
    for (PMSInt32 j=0 ; j<targetList.count () ; i++) {
      const cEdge edge = {i, targetList (j COMMA_HERE)} ;
      outEdges.addObject (edge) ;
    }
  }
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::getNodesWithNoPredecessor (TC_UniqueArray <PMUInt32> & outNodes) const {
  outNodes.setCountToZero () ;
  for (PMSInt32 i=0 ; i<mReverseEdges.count () ; i++) {
    if (isNodeDefined (i) && mReverseEdges (i COMMA_HERE).isEmpty ()) {
      outNodes.addObject (i) ;
    }
  }
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::getNodesWithNoSuccessor (TC_UniqueArray <PMUInt32> & outNodes) const {
  outNodes.setCountToZero () ;
  for (PMSInt32 i=0 ; i<mEdges.count () ; i++) {
    if (isNodeDefined (i) && mEdges (i COMMA_HERE).isEmpty ()) {
      outNodes.addObject (i) ;
    }
  }
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::getNodesInvolvedInCircularities (TC_UniqueArray <PMUInt32> & outNodes) const {
  outNodes.setCountToZero () ;
//--- Get working copies
  TC_UniqueArray <bool> nodes ;
  definedNodes (nodes) ;
  TC_UniqueArray <PMUInt32> successorCount ;
  TC_UniqueArray <PMUInt32> predecessorCount ;
  for (PMSInt32 i=0 ; i<mEdges.count () ; i++) {
    successorCount.addObject (mEdges (i COMMA_HERE).count ()) ;
  }
  for (PMSInt32 i=0 ; i<mReverseEdges.count () ; i++) {
    predecessorCount.addObject (mReverseEdges (i COMMA_HERE).count ()) ;
  }
//--- Eliminate nodes that have no successor or no predecessor
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
      if (nodes (i COMMA_HERE) && ((successorCount (i COMMA_HERE) == 0) || (predecessorCount (i COMMA_HERE) == 0))) {
        loop = true ;
        nodes (i COMMA_HERE) = false ;
        TC_UniqueArray <PMUInt32> s ; mEdges (i COMMA_HERE).getValueArray (s) ;
        for (PMSInt32 j=0 ; j<s.count () ; j++) {
          predecessorCount (s (j COMMA_HERE) COMMA_HERE) -- ;
        }
        mReverseEdges (i COMMA_HERE).getValueArray (s) ;
        for (PMSInt32 j=0 ; j<s.count () ; j++) {
          successorCount (s (j COMMA_HERE) COMMA_HERE) -- ;
        }
      }
    }
  }

//--- Add circular nodes
  for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
    if (nodes (i COMMA_HERE)) {
      outNodes.addObject (i) ;
    }
  }
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::addEdge (const PMUInt32 inSourceNodeIndex,
                              const PMUInt32 inTargetNodeIndex) {
  defineNode (inSourceNodeIndex) ;
  defineNode (inTargetNodeIndex) ;
  mEdges (inSourceNodeIndex COMMA_HERE).add (inTargetNodeIndex) ;
  mReverseEdges (inTargetNodeIndex COMMA_HERE).add (inSourceNodeIndex) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::print (void) const {
  for (PMSInt32 i=0 ; i<mEdges.count () ; i++) {
    if (isNodeDefined (i)) {
      printf ("Node %d:\n", i) ;
      TC_UniqueArray <PMUInt32> s ; mEdges (i COMMA_HERE).getValueArray (s) ;
      for (PMSInt32 j=0 ; j<s.count () ; j++) {
        printf ("  %d --> %d\n", i, s (j COMMA_HERE)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::breathFirstTopologicalSort (TC_UniqueArray <PMUInt32> & outSortedNodes,
                                                 TC_UniqueArray <PMUInt32> & outUnsortedNodes) const {
  outSortedNodes.setCountToZero () ;
  outUnsortedNodes.setCountToZero () ;
//--- Get working copies
  TC_UniqueArray <bool> nodes ;
  definedNodes (nodes) ;
  TC_UniqueArray <PMUInt32> dependencyCount (mReverseEdges.count (), 0 COMMA_HERE) ;
  for (PMSInt32 i=0 ; i<mReverseEdges.count () ; i++) {
    TC_UniqueArray <PMUInt32> s ; mReverseEdges (i COMMA_HERE).getValueArray (s) ;
    for (PMSInt32 j=0 ; j<s.count () ; j++) {
      dependencyCount (s (j COMMA_HERE) COMMA_HERE) ++ ;
    }
  }
//--- Loop
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
      if (nodes (i COMMA_HERE) && (dependencyCount (i COMMA_HERE) == 0)) {
        loop = true ;
        outSortedNodes.addObject (i) ;
        nodes (i COMMA_HERE) = false ;
        TC_UniqueArray <PMUInt32> s ; mReverseEdges (i COMMA_HERE).getValueArray (s) ;
        for (PMSInt32 j=0 ; j<s.count () ; j++) {
          dependencyCount (s (j COMMA_HERE) COMMA_HERE) -- ;
        }
      }
    }
  }
//--- Add unusorted nodes
  for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
    if (nodes (i COMMA_HERE)) {
      outUnsortedNodes.addObject (i) ;
    }
  }
}
//---------------------------------------------------------------------------*
// http://en.wikipedia.org/wiki/Dominator_(graph_theory)
// a node d dominates a node n if every path from the start node to n must go through d

void C_DirectedGraph::getDominators (TC_UniqueArray <C_UIntSet> & outDominators) const {
  outDominators.setCountToZero () ;
//--- Enter initial dominators
  TC_UniqueArray <bool> startNodeFlag ;
  for (PMSInt32 i=0 ; i<mEdges.count () ; i++) {
    startNodeFlag.addObject (false) ;
    outDominators.addObject (isNodeDefined(i) ? mNodeDefinition : C_UIntSet ()) ;
  }
//--- Start nodes are their own dominator
  TC_UniqueArray <PMUInt32> startNodeArray ;
  getNodesWithNoPredecessor (startNodeArray) ;
  MF_Assert (startNodeArray.count () == 1, "startNodeArray.count () == %lld != 1", startNodeArray.count (), 0) ;
  for (PMSInt32 i=0 ; i<startNodeArray.count () ; i++) {
    const PMUInt32 startNode = startNodeArray (i COMMA_HERE) ;
    outDominators (startNode COMMA_HERE) = C_UIntSet (startNode) ;
    startNodeFlag (startNode COMMA_HERE) = true ;
  }
//--- 
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (PMSInt32 node=0 ; node<mEdges.count () ; node++) {
      if (isNodeDefined (node) && ! startNodeFlag (node COMMA_HERE)) {
        C_UIntSet newDominators = mNodeDefinition ;
      //--- Add dominators of predecessor nodes
        TC_UniqueArray <PMUInt32> s ; mReverseEdges (node COMMA_HERE).getValueArray (s) ;
        for (PMSInt32 j=0 ; j<s.count () ; j++) {
          const PMUInt32 aPredecessor = s (j COMMA_HERE) ;
          newDominators &= outDominators (aPredecessor COMMA_HERE) ;
        }
      //--- A node dominates itself
        newDominators.add (node) ;
      //--- Replace if not equal
        if (newDominators != outDominators (node COMMA_HERE)) {
          outDominators (node COMMA_HERE) = newDominators ;
          loop = true ;
        }
      }    
    }
  }
}

//---------------------------------------------------------------------------*

void C_DirectedGraph::removeEdgesToDominators (void) {
  TC_UniqueArray <C_UIntSet> dominators ;
  getDominators (dominators) ;
  for (PMSInt32 node=0 ; node<mEdges.count () ; node++) {
    if (isNodeDefined (node)) {
      const C_UIntSet dom = dominators (node COMMA_HERE) ;
      TC_UniqueArray <PMUInt32> s ; mEdges (node COMMA_HERE).getValueArray (s) ;
      for (PMSInt32 i=0 ; i<s.count () ; i++) {
        const PMUInt32 target = s (i COMMA_HERE) ;
        if (dom.contains (target)) {
          mEdges (node COMMA_HERE).remove (target) ;
          mReverseEdges (target COMMA_HERE).remove (node) ;
          // if (dom.contains (s (i COMMA_HERE))) { printf ("  %u --> %u\n", node, s (i COMMA_HERE)) ;}
        }
      }
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//    E X A M P L E                                                          *
//                                                                           *
//---------------------------------------------------------------------------*

void C_DirectedGraph::example (void) {
  C_DirectedGraph g ;
/*  g.defineNode (0) ;
  g.addEdge (1, 2) ;
  g.addEdge (1, 3) ;
  g.addEdge (2, 3) ;
  g.addEdge (3, 4) ;
  g.addEdge (4, 6) ;
  g.addEdge (6, 4) ;
  g.addEdge (10, 4) ;
  g.addEdge (10, 9) ;
  g.addEdge (6, 9) ;
  g.addEdge (100, 0) ;
  g.addEdge (100, 1) ;
  g.addEdge (100, 10) ;*/
  g.addEdge (3, 0) ;
  g.addEdge (0, 1) ;
  g.addEdge (0, 2) ;
  g.addEdge (1, 0) ;
  g.addEdge (2, 4) ;
  g.addEdge (2, 5) ;
  g.addEdge (4, 0) ;
  g.addEdge (5, 7) ;
  g.addEdge (5, 8) ;
  g.addEdge (8, 0) ;
  g.addEdge (7, 0) ;
//--- Print
  printf ("--- Graph\n") ;
  g.print () ;
  printf ("--- Nodes with no predecessor:") ;
  TC_UniqueArray <PMUInt32> nodes ;
  g.getNodesWithNoPredecessor (nodes) ;
  for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
    printf (" %u", nodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Nodes with no successor:") ;
  g.getNodesWithNoSuccessor (nodes) ;
  for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
    printf (" %u", nodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Circularities:") ;
  g.getNodesInvolvedInCircularities (nodes) ;
  for (PMSInt32 i=0 ; i<nodes.count () ; i++) {
    printf (" %u", nodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  TC_UniqueArray <C_UIntSet> dominators  ;
  g.getDominators (dominators) ;
  printf ("--- Dominators:\n") ;
  for (PMSInt32 i=0 ; i<dominators.count () ; i++) {
    if (g.isNodeDefined (i)) {
      printf ("  Node %u:", i) ;
      dominators (i COMMA_HERE).getValueArray (nodes) ;
      for (PMSInt32 j=0 ; j<nodes.count () ; j++) {
        printf (" %u", nodes (j COMMA_HERE)) ;
      }
      printf ("\n") ;
    }
  }
  printf ("--- Topological sort\n") ;
  TC_UniqueArray <PMUInt32> sortedNodes ;
  TC_UniqueArray <PMUInt32> unsortedNodes ;
  g.breathFirstTopologicalSort (sortedNodes, unsortedNodes) ;
  printf ("  Sorted nodes:") ;
  for (PMSInt32 i=0 ; i<sortedNodes.count () ; i++) {
    printf (" %u", sortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("  Unsorted nodes:") ;
  for (PMSInt32 i=0 ; i<unsortedNodes.count () ; i++) {
    printf (" %u", unsortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("--- Remove edges to dominators:\n") ;
  g.removeEdgesToDominators () ;
  g.print () ;
  printf ("--- Reverse topological sort\n") ;
  g.reversedGraph ().breathFirstTopologicalSort (sortedNodes, unsortedNodes) ;
  printf ("  Sorted nodes:") ;
  for (PMSInt32 i=0 ; i<sortedNodes.count () ; i++) {
    printf (" %u", sortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
  printf ("  Unsorted nodes:") ;
  for (PMSInt32 i=0 ; i<unsortedNodes.count () ; i++) {
    printf (" %u", unsortedNodes (i COMMA_HERE)) ;
  }
  printf ("\n") ;
}

//---------------------------------------------------------------------------*
