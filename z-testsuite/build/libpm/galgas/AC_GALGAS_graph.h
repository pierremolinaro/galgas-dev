//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_graph : Base class for GALGAS graph
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2025 Pierre Molinaro.
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

#include "AC_GALGAS_root.h"
#include "ComparisonResult.h"
#include "cCollectionElement.h"

//--------------------------------------------------------------------------------------------------
//  AC_GALGAS_graph
//--------------------------------------------------------------------------------------------------

class AC_GALGAS_graph : public AC_GALGAS_root {
//--- Private Data member
  private: class SharedGraph * mSharedGraph ;

//--- Default constructor
  public: AC_GALGAS_graph (void) ;

//--- Virtual destructor
  public: virtual ~ AC_GALGAS_graph (void) ;

//--- count
  public: VIRTUAL_IN_DEBUG uint32_t count (void) const ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return mSharedGraph != nullptr ;
  }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Handle copy
  public: AC_GALGAS_graph (const AC_GALGAS_graph & inSource) ;
  public: AC_GALGAS_graph & operator = (const AC_GALGAS_graph & inSource) ;

//--- Create a new list
  protected: VIRTUAL_IN_DEBUG void makeNewEmptyGraph (LOCATION_ARGS) ;

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_keyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_lkeyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_undefinedNodeCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_undefinedNodeKeyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addEdge (const class GGS_lstring & inSourceNodeKey,
                                                const class GGS_lstring & inTargetNodeKey
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeEdgesToNode (const GGS_string & inNodeName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeEdgesToDominators (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const AC_GALGAS_graph & inOperand) const ;

//--- introspection
  public: virtual const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override = 0 ;

//--- Description
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Internal methods for handling graph
  protected: VIRTUAL_IN_DEBUG void reversedGraphFromGraph (const AC_GALGAS_graph & inGraph
                                                           COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void subGraph (AC_GALGAS_graph & outResultingGraph,
                                             const class GGS_lstringlist & inStartNodes,
                                             const class GGS_stringset & inNodesToExclude,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


  protected: VIRTUAL_IN_DEBUG capCollectionElementArray graph (void) const ;

  private: VIRTUAL_IN_DEBUG void insulateGraph (LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void internalAddNode (const GGS_lstring & inKey,
                                                    const char * inErrorMessage,
                                                    const capCollectionElement & inAttributes,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_noteNode (const GGS_lstring & inKey
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG GGS_lstringlist getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void internalTopologicalSort (capCollectionElementArray & outSortedList,
                                                            GGS_lstringlist & outSortedNodeKeyList,
                                                            capCollectionElementArray & outUnsortedList,
                                                            GGS_lstringlist & outUnsortedNodeKeyList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void internalFindCircularities (capCollectionElementArray & outInfoList,
                                                              GGS_lstringlist & outNodeKeyList
                                                              COMMA_UNUSED_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void internalNodesWithNoPredecessor (capCollectionElementArray & outSortedList,
                                                                   GGS_lstringlist & outSortedNodeKeyList
                                                                   COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void internalNodesWithNoSuccessor (capCollectionElementArray & outSortedList,
                                                                 GGS_lstringlist & outSortedNodeKeyList
                                                                 COMMA_LOCATION_ARGS) const ;


  protected: VIRTUAL_IN_DEBUG void internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                                      GGS_lstringlist & outSortedNodeKeyList,
                                                                      capCollectionElementArray & outUnsortedList,
                                                                      GGS_lstringlist & outUnsortedNodeKeyList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_edges (UNUSED_LOCATION_ARGS) const ;

  friend class SharedGraph ;
} ;

//--------------------------------------------------------------------------------------------------
