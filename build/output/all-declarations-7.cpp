#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inValue
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsTemplate (inValue.mProperty_mIsTemplate),
mProperty_mTerminalMap (inValue.mProperty_mTerminalMap),
mProperty_mIndexingListAST (inValue.mProperty_mIndexingListAST),
mProperty_mTerminalListAST (inValue.mProperty_mTerminalListAST),
mProperty_mLexicalAttributeListAST (inValue.mProperty_mLexicalAttributeListAST),
mProperty_mLexicalStyleListAST (inValue.mProperty_mLexicalStyleListAST),
mProperty_mLexicalListDeclarationListAST (inValue.mProperty_mLexicalListDeclarationListAST) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GGS_lstring & inKey,
                                                                                                        const GGS_bool & in_mIsTemplate,
                                                                                                        const GGS_terminalMap & in_mTerminalMap,
                                                                                                        const GGS_indexingListAST & in_mIndexingListAST,
                                                                                                        const GGS_terminalDeclarationListAST & in_mTerminalListAST,
                                                                                                        const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                                                        const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                                                        const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsTemplate (in_mIsTemplate),
mProperty_mTerminalMap (in_mTerminalMap),
mProperty_mIndexingListAST (in_mIndexingListAST),
mProperty_mTerminalListAST (in_mTerminalListAST),
mProperty_mLexicalAttributeListAST (in_mLexicalAttributeListAST),
mProperty_mLexicalStyleListAST (in_mLexicalStyleListAST),
mProperty_mLexicalListDeclarationListAST (in_mLexicalListDeclarationListAST) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexiqueComponentMapForSemanticAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexiqueComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexiqueComponentMapForSemanticAnalysis (mProperty_lkey, mProperty_mIsTemplate, mProperty_mTerminalMap, mProperty_mIndexingListAST, mProperty_mTerminalListAST, mProperty_mLexicalAttributeListAST, mProperty_mLexicalStyleListAST, mProperty_mLexicalListDeclarationListAST COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexiqueComponentMapForSemanticAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsTemplate" ":") ;
  mProperty_mIsTemplate.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalMap" ":") ;
  mProperty_mTerminalMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndexingListAST" ":") ;
  mProperty_mIndexingListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalListAST" ":") ;
  mProperty_mTerminalListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalAttributeListAST" ":") ;
  mProperty_mLexicalAttributeListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalStyleListAST" ":") ;
  mProperty_mLexicalStyleListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalListDeclarationListAST" ":") ;
  mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::GGS_lexiqueComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::GGS_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis & GGS_lexiqueComponentMapForSemanticAnalysis::operator = (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ GGS_lexiqueComponentMapForSemanticAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexiqueComponentMapForSemanticAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsTemplate = p->mProperty_mIsTemplate ;
      element.mProperty_mTerminalMap = p->mProperty_mTerminalMap ;
      element.mProperty_mIndexingListAST = p->mProperty_mIndexingListAST ;
      element.mProperty_mTerminalListAST = p->mProperty_mTerminalListAST ;
      element.mProperty_mLexicalAttributeListAST = p->mProperty_mLexicalAttributeListAST ;
      element.mProperty_mLexicalStyleListAST = p->mProperty_mLexicalStyleListAST ;
      element.mProperty_mLexicalListDeclarationListAST = p->mProperty_mLexicalListDeclarationListAST ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::class_func_mapWithMapToOverride (const GGS_lexiqueComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::enterElement (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                      const GGS_bool & inArgument0,
                                                                      const GGS_terminalMap & inArgument1,
                                                                      const GGS_indexingListAST & inArgument2,
                                                                      const GGS_terminalDeclarationListAST & inArgument3,
                                                                      const GGS_lexicalAttributeListAST & inArgument4,
                                                                      const GGS_lexicalStyleListAST & inArgument5,
                                                                      const GGS_lexicalListDeclarationListAST & inArgument6,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::add_operation (const GGS_lexiqueComponentMapForSemanticAnalysis & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis result = *this ;
  cEnumerator_lexiqueComponentMapForSemanticAnalysis enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsTemplate (HERE), enumerator.current_mTerminalMap (HERE), enumerator.current_mIndexingListAST (HERE), enumerator.current_mTerminalListAST (HERE), enumerator.current_mLexicalAttributeListAST (HERE), enumerator.current_mLexicalStyleListAST (HERE), enumerator.current_mLexicalListDeclarationListAST (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                   GGS_bool inArgument0,
                                                                   GGS_terminalMap inArgument1,
                                                                   GGS_indexingListAST inArgument2,
                                                                   GGS_terminalDeclarationListAST inArgument3,
                                                                   GGS_lexicalAttributeListAST inArgument4,
                                                                   GGS_lexicalStyleListAST inArgument5,
                                                                   GGS_lexicalListDeclarationListAST inArgument6,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' lexique component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey = "the '%K' lexique component is not imported" ;

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::method_searchKey (GGS_lstring inKey,
                                                                   GGS_bool & outArgument0,
                                                                   GGS_terminalMap & outArgument1,
                                                                   GGS_indexingListAST & outArgument2,
                                                                   GGS_terminalDeclarationListAST & outArgument3,
                                                                   GGS_lexicalAttributeListAST & outArgument4,
                                                                   GGS_lexicalStyleListAST & outArgument5,
                                                                   GGS_lexicalListDeclarationListAST & outArgument6,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mIsTemplate ;
    outArgument1 = p->mProperty_mTerminalMap ;
    outArgument2 = p->mProperty_mIndexingListAST ;
    outArgument3 = p->mProperty_mTerminalListAST ;
    outArgument4 = p->mProperty_mLexicalAttributeListAST ;
    outArgument5 = p->mProperty_mLexicalStyleListAST ;
    outArgument6 = p->mProperty_mLexicalListDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentMapForSemanticAnalysis::getter_mIsTemplateForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIsTemplate ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalMapForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_terminalMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mTerminalMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingListASTForKey (const GGS_string & inKey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_indexingListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIndexingListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalListASTForKey (const GGS_string & inKey,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_terminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mTerminalListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalAttributeListASTForKey (const GGS_string & inKey,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_lexicalAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mLexicalAttributeListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalStyleListASTForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_lexicalStyleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mLexicalStyleListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalListDeclarationListASTForKey (const GGS_string & inKey,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_lexicalListDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mLexicalListDeclarationListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMIsTemplateForKey (GGS_bool inAttributeValue,
                                                                              GGS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mIsTemplate = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalMapForKey (GGS_terminalMap inAttributeValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mTerminalMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingListASTForKey (GGS_indexingListAST inAttributeValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mIndexingListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalListASTForKey (GGS_terminalDeclarationListAST inAttributeValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mTerminalListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalAttributeListASTForKey (GGS_lexicalAttributeListAST inAttributeValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mLexicalAttributeListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalStyleListASTForKey (GGS_lexicalStyleListAST inAttributeValue,
                                                                                       GGS_string inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mLexicalStyleListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalListDeclarationListASTForKey (GGS_lexicalListDeclarationListAST inAttributeValue,
                                                                                                 GGS_string inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mLexicalListDeclarationListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis * GGS_lexiqueComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                    const GGS_string & inKey
                                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * result = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexiqueComponentMapForSemanticAnalysis::cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element cEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsTemplate, p->mProperty_mTerminalMap, p->mProperty_mIndexingListAST, p->mProperty_mTerminalListAST, p->mProperty_mLexicalAttributeListAST, p->mProperty_mLexicalStyleListAST, p->mProperty_mLexicalListDeclarationListAST) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIsTemplate (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsTemplate ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalAttributeListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalStyleListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalListDeclarationListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalListDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueComponentMapForSemanticAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ("lexiqueComponentMapForSemanticAnalysis",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  const GGS_lexiqueComponentMapForSemanticAnalysis * p = (const GGS_lexiqueComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GGS_syntaxComponentMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexiqueName (inValue.mProperty_mLexiqueName),
mProperty_mNonterminalDeclarationList (inValue.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inValue.mProperty_mRuleList),
mProperty_mHasTranslateFeature (inValue.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GGS_lstring & inKey,
                                                                const GGS_lstring & in_mLexiqueName,
                                                                const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GGS_syntaxRuleListAST & in_mRuleList,
                                                                const GGS_bool & in_mHasTranslateFeature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mProperty_mRuleList (in_mRuleList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_syntaxComponentMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_syntaxComponentMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_syntaxComponentMap (mProperty_lkey, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_syntaxComponentMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexiqueName" ":") ;
  mProperty_mLexiqueName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalDeclarationList" ":") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleList" ":") ;
  mProperty_mRuleList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasTranslateFeature" ":") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::GGS_syntaxComponentMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::GGS_syntaxComponentMap (const GGS_syntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap & GGS_syntaxComponentMap::operator = (const GGS_syntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_ GGS_syntaxComponentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxComponentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_syntaxComponentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_syntaxComponentMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexiqueName = p->mProperty_mLexiqueName ;
      element.mProperty_mNonterminalDeclarationList = p->mProperty_mNonterminalDeclarationList ;
      element.mProperty_mRuleList = p->mProperty_mRuleList ;
      element.mProperty_mHasTranslateFeature = p->mProperty_mHasTranslateFeature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::class_func_mapWithMapToOverride (const GGS_syntaxComponentMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::enterElement (const GGS_syntaxComponentMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = nullptr ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_lstring & inArgument0,
                                                  const GGS_nonterminalDeclarationListAST & inArgument1,
                                                  const GGS_syntaxRuleListAST & inArgument2,
                                                  const GGS_bool & inArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = nullptr ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::add_operation (const GGS_syntaxComponentMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentMap result = *this ;
  cEnumerator_syntaxComponentMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexiqueName (HERE), enumerator.current_mNonterminalDeclarationList (HERE), enumerator.current_mRuleList (HERE), enumerator.current_mHasTranslateFeature (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_lstring inArgument0,
                                               GGS_nonterminalDeclarationListAST inArgument1,
                                               GGS_syntaxRuleListAST inArgument2,
                                               GGS_bool inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = nullptr ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_syntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::method_searchKey (GGS_lstring inKey,
                                               GGS_lstring & outArgument0,
                                               GGS_nonterminalDeclarationListAST & outArgument1,
                                               GGS_syntaxRuleListAST & outArgument2,
                                               GGS_bool & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_syntaxComponentMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    outArgument0 = p->mProperty_mLexiqueName ;
    outArgument1 = p->mProperty_mNonterminalDeclarationList ;
    outArgument2 = p->mProperty_mRuleList ;
    outArgument3 = p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syntaxComponentMap::getter_mLexiqueNameForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_syntaxComponentMap::getter_mNonterminalDeclarationListForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_nonterminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxComponentMap::getter_mRuleListForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_syntaxRuleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mRuleList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxComponentMap::getter_mHasTranslateFeatureForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMLexiqueNameForKey (GGS_lstring inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mLexiqueName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMNonterminalDeclarationListForKey (GGS_nonterminalDeclarationListAST inAttributeValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mNonterminalDeclarationList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMRuleListForKey (GGS_syntaxRuleListAST inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mRuleList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMHasTranslateFeatureForKey (GGS_bool inAttributeValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mHasTranslateFeature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap * GGS_syntaxComponentMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * result = (cMapElement_syntaxComponentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_syntaxComponentMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxComponentMap::cEnumerator_syntaxComponentMap (const GGS_syntaxComponentMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element cEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GGS_syntaxComponentMap_2E_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mNonterminalDeclarationList, p->mProperty_mRuleList, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST cEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST cEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxComponentMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap ("syntaxComponentMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  const GGS_syntaxComponentMap * p = (const GGS_syntaxComponentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerMapForType::cMapElement_extensionInitializerMapForType (const GGS_extensionInitializerMapForType_2E_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParameterList (inValue.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerMapForType::cMapElement_extensionInitializerMapForType (const GGS_lstring & inKey,
                                                                                        const GGS_formalInputParameterListAST & in_mFormalParameterList
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionInitializerMapForType::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionInitializerMapForType::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionInitializerMapForType (mProperty_lkey, mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionInitializerMapForType::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::GGS_extensionInitializerMapForType (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType & GGS_extensionInitializerMapForType::operator = (const GGS_extensionInitializerMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_ GGS_extensionInitializerMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionInitializerMapForType * p = (cMapElement_extensionInitializerMapForType *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionInitializerMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionInitializerMapForType_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParameterList = p->mProperty_mFormalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::class_func_mapWithMapToOverride (const GGS_extensionInitializerMapForType & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::enterElement (const GGS_extensionInitializerMapForType_2E_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerMapForType (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::addAssign_operation (const GGS_lstring & inKey,
                                                              const GGS_formalInputParameterListAST & inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::add_operation (const GGS_extensionInitializerMapForType & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType result = *this ;
  cEnumerator_extensionInitializerMapForType enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParameterList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::setter_insertKey (GGS_lstring inKey,
                                                           GGS_formalInputParameterListAST inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' initializer has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionInitializerMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) attributes ;
  GGS_formalInputParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::setter_setMFormalParameterListForKey (GGS_formalInputParameterListAST inAttributeValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionInitializerMapForType * p = (cMapElement_extensionInitializerMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerMapForType * GGS_extensionInitializerMapForType::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                    const GGS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * result = (cMapElement_extensionInitializerMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionInitializerMapForType) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionInitializerMapForType::cEnumerator_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element cEnumerator_extensionInitializerMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return GGS_extensionInitializerMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionInitializerMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST cEnumerator_extensionInitializerMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionInitializerMapForType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ("extensionInitializerMapForType",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  const GGS_extensionInitializerMapForType * p = (const GGS_extensionInitializerMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerForBuildingContext::cMapElement_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext_2E_element & inValue
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExtensionInitializerMapForType (inValue.mProperty_mExtensionInitializerMapForType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerForBuildingContext::cMapElement_extensionInitializerForBuildingContext (const GGS_lstring & inKey,
                                                                                                        const GGS_extensionInitializerMapForType & in_mExtensionInitializerMapForType
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionInitializerMapForType (in_mExtensionInitializerMapForType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionInitializerForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionInitializerForBuildingContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionInitializerForBuildingContext (mProperty_lkey, mProperty_mExtensionInitializerMapForType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionInitializerForBuildingContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtensionInitializerMapForType" ":") ;
  mProperty_mExtensionInitializerMapForType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::GGS_extensionInitializerForBuildingContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext & GGS_extensionInitializerForBuildingContext::operator = (const GGS_extensionInitializerForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_ GGS_extensionInitializerForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionInitializerForBuildingContext * p = (cMapElement_extensionInitializerForBuildingContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionInitializerForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionInitializerForBuildingContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExtensionInitializerMapForType = p->mProperty_mExtensionInitializerMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionInitializerForBuildingContext & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::enterElement (const GGS_extensionInitializerForBuildingContext_2E_element & inValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerForBuildingContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::addAssign_operation (const GGS_lstring & inKey,
                                                                      const GGS_extensionInitializerMapForType & inArgument0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::add_operation (const GGS_extensionInitializerForBuildingContext & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext result = *this ;
  cEnumerator_extensionInitializerForBuildingContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExtensionInitializerMapForType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_insertKey (GGS_lstring inKey,
                                                                   GGS_extensionInitializerMapForType inArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::method_searchKey (GGS_lstring inKey,
                                                                   GGS_extensionInitializerMapForType & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionInitializerMapForType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerForBuildingContext::getter_mExtensionInitializerMapForTypeForKey (const GGS_string & inKey,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) attributes ;
  GGS_extensionInitializerMapForType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
    result = p->mProperty_mExtensionInitializerMapForType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_setMExtensionInitializerMapForTypeForKey (GGS_extensionInitializerMapForType inAttributeValue,
                                                                                                  GGS_string inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionInitializerForBuildingContext * p = (cMapElement_extensionInitializerForBuildingContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
    p->mProperty_mExtensionInitializerMapForType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerForBuildingContext * GGS_extensionInitializerForBuildingContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                    const GGS_string & inKey
                                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * result = (cMapElement_extensionInitializerForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionInitializerForBuildingContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionInitializerForBuildingContext::cEnumerator_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element cEnumerator_extensionInitializerForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return GGS_extensionInitializerForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionInitializerMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionInitializerForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType cEnumerator_extensionInitializerForBuildingContext::current_mExtensionInitializerMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return p->mProperty_mExtensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionInitializerForBuildingContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ("extensionInitializerForBuildingContext",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  const GGS_extensionInitializerForBuildingContext * p = (const GGS_extensionInitializerForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType::cMapElement_extensionMethodMapForType (const GGS_extensionMethodMapForType_2E_element & inValue
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParameterList (inValue.mProperty_mFormalParameterList),
mProperty_mQualifier (inValue.mProperty_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType::cMapElement_extensionMethodMapForType (const GGS_lstring & inKey,
                                                                              const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                              const GGS_methodQualifier & in_mQualifier
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList),
mProperty_mQualifier (in_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForType::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForType::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionMethodMapForType (mProperty_lkey, mProperty_mFormalParameterList, mProperty_mQualifier COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForType::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mQualifier" ":") ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::GGS_extensionMethodMapForType (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType & GGS_extensionMethodMapForType::operator = (const GGS_extensionMethodMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_ GGS_extensionMethodMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionMethodMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForType_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParameterList = p->mProperty_mFormalParameterList ;
      element.mProperty_mQualifier = p->mProperty_mQualifier ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::enterElement (const GGS_extensionMethodMapForType_2E_element & inValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::addAssign_operation (const GGS_lstring & inKey,
                                                         const GGS_formalParameterListAST & inArgument0,
                                                         const GGS_methodQualifier & inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::add_operation (const GGS_extensionMethodMapForType & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType result = *this ;
  cEnumerator_extensionMethodMapForType enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParameterList (HERE), enumerator.current_mQualifier (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_insertKey (GGS_lstring inKey,
                                                      GGS_formalParameterListAST inArgument0,
                                                      GGS_methodQualifier inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionMethodMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) attributes ;
  GGS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_extensionMethodMapForType::getter_mQualifierForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) attributes ;
  GGS_methodQualifier result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_setMFormalParameterListForKey (GGS_formalParameterListAST inAttributeValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_setMQualifierForKey (GGS_methodQualifier inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType * GGS_extensionMethodMapForType::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * result = (cMapElement_extensionMethodMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForType) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForType::cEnumerator_extensionMethodMapForType (const GGS_extensionMethodMapForType & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element cEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return GGS_extensionMethodMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList, p->mProperty_mQualifier) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST cEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier cEnumerator_extensionMethodMapForType::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ("extensionMethodMapForType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  const GGS_extensionMethodMapForType * p = (const GGS_extensionMethodMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext::cMapElement_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExtensionMethodMapForType (inValue.mProperty_mExtensionMethodMapForType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext::cMapElement_extensionMethodMapForBuildingContext (const GGS_lstring & inKey,
                                                                                                    const GGS_extensionMethodMapForType & in_mExtensionMethodMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionMethodMapForType (in_mExtensionMethodMapForType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForBuildingContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionMethodMapForBuildingContext (mProperty_lkey, mProperty_mExtensionMethodMapForType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForBuildingContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtensionMethodMapForType" ":") ;
  mProperty_mExtensionMethodMapForType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::GGS_extensionMethodMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext & GGS_extensionMethodMapForBuildingContext::operator = (const GGS_extensionMethodMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_ GGS_extensionMethodMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionMethodMapForBuildingContext * p = (cMapElement_extensionMethodMapForBuildingContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionMethodMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExtensionMethodMapForType = p->mProperty_mExtensionMethodMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::enterElement (const GGS_extensionMethodMapForBuildingContext_2E_element & inValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::addAssign_operation (const GGS_lstring & inKey,
                                                                    const GGS_extensionMethodMapForType & inArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::add_operation (const GGS_extensionMethodMapForBuildingContext & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext result = *this ;
  cEnumerator_extensionMethodMapForBuildingContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExtensionMethodMapForType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_insertKey (GGS_lstring inKey,
                                                                 GGS_extensionMethodMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::method_searchKey (GGS_lstring inKey,
                                                                 GGS_extensionMethodMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionMethodMapForType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForBuildingContext::getter_mExtensionMethodMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  GGS_extensionMethodMapForType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    result = p->mProperty_mExtensionMethodMapForType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_setMExtensionMethodMapForTypeForKey (GGS_extensionMethodMapForType inAttributeValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForBuildingContext * p = (cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    p->mProperty_mExtensionMethodMapForType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext * GGS_extensionMethodMapForBuildingContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * result = (cMapElement_extensionMethodMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForBuildingContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForBuildingContext::cEnumerator_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element cEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return GGS_extensionMethodMapForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionMethodMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType cEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return p->mProperty_mExtensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForBuildingContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ("extensionMethodMapForBuildingContext",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  const GGS_extensionMethodMapForBuildingContext * p = (const GGS_extensionMethodMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForType::cMapElement_extensionSetterMapForType (const GGS_extensionSetterMapForType_2E_element & inValue
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParameterList (inValue.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForType::cMapElement_extensionSetterMapForType (const GGS_lstring & inKey,
                                                                              const GGS_formalParameterListAST & in_mFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionSetterMapForType::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionSetterMapForType::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionSetterMapForType (mProperty_lkey, mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionSetterMapForType::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType::GGS_extensionSetterMapForType (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType::GGS_extensionSetterMapForType (const GGS_extensionSetterMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType & GGS_extensionSetterMapForType::operator = (const GGS_extensionSetterMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element_3F_ GGS_extensionSetterMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionSetterMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionSetterMapForType * p = (cMapElement_extensionSetterMapForType *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionSetterMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionSetterMapForType_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParameterList = p->mProperty_mFormalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::class_func_mapWithMapToOverride (const GGS_extensionSetterMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::enterElement (const GGS_extensionSetterMapForType_2E_element & inValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::addAssign_operation (const GGS_lstring & inKey,
                                                         const GGS_formalParameterListAST & inArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::add_operation (const GGS_extensionSetterMapForType & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForType result = *this ;
  cEnumerator_extensionSetterMapForType enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParameterList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::setter_insertKey (GGS_lstring inKey,
                                                      GGS_formalParameterListAST inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionSetterMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) attributes ;
  GGS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::setter_setMFormalParameterListForKey (GGS_formalParameterListAST inAttributeValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionSetterMapForType * p = (cMapElement_extensionSetterMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForType * GGS_extensionSetterMapForType::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * result = (cMapElement_extensionSetterMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForType) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionSetterMapForType::cEnumerator_extensionSetterMapForType (const GGS_extensionSetterMapForType & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element cEnumerator_extensionSetterMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
  return GGS_extensionSetterMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionSetterMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST cEnumerator_extensionSetterMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType ("extensionSetterMapForType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  const GGS_extensionSetterMapForType * p = (const GGS_extensionSetterMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForBuildingContext::cMapElement_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExtensionSetterMapForType (inValue.mProperty_mExtensionSetterMapForType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForBuildingContext::cMapElement_extensionSetterMapForBuildingContext (const GGS_lstring & inKey,
                                                                                                    const GGS_extensionSetterMapForType & in_mExtensionSetterMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionSetterMapForType (in_mExtensionSetterMapForType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionSetterMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionSetterMapForBuildingContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionSetterMapForBuildingContext (mProperty_lkey, mProperty_mExtensionSetterMapForType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionSetterMapForBuildingContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtensionSetterMapForType" ":") ;
  mProperty_mExtensionSetterMapForType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext::GGS_extensionSetterMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext::GGS_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext & GGS_extensionSetterMapForBuildingContext::operator = (const GGS_extensionSetterMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element_3F_ GGS_extensionSetterMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionSetterMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionSetterMapForBuildingContext * p = (cMapElement_extensionSetterMapForBuildingContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionSetterMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionSetterMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExtensionSetterMapForType = p->mProperty_mExtensionSetterMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionSetterMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::enterElement (const GGS_extensionSetterMapForBuildingContext_2E_element & inValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::addAssign_operation (const GGS_lstring & inKey,
                                                                    const GGS_extensionSetterMapForType & inArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::add_operation (const GGS_extensionSetterMapForBuildingContext & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForBuildingContext result = *this ;
  cEnumerator_extensionSetterMapForBuildingContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExtensionSetterMapForType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::setter_insertKey (GGS_lstring inKey,
                                                                 GGS_extensionSetterMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::method_searchKey (GGS_lstring inKey,
                                                                 GGS_extensionSetterMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionSetterMapForType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForBuildingContext::getter_mExtensionSetterMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) attributes ;
  GGS_extensionSetterMapForType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    result = p->mProperty_mExtensionSetterMapForType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::setter_setMExtensionSetterMapForTypeForKey (GGS_extensionSetterMapForType inAttributeValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionSetterMapForBuildingContext * p = (cMapElement_extensionSetterMapForBuildingContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    p->mProperty_mExtensionSetterMapForType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForBuildingContext * GGS_extensionSetterMapForBuildingContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * result = (cMapElement_extensionSetterMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForBuildingContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionSetterMapForBuildingContext::cEnumerator_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element cEnumerator_extensionSetterMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
  return GGS_extensionSetterMapForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionSetterMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionSetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType cEnumerator_extensionSetterMapForBuildingContext::current_mExtensionSetterMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
  return p->mProperty_mExtensionSetterMapForType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForBuildingContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ("extensionSetterMapForBuildingContext",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  const GGS_extensionSetterMapForBuildingContext * p = (const GGS_extensionSetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForType::cMapElement_extensionGetterMapForType (const GGS_extensionGetterMapForType_2E_element & inValue
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mResultTypeName (inValue.mProperty_mResultTypeName),
mProperty_mInputFormalParameterList (inValue.mProperty_mInputFormalParameterList),
mProperty_mQualifier (inValue.mProperty_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForType::cMapElement_extensionGetterMapForType (const GGS_lstring & inKey,
                                                                              const GGS_lstring & in_mResultTypeName,
                                                                              const GGS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                                              const GGS_methodQualifier & in_mQualifier
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultTypeName (in_mResultTypeName),
mProperty_mInputFormalParameterList (in_mInputFormalParameterList),
mProperty_mQualifier (in_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionGetterMapForType::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionGetterMapForType::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionGetterMapForType (mProperty_lkey, mProperty_mResultTypeName, mProperty_mInputFormalParameterList, mProperty_mQualifier COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionGetterMapForType::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultTypeName" ":") ;
  mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputFormalParameterList" ":") ;
  mProperty_mInputFormalParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mQualifier" ":") ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::GGS_extensionGetterMapForType (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType & GGS_extensionGetterMapForType::operator = (const GGS_extensionGetterMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_ GGS_extensionGetterMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionGetterMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForType_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mResultTypeName = p->mProperty_mResultTypeName ;
      element.mProperty_mInputFormalParameterList = p->mProperty_mInputFormalParameterList ;
      element.mProperty_mQualifier = p->mProperty_mQualifier ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::enterElement (const GGS_extensionGetterMapForType_2E_element & inValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::addAssign_operation (const GGS_lstring & inKey,
                                                         const GGS_lstring & inArgument0,
                                                         const GGS_formalInputParameterListAST & inArgument1,
                                                         const GGS_methodQualifier & inArgument2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::add_operation (const GGS_extensionGetterMapForType & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType result = *this ;
  cEnumerator_extensionGetterMapForType enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mResultTypeName (HERE), enumerator.current_mInputFormalParameterList (HERE), enumerator.current_mQualifier (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_insertKey (GGS_lstring inKey,
                                                      GGS_lstring inArgument0,
                                                      GGS_formalInputParameterListAST inArgument1,
                                                      GGS_methodQualifier inArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' getter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterMapForType::getter_mResultTypeNameForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mProperty_mResultTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionGetterMapForType::getter_mInputFormalParameterListForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GGS_formalInputParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mProperty_mInputFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_extensionGetterMapForType::getter_mQualifierForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GGS_methodQualifier result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMResultTypeNameForKey (GGS_lstring inAttributeValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mProperty_mResultTypeName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMInputFormalParameterListForKey (GGS_formalInputParameterListAST inAttributeValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mProperty_mInputFormalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMQualifierForKey (GGS_methodQualifier inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForType * GGS_extensionGetterMapForType::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * result = (cMapElement_extensionGetterMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForType) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionGetterMapForType::cEnumerator_extensionGetterMapForType (const GGS_extensionGetterMapForType & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element cEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return GGS_extensionGetterMapForType_2E_element (p->mProperty_lkey, p->mProperty_mResultTypeName, p->mProperty_mInputFormalParameterList, p->mProperty_mQualifier) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST cEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mProperty_mInputFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier cEnumerator_extensionGetterMapForType::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ("extensionGetterMapForType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  const GGS_extensionGetterMapForType * p = (const GGS_extensionGetterMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForBuildingContext::cMapElement_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExtensionGetterMapForType (inValue.mProperty_mExtensionGetterMapForType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForBuildingContext::cMapElement_extensionGetterMapForBuildingContext (const GGS_lstring & inKey,
                                                                                                    const GGS_extensionGetterMapForType & in_mExtensionGetterMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionGetterMapForType (in_mExtensionGetterMapForType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionGetterMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionGetterMapForBuildingContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionGetterMapForBuildingContext (mProperty_lkey, mProperty_mExtensionGetterMapForType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionGetterMapForBuildingContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtensionGetterMapForType" ":") ;
  mProperty_mExtensionGetterMapForType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::GGS_extensionGetterMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext & GGS_extensionGetterMapForBuildingContext::operator = (const GGS_extensionGetterMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_ GGS_extensionGetterMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionGetterMapForBuildingContext * p = (cMapElement_extensionGetterMapForBuildingContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionGetterMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExtensionGetterMapForType = p->mProperty_mExtensionGetterMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::enterElement (const GGS_extensionGetterMapForBuildingContext_2E_element & inValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::addAssign_operation (const GGS_lstring & inKey,
                                                                    const GGS_extensionGetterMapForType & inArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::add_operation (const GGS_extensionGetterMapForBuildingContext & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext result = *this ;
  cEnumerator_extensionGetterMapForBuildingContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExtensionGetterMapForType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_insertKey (GGS_lstring inKey,
                                                                 GGS_extensionGetterMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::method_searchKey (GGS_lstring inKey,
                                                                 GGS_extensionGetterMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionGetterMapForType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForBuildingContext::getter_mExtensionGetterMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) attributes ;
  GGS_extensionGetterMapForType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    result = p->mProperty_mExtensionGetterMapForType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_setMExtensionGetterMapForTypeForKey (GGS_extensionGetterMapForType inAttributeValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForBuildingContext * p = (cMapElement_extensionGetterMapForBuildingContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    p->mProperty_mExtensionGetterMapForType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForBuildingContext * GGS_extensionGetterMapForBuildingContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * result = (cMapElement_extensionGetterMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForBuildingContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionGetterMapForBuildingContext::cEnumerator_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element cEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
  return GGS_extensionGetterMapForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionGetterMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType cEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
  return p->mProperty_mExtensionGetterMapForType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForBuildingContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ("extensionGetterMapForBuildingContext",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  const GGS_extensionGetterMapForBuildingContext * p = (const GGS_extensionGetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_keyRepresentation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperExtensionMap::cMapElement_wrapperExtensionMap (const GGS_wrapperExtensionMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperExtensionMap::cMapElement_wrapperExtensionMap (const GGS_lstring & inKey
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_wrapperExtensionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_wrapperExtensionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_wrapperExtensionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_wrapperExtensionMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::GGS_wrapperExtensionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::GGS_wrapperExtensionMap (const GGS_wrapperExtensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap & GGS_wrapperExtensionMap::operator = (const GGS_wrapperExtensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_ GGS_wrapperExtensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_wrapperExtensionMap * p = (cMapElement_wrapperExtensionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_wrapperExtensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_wrapperExtensionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::class_func_mapWithMapToOverride (const GGS_wrapperExtensionMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::enterElement (const GGS_wrapperExtensionMap_2E_element & inValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperExtensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::addAssign_operation (const GGS_lstring & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperExtensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::add_operation (const GGS_wrapperExtensionMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap result = *this ;
  cEnumerator_wrapperExtensionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::setter_insertKey (GGS_lstring inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperExtensionMap * GGS_wrapperExtensionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * result = (cMapElement_wrapperExtensionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperExtensionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_wrapperExtensionMap::cEnumerator_wrapperExtensionMap (const GGS_wrapperExtensionMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element cEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperExtensionMap * p = (const cMapElement_wrapperExtensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperExtensionMap) ;
  return GGS_wrapperExtensionMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @wrapperExtensionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ("wrapperExtensionMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperExtensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperExtensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperExtensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  const GGS_wrapperExtensionMap * p = (const GGS_wrapperExtensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperExtensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//'@semanticTypePrecedenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_semanticDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_semanticDeclarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_semanticDeclarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_semanticDeclarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
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
//
//     @semanticTypePrecedenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (cPtr_semanticDeclarationAST * inObject,
                                               GGS_galgasDeclarationAST & io_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_addAssociatedElement  (io_ioDeclarations, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionForGeneration_2E_weak::objectCompare (const GGS_semanticExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak & GGS_semanticExpressionForGeneration_2E_weak::operator = (const GGS_semanticExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (const GGS_semanticExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak GGS_semanticExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionForGeneration_2E_weak::bang_semanticExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionForGeneration) ;
      result = GGS_semanticExpressionForGeneration ((cPtr_semanticExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ("semanticExpressionForGeneration.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak GGS_semanticExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration_2E_weak result ;
  const GGS_semanticExpressionForGeneration_2E_weak * p = (const GGS_semanticExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticExpressionListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticExpressionListForGeneration : public cCollectionElement {
  public: GGS_semanticExpressionListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticExpressionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticExpressionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticExpressionListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticExpressionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration::GGS_semanticExpressionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration::GGS_semanticExpressionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::enterElement (const GGS_semanticExpressionListForGeneration_2E_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::class_func_listWithValue (const GGS_semanticExpressionForGeneration & inOperand0
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticExpressionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GGS_semanticExpressionForGeneration & in_mExpression
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::addAssign_operation (const GGS_semanticExpressionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_append (const GGS_semanticExpressionForGeneration inOperand0,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_insertAtIndex (const GGS_semanticExpressionForGeneration inOperand0,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_removeAtIndex (GGS_semanticExpressionForGeneration & outOperand0,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_popFirst (GGS_semanticExpressionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_popLast (GGS_semanticExpressionForGeneration & outOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::method_first (GGS_semanticExpressionForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::method_last (GGS_semanticExpressionForGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::add_operation (const GGS_semanticExpressionListForGeneration & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result = GGS_semanticExpressionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result = GGS_semanticExpressionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result = GGS_semanticExpressionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::plusAssign_operation (const GGS_semanticExpressionListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_setMExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  GGS_semanticExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_semanticExpressionListForGeneration::cEnumerator_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element cEnumerator_semanticExpressionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration cEnumerator_semanticExpressionListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ("semanticExpressionListForGeneration",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration result ;
  const GGS_semanticExpressionListForGeneration * p = (const GGS_semanticExpressionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionForGeneration_2E_weak::objectCompare (const GGS_castInExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak::GGS_castInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak & GGS_castInExpressionForGeneration_2E_weak::operator = (const GGS_castInExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak::GGS_castInExpressionForGeneration_2E_weak (const GGS_castInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak GGS_castInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_castInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration_2E_weak::bang_castInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_castInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionForGeneration) ;
      result = GGS_castInExpressionForGeneration ((cPtr_castInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @castInExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration_2E_weak ("castInExpressionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak GGS_castInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration_2E_weak result ;
  const GGS_castInExpressionForGeneration_2E_weak * p = (const GGS_castInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mFormalArgumentType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentType.printNonNullClassInstanceProperties ("mFormalArgumentType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterForGeneration::objectCompare (const GGS_actualParameterForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration::GGS_actualParameterForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration::GGS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_actualParameterForGeneration::readProperty_mFormalArgumentType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    return p->mProperty_mFormalArgumentType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType
                                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mFormalArgumentType () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
}


//--------------------------------------------------------------------------------------------------
//
//     @actualParameterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actualParameterForGeneration result ;
  const GGS_actualParameterForGeneration * p = (const GGS_actualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterForGeneration_2E_weak::objectCompare (const GGS_actualParameterForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak::GGS_actualParameterForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak & GGS_actualParameterForGeneration_2E_weak::operator = (const GGS_actualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak::GGS_actualParameterForGeneration_2E_weak (const GGS_actualParameterForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak GGS_actualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterForGeneration_2E_weak::bang_actualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterForGeneration) ;
      result = GGS_actualParameterForGeneration ((cPtr_actualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualParameterForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak ("actualParameterForGeneration.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak GGS_actualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actualParameterForGeneration_2E_weak result ;
  const GGS_actualParameterForGeneration_2E_weak * p = (const GGS_actualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (cPtr_actualParameterForGeneration * inObject,
                                                  GGS_stringset & io_ioInclusionSet,
                                                  GGS_uint & io_ioTemporaryVariableIndex,
                                                  GGS_string & io_ioImplementation,
                                                  GGS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GGS_stringlist & io_ioOutputVariableList,
                                                  GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GGS_string & out_outCppName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppName.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    inObject->method_generateActualParameter (io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioImplementation, io_ioJokerParametersToReleaseList, io_ioOutputVariableList, io_ioUnusedVariableCppNameSet, out_outCppName, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generatePoisonedVariables (cPtr_actualParameterForGeneration * inObject,
                                                    GGS_string & io_ioImplementation,
                                                    GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    inObject->method_generatePoisonedVariables (io_ioImplementation, io_ioUnusedVariableCppNameSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterForGeneration_2E_weak::objectCompare (const GGS_outputActualParameterForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak::GGS_outputActualParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak & GGS_outputActualParameterForGeneration_2E_weak::operator = (const GGS_outputActualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak::GGS_outputActualParameterForGeneration_2E_weak (const GGS_outputActualParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak GGS_outputActualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration_2E_weak::bang_outputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputActualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterForGeneration) ;
      result = GGS_outputActualParameterForGeneration ((cPtr_outputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputActualParameterForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2E_weak ("outputActualParameterForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputActualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak GGS_outputActualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration_2E_weak result ;
  const GGS_outputActualParameterForGeneration_2E_weak * p = (const GGS_outputActualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@unifiedTypeMapEntryList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_unifiedTypeMapEntryList : public cCollectionElement {
  public: GGS_unifiedTypeMapEntryList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntry & in_mEntry
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapEntryList::cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntry & in_mEntry
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntry) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapEntryList::cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntry) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_unifiedTypeMapEntryList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_unifiedTypeMapEntryList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapEntryList (mObject.mProperty_mEntry COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_unifiedTypeMapEntryList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEntry" ":") ;
  mObject.mProperty_mEntry.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_unifiedTypeMapEntryList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapEntryList * operand = (cCollectionElement_unifiedTypeMapEntryList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapEntryList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList::GGS_unifiedTypeMapEntryList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList::GGS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::enterElement (const GGS_unifiedTypeMapEntryList_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList result ;
  if (inOperand0.isValid ()) {
    result = GGS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_unifiedTypeMapEntryList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_unifiedTypeMapEntry & in_mEntry
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapEntryList * p = nullptr ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (in_mEntry COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::addAssign_operation (const GGS_unifiedTypeMapEntry & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
      outOperand0 = p->mObject.mProperty_mEntry ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::add_operation (const GGS_unifiedTypeMapEntryList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result = GGS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result = GGS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result = GGS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::plusAssign_operation (const GGS_unifiedTypeMapEntryList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_setMEntryAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntry = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntryList::getter_mEntryAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    result = p->mObject.mProperty_mEntry ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMapEntryList::cEnumerator_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element cEnumerator_unifiedTypeMapEntryList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_unifiedTypeMapEntryList::current_mEntry (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject.mProperty_mEntry ;
}




//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntryList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ("unifiedTypeMapEntryList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntryList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntryList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntryList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList result ;
  const GGS_unifiedTypeMapEntryList * p = (const GGS_unifiedTypeMapEntryList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntryList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterForGeneration_2E_weak::objectCompare (const GGS_outputInputActualParameterForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak::GGS_outputInputActualParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak & GGS_outputInputActualParameterForGeneration_2E_weak::operator = (const GGS_outputInputActualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak::GGS_outputInputActualParameterForGeneration_2E_weak (const GGS_outputInputActualParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak GGS_outputInputActualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration_2E_weak::bang_outputInputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputActualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterForGeneration) ;
      result = GGS_outputInputActualParameterForGeneration ((cPtr_outputInputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputActualParameterForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2E_weak ("outputInputActualParameterForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputActualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak GGS_outputInputActualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration_2E_weak result ;
  const GGS_outputInputActualParameterForGeneration_2E_weak * p = (const GGS_outputInputActualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualParameterForGeneration_2E_weak::objectCompare (const GGS_inputActualParameterForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak::GGS_inputActualParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak & GGS_inputActualParameterForGeneration_2E_weak::operator = (const GGS_inputActualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak::GGS_inputActualParameterForGeneration_2E_weak (const GGS_inputActualParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak GGS_inputActualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration_2E_weak::bang_inputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualParameterForGeneration) ;
      result = GGS_inputActualParameterForGeneration ((cPtr_inputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualParameterForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2E_weak ("inputActualParameterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak GGS_inputActualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration_2E_weak result ;
  const GGS_inputActualParameterForGeneration_2E_weak * p = (const GGS_inputActualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputJokerParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputJokerParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInputActualCppName.printNonNullClassInstanceProperties ("mInputActualCppName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerParameterForGeneration::objectCompare (const GGS_inputJokerParameterForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration::GGS_inputJokerParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                  const GGS_string & in_mInputActualCppName,
                  const GGS__32_stringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputJokerParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_inputJokerParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->inputJokerParameterForGeneration_init_21__21__21_ (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputJokerParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::
inputJokerParameterForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                   const GGS_string & in_mInputActualCppName,
                                                   const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration::GGS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                           const GGS_string & in_mInputActualCppName,
                                                                                           const GGS__32_stringlist & in_mPoisonedVarNameList
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_inputJokerParameterForGeneration (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_inputJokerParameterForGeneration::readProperty_mInputActualCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    return p->mProperty_mInputActualCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_inputJokerParameterForGeneration::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_stringlist () ;
  }else{
    cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                              const GGS_string & in_mInputActualCppName,
                                                                              const GGS__32_stringlist & in_mPoisonedVarNameList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputJokerParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

void cPtr_inputJokerParameterForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@inputJokerParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputJokerParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputJokerParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputJokerParameterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ("inputJokerParameterForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputJokerParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration result ;
  const GGS_inputJokerParameterForGeneration * p = (const GGS_inputJokerParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerParameterForGeneration_2E_weak::objectCompare (const GGS_inputJokerParameterForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak::GGS_inputJokerParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak & GGS_inputJokerParameterForGeneration_2E_weak::operator = (const GGS_inputJokerParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak::GGS_inputJokerParameterForGeneration_2E_weak (const GGS_inputJokerParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak GGS_inputJokerParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration_2E_weak::bang_inputJokerParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputJokerParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerParameterForGeneration) ;
      result = GGS_inputJokerParameterForGeneration ((cPtr_inputJokerParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputJokerParameterForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2E_weak ("inputJokerParameterForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputJokerParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak GGS_inputJokerParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration_2E_weak result ;
  const GGS_inputJokerParameterForGeneration_2E_weak * p = (const GGS_inputJokerParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@actualParameterListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actualParameterListForGeneration : public cCollectionElement {
  public: GGS_actualParameterListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterForGeneration & in_mActualParameter
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListForGeneration::cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterForGeneration & in_mActualParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListForGeneration::cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actualParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualParameterListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actualParameterListForGeneration (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actualParameterListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualParameter" ":") ;
  mObject.mProperty_mActualParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration::GGS_actualParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration::GGS_actualParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_actualParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_actualParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::enterElement (const GGS_actualParameterListForGeneration_2E_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::class_func_listWithValue (const GGS_actualParameterForGeneration & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_actualParameterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_actualParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_actualParameterForGeneration & in_mActualParameter
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListForGeneration (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::addAssign_operation (const GGS_actualParameterForGeneration & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_append (const GGS_actualParameterForGeneration inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_insertAtIndex (const GGS_actualParameterForGeneration inOperand0,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_removeAtIndex (GGS_actualParameterForGeneration & outOperand0,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mActualParameter ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_popFirst (GGS_actualParameterForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_popLast (GGS_actualParameterForGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::method_first (GGS_actualParameterForGeneration & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::method_last (GGS_actualParameterForGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::add_operation (const GGS_actualParameterListForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result = GGS_actualParameterListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result = GGS_actualParameterListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result = GGS_actualParameterListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::plusAssign_operation (const GGS_actualParameterListForGeneration inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_setMActualParameterAtIndex (GGS_actualParameterForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterListForGeneration::getter_mActualParameterAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  GGS_actualParameterForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    result = p->mObject.mProperty_mActualParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_actualParameterListForGeneration::cEnumerator_actualParameterListForGeneration (const GGS_actualParameterListForGeneration & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element cEnumerator_actualParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration cEnumerator_actualParameterListForGeneration::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject.mProperty_mActualParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @actualParameterListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration ("actualParameterListForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration result ;
  const GGS_actualParameterListForGeneration * p = (const GGS_actualParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionForGeneration::cPtr_semanticInstructionForGeneration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionForGeneration::objectCompare (const GGS_semanticInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration::GGS_semanticInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration::GGS_semanticInstructionForGeneration (const cPtr_semanticInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionForGeneration::cPtr_semanticInstructionForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ("semanticInstructionForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration result ;
  const GGS_semanticInstructionForGeneration * p = (const GGS_semanticInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionForGeneration_2E_weak::objectCompare (const GGS_semanticInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak::GGS_semanticInstructionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak & GGS_semanticInstructionForGeneration_2E_weak::operator = (const GGS_semanticInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak::GGS_semanticInstructionForGeneration_2E_weak (const GGS_semanticInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak GGS_semanticInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration_2E_weak::bang_semanticInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionForGeneration) ;
      result = GGS_semanticInstructionForGeneration ((cPtr_semanticInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ("semanticInstructionForGeneration.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak GGS_semanticInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration_2E_weak result ;
  const GGS_semanticInstructionForGeneration_2E_weak * p = (const GGS_semanticInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInstruction (cPtr_semanticInstructionForGeneration * inObject,
                                              GGS_stringset & io_ioInclusionSet,
                                              GGS_uint & io_ioTemporaryVariableIndex,
                                              GGS_stringset & io_ioUnusedVariableCppNameSet,
                                              const GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                              GGS_string & io_ioGeneratedCode,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    inObject->method_generateInstruction (io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inGenerateSyntaxDirectedTranslationString, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @semanticBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticBlockInstructionForGeneration::cPtr_semanticBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticBlockInstructionForGeneration::objectCompare (const GGS_semanticBlockInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration::GGS_semanticBlockInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration::
init_21_ (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_semanticBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_semanticBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->semanticBlockInstructionForGeneration_init_21_ (in_mInstructionList, inCompiler) ;
  const GGS_semanticBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::
semanticBlockInstructionForGeneration_init_21_ (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration::GGS_semanticBlockInstructionForGeneration (const cPtr_semanticBlockInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration::class_func_new (const GGS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_semanticBlockInstructionForGeneration (in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticBlockInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_semanticBlockInstructionForGeneration * p = (cPtr_semanticBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticBlockInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticBlockInstructionForGeneration::cPtr_semanticBlockInstructionForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionList () {
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_semanticBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

void cPtr_semanticBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@semanticBlockInstructionForGeneration:") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_semanticBlockInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_semanticBlockInstructionForGeneration (mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticBlockInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ("semanticBlockInstructionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration result ;
  const GGS_semanticBlockInstructionForGeneration * p = (const GGS_semanticBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticBlockInstructionForGeneration_2E_weak::objectCompare (const GGS_semanticBlockInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak::GGS_semanticBlockInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak & GGS_semanticBlockInstructionForGeneration_2E_weak::operator = (const GGS_semanticBlockInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak::GGS_semanticBlockInstructionForGeneration_2E_weak (const GGS_semanticBlockInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak GGS_semanticBlockInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration_2E_weak::bang_semanticBlockInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticBlockInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticBlockInstructionForGeneration) ;
      result = GGS_semanticBlockInstructionForGeneration ((cPtr_semanticBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticBlockInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2E_weak ("semanticBlockInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticBlockInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticBlockInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticBlockInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak GGS_semanticBlockInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration_2E_weak result ;
  const GGS_semanticBlockInstructionForGeneration_2E_weak * p = (const GGS_semanticBlockInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticBlockInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@listOfSemanticInstructionListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_listOfSemanticInstructionListForGeneration : public cCollectionElement {
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                         const GGS_location & in_mEndOfInstructionList
                                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                              const GGS_location & in_mEndOfInstructionList
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_listOfSemanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_listOfSemanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_listOfSemanticInstructionListForGeneration (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_listOfSemanticInstructionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::enterElement (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inValue,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::class_func_listWithValue (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                         const GGS_location & inOperand1
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GGS_location & in_mEndOfInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (in_mInstructionList,
                                                                                in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::addAssign_operation (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                          const GGS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_append (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                    const GGS_location inOperand1,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_insertAtIndex (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                           const GGS_location inOperand1,
                                                                           const GGS_uint inInsertionIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_removeAtIndex (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                           GGS_location & outOperand1,
                                                                           const GGS_uint inRemoveIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mInstructionList ;
      outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_popFirst (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                      GGS_location & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_popLast (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                     GGS_location & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::method_first (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                   GGS_location & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::method_last (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                  GGS_location & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::add_operation (const GGS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result = GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result = GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result = GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusAssign_operation (const GGS_listOfSemanticInstructionListForGeneration inOperand,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_setMInstructionListAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_listOfSemanticInstructionListForGeneration::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_listOfSemanticInstructionListForGeneration::cEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element cEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration cEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @listOfSemanticInstructionListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ("listOfSemanticInstructionListForGeneration",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_listOfSemanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSemanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSemanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  const GGS_listOfSemanticInstructionListForGeneration * p = (const GGS_listOfSemanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSemanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationForGeneration::cPtr_semanticDeclarationForGeneration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationForGeneration::objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration::GGS_semanticDeclarationForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration::GGS_semanticDeclarationForGeneration (const cPtr_semanticDeclarationForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationForGeneration::cPtr_semanticDeclarationForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ("semanticDeclarationForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration result ;
  const GGS_semanticDeclarationForGeneration * p = (const GGS_semanticDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationForGeneration_2E_weak::objectCompare (const GGS_semanticDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak::GGS_semanticDeclarationForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak & GGS_semanticDeclarationForGeneration_2E_weak::operator = (const GGS_semanticDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak::GGS_semanticDeclarationForGeneration_2E_weak (const GGS_semanticDeclarationForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak GGS_semanticDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationForGeneration_2E_weak::bang_semanticDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationForGeneration) ;
      result = GGS_semanticDeclarationForGeneration ((cPtr_semanticDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak ("semanticDeclarationForGeneration.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak GGS_semanticDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration_2E_weak result ;
  const GGS_semanticDeclarationForGeneration_2E_weak * p = (const GGS_semanticDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendPrimitiveTypeDeclaration (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & /* ioArgument_ioHeader */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendPrimitiveTypePreDeclaration (cPtr_semanticDeclarationForGeneration * inObject,
                                                            GGS_string & io_ioHeader,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendPrimitiveTypePreDeclaration  (io_ioHeader, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_getImplementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_getImplementationCppFileName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasCppHeaderFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isPredefined (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind callExtensionGetter_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_headerKind result ;
  if (nullptr != inObject) {
    result = inObject->getter_headerKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticDeclarationListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticDeclarationListForGeneration : public cCollectionElement {
  public: GGS_semanticDeclarationListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticDeclarationListForGeneration (const GGS_string & in_infoMessage,
                                                                   const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GGS_string & in_infoMessage,
                                                                                                                  const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_infoMessage, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_infoMessage, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticDeclarationListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticDeclarationListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListForGeneration (mObject.mProperty_infoMessage, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticDeclarationListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("infoMessage" ":") ;
  mObject.mProperty_infoMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration::GGS_semanticDeclarationListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration::GGS_semanticDeclarationListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::enterElement (const GGS_semanticDeclarationListForGeneration_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS_semanticDeclarationForGeneration & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticDeclarationListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_infoMessage,
                                                                          const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (in_infoMessage,
                                                                          in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::addAssign_operation (const GGS_string & inOperand0,
                                                                    const GGS_semanticDeclarationForGeneration & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_append (const GGS_string inOperand0,
                                                              const GGS_semanticDeclarationForGeneration inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS_semanticDeclarationForGeneration inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS_semanticDeclarationForGeneration & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
      outOperand0 = p->mObject.mProperty_infoMessage ;
      outOperand1 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                GGS_semanticDeclarationForGeneration & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                               GGS_semanticDeclarationForGeneration & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::method_first (GGS_string & outOperand0,
                                                             GGS_semanticDeclarationForGeneration & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::method_last (GGS_string & outOperand0,
                                                            GGS_semanticDeclarationForGeneration & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::add_operation (const GGS_semanticDeclarationListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::plusAssign_operation (const GGS_semanticDeclarationListForGeneration inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_setInfoMessageAtIndex (GGS_string inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_infoMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_semanticDeclarationListForGeneration::getter_infoMessageAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_infoMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_setMDeclarationAtIndex (GGS_semanticDeclarationForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationListForGeneration::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GGS_semanticDeclarationForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_semanticDeclarationListForGeneration::cEnumerator_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element cEnumerator_semanticDeclarationListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_semanticDeclarationListForGeneration::current_infoMessage (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_infoMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration cEnumerator_semanticDeclarationListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ("semanticDeclarationListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration result ;
  const GGS_semanticDeclarationListForGeneration * p = (const GGS_semanticDeclarationListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@signatureForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_signatureForGrammarAnalysis : public cCollectionElement {
  public: GGS_signatureForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_signatureForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                          const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingModeForGrammarAnalysis, in_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, inElement.mProperty_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_signatureForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_signatureForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_signatureForGrammarAnalysis (mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, mObject.mProperty_mGalgasTypeNameForGrammarAnalysis COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_signatureForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingModeForGrammarAnalysis" ":") ;
  mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGalgasTypeNameForGrammarAnalysis" ":") ;
  mObject.mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis::GGS_signatureForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis::GGS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::enterElement (const GGS_signatureForGrammarAnalysis_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::class_func_listWithValue (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                           const GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_signatureForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 in_mGalgasTypeNameForGrammarAnalysis COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::addAssign_operation (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                           const GGS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_append (const GGS_formalArgumentPassingModeAST inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_insertAtIndex (const GGS_formalArgumentPassingModeAST inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_removeAtIndex (GGS_formalArgumentPassingModeAST & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
      outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_popFirst (GGS_formalArgumentPassingModeAST & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_popLast (GGS_formalArgumentPassingModeAST & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::method_first (GGS_formalArgumentPassingModeAST & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::method_last (GGS_formalArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::add_operation (const GGS_signatureForGrammarAnalysis & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::plusAssign_operation (const GGS_signatureForGrammarAnalysis inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (GGS_formalArgumentPassingModeAST inOperand,
                                                                                                     GGS_uint inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_signatureForGrammarAnalysis::getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GGS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (GGS_lstring inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_signatureForGrammarAnalysis::getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_signatureForGrammarAnalysis::cEnumerator_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element cEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST cEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
}




//--------------------------------------------------------------------------------------------------
//
//     @signatureForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ("signatureForGrammarAnalysis",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_signatureForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_signatureForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_signatureForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis result ;
  const GGS_signatureForGrammarAnalysis * p = (const GGS_signatureForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_signatureForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inValue
                                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParametersList (inValue.mProperty_mFormalParametersList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                                                                  const GGS_signatureForGrammarAnalysis & in_mFormalParametersList
                                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParametersList (in_mFormalParametersList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (mProperty_lkey, mProperty_mFormalParametersList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParametersList" ":") ;
  mProperty_mFormalParametersList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis & GGS_nonterminalSymbolLabelMapForGrammarAnalysis::operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParametersList = p->mProperty_mFormalParametersList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMapToOverride
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::enterElement (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalSymbolLabelMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                           const GGS_signatureForGrammarAnalysis & inArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalSymbolLabelMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::add_operation (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result = *this ;
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParametersList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                        GGS_signatureForGrammarAnalysis inArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey = "the rule label '%K' is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GGS_lstring inKey,
                                                                        GGS_signatureForGrammarAnalysis & outArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                                       inCompiler,
                                                                                                                                                       kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey
                                                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mFormalParametersList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_mFormalParametersListForKey (const GGS_string & inKey,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  GGS_signatureForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    result = p->mProperty_mFormalParametersList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_setMFormalParametersListForKey (GGS_signatureForGrammarAnalysis inAttributeValue,
                                                                                             GGS_string inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    p->mProperty_mFormalParametersList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                              const GGS_string & inKey
                                                                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * result = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mFormalParametersList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return p->mProperty_mFormalParametersList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalSymbolLabelMapForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalSymbolLabelMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalSymbolLabelMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis::cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mNonTerminalIndex (inValue.mProperty_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (inValue.mProperty_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis::cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                                                        const GGS_uint & in_mNonTerminalIndex,
                                                                                                        const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mNonTerminalIndex (in_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (in_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (mProperty_lkey, mProperty_mNonTerminalIndex, mProperty_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonTerminalSymbolMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalIndex" ":") ;
  mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalSymbolParametersMap" ":") ;
  mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::GGS_nonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::GGS_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis & GGS_nonTerminalSymbolMapForGrammarAnalysis::operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_nonTerminalSymbolMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mNonTerminalIndex = p->mProperty_mNonTerminalIndex ;
      element.mProperty_mNonterminalSymbolParametersMap = p->mProperty_mNonterminalSymbolParametersMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::enterElement (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                      const GGS_uint & inArgument0,
                                                                      const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::add_operation (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result = *this ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mNonTerminalIndex (HERE), enumerator.current_mNonterminalSymbolParametersMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                   GGS_uint inArgument0,
                                                                   GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey = "the '<%K>' non terminal symbol is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::method_searchKey (GGS_lstring inKey,
                                                                   GGS_uint & outArgument0,
                                                                   GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mNonTerminalIndex ;
    outArgument1 = p->mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonterminalSymbolParametersMapForKey (const GGS_string & inKey,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonterminalSymbolParametersMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GGS_uint inAttributeValue,
                                                                                    GGS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonTerminalIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonterminalSymbolParametersMapForKey (GGS_nonterminalSymbolLabelMapForGrammarAnalysis inAttributeValue,
                                                                                                  GGS_string inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonterminalSymbolParametersMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis * GGS_nonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                    const GGS_string & inKey
                                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::cEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex, p->mProperty_mNonterminalSymbolParametersMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonterminalSymbolParametersMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalSymbolMapForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ("nonTerminalSymbolMapForGrammarAnalysis",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  const GGS_nonTerminalSymbolMapForGrammarAnalysis * p = (const GGS_nonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@nonTerminalToAddList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_nonTerminalToAddList : public cCollectionElement {
  public: GGS_nonTerminalToAddList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_nonTerminalToAddList (const GGS_string & in_mSyntaxComponentName,
                                                   const GGS_uint & in_mNonTerminalToAddCount
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_nonTerminalToAddList (const GGS_nonTerminalToAddList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GGS_string & in_mSyntaxComponentName,
                                                                                  const GGS_uint & in_mNonTerminalToAddCount
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GGS_nonTerminalToAddList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_nonTerminalToAddList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_nonTerminalToAddList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_nonTerminalToAddList (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonTerminalToAddCount COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_nonTerminalToAddList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalToAddCount" ":") ;
  mObject.mProperty_mNonTerminalToAddCount.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList::GGS_nonTerminalToAddList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList::GGS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::enterElement (const GGS_nonTerminalToAddList_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                             const GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_nonTerminalToAddList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_string & in_mSyntaxComponentName,
                                                          const GGS_uint & in_mNonTerminalToAddCount
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (in_mSyntaxComponentName,
                                                          in_mNonTerminalToAddCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::addAssign_operation (const GGS_string & inOperand0,
                                                    const GGS_uint & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_append (const GGS_string inOperand0,
                                              const GGS_uint inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_insertAtIndex (const GGS_string inOperand0,
                                                     const GGS_uint inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_removeAtIndex (GGS_string & outOperand0,
                                                     GGS_uint & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
      outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
      outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_popFirst (GGS_string & outOperand0,
                                                GGS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_popLast (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::method_first (GGS_string & outOperand0,
                                             GGS_uint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::method_last (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::add_operation (const GGS_nonTerminalToAddList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::plusAssign_operation (const GGS_nonTerminalToAddList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_setMSyntaxComponentNameAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonTerminalToAddList::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_setMNonTerminalToAddCountAtIndex (GGS_uint inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonTerminalToAddCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalToAddList::getter_mNonTerminalToAddCountAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalToAddList::cEnumerator_nonTerminalToAddList (const GGS_nonTerminalToAddList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element cEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mNonTerminalToAddCount ;
}




//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalToAddList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ("nonTerminalToAddList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalToAddList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalToAddList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalToAddList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList result ;
  const GGS_nonTerminalToAddList * p = (const GGS_nonTerminalToAddList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalToAddList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalCheckAssignementList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalCheckAssignementList : public cCollectionElement {
  public: GGS_terminalCheckAssignementList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                           const GGS_string & in_mTargetVarCppName,
                                                           const GGS_string & in_mSourceLexicalAttributeName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                                                                  const GGS_string & in_mTargetVarCppName,
                                                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mTargetVarCppName, inElement.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalCheckAssignementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalCheckAssignementList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalCheckAssignementList (mObject.mProperty_mTypeName, mObject.mProperty_mTargetVarCppName, mObject.mProperty_mSourceLexicalAttributeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalCheckAssignementList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetVarCppName" ":") ;
  mObject.mProperty_mTargetVarCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceLexicalAttributeName" ":") ;
  mObject.mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::enterElement (const GGS_terminalCheckAssignementList_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                             const GGS_string & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_terminalCheckAssignementList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_string & in_mTypeName,
                                                                  const GGS_string & in_mTargetVarCppName,
                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (in_mTypeName,
                                                                  in_mTargetVarCppName,
                                                                  in_mSourceLexicalAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::addAssign_operation (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_append (const GGS_string inOperand0,
                                                      const GGS_string inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_insertAtIndex (const GGS_string inOperand0,
                                                             const GGS_string inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_removeAtIndex (GGS_string & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
      outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popFirst (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popLast (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_first (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_last (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::add_operation (const GGS_terminalCheckAssignementList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::plusAssign_operation (const GGS_terminalCheckAssignementList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTargetVarCppNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetVarCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mTargetVarCppNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTargetVarCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMSourceLexicalAttributeNameAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceLexicalAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mSourceLexicalAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_terminalCheckAssignementList::cEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element cEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mSourceLexicalAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckAssignementList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ("terminalCheckAssignementList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckAssignementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckAssignementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckAssignementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  const GGS_terminalCheckAssignementList * p = (const GGS_terminalCheckAssignementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckAssignementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration::objectCompare (const GGS_syntaxInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (const GGS_location & in_mInstructionLocation
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ("syntaxInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration result ;
  const GGS_syntaxInstructionForGeneration * p = (const GGS_syntaxInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak & GGS_syntaxInstructionForGeneration_2E_weak::operator = (const GGS_syntaxInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (const GGS_syntaxInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration_2E_weak::bang_syntaxInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionForGeneration) ;
      result = GGS_syntaxInstructionForGeneration ((cPtr_syntaxInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ("syntaxInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  const GGS_syntaxInstructionForGeneration_2E_weak * p = (const GGS_syntaxInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@filewrapperTemplateListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_filewrapperTemplateListForGeneration : public cCollectionElement {
  public: GGS_filewrapperTemplateListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                                   const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                   const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                  const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                  const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplateFormalInputParameters, in_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplateFormalInputParameters, inElement.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_filewrapperTemplateListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_filewrapperTemplateListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListForGeneration (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplateFormalInputParameters, mObject.mProperty_mTemplateInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_filewrapperTemplateListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateName" ":") ;
  mObject.mProperty_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateFormalInputParameters" ":") ;
  mObject.mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTemplateInstructionListForGeneration" ":") ;
  mObject.mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration::GGS_filewrapperTemplateListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration::GGS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::enterElement (const GGS_filewrapperTemplateListForGeneration_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                                             const GGS_templateInstructionListForGeneration & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_mFilewrapperTemplateName,
                                                                          const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                          const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (in_mFilewrapperTemplateName,
                                                                          in_mFilewrapperTemplateFormalInputParameters,
                                                                          in_mTemplateInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::addAssign_operation (const GGS_string & inOperand0,
                                                                    const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                    const GGS_templateInstructionListForGeneration & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_append (const GGS_string inOperand0,
                                                              const GGS_formalInputParameterListForGeneration inOperand1,
                                                              const GGS_templateInstructionListForGeneration inOperand2,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS_formalInputParameterListForGeneration inOperand1,
                                                                     const GGS_templateInstructionListForGeneration inOperand2,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS_formalInputParameterListForGeneration & outOperand1,
                                                                     GGS_templateInstructionListForGeneration & outOperand2,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
      outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
      outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                GGS_formalInputParameterListForGeneration & outOperand1,
                                                                GGS_templateInstructionListForGeneration & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                               GGS_formalInputParameterListForGeneration & outOperand1,
                                                               GGS_templateInstructionListForGeneration & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::method_first (GGS_string & outOperand0,
                                                             GGS_formalInputParameterListForGeneration & outOperand1,
                                                             GGS_templateInstructionListForGeneration & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::method_last (GGS_string & outOperand0,
                                                            GGS_formalInputParameterListForGeneration & outOperand1,
                                                            GGS_templateInstructionListForGeneration & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::add_operation (const GGS_filewrapperTemplateListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::plusAssign_operation (const GGS_filewrapperTemplateListForGeneration inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateNameAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GGS_formalInputParameterListForGeneration inOperand,
                                                                                                           GGS_uint inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_formalInputParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMTemplateInstructionListForGenerationAtIndex (GGS_templateInstructionListForGeneration inOperand,
                                                                                                       GGS_uint inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTemplateInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_filewrapperTemplateListForGeneration::getter_mTemplateInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_templateInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_filewrapperTemplateListForGeneration::cEnumerator_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element cEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration cEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration cEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mTemplateInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ("filewrapperTemplateListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration result ;
  const GGS_filewrapperTemplateListForGeneration * p = (const GGS_filewrapperTemplateListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GGS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                GGS_stringset & io_ioInclusionSet,
                                                GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_31_  (io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_32_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                          GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GGS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                const GGS_string constin_inOutputDirectory,
                                                GGS_stringset & io_ioInclusionSet,
                                                GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_32_  (constin_inOutputDirectory, io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationForGeneration::getter_appendTypeGenericImplementation (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outImplementation ; // Returned variable
  result_outImplementation = GGS_string::makeEmptyString () ;
//---
  return result_outImplementation ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendTypeGenericImplementation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_string & outArgument_outImplementation,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (cPtr_semanticDeclarationForGeneration * inObject,
                                                       const GGS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GGS_stringset & io_ioInclusionSet,
                                                       GGS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  out_outImplementation.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificImplementation  (constin_inUnifiedTypeMap, io_ioInclusionSet, out_outImplementation, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificFiles (const GGS_string /* constinArgument_inProductDirectory */,
                                                                        GGS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                        GGS_stringlist & /* ioArgument_ioCocoaProductFileList */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (cPtr_semanticDeclarationForGeneration * inObject,
                                              const GGS_string constin_inProductDirectory,
                                              GGS_stringset & io_ioAllProductFileSet,
                                              GGS_stringlist & io_ioCocoaProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificFiles  (constin_inProductDirectory, io_ioAllProductFileSet, io_ioCocoaProductFileList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (cPtr_semanticInstructionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_analyzeSemanticInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localConstantList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localConstantList : public cCollectionElement {
  public: GGS_localConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                const GGS_lstring & in_mName,
                                                const GGS_bool & in_mNoWarningIfUnused,
                                                const GGS_string & in_mCppName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_lstring & in_mName,
                                                                            const GGS_bool & in_mNoWarningIfUnused,
                                                                            const GGS_string & in_mCppName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mNoWarningIfUnused, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localConstantList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mNoWarningIfUnused, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localConstantList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNoWarningIfUnused" ":") ;
  mObject.mProperty_mNoWarningIfUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::enterElement (const GGS_localConstantList_2E_element & inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const GGS_lstring & inOperand1,
                                                                       const GGS_bool & inOperand2,
                                                                       const GGS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_localConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_unifiedTypeMapEntry & in_mType,
                                                       const GGS_lstring & in_mName,
                                                       const GGS_bool & in_mNoWarningIfUnused,
                                                       const GGS_string & in_mCppName
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (in_mType,
                                                       in_mName,
                                                       in_mNoWarningIfUnused,
                                                       in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::addAssign_operation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                 const GGS_lstring & inOperand1,
                                                 const GGS_bool & inOperand2,
                                                 const GGS_string & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                           const GGS_lstring inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_string inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_bool inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  GGS_string & outOperand3,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localConstantList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mName ;
      outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
      outOperand3 = p->mObject.mProperty_mCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
                                             GGS_string & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_bool & outOperand2,
                                            GGS_string & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_bool & outOperand2,
                                          GGS_string & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                         GGS_lstring & outOperand1,
                                         GGS_bool & outOperand2,
                                         GGS_string & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::add_operation (const GGS_localConstantList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::plusAssign_operation (const GGS_localConstantList inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localConstantList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNoWarningIfUnusedAtIndex (GGS_bool inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNoWarningIfUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localConstantList::getter_mNoWarningIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mNoWarningIfUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localConstantList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_localConstantList::cEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element cEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @localConstantList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ("localConstantList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  const GGS_localConstantList * p = (const GGS_localConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localInitializedVariableList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localInitializedVariableList : public cCollectionElement {
  public: GGS_localInitializedVariableList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                           const GGS_lstring & in_mName,
                                                           const GGS_string & in_mCppName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                  const GGS_lstring & in_mName,
                                                                                                  const GGS_string & in_mCppName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localInitializedVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localInitializedVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localInitializedVariableList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localInitializedVariableList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::enterElement (const GGS_localInitializedVariableList_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_localInitializedVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localInitializedVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_unifiedTypeMapEntry & in_mType,
                                                                  const GGS_lstring & in_mName,
                                                                  const GGS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (in_mType,
                                                                  in_mName,
                                                                  in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::addAssign_operation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                            const GGS_lstring & inOperand1,
                                                            const GGS_string & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mName ;
      outOperand2 = p->mObject.mProperty_mCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::add_operation (const GGS_localInitializedVariableList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::plusAssign_operation (const GGS_localInitializedVariableList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localInitializedVariableList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localInitializedVariableList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localInitializedVariableList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_localInitializedVariableList::cEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element cEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @localInitializedVariableList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ("localInitializedVariableList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localInitializedVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  const GGS_localInitializedVariableList * p = (const GGS_localInitializedVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_correspondingEffectiveParameterString (const GGS_formalArgumentPassingModeAST & inObject,
                                                                  Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (cPtr_semanticDeclarationAST * inObject,
                                                  GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  GGS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInGraph (io_ioSemanticTypePrecedenceGraph, io_ioEquatableExtensionMap, io_ioExtensionInitializerForBuildingContext, io_ioExtensionMethodMapForBuildingContext, io_ioExtensionGetterMapForBuildingContext, io_ioExtensionSetterMapForBuildingContext, io_ioExtensionOverrideDefinitionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (cPtr_semanticDeclarationAST * inObject,
                                                            GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                            const GGS_extensionInitializerForBuildingContext constin_inExtensionInitializerMapForBuildingContext,
                                                            const GGS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                            const GGS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                            const GGS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            GGS_semanticContext & io_ioSemanticContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInSemanticContext (io_ioEquatableExtensionMap, constin_inExtensionInitializerMapForBuildingContext, constin_inExtensionMethodMapForBuildingContext, constin_inExtensionGetterMapForBuildingContext, constin_inExtensionSetterMapForBuildingContext, io_ioTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_semanticDeclarationAST * inObject,
                                           GGS_lstringlist & io_ioUsefulnessRootEntities,
                                           GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const GGS_string constin_inProductDirectory,
                                           const GGS_semanticContext constin_inSemanticContext,
                                           GGS_unifiedTypeMap & io_ioTypeMap,
                                           const GGS_predefinedTypes constin_inPredefinedTypes,
                                           GGS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_semanticAnalysis (io_ioUsefulnessRootEntities, io_ioUsefulEntitiesGraph, constin_inProductDirectory, constin_inSemanticContext, io_ioTypeMap, constin_inPredefinedTypes, io_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap::cMapElement_propertyIndexMap (const GGS_propertyIndexMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mPropertyTypeIndex (inValue.mProperty_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap::cMapElement_propertyIndexMap (const GGS_lstring & inKey,
                                                            const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mPropertyTypeIndex (in_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyIndexMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyIndexMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyIndexMap (mProperty_lkey, mProperty_mPropertyTypeIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyIndexMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyTypeIndex" ":") ;
  mProperty_mPropertyTypeIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap & GGS_propertyIndexMap::operator = (const GGS_propertyIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_propertyIndexMap * p = (cMapElement_propertyIndexMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_propertyIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyIndexMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mPropertyTypeIndex = p->mProperty_mPropertyTypeIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_mapWithMapToOverride (const GGS_propertyIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::enterElement (const GGS_propertyIndexMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_unifiedTypeMapEntry & inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::add_operation (const GGS_propertyIndexMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result = *this ;
  cEnumerator_propertyIndexMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mPropertyTypeIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyIndexMap_searchKey = "the '%K' attribute is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::method_searchKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_propertyIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    outArgument0 = p->mProperty_mPropertyTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyIndexMap::getter_mPropertyTypeIndexForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    result = p->mProperty_mPropertyTypeIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_setMPropertyTypeIndexForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyIndexMap * p = (cMapElement_propertyIndexMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    p->mProperty_mPropertyTypeIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap * GGS_propertyIndexMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * result = (cMapElement_propertyIndexMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyIndexMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertyIndexMap::cEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element cEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return GGS_propertyIndexMap_2E_element (p->mProperty_lkey, p->mProperty_mPropertyTypeIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return p->mProperty_mPropertyTypeIndex ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyIndexMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap ("propertyIndexMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  const GGS_propertyIndexMap * p = (const GGS_propertyIndexMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap::cMapElement_nonterminalLabelMap (const GGS_nonterminalLabelMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSignatureForGeneration (inValue.mProperty_mSignatureForGeneration),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mEndOfArgumentLocation (inValue.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap::cMapElement_nonterminalLabelMap (const GGS_lstring & inKey,
                                                                  const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                  const GGS_formalParameterSignature & in_mSignature,
                                                                  const GGS_location & in_mEndOfArgumentLocation
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignatureForGeneration (in_mSignatureForGeneration),
mProperty_mSignature (in_mSignature),
mProperty_mEndOfArgumentLocation (in_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalLabelMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalLabelMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalLabelMap (mProperty_lkey, mProperty_mSignatureForGeneration, mProperty_mSignature, mProperty_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalLabelMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (const GGS_nonterminalLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap & GGS_nonterminalLabelMap::operator = (const GGS_nonterminalLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonterminalLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalLabelMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSignatureForGeneration = p->mProperty_mSignatureForGeneration ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mEndOfArgumentLocation = p->mProperty_mEndOfArgumentLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_mapWithMapToOverride (const GGS_nonterminalLabelMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::enterElement (const GGS_nonterminalLabelMap_2E_element & inValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::addAssign_operation (const GGS_lstring & inKey,
                                                   const GGS_formalParameterListForGeneration & inArgument0,
                                                   const GGS_formalParameterSignature & inArgument1,
                                                   const GGS_location & inArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::add_operation (const GGS_nonterminalLabelMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result = *this ;
  cEnumerator_nonterminalLabelMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSignatureForGeneration (HERE), enumerator.current_mSignature (HERE), enumerator.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_insertKey (GGS_lstring inKey,
                                                GGS_formalParameterListForGeneration inArgument0,
                                                GGS_formalParameterSignature inArgument1,
                                                GGS_location inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalLabelMap_searchKey = "the '%K' nonterminal label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::method_searchKey (GGS_lstring inKey,
                                                GGS_formalParameterListForGeneration & outArgument0,
                                                GGS_formalParameterSignature & outArgument1,
                                                GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_nonterminalLabelMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    outArgument0 = p->mProperty_mSignatureForGeneration ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_nonterminalLabelMap::getter_mSignatureForGenerationForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GGS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_nonterminalLabelMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_mEndOfArgumentLocationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForGenerationForKey (GGS_formalParameterListForGeneration inAttributeValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mSignatureForGeneration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForKey (GGS_formalParameterSignature inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMEndOfArgumentLocationForKey (GGS_location inAttributeValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mEndOfArgumentLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap * GGS_nonterminalLabelMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * result = (cMapElement_nonterminalLabelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalLabelMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalLabelMap::cEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element cEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return GGS_nonterminalLabelMap_2E_element (p->mProperty_lkey, p->mProperty_mSignatureForGeneration, p->mProperty_mSignature, p->mProperty_mEndOfArgumentLocation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration cEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalLabelMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  const GGS_nonterminalLabelMap * p = (const GGS_nonterminalLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap::cMapElement_nonterminalMap (const GGS_nonterminalMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLabelMap (inValue.mProperty_mLabelMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap::cMapElement_nonterminalMap (const GGS_lstring & inKey,
                                                        const GGS_nonterminalLabelMap & in_mLabelMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelMap (in_mLabelMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalMap (mProperty_lkey, mProperty_mLabelMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelMap" ":") ;
  mProperty_mLabelMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (const GGS_nonterminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap & GGS_nonterminalMap::operator = (const GGS_nonterminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_ GGS_nonterminalMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonterminalMap * p = (cMapElement_nonterminalMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonterminalMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLabelMap = p->mProperty_mLabelMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_mapWithMapToOverride (const GGS_nonterminalMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonterminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::enterElement (const GGS_nonterminalMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_nonterminalLabelMap & inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::add_operation (const GGS_nonterminalMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_nonterminalMap result = *this ;
  cEnumerator_nonterminalMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_nonterminalLabelMap inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalMap_searchKey = "the '%K' nonterminal is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::method_searchKey (GGS_lstring inKey,
                                           GGS_nonterminalLabelMap & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_nonterminalMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalMap::getter_mLabelMapForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) attributes ;
  GGS_nonterminalLabelMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    result = p->mProperty_mLabelMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_setMLabelMapForKey (GGS_nonterminalLabelMap inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalMap * p = (cMapElement_nonterminalMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    p->mProperty_mLabelMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap * GGS_nonterminalMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * result = (cMapElement_nonterminalMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalMap::cEnumerator_nonterminalMap (const GGS_nonterminalMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element cEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return GGS_nonterminalMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap cEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return p->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ("nonterminalMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  const GGS_nonterminalMap * p = (const GGS_nonterminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleLabelImplementationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleLabelImplementationList : public cCollectionElement {
  public: GGS_ruleLabelImplementationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                          const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                          const GGS_formalParameterSignature & in_mSignature,
                                                          const GGS_location & in_mEndOfArgumentLocation,
                                                          const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                                                                const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                const GGS_formalParameterSignature & in_mSignature,
                                                                                                const GGS_location & in_mEndOfArgumentLocation,
                                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mSignatureForGeneration, inElement.mProperty_mSignature, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleLabelImplementationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleLabelImplementationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleLabelImplementationList (mObject.mProperty_mLabelName, mObject.mProperty_mSignatureForGeneration, mObject.mProperty_mSignature, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleLabelImplementationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelName" ":") ;
  mObject.mProperty_mLabelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mObject.mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mObject.mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mObject.mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionListForGeneration" ":") ;
  mObject.mProperty_mInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::enterElement (const GGS_ruleLabelImplementationList_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_formalParameterListForGeneration & inOperand1,
                                                                                           const GGS_formalParameterSignature & inOperand2,
                                                                                           const GGS_location & inOperand3,
                                                                                           const GGS_semanticInstructionListForGeneration & inOperand4
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ruleLabelImplementationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mLabelName,
                                                                 const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                 const GGS_formalParameterSignature & in_mSignature,
                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (in_mLabelName,
                                                                 in_mSignatureForGeneration,
                                                                 in_mSignature,
                                                                 in_mEndOfArgumentLocation,
                                                                 in_mInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                           const GGS_formalParameterListForGeneration & inOperand1,
                                                           const GGS_formalParameterSignature & inOperand2,
                                                           const GGS_location & inOperand3,
                                                           const GGS_semanticInstructionListForGeneration & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_formalParameterListForGeneration inOperand1,
                                                     const GGS_formalParameterSignature inOperand2,
                                                     const GGS_location inOperand3,
                                                     const GGS_semanticInstructionListForGeneration inOperand4,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_formalParameterListForGeneration inOperand1,
                                                            const GGS_formalParameterSignature inOperand2,
                                                            const GGS_location inOperand3,
                                                            const GGS_semanticInstructionListForGeneration inOperand4,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_formalParameterListForGeneration & outOperand1,
                                                            GGS_formalParameterSignature & outOperand2,
                                                            GGS_location & outOperand3,
                                                            GGS_semanticInstructionListForGeneration & outOperand4,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
      outOperand0 = p->mObject.mProperty_mLabelName ;
      outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
      outOperand2 = p->mObject.mProperty_mSignature ;
      outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
      outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_formalParameterListForGeneration & outOperand1,
                                                       GGS_formalParameterSignature & outOperand2,
                                                       GGS_location & outOperand3,
                                                       GGS_semanticInstructionListForGeneration & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_formalParameterListForGeneration & outOperand1,
                                                      GGS_formalParameterSignature & outOperand2,
                                                      GGS_location & outOperand3,
                                                      GGS_semanticInstructionListForGeneration & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_first (GGS_lstring & outOperand0,
                                                    GGS_formalParameterListForGeneration & outOperand1,
                                                    GGS_formalParameterSignature & outOperand2,
                                                    GGS_location & outOperand3,
                                                    GGS_semanticInstructionListForGeneration & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_last (GGS_lstring & outOperand0,
                                                   GGS_formalParameterListForGeneration & outOperand1,
                                                   GGS_formalParameterSignature & outOperand2,
                                                   GGS_location & outOperand3,
                                                   GGS_semanticInstructionListForGeneration & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::add_operation (const GGS_ruleLabelImplementationList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::plusAssign_operation (const GGS_ruleLabelImplementationList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ruleLabelImplementationList::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mLabelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureForGenerationAtIndex (GGS_formalParameterListForGeneration inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignatureForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_ruleLabelImplementationList::getter_mSignatureForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_ruleLabelImplementationList::getter_mSignatureAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfArgumentLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ruleLabelImplementationList::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMInstructionListForGenerationAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ruleLabelImplementationList::getter_mInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ruleLabelImplementationList::cEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element cEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration cEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration cEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ruleLabelImplementationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ("ruleLabelImplementationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleLabelImplementationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleLabelImplementationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleLabelImplementationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  const GGS_ruleLabelImplementationList * p = (const GGS_ruleLabelImplementationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleLabelImplementationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public: GGS_ruleDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                  const GGS_uint & in_mRuleIndex,
                                                  const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                                                const GGS_uint & in_mRuleIndex,
                                                                                const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mRuleIndex, inElement.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mProperty_mNonterminalName, mObject.mProperty_mRuleIndex, mObject.mProperty_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleIndex" ":") ;
  mObject.mProperty_mRuleIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelImplementationList" ":") ;
  mObject.mProperty_mLabelImplementationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::enterElement (const GGS_ruleDeclarationList_2E_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_ruleLabelImplementationList & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_ruleDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ruleDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_string & in_mNonterminalName,
                                                         const GGS_uint & in_mRuleIndex,
                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (in_mNonterminalName,
                                                         in_mRuleIndex,
                                                         in_mLabelImplementationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::addAssign_operation (const GGS_string & inOperand0,
                                                   const GGS_uint & inOperand1,
                                                   const GGS_ruleLabelImplementationList & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_append (const GGS_string inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_ruleLabelImplementationList inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_uint inOperand1,
                                                    const GGS_ruleLabelImplementationList inOperand2,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_uint & outOperand1,
                                                    GGS_ruleLabelImplementationList & outOperand2,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mNonterminalName ;
      outOperand1 = p->mObject.mProperty_mRuleIndex ;
      outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_ruleLabelImplementationList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popLast (GGS_string & outOperand0,
                                              GGS_uint & outOperand1,
                                              GGS_ruleLabelImplementationList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_first (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_ruleLabelImplementationList & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_last (GGS_string & outOperand0,
                                           GGS_uint & outOperand1,
                                           GGS_ruleLabelImplementationList & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::add_operation (const GGS_ruleDeclarationList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::plusAssign_operation (const GGS_ruleDeclarationList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMNonterminalNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_ruleDeclarationList::getter_mNonterminalNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMRuleIndexAtIndex (GGS_uint inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ruleDeclarationList::getter_mRuleIndexAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mRuleIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMLabelImplementationListAtIndex (GGS_ruleLabelImplementationList inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelImplementationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleDeclarationList::getter_mLabelImplementationListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_ruleLabelImplementationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mLabelImplementationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ruleDeclarationList::cEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element cEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList cEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ruleDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  const GGS_ruleDeclarationList * p = (const GGS_ruleDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

