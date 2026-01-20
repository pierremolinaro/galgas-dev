#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "graph-inheritance+graph.h"
#include "list-declaration+list+a+s+t.h"
#include "struct-declaration+list+a+s+t-2Eelement.h"

//--------------------------------------------------------------------------------------------------
//'@inheritanceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_inheritanceGraph::GGS_inheritanceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_inheritanceGraph GGS_inheritanceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_inheritanceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inheritanceGraph GGS_inheritanceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_inheritanceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_inheritanceGraph::setter_addNode (GGS_lstring inKey,
                                           GGS_declarationAST inArgument_0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' class is already declared" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_inheritanceGraph::method_topologicalSort (GGS_declarationListAST & outSortedList,
                                                   GGS_lstringlist & outSortedKeyList,
                                                   GGS_declarationListAST & outUnsortedList,
                                                   GGS_lstringlist & outUnsortedKeyList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_inheritanceGraph::method_depthFirstTopologicalSort (GGS_declarationListAST & outSortedList,
                                                             GGS_lstringlist & outSortedKeyList,
                                                             GGS_declarationListAST & outUnsortedList,
                                                             GGS_lstringlist & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_inheritanceGraph GGS_inheritanceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_inheritanceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_inheritanceGraph::method_circularities (GGS_declarationListAST & outInfoList,
                                                 GGS_lstringlist & outKeyList
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_inheritanceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                        GGS_lstringlist & outKeyList
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_inheritanceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                          GGS_lstringlist & outKeyList
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_inheritanceGraph GGS_inheritanceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                     const GGS_stringset & inKeysToExclude,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_inheritanceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_inheritanceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inheritanceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                  const GGS_stringset & inNodesToExclude,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_inheritanceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inheritanceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inheritanceGraph ("inheritanceGraph",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inheritanceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inheritanceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inheritanceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inheritanceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inheritanceGraph GGS_inheritanceGraph::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_inheritanceGraph result ;
  const GGS_inheritanceGraph * p = (const GGS_inheritanceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inheritanceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inheritanceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

