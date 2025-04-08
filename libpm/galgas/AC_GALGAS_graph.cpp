//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_graph : Base class for GALGAS graph
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2024 Pierre Molinaro.
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

#include "all-predefined-types.h"
#include "MF_MemoryControl.h"
#include "Compiler.h"
#include "DirectedGraph.h"

//--------------------------------------------------------------------------------------------------

class cGraphNode {
  public: cGraphNode * mInfPtr ;
  public: cGraphNode * mSupPtr ;
  public: int32_t mBalance ;
  public: const String mKey ;
  public: const uint32_t mNodeID ;
  public: capCollectionElement mAttributes ;
  public: GGS_location mDefinitionLocation ;
  public: TC_UniqueArray <GGS_location> mReferenceLocationArray ;
  public: bool mIsDefined ;

//--- Constructors
  public: cGraphNode (const String & inKey,
                      const uint32_t inNodeID) ;

  public: cGraphNode (cGraphNode * inNode) ;

  public: void accumulateNodes (capCollectionElementArray & outNodeList) const ;

//--- Destructor
  public: virtual ~ cGraphNode (void) ;

//--- No copy
  private: cGraphNode (const cGraphNode &) = delete ;
  private: cGraphNode & operator = (const cGraphNode &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

cGraphNode::~ cGraphNode (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//--------------------------------------------------------------------------------------------------

class cSharedGraph : public SharedObject {
//--------------------------------- Attributes
  private: cGraphNode * mRoot ;
  public: inline const cGraphNode * root (void) const { return mRoot ; }
  private: DirectedGraph mDirectedGraph ;
  private: TC_UniqueArray <cGraphNode *> mNodeArray ;

//--- Constructor
  public: cSharedGraph (LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ cSharedGraph (void) ;

//--- Count
  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }

//--- isNodeDefined
  public: bool isNodeDefined (const String & inKey) const ;

//--- locationForKey
  public: GGS_location locationForKey (const String & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

//--- Internal methods
  public: void description (String & ioString,
                            const int32_t inIndentation) const ;

  public: void copyFrom (const cSharedGraph * inSource) ;

  public: void copyReversedGraphFrom (const cSharedGraph * inSource) ;

  public: int32_t graphCompare (const cSharedGraph * inOperand) const ;

  public: cGraphNode * findOrAddNodeForKey (const String & inKey) ;

  protected: cGraphNode * internalInsert (cGraphNode * & ioRootPtr,
                                          const String & inKey,
                                          bool & ioExtension) ;

  public: void internalAddNode (const GGS_lstring & inKey,
                                const char * inErrorMessage,
                                const capCollectionElement & inAttributes,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void addEdge (const String & inSourceNodeKey,
                        const GGS_location & inSourceNodeLocation,
                        const String & inTargetNodeKey,
                        const GGS_location & inTargetNodeLocation) ;

  public: void removeEdgesToDominators (LOCATION_ARGS) ;

  public: void removeEdgesToNode (const String & inNodeName,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void internalTopologicalSort (capCollectionElementArray & outSortedList,
                                        GGS_lstringlist & outSortedNodeKeyList,
                                        capCollectionElementArray & outUnsortedList,
                                        GGS_lstringlist & outUnsortedNodeKeyList) const ;


  public: void internalFindCircularities (capCollectionElementArray & outInfoList,
                                          GGS_lstringlist & outNodeKeyList) const ;

  public: void internalNodesWithNoPredecessor (capCollectionElementArray & outInfoList,
                                               GGS_lstringlist & outNodeKeyList) const ;

  public: void internalNodesWithNoSuccessor (capCollectionElementArray & outInfoList,
                                             GGS_lstringlist & outNodeKeyList) const ;

  public: void internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                  GGS_lstringlist & outSortedNodeKeyList,
                                                  capCollectionElementArray & outUnsortedList,
                                                  GGS_lstringlist & outUnsortedNodeKeyList) const ;

  public: void subGraph (AC_GALGAS_graph & outResultingGraph,
                         const GGS_lstringlist & inStartNodes,
                         const GGS_stringset & inNodesToExclude,
                         Compiler * inCompiler
                         COMMA_LOCATION_ARGS) const ;

  public: void graph (capCollectionElementArray & outNodeList) const ;

  public: GGS_stringlist keyList (void) const ;

  public: GGS_lstringlist lkeyList (void) const ;

  public: String getter_graphviz (void) const ;

  public: void edges (GGS__32_stringlist & ioList) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void checkGraph (LOCATION_ARGS) const ;
  #endif

//--- No copy
  private: cSharedGraph (const cSharedGraph &) = delete ;
  private: cSharedGraph & operator = (const cSharedGraph &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

cSharedGraph::cSharedGraph (LOCATION_ARGS) :
SharedObject (THERE),
mRoot (nullptr),
mDirectedGraph (),
mNodeArray () {
}

//--------------------------------------------------------------------------------------------------

cSharedGraph::~ cSharedGraph (void) {
  macroMyDelete (mRoot) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Copy
#endif

//--------------------------------------------------------------------------------------------------

cGraphNode::cGraphNode (cGraphNode * inNode) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance),
mKey (inNode->mKey),
mNodeID (inNode->mNodeID),
mAttributes (inNode->mAttributes),
mDefinitionLocation (inNode->mDefinitionLocation),
mReferenceLocationArray (),
mIsDefined (inNode->mIsDefined) {
  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;
  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {
    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;
  }
  if (nullptr != inNode->mInfPtr) {
    macroMyNew (mInfPtr, cGraphNode (inNode->mInfPtr)) ;
  }
  if (nullptr != inNode->mSupPtr) {
    macroMyNew (mSupPtr, cGraphNode (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

static void buildNodeArray (cGraphNode * inNode,
                            TC_UniqueArray <cGraphNode *> & ioNodeArray) {
  if (nullptr != inNode) {
    macroAssert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, "ioNodeArray (%lld COMMA_HERE) != nullptr", inNode->mNodeID, 0) ;
    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;
    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;
    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedGraph::copyFrom (const cSharedGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cGraphNode (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}
//--------------------------------------------------------------------------------------------------

void cSharedGraph::description (String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (mDirectedGraph.nodeCount ()) ;
  ioString.appendCString (" node") ;
  ioString.appendCString ((mDirectedGraph.nodeCount () > 1) ? "s" : "") ;
  ioString.appendCString (", ") ;
  ioString.appendUnsigned (mDirectedGraph.edgeCount ()) ;
  ioString.appendCString (" edge") ;
  ioString.appendCString ((mDirectedGraph.edgeCount () > 1) ? "s" : "") ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cSharedGraph::checkGraph (LOCATION_ARGS) const {
    TC_UniqueArray <cGraphNode *> nodeArray (mNodeArray.count () COMMA_HERE) ;
    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, nodeArray) ;
    macroAssertThere (nodeArray.count() == mNodeArray.count (), "nodeArray.count() == %lld != mNodeArray.count () %lld", nodeArray.count(), mNodeArray.count ()) ;
    for (int32_t i=0 ; i<nodeArray.count() ; i++) {
      macroAssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), "nodeArray.(%lld) != mNodeArray.(%lld)", i, i) ;
      macroAssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), "! mDirectedGraph.isNodeDefined (i) : %lld != 0", i, 0) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//    AC_GALGAS_graph
//--------------------------------------------------------------------------------------------------

AC_GALGAS_graph::AC_GALGAS_graph (void) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_graph::~ AC_GALGAS_graph (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_graph::AC_GALGAS_graph (const AC_GALGAS_graph & inSource) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_graph & AC_GALGAS_graph::operator = (const AC_GALGAS_graph & inSource) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::makeNewEmptyGraph (LOCATION_ARGS) {
  macroMyNew (mSharedGraph, cSharedGraph (THERE)) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("<graph @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    mSharedGraph->description (ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

uint32_t AC_GALGAS_graph::count () const {
  uint32_t result = 0 ;
  if (isValid ()) {
    result = mSharedGraph->allNodeCount () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint AC_GALGAS_graph::getter_count (UNUSED_LOCATION_ARGS) const {
  return GGS_uint (count ()) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::drop (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::insulateGraph (LOCATION_ARGS) {
  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {
    cSharedGraph * p = nullptr ;
    macroMyNew (p, cSharedGraph (THERE)) ;
    p->copyFrom (mSharedGraph) ;
    macroAssignSharedObject (mSharedGraph, p) ;
    macroDetachSharedObject (p) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_hasKey
#endif

//--------------------------------------------------------------------------------------------------

GGS_bool AC_GALGAS_graph::getter_isNodeDefined (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool cSharedGraph::isNodeDefined (const String & inKey) const {
  bool result = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {
    const cGraphNode * p = mNodeArray (i COMMA_HERE) ;
    result = p->mIsDefined && (p->mKey == inKey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_locationForKey
#endif

//--------------------------------------------------------------------------------------------------

GGS_location AC_GALGAS_graph::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cSharedGraph::locationForKey (const String & inKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  bool found = false ;
  bool ok = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {
    const cGraphNode * p = mNodeArray (i COMMA_HERE) ;
    found = p->mKey == inKey ;
    if (found && p->mIsDefined) {
      ok = true ;
      result = p->mDefinitionLocation ;
    }
  }
  if (!ok) {
    inCompiler->emitSemanticError (GGS_location (),
                                   String ("graph locationForKey: node '") + inKey + String ("' is undefined"),
                                   TC_Array <FixItDescription> ()
                                   COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_keyList
#endif

//--------------------------------------------------------------------------------------------------

GGS_stringlist cSharedGraph::keyList (void) const {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    result.addAssignOperation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist AC_GALGAS_graph::getter_keyList (UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid ()) {
    result = mSharedGraph->keyList () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_lkeyList
#endif

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cSharedGraph::lkeyList (void) const {
  GGS_lstringlist result = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    const cGraphNode * p = mNodeArray (i COMMA_HERE) ;
    GGS_location loc = p->mDefinitionLocation ;
    if (! loc.isValid ()) {
      loc = GGS_location::class_func_nowhere (HERE) ;
    }
    result.addAssignOperation (GGS_lstring (p->mKey, loc) COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist AC_GALGAS_graph::getter_lkeyList (UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = mSharedGraph->lkeyList () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalFindNode
#endif

//--------------------------------------------------------------------------------------------------

static const cGraphNode * findNode (const String & inKey,
                                    const cGraphNode * inNode) {
  const cGraphNode * result = nullptr ;
  while ((nullptr != inNode) && (result == nullptr)) {
    const int32_t r = inKey.compare (inNode->mKey) ;
    if (r < 0) {
      inNode = inNode->mInfPtr ;
    }else if (r > 0) {
      inNode = inNode->mSupPtr ;
    }else{
      result = inNode ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark graph
#endif

//--------------------------------------------------------------------------------------------------

void cGraphNode::accumulateNodes (capCollectionElementArray & outNodeList) const {
  outNodeList.appendObject (mAttributes) ;
  if (mInfPtr != nullptr) {
    mInfPtr->accumulateNodes (outNodeList) ;
  }
  if (mSupPtr != nullptr) {
    mSupPtr->accumulateNodes (outNodeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedGraph::graph (capCollectionElementArray & outNodeList) const {
  if (mRoot != nullptr) {
    mRoot->accumulateNodes (outNodeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

capCollectionElementArray AC_GALGAS_graph::graph (void) const {
  capCollectionElementArray result ;
  if (isValid ()) {
    mSharedGraph->graph (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark subGraph
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::subGraph (AC_GALGAS_graph & outResultingGraph,
                             const GGS_lstringlist & inStartNodes,
                             const GGS_stringset & inNodesToExclude,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const {
//--- Build start node set
  UInt32Set startNodeSet ;
  UpEnumerator_lstringlist enumerator1 (inStartNodes) ;
  while (enumerator1.hasCurrentObject ()) {
    const cGraphNode * nodePtr = findNode (enumerator1.current_mValue (THERE).mProperty_string.stringValue(), root()) ;
    if (nullptr == nodePtr) {
      String message ("subgraphFromNodes: '") ;
      message.appendString (enumerator1.current_mValue (THERE).mProperty_string.stringValue()) ;
      message.appendCString ("' is not a declared node, cannot start from it") ;
      inCompiler->emitSemanticError (enumerator1.current_mValue (THERE).mProperty_location,
                                     message,
                                     TC_Array <FixItDescription> ()
                                     COMMA_THERE) ;
    }else{
      startNodeSet.add (nodePtr->mNodeID) ;
    }
    enumerator1.gotoNextObject () ;
  }
//--- Build node to exclude set
  UInt32Set nodesToExcludeSet ;
  UpEnumerator_stringset enumerator2 (inNodesToExclude) ;
  while (enumerator2.hasCurrentObject ()) {
    const cGraphNode * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;
    if (nullptr == nodePtr) {
      String message ("subgraphFromNodes: '") ;
      message.appendString (enumerator2.current_key (THERE).stringValue()) ;
      message.appendCString ("' is not a declared node, cannot be excluded") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      nodesToExcludeSet.add (nodePtr->mNodeID) ;
    }
    enumerator2.gotoNextObject () ;
  }
//--- Build sub graph
  const DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (
    startNodeSet,
    nodesToExcludeSet
  ) ;
//--- Enter nodes
  TC_UniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_string = nodePtr->mKey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    outResultingGraph.internalAddNode (lkey,
                                       "subgraphFromNodes Internal error",
                                       nodePtr->mAttributes,
                                       inCompiler
                                       COMMA_THERE) ;
  }
//--- Enter edges
  TC_UniqueArray <cEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;
    const cGraphNode * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;
    GGS_lstring source ;
    source.mProperty_string = sourceNodePtr->mKey ;
    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;
    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;
    const cGraphNode * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;
    GGS_lstring target ;
    target.mProperty_string = targetNodePtr->mKey ;
    target.mProperty_location = targetNodePtr->mDefinitionLocation ;
    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::subGraph (AC_GALGAS_graph & outResultingGraph,
                                const GGS_lstringlist & inStartNodes,
                                const GGS_stringset & inNodesToExclude,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {
    outResultingGraph.makeNewEmptyGraph (THERE) ;
    mSharedGraph->subGraph (outResultingGraph,
                            inStartNodes,
                            inNodesToExclude,
                            inCompiler
                            COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Reversed Graph
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::copyReversedGraphFrom (const cSharedGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cGraphNode (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::reversedGraphFromGraph (const AC_GALGAS_graph & inGraph
                                              COMMA_LOCATION_ARGS) {
  macroDetachSharedObject (mSharedGraph) ;
  if (inGraph.isValid ()) {
    macroMyNew (mSharedGraph, cSharedGraph (THERE)) ;
    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object Compare
#endif

//--------------------------------------------------------------------------------------------------

int32_t cSharedGraph::graphCompare (const cSharedGraph * inOperand) const {
  const int32_t r = int32_t (allNodeCount ()) - int32_t (inOperand->allNodeCount ()) ;
  return r ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult AC_GALGAS_graph::objectCompare (const AC_GALGAS_graph & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;
    if (r < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Node Insertion
#endif

//--------------------------------------------------------------------------------------------------

static void rotateLeft (cGraphNode * & ioRootPtr) {
  cGraphNode * b = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = b->mInfPtr ;
  b->mInfPtr = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance++ ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance++ ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

static void rotateRight (cGraphNode * & ioRootPtr) {
  cGraphNode * b = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = b->mSupPtr ;
  b->mSupPtr = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance-- ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance-- ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

cGraphNode::cGraphNode (const String & inKey,
                        const uint32_t inNodeID) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey),
mNodeID (inNodeID),
mAttributes (),
mDefinitionLocation (),
mReferenceLocationArray (),
mIsDefined (false) {
}

//--------------------------------------------------------------------------------------------------

cGraphNode * cSharedGraph::internalInsert (cGraphNode * & ioRootPtr,
                                           const String & inKey,
                                           bool & ioExtension) {
  cGraphNode * matchingEntry = nullptr ;
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, cGraphNode (inKey, (uint32_t) mNodeArray.count ())) ;
    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;
    mNodeArray.appendObject (ioRootPtr) ;
    ioExtension = true ;
    matchingEntry = ioRootPtr ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
    if (comparaison > 0) {
      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance ++ ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mInfPtr->mBalance == -1) {
            rotateLeft (ioRootPtr->mInfPtr) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else if (comparaison < 0) {
      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance-- ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mSupPtr->mBalance == 1) {
            rotateRight (ioRootPtr->mSupPtr) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{ // Entry already exists
      matchingEntry = ioRootPtr ;
      ioExtension = false ;
    }
  }
  return matchingEntry ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalAddNode
#endif

//--------------------------------------------------------------------------------------------------

cGraphNode * cSharedGraph::findOrAddNodeForKey (const String & inKey) {
  bool extension = false ; // Unused here
  return internalInsert (mRoot, inKey, extension) ;
}

//--------------------------------------------------------------------------------------------------

void cSharedGraph::internalAddNode (const GGS_lstring & inKey,
                                    const char * inErrorMessage,
                                    const capCollectionElement & inAttributes,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cGraphNode * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;
  if (node->mAttributes.ptr () == nullptr) { // Node exists, but is undefined
    node->mAttributes = inAttributes ;
    node->mDefinitionLocation = inKey.mProperty_location ;
    node->mIsDefined = true ;
  }else{ // Error : node redefinition
    GGS_lstring existingKey ;
    existingKey.mProperty_location = node->mDefinitionLocation ;
    existingKey.mProperty_string = GGS_string (node->mKey) ;
    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalAddNode (const GGS_lstring & inKey,
                                       const char * inErrorMessage,
                                       const capCollectionElement & inAttributes,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inAttributes.isValid ()) {
    insulateGraph (THERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->internalAddNode (inKey, inErrorMessage, inAttributes, inCompiler COMMA_THERE) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark modifier noteNode
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_noteNode (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulateGraph (THERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    cGraphNode * node = (nullptr == mSharedGraph)
      ? nullptr
      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())
    ;
    if (nullptr != node) {
      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier addEdge
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::addEdge (const String & inSourceNodeKey,
                            const GGS_location & inSourceNodeLocation,
                            const String & inTargetNodeKey,
                            const GGS_location & inTargetNodeLocation) {
  cGraphNode * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;
  macroValidPointer (sourceNode) ;
  cGraphNode * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;
  macroValidPointer (targetNode) ;
  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;
  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;
  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_addEdge (const GGS_lstring & inSourceNodeKey,
                                        const GGS_lstring & inTargetNodeKey
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),
                             inSourceNodeKey.mProperty_location,
                             inTargetNodeKey.mProperty_string.stringValue (),
                             inTargetNodeKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output graphviz text
#endif

//--------------------------------------------------------------------------------------------------

String cSharedGraph::getter_graphviz (void) const {
  TC_UniqueArray <String> nodeNameArray ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;
  }
  return mDirectedGraph.graphvizString (nodeNameArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string AC_GALGAS_graph::getter_graphviz (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mSharedGraph->getter_graphviz ()) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output arc list
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::edges (GGS__32_stringlist & ioList) const {
  TC_UniqueArray <cEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const cEdge edge = edgeArray (i COMMA_HERE) ;
    ioList.addAssignOperation (mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,
                                mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey
                                COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist AC_GALGAS_graph::getter_edges (LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid ()) {
    result = GGS__32_stringlist::class_func_emptyList (THERE) ;
    mSharedGraph->edges (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeCount
#endif

//--------------------------------------------------------------------------------------------------

static void countUndefinedNodeCount (const cGraphNode * inNode, uint32_t & ioCount) {
  if (nullptr != inNode) {
    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;
    if (! inNode->mIsDefined) {
      ioCount ++ ;
    }
    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint AC_GALGAS_graph::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    result = GGS_uint (undefinedNodeCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeKeyList
#endif

//--------------------------------------------------------------------------------------------------

static void buildUndefinedNodeKeyList (const cGraphNode * inNode, GGS_stringlist & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;
    if (! inNode->mIsDefined) {
      ioResult.addAssignOperation (GGS_string (inNode->mKey) COMMA_HERE) ;
    }
    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist AC_GALGAS_graph::getter_undefinedNodeKeyList (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Find circularities
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::internalFindCircularities (capCollectionElementArray & outInfoList,
                                              GGS_lstringlist & outNodeKeyList) const {
  TC_UniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;
//--- Add nodes
  outInfoList.removeAllObjects() ;
  outNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalFindCircularities (capCollectionElementArray & outInfoList,
                                                 GGS_lstringlist & outNodeKeyList
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no predecessor
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::internalNodesWithNoPredecessor (capCollectionElementArray & outInfoList,
                                                   GGS_lstringlist & outNodeKeyList) const {
  TC_UniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAllObjects() ;
  outNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalNodesWithNoPredecessor (capCollectionElementArray & outInfoList,
                                                      GGS_lstringlist & outNodeKeyList
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no successor
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::internalNodesWithNoSuccessor (capCollectionElementArray & outInfoList,
                                                 GGS_lstringlist & outNodeKeyList) const {
  TC_UniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAllObjects() ;
  outNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalNodesWithNoSuccessor (capCollectionElementArray & outInfoList,
                                                    GGS_lstringlist & outNodeKeyList
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Breath First Topological sort
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::internalTopologicalSort (capCollectionElementArray & outSortedList,
                                            GGS_lstringlist & outSortedNodeKeyList,
                                            capCollectionElementArray & outUnsortedList,
                                            GGS_lstringlist & outUnsortedNodeKeyList) const {
  TC_UniqueArray <uint32_t> sortedNodes ;
  TC_UniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAllObjects() ;
  outSortedNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAllObjects() ;
  outUnsortedNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalTopologicalSort (capCollectionElementArray & outSortedList,
                                               GGS_lstringlist & outSortedNodeKeyList,
                                               capCollectionElementArray & outUnsortedList,
                                               GGS_lstringlist & outUnsortedNodeKeyList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      String s ("Cannot apply graph topologicalSort: there ") ;
      if (undefinedNodeCount > 1) {
        s.appendCString ("are ") ;
        s.appendUnsigned (undefinedNodeCount) ;
        s.appendCString (" undefined nodes") ;
      }else{
        s.appendCString ("is 1 undefined node") ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Depth First Topological sort
#endif

//--------------------------------------------------------------------------------------------------

void cSharedGraph::internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                      GGS_lstringlist & outSortedNodeKeyList,
                                                      capCollectionElementArray & outUnsortedList,
                                                      GGS_lstringlist & outUnsortedNodeKeyList) const {
  TC_UniqueArray <uint32_t> sortedNodes ;
  TC_UniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAllObjects() ;
  outSortedNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAllObjects() ;
  outUnsortedNodeKeyList = GGS_lstringlist::class_func_emptyList (HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.appendObject (nodePtr->mAttributes) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.addAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                         GGS_lstringlist & outSortedNodeKeyList,
                                                         capCollectionElementArray & outUnsortedList,
                                                         GGS_lstringlist & outUnsortedNodeKeyList,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      String s ("Cannot apply graph topologicalSort: there ") ;
      if (undefinedNodeCount > 1) {
        s.appendCString ("are ") ;
        s.appendUnsigned (undefinedNodeCount) ;
        s.appendCString (" undefined nodes") ;
      }else{
        s.appendCString ("is 1 undefined node") ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeReferenceList
#endif

//--------------------------------------------------------------------------------------------------

static void buildUndefinedNodeReferenceList (const cGraphNode * inNode,
                                             GGS_lstringlist & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;
    if (nullptr == inNode->mAttributes.ptr ()) {
      GGS_lstring lkey ;
      lkey.mProperty_string = GGS_string (inNode->mKey) ;
      for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {
        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;
        ioResult.addAssignOperation (lkey COMMA_HERE) ;
      }
    }
    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist AC_GALGAS_graph::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::class_func_emptyList (THERE) ;
    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToNode
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_removeEdgesToNode (const GGS_string & inNodeName,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inNodeName.isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedGraph::removeEdgesToNode (const String & inNodeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Find node
  const cGraphNode * node = findNode (inNodeName, mRoot) ;
  if (nullptr == node) {
    String s ("graph removeEdgesToNode: node '") ;
    s.appendString (inNodeName) ;
    s.appendCString ("' does not exist") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const uint32_t nodeIndex = node->mNodeID ;
    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToDominators
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_removeEdgesToDominators (LOCATION_ARGS) {
  if (isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToDominators (THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedGraph::removeEdgesToDominators (LOCATION_ARGS) {
//--- Find start nodes
  TC_UniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;
//--- Add a dummy start node for handling case where there several start nodes
  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;
//--- Add edges from dummy node to start nodes
  for (int32_t i=0 ; i<startNodes.count () ; i++) {
    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;
  }
//--- Remove edge to dominator
  mDirectedGraph.removeEdgesToDominator (THERE) ;
//--- Remove dummy node
  mDirectedGraph.removeNode (dummyNodeIndex) ;
}

//--------------------------------------------------------------------------------------------------
