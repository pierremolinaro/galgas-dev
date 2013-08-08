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

#ifndef C_DIRECTED_GRAPH_CLASS_DEFINED
#define C_DIRECTED_GRAPH_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "collections/TC_Array.h"
#include "utilities/C_UIntSet.h"

//---------------------------------------------------------------------------*

typedef struct {
  PMUInt32 mSource ;
  PMUInt32 mTarget ;
} cEdge ;

//---------------------------------------------------------------------------*

class C_DirectedGraph {
//--- Default constructor
  public : C_DirectedGraph (void) ;

//--- Example
  public : static void example (void) ;
  
//--- Methods
  public : void defineNode (const PMUInt32 inNodeIndex) ;

  public : void addEdge (const PMUInt32 inSourceNodeIndex,
                         const PMUInt32 inTargetNodeIndex) ;

  public : void print (void) const ;

//--- Accessors
  public : void definedNodes (TC_UniqueArray <bool> & outNodes) const ;
  
  public : void definedNodeArray (TC_Array <PMUInt32> & outNodes) const ;
  
  public : bool isNodeDefined (const PMUInt32 inNodeIndex) const ;
  
  public : void nodesWithNoPredecessor (TC_UniqueArray <PMUInt32> & outNodes) const ;
  
  public : void nodesWithNoSuccessor (TC_UniqueArray <PMUInt32> & outNodes) const ;
  
  public : void nodesInvolvedInCircularities (TC_UniqueArray <PMUInt32> & outNodes) const ;
  
  public : void getDominators (TC_UniqueArray <C_UIntSet> & outDominators) const ;
  
  public : void removeEdgesToDominators (void) ;
  
  public : void edges (TC_UniqueArray <cEdge> & outEdges) const ;
  
  public : void breathFirstTopologicalSort (TC_UniqueArray <PMUInt32> & outSortedNodes,
                                            TC_UniqueArray <PMUInt32> & outUnsortedNodes) const ;
  
  public : void reverseBreathFirstTopologicalSort (TC_UniqueArray <PMUInt32> & outSortedNodes,
                                                   TC_UniqueArray <PMUInt32> & outUnsortedNodes) const ;
  
//--- Attributes
  private : C_UIntSet mNodeDefinition ;
  private : TC_Array < TC_Array <PMUInt32> > mEdges ;
  private : TC_Array < TC_Array <PMUInt32> > mReverseEdges ;
} ;

//---------------------------------------------------------------------------*

#endif
