#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const GGS_fixitListForGeneration inObject,
                                    GGS_stringset & ioArgument_ioInclusionSet,
                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                    GGS_string & ioArgument_ioGeneratedCode,
                                    GGS_string & outArgument_outFixItArrayCppName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GGS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 416)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 417)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("TC_Array <FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  const GGS_fixitListForGeneration temp_0 = inObject ;
  UpEnumerator_fixitListForGeneration enumerator_16225 (temp_0) ;
  while (enumerator_16225.hasCurrentObject ()) {
    switch (enumerator_16225.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementForGeneration::Enumeration::invalid:
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outFixItArrayCppName.add_operation (GGS_string (".appendObject (FixItDescription (EnumFixItKind::fixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 422)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionForGeneration extractedValue_16467_exp_0 ;
        enumerator_16225.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_16467_exp_0) ;
        GGS_string var_receiverCppVarName_16640 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16467_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16640, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 424)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GGS_string (", EnumFixItKind::fixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (var_receiverCppVarName_16640, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 431)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionForGeneration extractedValue_16866_exp_0 ;
        enumerator_16225.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_16866_exp_0) ;
        GGS_string var_receiverCppVarName_17039 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16866_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17039, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 433)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GGS_string (", EnumFixItKind::fixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (var_receiverCppVarName_17039, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionForGeneration extractedValue_17269_exp_0 ;
        enumerator_16225.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_17269_exp_0) ;
        GGS_string var_receiverCppVarName_17442 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_17269_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17442, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 442)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GGS_string (", EnumFixItKind::fixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (var_receiverCppVarName_17442, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 449)) ;
      }
      break ;
    }
    enumerator_16225.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionForGeneration_2E_weak::objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak & GGS_errorInstructionForGeneration_2E_weak::operator = (const GGS_errorInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (const GGS_errorInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_errorInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_errorInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_errorInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionForGeneration) ;
      result = GGS_errorInstructionForGeneration ((cPtr_errorInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @errorInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ("errorInstructionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_errorInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  const GGS_errorInstructionForGeneration_2E_weak * p = (const GGS_errorInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectElementListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_lstring & in_mOptionalTypeName,
                                                                           const GGS_bool & in_mDeclaredAsUnused,
                                                                           const GGS_lstring & in_mOptionalConstantName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                  const GGS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionalTypeName, inElement.mProperty_mDeclaredAsUnused, inElement.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mProperty_mOptionalTypeName, mObject.mProperty_mDeclaredAsUnused, mObject.mProperty_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectElementListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionalTypeName" ":") ;
  mObject.mProperty_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaredAsUnused" ":") ;
  mObject.mProperty_mDeclaredAsUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionalConstantName" ":") ;
  mObject.mProperty_mOptionalConstantName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST::GGS_forInstructionEnumeratedObjectElementListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST::GGS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inValue
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                             const GGS_bool & inOperand1,
                                                                                                                             const GGS_lstring & inOperand2
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_lstring & in_mOptionalTypeName,
                                                                                  const GGS_bool & in_mDeclaredAsUnused,
                                                                                  const GGS_lstring & in_mOptionalConstantName
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName,
                                                                                  in_mDeclaredAsUnused,
                                                                                  in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                           const GGS_bool & inOperand1,
                                                                           const GGS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_append (const GGS_lstring inOperand0,
                                                                      const GGS_bool inOperand1,
                                                                      const GGS_lstring inOperand2,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                             const GGS_bool inOperand1,
                                                                             const GGS_lstring inOperand2,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                             GGS_bool & outOperand1,
                                                                             GGS_lstring & outOperand2,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
      outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
      outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
      outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                        GGS_bool & outOperand1,
                                                                        GGS_lstring & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                       GGS_bool & outOperand1,
                                                                       GGS_lstring & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::method_first (GGS_lstring & outOperand0,
                                                                     GGS_bool & outOperand1,
                                                                     GGS_lstring & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::method_last (GGS_lstring & outOperand0,
                                                                    GGS_bool & outOperand1,
                                                                    GGS_lstring & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::add_operation (const GGS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result = GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result = GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result = GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::plusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalTypeNameAtIndex (GGS_lstring inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMDeclaredAsUnusedAtIndex (GGS_bool inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaredAsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forInstructionEnumeratedObjectElementListAST::getter_mDeclaredAsUnusedAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mDeclaredAsUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalConstantNameAtIndex (GGS_lstring inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalConstantName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalConstantNameAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalConstantName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectElementListAST::DownEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element DownEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectElementListAST::UpEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element UpEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectElementListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  const GGS_forInstructionEnumeratedObjectElementListAST * p = (const GGS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST::objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractEnumeratedCollectionAST::
abstractEnumeratedCollectionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST result ;
  const GGS_abstractEnumeratedCollectionAST * p = (const GGS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST_2E_weak::objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak & GGS_abstractEnumeratedCollectionAST_2E_weak::operator = (const GGS_abstractEnumeratedCollectionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (const GGS_abstractEnumeratedCollectionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (isValid ()) {
    const cPtr_abstractEnumeratedCollectionAST * p = (cPtr_abstractEnumeratedCollectionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractEnumeratedCollectionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractEnumeratedCollectionAST) ;
      result = GGS_abstractEnumeratedCollectionAST ((cPtr_abstractEnumeratedCollectionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ("abstractEnumeratedCollectionAST.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractEnumeratedCollectionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  const GGS_abstractEnumeratedCollectionAST_2E_weak * p = (const GGS_abstractEnumeratedCollectionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionImplicitVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (const GGS_enumeratedCollectionImplicitVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionImplicitVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionImplicitVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::bang_enumeratedCollectionImplicitVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionImplicitVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
      result = GGS_enumeratedCollectionImplicitVarInExpAST ((cPtr_enumeratedCollectionImplicitVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionImplicitVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ("enumeratedCollectionImplicitVarInExpAST.weak",
                                                                                                       & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak & GGS_enumeratedCollectionVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (const GGS_enumeratedCollectionVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GGS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ("enumeratedCollectionVarInExpAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST::objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (void) :
GGS_abstractEnumeratedCollectionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::
init_21__21_mEndsWithEllipsis_21__21_ (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                       const GGS_bool & in_mEndsWithEllipsis,
                                       const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                       const GGS_location & in_mEndOfEnumerationExpression,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cPtr_enumeratedCollectionCstListInExpAST * object = nullptr ;
  macroMyNew (object, cPtr_enumeratedCollectionCstListInExpAST (inCompiler COMMA_THERE)) ;
  object->enumeratedCollectionCstListInExpAST_init_21__21_mEndsWithEllipsis_21__21_ (in_mElementList, in_mEndsWithEllipsis, in_mEnumeratedExpression, in_mEndOfEnumerationExpression, inCompiler) ;
  const GGS_enumeratedCollectionCstListInExpAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::
enumeratedCollectionCstListInExpAST_init_21__21_mEndsWithEllipsis_21__21_ (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                           const GGS_bool & in_mEndsWithEllipsis,
                                                                           const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                           const GGS_location & in_mEndOfEnumerationExpression,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEndsWithEllipsis = in_mEndsWithEllipsis ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GGS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::class_func_new (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                                 const GGS_bool & in_mEndsWithEllipsis,
                                                                                                 const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                                 const GGS_location & in_mEndOfEnumerationExpression,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionCstListInExpAST (in_mElementList, in_mEndsWithEllipsis, in_mEnumeratedExpression, in_mEndOfEnumerationExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mElementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_forInstructionEnumeratedObjectElementListAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mElementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumeratedCollectionCstListInExpAST::readProperty_mEndsWithEllipsis (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndsWithEllipsis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumeratedCollectionCstListInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEndsWithEllipsis (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                    const GGS_bool & in_mEndsWithEllipsis,
                                                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GGS_location & in_mEndOfEnumerationExpression,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEndsWithEllipsis (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEndsWithEllipsis = in_mEndsWithEllipsis ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumeratedCollectionCstListInExpAST:") ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndsWithEllipsis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionCstListInExpAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mProperty_mElementList, mProperty_mEndsWithEllipsis, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionCstListInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mElementList.printNonNullClassInstanceProperties ("mElementList") ;
    mProperty_mEndsWithEllipsis.printNonNullClassInstanceProperties ("mEndsWithEllipsis") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  const GGS_enumeratedCollectionCstListInExpAST * p = (const GGS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak & GGS_enumeratedCollectionCstListInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionCstListInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (const GGS_enumeratedCollectionCstListInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionCstListInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionCstListInExpAST) ;
      result = GGS_enumeratedCollectionCstListInExpAST ((cPtr_enumeratedCollectionCstListInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ("enumeratedCollectionCstListInExpAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionCstListInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionCstListInExpAST_2E_weak * p = (const GGS_enumeratedCollectionCstListInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListAST : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_bool & in_mAscending,
                                                                    const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_bool & in_mAscending,
                                                                                                                    const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAscending, in_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAscending, inElement.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListAST (mObject.mProperty_mAscending, mObject.mProperty_mEnumeratedCollection COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscending" ":") ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedCollection" ":") ;
  mObject.mProperty_mEnumeratedCollection.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST::GGS_forInstructionEnumeratedObjectListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST::GGS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                               const GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_bool & in_mAscending,
                                                                           const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (in_mAscending,
                                                                           in_mEnumeratedCollection COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::addAssignOperation (const GGS_bool & inOperand0,
                                                                    const GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_append (const GGS_bool inOperand0,
                                                               const GGS_abstractEnumeratedCollectionAST inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_insertAtIndex (const GGS_bool inOperand0,
                                                                      const GGS_abstractEnumeratedCollectionAST inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                      GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
      outOperand0 = p->mObject.mProperty_mAscending ;
      outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_popFirst (GGS_bool & outOperand0,
                                                                 GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_popLast (GGS_bool & outOperand0,
                                                                GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::method_first (GGS_bool & outOperand0,
                                                              GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::method_last (GGS_bool & outOperand0,
                                                             GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::add_operation (const GGS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result = GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result = GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result = GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::plusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_setMAscendingAtIndex (GGS_bool inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forInstructionEnumeratedObjectListAST::getter_mAscendingAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_setMEnumeratedCollectionAtIndex (GGS_abstractEnumeratedCollectionAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedCollection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_forInstructionEnumeratedObjectListAST::getter_mEnumeratedCollectionAtIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GGS_abstractEnumeratedCollectionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mEnumeratedCollection ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectListAST::DownEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element DownEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST DownEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mEnumeratedCollection ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectListAST::UpEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element UpEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST UpEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mEnumeratedCollection ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ("forInstructionEnumeratedObjectListAST",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  const GGS_forInstructionEnumeratedObjectListAST * p = (const GGS_forInstructionEnumeratedObjectListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST_2E_weak::objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const {
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

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak & GGS_forInstructionAST_2E_weak::operator = (const GGS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (const GGS_forInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionAST result ;
  if (isValid ()) {
    const cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GGS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ("forInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  const GGS_forInstructionAST_2E_weak * p = (const GGS_forInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GGS_unifiedTypeMap & io_ioTypeMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_enterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GGS_lstring constin_inUsefulnessCallerEntityName,
                                             GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GGS_analysisContext constin_inAnalysisContext,
                                             GGS_unifiedTypeMap & io_ioTypeMap,
                                             GGS_localVarManager & io_ioVariableMap,
                                             GGS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             GGS_string & out_outEnumeratorCppName,
                                             GGS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnumeratorCppName.drop () ;
  out_outEnumerationExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_analyzeEnumeration (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, io_ioLocalConstantListForDoBranch, out_outEnumeratorCppName, out_outEnumerationExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListForGeneration : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_string & in_mEnumerationOrder,
                                                                              const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                              const GGS_string & in_mEnumeratorCppName
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_string & in_mEnumerationOrder,
                                                                                                                                        const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                        const GGS_string & in_mEnumeratorCppName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumerationOrder, in_mEnumeratedExpression, in_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumerationOrder, inElement.mProperty_mEnumeratedExpression, inElement.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (mObject.mProperty_mEnumerationOrder, mObject.mProperty_mEnumeratedExpression, mObject.mProperty_mEnumeratorCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumerationOrder" ":") ;
  mObject.mProperty_mEnumerationOrder.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedExpression" ":") ;
  mObject.mProperty_mEnumeratedExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratorCppName" ":") ;
  mObject.mProperty_mEnumeratorCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration::GGS_forInstructionEnumeratedObjectListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration::GGS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inValue
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                   const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                   const GGS_string & inOperand2
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GGS_string & in_mEnumerationOrder,
                                                                                     const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                     const GGS_string & in_mEnumeratorCppName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (in_mEnumerationOrder,
                                                                                     in_mEnumeratedExpression,
                                                                                     in_mEnumeratorCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                              const GGS_semanticExpressionForGeneration & inOperand1,
                                                                              const GGS_string & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_append (const GGS_string inOperand0,
                                                                         const GGS_semanticExpressionForGeneration inOperand1,
                                                                         const GGS_string inOperand2,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                const GGS_semanticExpressionForGeneration inOperand1,
                                                                                const GGS_string inOperand2,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                GGS_semanticExpressionForGeneration & outOperand1,
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
    cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
      outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
      outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                           GGS_semanticExpressionForGeneration & outOperand1,
                                                                           GGS_string & outOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                                          GGS_semanticExpressionForGeneration & outOperand1,
                                                                          GGS_string & outOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::method_first (GGS_string & outOperand0,
                                                                        GGS_semanticExpressionForGeneration & outOperand1,
                                                                        GGS_string & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::method_last (GGS_string & outOperand0,
                                                                       GGS_semanticExpressionForGeneration & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::add_operation (const GGS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result = GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result = GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result = GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::plusAssignOperation (const GGS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumerationOrderAtIndex (GGS_string inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumerationOrder = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumerationOrderAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumerationOrder ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumeratedExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                                                  GGS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratedExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GGS_semanticExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumeratorCppNameAtIndex (GGS_string inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratorCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratorCppNameAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratorCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectListForGeneration::DownEnumerator_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumerationOrder ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratedExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratorCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectListForGeneration::UpEnumerator_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumerationOrder ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratedExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratorCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ("forInstructionEnumeratedObjectListForGeneration",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration result ;
  const GGS_forInstructionEnumeratedObjectListForGeneration * p = (const GGS_forInstructionEnumeratedObjectListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionForGeneration_2E_weak::objectCompare (const GGS_forInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_forInstructionForGeneration_2E_weak::GGS_forInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak & GGS_forInstructionForGeneration_2E_weak::operator = (const GGS_forInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak::GGS_forInstructionForGeneration_2E_weak (const GGS_forInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak GGS_forInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration_2E_weak::bang_forInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionForGeneration) ;
      result = GGS_forInstructionForGeneration ((cPtr_forInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ("forInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak GGS_forInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_forInstructionForGeneration_2E_weak result ;
  const GGS_forInstructionForGeneration_2E_weak * p = (const GGS_forInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::operator = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::unwrappedValue (void) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (isValid ()) {
    const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak",
                                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultNone_init (inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::
grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultNone]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone ((cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultNone.weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (in_mLocation, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::
grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const GGS_location & in_mLocation,
                                                                Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::class_func_new (const GGS_location & in_mLocation,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionSyntaxDirectedTranslationDropResult::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationDropResult:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult ((cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ("grammarInstructionSyntaxDirectedTranslationDropResult.weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak",
                                                                                                                      & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak",
                                                                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak",
                                                                                                                                & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInFileInstructionAST_2E_weak::objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak & GGS_grammarInFileInstructionAST_2E_weak::operator = (const GGS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (const GGS_grammarInFileInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak GGS_grammarInFileInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInFileInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_grammarInFileInstructionAST result ;
  if (isValid ()) {
    const cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInFileInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST_2E_weak::bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInFileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GGS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInFileInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ("grammarInFileInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInFileInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInFileInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInFileInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak GGS_grammarInFileInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInFileInstructionAST_2E_weak result ;
  const GGS_grammarInFileInstructionAST_2E_weak * p = (const GGS_grammarInFileInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInFileInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInStringInstructionAST_2E_weak::objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak & GGS_grammarInStringInstructionAST_2E_weak::operator = (const GGS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (const GGS_grammarInStringInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak GGS_grammarInStringInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInStringInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_grammarInStringInstructionAST result ;
  if (isValid ()) {
    const cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInStringInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST_2E_weak::bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInStringInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GGS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInStringInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ("grammarInStringInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInStringInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInStringInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInStringInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak GGS_grammarInStringInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInStringInstructionAST_2E_weak result ;
  const GGS_grammarInStringInstructionAST_2E_weak * p = (const GGS_grammarInStringInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInStringInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceFileForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GGS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceFileForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ("grammarInstructionWithSourceFileForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GGS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ("grammarInstructionWithSourceExpressionForGeneration.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum incDecKind
//--------------------------------------------------------------------------------------------------

GGS_incDecKind::GGS_incDecKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecKind::class_func_increment (UNUSED_LOCATION_ARGS) {
  GGS_incDecKind result ;
  result.mEnum = Enumeration::enum_increment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecKind::class_func_decrement (UNUSED_LOCATION_ARGS) {
  GGS_incDecKind result ;
  result.mEnum = Enumeration::enum_decrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_incDecKind [3] = {
  "(not built)",
  "increment",
  "decrement"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_incDecKind::getter_isIncrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_increment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_incDecKind::getter_isDecrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_decrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_incDecKind::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @incDecKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_incDecKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @incDecKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecKind::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_incDecKind result ;
  const GGS_incDecKind * p = (const GGS_incDecKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionAST_2E_weak::objectCompare (const GGS_incDecInstructionAST_2E_weak & inOperand) const {
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

GGS_incDecInstructionAST_2E_weak::GGS_incDecInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak & GGS_incDecInstructionAST_2E_weak::operator = (const GGS_incDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak::GGS_incDecInstructionAST_2E_weak (const GGS_incDecInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak GGS_incDecInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST GGS_incDecInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_incDecInstructionAST result ;
  if (isValid ()) {
    const cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST GGS_incDecInstructionAST_2E_weak::bang_incDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionAST) ;
      result = GGS_incDecInstructionAST ((cPtr_incDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ("incDecInstructionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak GGS_incDecInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionAST_2E_weak result ;
  const GGS_incDecInstructionAST_2E_weak * p = (const GGS_incDecInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionAST_2E_weak::objectCompare (const GGS_incDecNoOVFInstructionAST_2E_weak & inOperand) const {
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

GGS_incDecNoOVFInstructionAST_2E_weak::GGS_incDecNoOVFInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak & GGS_incDecNoOVFInstructionAST_2E_weak::operator = (const GGS_incDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak::GGS_incDecNoOVFInstructionAST_2E_weak (const GGS_incDecNoOVFInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak GGS_incDecNoOVFInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST GGS_incDecNoOVFInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_incDecNoOVFInstructionAST result ;
  if (isValid ()) {
    const cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecNoOVFInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST GGS_incDecNoOVFInstructionAST_2E_weak::bang_incDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionAST) ;
      result = GGS_incDecNoOVFInstructionAST ((cPtr_incDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ("incDecNoOVFInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecNoOVFInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak GGS_incDecNoOVFInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionAST_2E_weak result ;
  const GGS_incDecNoOVFInstructionAST_2E_weak * p = (const GGS_incDecNoOVFInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecInstructionAST::objectCompare (const GGS_selfIncDecInstructionAST & inOperand) const {
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

GGS_selfIncDecInstructionAST::GGS_selfIncDecInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_selfIncDecInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::
selfIncDecInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                       const GGS_incDecKind & in_mKind,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST::GGS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_incDecKind & in_mKind,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfIncDecInstructionAST (in_mInstructionLocation, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_selfIncDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_incDecKind & in_mKind,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfIncDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

void cPtr_selfIncDecInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfIncDecInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST result ;
  const GGS_selfIncDecInstructionAST * p = (const GGS_selfIncDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecInstructionAST_2E_weak::objectCompare (const GGS_selfIncDecInstructionAST_2E_weak & inOperand) const {
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

GGS_selfIncDecInstructionAST_2E_weak::GGS_selfIncDecInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak & GGS_selfIncDecInstructionAST_2E_weak::operator = (const GGS_selfIncDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak::GGS_selfIncDecInstructionAST_2E_weak (const GGS_selfIncDecInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak GGS_selfIncDecInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfIncDecInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfIncDecInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST_2E_weak::bang_selfIncDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfIncDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecInstructionAST) ;
      result = GGS_selfIncDecInstructionAST ((cPtr_selfIncDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfIncDecInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ("selfIncDecInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak GGS_selfIncDecInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST_2E_weak result ;
  const GGS_selfIncDecInstructionAST_2E_weak * p = (const GGS_selfIncDecInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecNoOVFInstructionAST::objectCompare (const GGS_selfIncDecNoOVFInstructionAST & inOperand) const {
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

GGS_selfIncDecNoOVFInstructionAST::GGS_selfIncDecNoOVFInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecNoOVFInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecNoOVFInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecNoOVFInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_selfIncDecNoOVFInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::
selfIncDecNoOVFInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_incDecKind & in_mKind,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST::GGS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_incDecKind & in_mKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfIncDecNoOVFInstructionAST (in_mInstructionLocation, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_selfIncDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_incDecKind & in_mKind,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfIncDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

void cPtr_selfIncDecNoOVFInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecNoOVFInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfIncDecNoOVFInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST result ;
  const GGS_selfIncDecNoOVFInstructionAST * p = (const GGS_selfIncDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecNoOVFInstructionAST_2E_weak::objectCompare (const GGS_selfIncDecNoOVFInstructionAST_2E_weak & inOperand) const {
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

GGS_selfIncDecNoOVFInstructionAST_2E_weak::GGS_selfIncDecNoOVFInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak & GGS_selfIncDecNoOVFInstructionAST_2E_weak::operator = (const GGS_selfIncDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak::GGS_selfIncDecNoOVFInstructionAST_2E_weak (const GGS_selfIncDecNoOVFInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak GGS_selfIncDecNoOVFInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfIncDecNoOVFInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfIncDecNoOVFInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST_2E_weak::bang_selfIncDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfIncDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecNoOVFInstructionAST) ;
      result = GGS_selfIncDecNoOVFInstructionAST ((cPtr_selfIncDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfIncDecNoOVFInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ("selfIncDecNoOVFInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecNoOVFInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecNoOVFInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecNoOVFInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak GGS_selfIncDecNoOVFInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
  const GGS_selfIncDecNoOVFInstructionAST_2E_weak * p = (const GGS_selfIncDecNoOVFInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecNoOVFInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionForGeneration::objectCompare (const GGS_incDecInstructionForGeneration & inOperand) const {
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

GGS_incDecInstructionForGeneration::GGS_incDecInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mReceiverCppName,
                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_incDecInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->incDecInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GGS_incDecInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::
incDecInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                         const GGS_string & in_mReceiverCppName,
                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                         const GGS_lstringlist & in_mStructAttributeList,
                                                         const GGS_incDecKind & in_mKind,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration::GGS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_string & in_mReceiverCppName,
                                                                                       const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                       const GGS_lstringlist & in_mStructAttributeList,
                                                                                       const GGS_incDecKind & in_mKind,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_incDecInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_incDecInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_incDecInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_incDecInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mReceiverCppName,
                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                          const GGS_lstringlist & in_mStructAttributeList,
                                                                          const GGS_incDecKind & in_mKind,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration result ;
  const GGS_incDecInstructionForGeneration * p = (const GGS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionForGeneration_2E_weak::objectCompare (const GGS_incDecInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_incDecInstructionForGeneration_2E_weak::GGS_incDecInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak & GGS_incDecInstructionForGeneration_2E_weak::operator = (const GGS_incDecInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak::GGS_incDecInstructionForGeneration_2E_weak (const GGS_incDecInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak GGS_incDecInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_incDecInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration_2E_weak::bang_incDecInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionForGeneration) ;
      result = GGS_incDecInstructionForGeneration ((cPtr_incDecInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ("incDecInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak GGS_incDecInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration_2E_weak result ;
  const GGS_incDecInstructionForGeneration_2E_weak * p = (const GGS_incDecInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionForGeneration::objectCompare (const GGS_incDecNoOVFInstructionForGeneration & inOperand) const {
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

GGS_incDecNoOVFInstructionForGeneration::GGS_incDecNoOVFInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mReceiverCppName,
                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecNoOVFInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_incDecNoOVFInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GGS_incDecNoOVFInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::
incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mReceiverCppName,
                                                              const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                              const GGS_incDecKind & in_mKind,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration::GGS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_string & in_mReceiverCppName,
                                                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                 const GGS_lstringlist & in_mStructAttributeList,
                                                                                                 const GGS_incDecKind & in_mKind,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_incDecNoOVFInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_incDecNoOVFInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecNoOVFInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mReceiverCppName,
                                                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                    const GGS_lstringlist & in_mStructAttributeList,
                                                                                    const GGS_incDecKind & in_mKind,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecNoOVFInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecNoOVFInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration result ;
  const GGS_incDecNoOVFInstructionForGeneration * p = (const GGS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionForGeneration_2E_weak::objectCompare (const GGS_incDecNoOVFInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_incDecNoOVFInstructionForGeneration_2E_weak::GGS_incDecNoOVFInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak & GGS_incDecNoOVFInstructionForGeneration_2E_weak::operator = (const GGS_incDecNoOVFInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak::GGS_incDecNoOVFInstructionForGeneration_2E_weak (const GGS_incDecNoOVFInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak GGS_incDecNoOVFInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_incDecNoOVFInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecNoOVFInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration_2E_weak::bang_incDecNoOVFInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecNoOVFInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionForGeneration) ;
      result = GGS_incDecNoOVFInstructionForGeneration ((cPtr_incDecNoOVFInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ("incDecNoOVFInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecNoOVFInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak GGS_incDecNoOVFInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
  const GGS_incDecNoOVFInstructionForGeneration_2E_weak * p = (const GGS_incDecNoOVFInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind::GGS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_regularExp (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_regularExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_regularExp (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_letVarExp (const GGS_lstring & inAssociatedValue0,
                                                                 const GGS_bool & inAssociatedValue1,
                                                                 const GGS_semanticExpressionAST & inAssociatedValue2,
                                                                 const GGS_location & inAssociatedValue3,
                                                                 const GGS_lstring & inAssociatedValue4
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractRegularExp (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                     GGS_location & outAssociatedValue_endOfExp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regularExp) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.regularExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractLetVarExp (GGS_lstring & outAssociatedValue_varName,
                                                    GGS_bool & outAssociatedValue_isConstant,
                                                    GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                    GGS_location & outAssociatedValue_endOfExp,
                                                    GGS_lstring & outAssociatedValue_typeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_varName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind::getter_getRegularExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  if (mEnum == Enumeration::enum_regularExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_regularExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_regularExp (GGS_semanticExpressionAST & out_exp,
                                                              GGS_location & out_endOfExp) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_letVarExp (GGS_lstring & out_varName,
                                                             GGS_bool & out_isConstant,
                                                             GGS_semanticExpressionAST & out_exp,
                                                             GGS_location & out_endOfExp,
                                                             GGS_lstring & out_typeName) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifExpressionKind [3] = {
  "(not built)",
  "regularExp",
  "letVarExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifExpressionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifExpressionKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  const GGS_ifExpressionKind * p = (const GGS_ifExpressionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@CommaSeparatedExpressionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_CommaSeparatedExpressionList : public cCollectionElement {
  public: GGS_CommaSeparatedExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_CommaSeparatedExpressionList (const GGS_ifExpressionKind & in_mExpression
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_CommaSeparatedExpressionList::cCollectionElement_CommaSeparatedExpressionList (const GGS_ifExpressionKind & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_CommaSeparatedExpressionList::cCollectionElement_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_CommaSeparatedExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_CommaSeparatedExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_CommaSeparatedExpressionList (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_CommaSeparatedExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList::GGS_CommaSeparatedExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList::GGS_CommaSeparatedExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_CommaSeparatedExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_CommaSeparatedExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::plusPlusAssignOperation (const GGS_CommaSeparatedExpressionList_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::class_func_listWithValue (const GGS_ifExpressionKind & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GGS_CommaSeparatedExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_CommaSeparatedExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_ifExpressionKind & in_mExpression
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_CommaSeparatedExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::addAssignOperation (const GGS_ifExpressionKind & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_append (const GGS_ifExpressionKind inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_insertAtIndex (const GGS_ifExpressionKind inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_removeAtIndex (GGS_ifExpressionKind & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_popFirst (GGS_ifExpressionKind & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_popLast (GGS_ifExpressionKind & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::method_first (GGS_ifExpressionKind & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::method_last (GGS_ifExpressionKind & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::add_operation (const GGS_CommaSeparatedExpressionList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result = GGS_CommaSeparatedExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result = GGS_CommaSeparatedExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result = GGS_CommaSeparatedExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::plusAssignOperation (const GGS_CommaSeparatedExpressionList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_setMExpressionAtIndex (GGS_ifExpressionKind inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_CommaSeparatedExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  GGS_ifExpressionKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_CommaSeparatedExpressionList::DownEnumerator_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element DownEnumerator_CommaSeparatedExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind DownEnumerator_CommaSeparatedExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_CommaSeparatedExpressionList::UpEnumerator_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element UpEnumerator_CommaSeparatedExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind UpEnumerator_CommaSeparatedExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @CommaSeparatedExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ("CommaSeparatedExpressionList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_CommaSeparatedExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_CommaSeparatedExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_CommaSeparatedExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList result ;
  const GGS_CommaSeparatedExpressionList * p = (const GGS_CommaSeparatedExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_CommaSeparatedExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("CommaSeparatedExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const GGS_CommaSeparatedExpressionList inObject,
                                                    const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                    GGS_ifTestListForGeneration & outArgument_outTestListForGeneration,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTestListForGeneration.drop () ; // Release 'out' argument
  outArgument_outTestListForGeneration = GGS_ifTestListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_CommaSeparatedExpressionList temp_0 = inObject ;
  UpEnumerator_CommaSeparatedExpressionList enumerator_6618 (temp_0) ;
  while (enumerator_6618.hasCurrentObject ()) {
    switch (enumerator_6618.current_mExpression (HERE).enumValue ()) {
    case GGS_ifExpressionKind::Enumeration::invalid:
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_regularExp:
      {
        GGS_semanticExpressionAST extractedValue_6688_exp_0 ;
        GGS_location extractedValue_6692_endOfExpression_1 ;
        enumerator_6618.current_mExpression (HERE).getAssociatedValuesFor_regularExp (extractedValue_6688_exp_0, extractedValue_6692_endOfExpression_1) ;
        GGS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_6976 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_6688_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_6976, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 188)) ;
        GGS_semanticExpressionForGeneration var_if_5F_expression_7149 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_6692_endOfExpression_1, var_analyzed_5F_if_5F_expression_6976, var_if_5F_expression_7149, inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 197)) ;
        }
        outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_regular (var_if_5F_expression_7149  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 203))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 203)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 204)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 205)) ;
        }
      }
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_letVarExp:
      {
        GGS_lstring extractedValue_7353_varName_0 ;
        GGS_bool extractedValue_7361_isConstant_1 ;
        GGS_semanticExpressionAST extractedValue_7372_exp_2 ;
        GGS_location extractedValue_7376__3 ;
        GGS_lstring extractedValue_7387_typeName_4 ;
        enumerator_6618.current_mExpression (HERE).getAssociatedValuesFor_letVarExp (extractedValue_7353_varName_0, extractedValue_7361_isConstant_1, extractedValue_7372_exp_2, extractedValue_7376__3, extractedValue_7387_typeName_4) ;
        GGS_semanticExpressionForGeneration var_analyzedExpression_7664 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_7372_exp_2.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 210)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_7664, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 207)) ;
        GGS_unifiedTypeMapEntry var_castType_7705 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 216)) ;
        GGS_unifiedTypeMapEntry var_testType_7754 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 217)) ;
        GGS_unifiedTypeMapEntry var_unwrappedType_7841 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 219)).readProperty_unwrappedType () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_unwrappedType_7841.getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 220)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 220)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 221)) ;
            }
            {
            extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 222)) ;
            }
            GGS_string var_targetVariableCppName_8067 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = extractedValue_7361_isConstant_1.boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_unwrappedType_7841, var_targetVariableCppName_8067, var_targetVariableCppName_8067, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 227)) ;
                    }
                  }
                }
                if (GalgasBool::boolFalse == test_3) {
                  {
                  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_unwrappedType_7841, var_targetVariableCppName_8067, var_targetVariableCppName_8067, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 234)) ;
                  }
                }
              }
            }
            var_castType_7705 = var_unwrappedType_7841 ;
            var_testType_7754 = var_analyzedExpression_7664.readProperty_mResultType () ;
            outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_optionalExp (var_targetVariableCppName_8067, extractedValue_7361_isConstant_1, var_analyzedExpression_7664, var_unwrappedType_7841  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 245))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 245)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 252)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 252)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, extractedValue_7387_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  TC_Array <FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("on a class object, the 'as' clause is required"), fixItArray6  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 254)) ;
                  var_castType_7705.drop () ; // Release error dropped variable
                  var_testType_7754.drop () ; // Release error dropped variable
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                var_castType_7705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7387_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 256)) ;
                var_testType_7754 = var_castType_7705 ;
                GGS_unifiedTypeMapEntry var_t_9582 = var_castType_7705 ;
                GGS_bool var_found_9617 = GGS_bool (ComparisonKind::equal, var_t_9582.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).isValid ()) {
                  uint32_t variant_9673 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).uintValue () ;
                  bool loop_9673 = true ;
                  while (loop_9673) {
                    loop_9673 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_and (extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).isValid () ;
                    if (loop_9673) {
                      loop_9673 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_and (extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).boolValue () ;
                    }
                    if (loop_9673 && (0 == variant_9673)) {
                      loop_9673 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)) ;
                    }
                    if (loop_9673) {
                      variant_9673 -- ;
                      var_t_9582 = extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 263)).readProperty_superType () ;
                      var_found_9617 = GGS_bool (ComparisonKind::equal, var_t_9582.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                    }
                  }
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 266)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extractedValue_7387_typeName_4.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (GGS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 269)), fixItArray8  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 267)) ;
                  }
                }
              }
              {
              extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 273)) ;
              }
              {
              extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 274)) ;
              }
              GGS_string var_targetVariableCppName_10290 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)) ;
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = extractedValue_7361_isConstant_1.boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      {
                      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_castType_7705, var_targetVariableCppName_10290, var_targetVariableCppName_10290, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 279)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    {
                    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_castType_7705, var_targetVariableCppName_10290, var_targetVariableCppName_10290, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 286)) ;
                    }
                  }
                }
              }
              outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_10290, var_analyzedExpression_7664, var_castType_7705, var_testType_7754  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 295))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 295)) ;
            }
          }
          if (GalgasBool::boolFalse == test_4) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_11231 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).unwrappedValue () ;
              if (!extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, extractedValue_7387_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_castType_7705 = var_weakRefType_11231.readProperty_referenceType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  var_castType_7705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7387_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 305)) ;
                }
                var_testType_7754 = var_castType_7705 ;
                GGS_unifiedTypeMapEntry var_t_11574 = var_castType_7705 ;
                GGS_bool var_found_11607 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = var_found_11607.boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 311)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 311)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_weakRefType_11231.readProperty_referenceType ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                      var_found_11607 = GGS_bool (true) ;
                    }
                  }
                }
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).isValid ()) {
                  uint32_t variant_11871 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).uintValue () ;
                  bool loop_11871 = true ;
                  while (loop_11871) {
                    loop_11871 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_and (extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).isValid () ;
                    if (loop_11871) {
                      loop_11871 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_and (extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).boolValue () ;
                    }
                    if (loop_11871 && (0 == variant_11871)) {
                      loop_11871 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)) ;
                    }
                    if (loop_11871) {
                      variant_11871 -- ;
                      var_t_11574 = extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 317)).readProperty_superType () ;
                      GalgasBool test_15 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_15) {
                        test_15 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_15) {
                          var_found_11607 = GGS_bool (true) ;
                          extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 320)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 320)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_15) {
                        GalgasBool test_16 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_16) {
                          test_16 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_weakRefType_11231.readProperty_referenceType ())).boolEnum () ;
                          if (GalgasBool::boolTrue == test_16) {
                            var_found_11607 = GGS_bool (true) ;
                          }
                        }
                      }
                    }
                  }
                }
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 325)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    TC_Array <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).add_operation (GGS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 329)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 328)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 329)), fixItArray18  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 326)) ;
                  }
                }
                {
                extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 331)) ;
                }
                {
                extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 332)) ;
                }
                GGS_string var_targetVariableCppName_12681 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)) ;
                GalgasBool test_19 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_19) {
                  test_19 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_19) {
                    GalgasBool test_20 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_20) {
                      test_20 = extractedValue_7361_isConstant_1.boolEnum () ;
                      if (GalgasBool::boolTrue == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_castType_7705, var_targetVariableCppName_12681, var_targetVariableCppName_12681, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 337)) ;
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_20) {
                      {
                      extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_castType_7705, var_targetVariableCppName_12681, var_targetVariableCppName_12681, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 344)) ;
                      }
                    }
                  }
                }
                outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_12681, var_analyzedExpression_7664, var_castType_7705, var_testType_7754  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 353))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 353)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (var_analyzedExpression_7664.readProperty_mLocation (), GGS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 362)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 361)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 362)), fixItArray21  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 360)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_6618.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum ifTestForGeneration
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration::GGS_ifTestForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_regular (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_regular ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_regular (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_letVarExp (const GGS_string & inAssociatedValue0,
                                                                       const GGS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                       const GGS_unifiedTypeMapEntry & inAssociatedValue2,
                                                                       const GGS_unifiedTypeMapEntry & inAssociatedValue3
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_optionalExp (const GGS_string & inAssociatedValue0,
                                                                         const GGS_bool & inAssociatedValue1,
                                                                         const GGS_semanticExpressionForGeneration & inAssociatedValue2,
                                                                         const GGS_unifiedTypeMapEntry & inAssociatedValue3
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_optionalExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_optionalExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractRegular (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regular) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.regular invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractLetVarExp (GGS_string & outAssociatedValue_targetVarCppName,
                                                       GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                       GGS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                       GGS_unifiedTypeMapEntry & outAssociatedValue_testType,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    outAssociatedValue_testType.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
    outAssociatedValue_testType = ptr->mProperty_testType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractOptionalExp (GGS_string & outAssociatedValue_targetVarCppName,
                                                         GGS_bool & outAssociatedValue_isConstant,
                                                         GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                         GGS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_optionalExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.optionalExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration::getter_getRegular (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  if (mEnum == Enumeration::enum_regular) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_regular (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_regular (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_letVarExp (GGS_string & out_targetVarCppName,
                                                                GGS_semanticExpressionForGeneration & out_exp,
                                                                GGS_unifiedTypeMapEntry & out_targetType,
                                                                GGS_unifiedTypeMapEntry & out_testType) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
  out_testType = ptr->mProperty_testType ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration::getter_getOptionalExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  if (mEnum == Enumeration::enum_optionalExp) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_optionalExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_optionalExp (GGS_string & out_targetVarCppName,
                                                                  GGS_bool & out_isConstant,
                                                                  GGS_semanticExpressionForGeneration & out_exp,
                                                                  GGS_unifiedTypeMapEntry & out_targetType) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifTestForGeneration [4] = {
  "(not built)",
  "regular",
  "letVarExp",
  "optionalExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isRegular (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regular == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isOptionalExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_optionalExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifTestForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifTestForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration ("ifTestForGeneration",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  const GGS_ifTestForGeneration * p = (const GGS_ifTestForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ifTestListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ifTestListForGeneration : public cCollectionElement {
  public: GGS_ifTestListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ifTestListForGeneration (const GGS_ifTestForGeneration & in_mExpression
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ifTestListForGeneration (const GGS_ifTestListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GGS_ifTestForGeneration & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GGS_ifTestListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ifTestListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ifTestListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ifTestListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ifTestListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration::GGS_ifTestListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration::GGS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ifTestListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ifTestListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::plusPlusAssignOperation (const GGS_ifTestListForGeneration_2E_element & inValue
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::class_func_listWithValue (const GGS_ifTestForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_ifTestListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ifTestListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_ifTestForGeneration & in_mExpression
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::addAssignOperation (const GGS_ifTestForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_append (const GGS_ifTestForGeneration inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_insertAtIndex (const GGS_ifTestForGeneration inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_removeAtIndex (GGS_ifTestForGeneration & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_popFirst (GGS_ifTestForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_popLast (GGS_ifTestForGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::method_first (GGS_ifTestForGeneration & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::method_last (GGS_ifTestForGeneration & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::add_operation (const GGS_ifTestListForGeneration & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result = GGS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result = GGS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result = GGS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::plusAssignOperation (const GGS_ifTestListForGeneration inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_setMExpressionAtIndex (GGS_ifTestForGeneration inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  GGS_ifTestForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ifTestListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_ifTestListForGeneration::DownEnumerator_ifTestListForGeneration (const GGS_ifTestListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element DownEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration DownEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ifTestListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_ifTestListForGeneration::UpEnumerator_ifTestListForGeneration (const GGS_ifTestListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element UpEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration UpEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @ifTestListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ("ifTestListForGeneration",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration result ;
  const GGS_ifTestListForGeneration * p = (const GGS_ifTestListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST::objectCompare (const GGS_ifInstructionAST & inOperand) const {
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

GGS_ifInstructionAST::GGS_ifInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_CommaSeparatedExpressionList & in_mExpressions,
                              const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                              const GGS_location & in_mEndOf_5F_then_5F_branch,
                              const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_mEndOf_5F_then_5F_branch, in_m_5F_else_5F_instructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GGS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                               const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                               const GGS_location & in_mEndOf_5F_then_5F_branch,
                                               const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                               const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST::GGS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                           const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                                           const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                                           const GGS_location & in_mEndOf_5F_then_5F_branch,
                                                           const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                                           const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_mEndOf_5F_then_5F_branch, in_m_5F_else_5F_instructionList, in_mEndOf_5F_if_5F_instruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_ifInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_CommaSeparatedExpressionList () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_ifInstructionAST::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_then_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_then_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_ifInstructionAST::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_mEndOf_5F_then_5F_branch (),
mProperty_m_5F_else_5F_instructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                              const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                              const GGS_location & in_mEndOf_5F_then_5F_branch,
                                              const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_mEndOf_5F_then_5F_branch (),
mProperty_m_5F_else_5F_instructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_then_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_mEndOf_5F_then_5F_branch, mProperty_m_5F_else_5F_instructionList, mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_mEndOf_5F_then_5F_branch.printNonNullClassInstanceProperties ("mEndOf_then_branch") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  const GGS_ifInstructionAST * p = (const GGS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST_2E_weak::objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const {
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

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak & GGS_ifInstructionAST_2E_weak::operator = (const GGS_ifInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (const GGS_ifInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionAST result ;
  if (isValid ()) {
    const cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GGS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ("ifInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  const GGS_ifInstructionAST_2E_weak * p = (const GGS_ifInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration::objectCompare (const GGS_ifInstructionForGeneration & inOperand) const {
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

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ifTestListForGeneration & in_mExpressions,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList, inCompiler) ;
  const GGS_ifInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::
ifInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_ifTestListForGeneration & in_mExpressions,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                               const GGS_ifTestListForGeneration & in_mExpressions,
                                                                               const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                               const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionForGeneration (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifInstructionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_ifTestListForGeneration & in_mExpressions,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_m_5F_else_5F_instructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration result ;
  const GGS_ifInstructionForGeneration * p = (const GGS_ifInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration_2E_weak::objectCompare (const GGS_ifInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_ifInstructionForGeneration_2E_weak::GGS_ifInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak & GGS_ifInstructionForGeneration_2E_weak::operator = (const GGS_ifInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak::GGS_ifInstructionForGeneration_2E_weak (const GGS_ifInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak GGS_ifInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration_2E_weak::bang_ifInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionForGeneration) ;
      result = GGS_ifInstructionForGeneration ((cPtr_ifInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ("ifInstructionForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak GGS_ifInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration_2E_weak result ;
  const GGS_ifInstructionForGeneration_2E_weak * p = (const GGS_ifInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ("localVariableOrConstantDeclarationWithAssignmentAST.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationAST_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak & GGS_undefinedLocalConstantDeclarationAST_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (const GGS_undefinedLocalConstantDeclarationAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (isValid ()) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_undefinedLocalConstantDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GGS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ("undefinedLocalConstantDeclarationAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_undefinedLocalConstantDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  const GGS_undefinedLocalConstantDeclarationAST_2E_weak * p = (const GGS_undefinedLocalConstantDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak & GGS_localConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localConstantDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GGS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localConstantDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ("localConstantDeclarationWithAssignmentAST.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localConstantDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_undefinedLocalConstantDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_undefinedLocalConstantDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->undefinedLocalConstantDeclarationForGeneration_init_21__21_ (in_mTargetType, in_mCppVariableName, inCompiler) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::
undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                             const GGS_string & in_mCppVariableName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                       const GGS_string & in_mCppVariableName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (in_mTargetType, in_mCppVariableName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                          const GGS_string & in_mCppVariableName,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@undefinedLocalConstantDeclarationForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration * p = (const GGS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (const GGS_undefinedLocalConstantDeclarationForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_undefinedLocalConstantDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::bang_undefinedLocalConstantDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
      result = GGS_undefinedLocalConstantDeclarationForGeneration ((cPtr_undefinedLocalConstantDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ("undefinedLocalConstantDeclarationForGeneration.weak",
                                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak * p = (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
      result = GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ((cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak",
                                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak * p = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@logListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_logListAST : public cCollectionElement {
  public: GGS_logListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_logListAST (const GGS_lstring & in_mLogMessage,
                                         const GGS_semanticExpressionAST & in_mLogExpression
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_logListAST (const GGS_logListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_logListAST::cCollectionElement_logListAST (const GGS_lstring & in_mLogMessage,
                                                              const GGS_semanticExpressionAST & in_mLogExpression
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLogMessage, in_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_logListAST::cCollectionElement_logListAST (const GGS_logListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLogMessage, inElement.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_logListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_logListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_logListAST (mObject.mProperty_mLogMessage, mObject.mProperty_mLogExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_logListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLogMessage" ":") ;
  mObject.mProperty_mLogMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLogExpression" ":") ;
  mObject.mProperty_mLogExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST::GGS_logListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST::GGS_logListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_logListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_logListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::plusPlusAssignOperation (const GGS_logListAST_2E_element & inValue
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_logListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                         const GGS_semanticExpressionAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  GGS_logListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_logListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_logListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_lstring & in_mLogMessage,
                                                const GGS_semanticExpressionAST & in_mLogExpression
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_logListAST (in_mLogMessage,
                                                in_mLogExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                         const GGS_semanticExpressionAST & inOperand1
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_append (const GGS_lstring inOperand0,
                                    const GGS_semanticExpressionAST inOperand1,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                           const GGS_semanticExpressionAST inOperand1,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                           GGS_semanticExpressionAST & outOperand1,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_logListAST) ;
      outOperand0 = p->mObject.mProperty_mLogMessage ;
      outOperand1 = p->mObject.mProperty_mLogExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_popFirst (GGS_lstring & outOperand0,
                                      GGS_semanticExpressionAST & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_popLast (GGS_lstring & outOperand0,
                                     GGS_semanticExpressionAST & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::method_first (GGS_lstring & outOperand0,
                                   GGS_semanticExpressionAST & outOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::method_last (GGS_lstring & outOperand0,
                                  GGS_semanticExpressionAST & outOperand1,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::add_operation (const GGS_logListAST & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_logListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_logListAST result = GGS_logListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_logListAST result = GGS_logListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_logListAST result = GGS_logListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::plusAssignOperation (const GGS_logListAST inOperand,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_setMLogMessageAtIndex (GGS_lstring inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLogMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_logListAST::getter_mLogMessageAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_setMLogExpressionAtIndex (GGS_semanticExpressionAST inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLogExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_logListAST::getter_mLogExpressionAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GGS_semanticExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @logListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_logListAST::DownEnumerator_logListAST (const GGS_logListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element DownEnumerator_logListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_logListAST::current_mLogMessage (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST DownEnumerator_logListAST::current_mLogExpression (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @logListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_logListAST::UpEnumerator_logListAST (const GGS_logListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element UpEnumerator_logListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_logListAST::current_mLogMessage (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST UpEnumerator_logListAST::current_mLogExpression (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @logListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST ("logListAST",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_logListAST result ;
  const GGS_logListAST * p = (const GGS_logListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionAST::objectCompare (const GGS_logInstructionAST & inOperand) const {
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

GGS_logInstructionAST::GGS_logInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_logListAST & in_mLogList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_logInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_logInstructionAST (inCompiler COMMA_THERE)) ;
  object->logInstructionAST_init_21__21_ (in_mInstructionLocation, in_mLogList, inCompiler) ;
  const GGS_logInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::
logInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                const GGS_logListAST & in_mLogList,
                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST::GGS_logInstructionAST (const cPtr_logInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                             const GGS_logListAST & in_mLogList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_logInstructionAST (in_mInstructionLocation, in_mLogList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logInstructionAST::readProperty_mLogList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_logListAST () ;
  }else{
    cPtr_logInstructionAST * p = (cPtr_logInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionAST) ;
    return p->mProperty_mLogList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLogList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_logListAST & in_mLogList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLogList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

void cPtr_logInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@logInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLogList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logInstructionAST (mProperty_mInstructionLocation, mProperty_mLogList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLogList.printNonNullClassInstanceProperties ("mLogList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @logInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST ("logInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST result ;
  const GGS_logInstructionAST * p = (const GGS_logInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionAST_2E_weak::objectCompare (const GGS_logInstructionAST_2E_weak & inOperand) const {
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

GGS_logInstructionAST_2E_weak::GGS_logInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak & GGS_logInstructionAST_2E_weak::operator = (const GGS_logInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak::GGS_logInstructionAST_2E_weak (const GGS_logInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak GGS_logInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_logInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_logInstructionAST result ;
  if (isValid ()) {
    const cPtr_logInstructionAST * p = (cPtr_logInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_logInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST_2E_weak::bang_logInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_logInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionAST) ;
      result = GGS_logInstructionAST ((cPtr_logInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @logInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ("logInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak GGS_logInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST_2E_weak result ;
  const GGS_logInstructionAST_2E_weak * p = (const GGS_logInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionForGeneration_2E_weak::objectCompare (const GGS_logInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_logInstructionForGeneration_2E_weak::GGS_logInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak & GGS_logInstructionForGeneration_2E_weak::operator = (const GGS_logInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak::GGS_logInstructionForGeneration_2E_weak (const GGS_logInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak GGS_logInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_logInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_logInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_logInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration_2E_weak::bang_logInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_logInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionForGeneration) ;
      result = GGS_logInstructionForGeneration ((cPtr_logInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @logInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ("logInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak GGS_logInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_logInstructionForGeneration_2E_weak result ;
  const GGS_logInstructionForGeneration_2E_weak * p = (const GGS_logInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST::objectCompare (const GGS_loopInstructionWithVariantAST & inOperand) const {
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

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mVariantExpression,
                                              const GGS_location & in_mEndOfVariantExpression,
                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GGS_location & in_mEndOfFirstInstructions,
                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                              const GGS_location & in_mEndOfLoopExpression,
                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GGS_location & in_mEndOfSecondInstructions,
                                              const GGS_location & in_mEndOfLoopInstruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::
loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                            const GGS_location & in_mEndOfVariantExpression,
                                                                            const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                            const GGS_location & in_mEndOfFirstInstructions,
                                                                            const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                            const GGS_location & in_mEndOfLoopExpression,
                                                                            const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                            const GGS_location & in_mEndOfSecondInstructions,
                                                                            const GGS_location & in_mEndOfLoopInstruction,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (const cPtr_loopInstructionWithVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                                     const GGS_location & in_mEndOfVariantExpression,
                                                                                     const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                     const GGS_location & in_mEndOfFirstInstructions,
                                                                                     const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                                     const GGS_location & in_mEndOfLoopExpression,
                                                                                     const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                     const GGS_location & in_mEndOfSecondInstructions,
                                                                                     const GGS_location & in_mEndOfLoopInstruction,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantAST (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                        const GGS_location & in_mEndOfVariantExpression,
                                                                        const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                        const GGS_location & in_mEndOfFirstInstructions,
                                                                        const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                        const GGS_location & in_mEndOfLoopExpression,
                                                                        const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                        const GGS_location & in_mEndOfSecondInstructions,
                                                                        const GGS_location & in_mEndOfLoopInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

void cPtr_loopInstructionWithVariantAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithVariantAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantAST (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mEndOfVariantExpression.printNonNullClassInstanceProperties ("mEndOfVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ("loopInstructionWithVariantAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST result ;
  const GGS_loopInstructionWithVariantAST * p = (const GGS_loopInstructionWithVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak & GGS_loopInstructionWithVariantAST_2E_weak::operator = (const GGS_loopInstructionWithVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (const GGS_loopInstructionWithVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithVariantAST result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithVariantAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantAST) ;
      result = GGS_loopInstructionWithVariantAST ((cPtr_loopInstructionWithVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ("loopInstructionWithVariantAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  const GGS_loopInstructionWithVariantAST_2E_weak * p = (const GGS_loopInstructionWithVariantAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak & GGS_loopInstructionWithVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (const GGS_loopInstructionWithVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithVariantForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantForGeneration) ;
      result = GGS_loopInstructionWithVariantForGeneration ((cPtr_loopInstructionWithVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ("loopInstructionWithVariantForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST::objectCompare (const GGS_loopInstructionWithoutVariantAST & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                      const GGS_location & in_mEndOfFirstInstructions,
                                      const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                      const GGS_location & in_mEndOfLoopExpression,
                                      const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                      const GGS_location & in_mEndOfSecondInstructions,
                                      const GGS_location & in_mEndOfLoopInstruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithoutVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::
loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                       const GGS_location & in_mEndOfFirstInstructions,
                                                                       const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                                       const GGS_location & in_mEndOfLoopExpression,
                                                                       const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                       const GGS_location & in_mEndOfSecondInstructions,
                                                                       const GGS_location & in_mEndOfLoopInstruction,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (const cPtr_loopInstructionWithoutVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                           const GGS_location & in_mEndOfFirstInstructions,
                                                                                           const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                                                           const GGS_location & in_mEndOfLoopExpression,
                                                                                           const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                           const GGS_location & in_mEndOfSecondInstructions,
                                                                                           const GGS_location & in_mEndOfLoopInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantAST (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithoutVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_loopInstructionWithoutVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_CommaSeparatedExpressionList () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithoutVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                              const GGS_location & in_mEndOfFirstInstructions,
                                                                              const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                                              const GGS_location & in_mEndOfLoopExpression,
                                                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                              const GGS_location & in_mEndOfSecondInstructions,
                                                                              const GGS_location & in_mEndOfLoopInstruction,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithoutVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

void cPtr_loopInstructionWithoutVariantAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantAST (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ("loopInstructionWithoutVariantAST",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST result ;
  const GGS_loopInstructionWithoutVariantAST * p = (const GGS_loopInstructionWithoutVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak & GGS_loopInstructionWithoutVariantAST_2E_weak::operator = (const GGS_loopInstructionWithoutVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (const GGS_loopInstructionWithoutVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithoutVariantAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantAST) ;
      result = GGS_loopInstructionWithoutVariantAST ((cPtr_loopInstructionWithoutVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ("loopInstructionWithoutVariantAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  const GGS_loopInstructionWithoutVariantAST_2E_weak * p = (const GGS_loopInstructionWithoutVariantAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration::GGS_loopInstructionWithoutVariantForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                      const GGS_ifTestListForGeneration & in_mLoopExpression,
                      const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantForGeneration (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions, inCompiler) ;
  const GGS_loopInstructionWithoutVariantForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::
loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                 const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                 const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration::GGS_loopInstructionWithoutVariantForGeneration (const cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                               const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                               const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                                                               const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantForGeneration (in_mInstructionLocation, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                  const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                                                  const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithoutVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

void cPtr_loopInstructionWithoutVariantForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantForGeneration (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ("loopInstructionWithoutVariantForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  const GGS_loopInstructionWithoutVariantForGeneration * p = (const GGS_loopInstructionWithoutVariantForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak & GGS_loopInstructionWithoutVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithoutVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const GGS_loopInstructionWithoutVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithoutVariantForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
      result = GGS_loopInstructionWithoutVariantForGeneration ((cPtr_loopInstructionWithoutVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ("loopInstructionWithoutVariantForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithoutVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @messageInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_messageInstructionAST::objectCompare (const GGS_messageInstructionAST & inOperand) const {
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

GGS_messageInstructionAST::GGS_messageInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_messageInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_messageInstructionAST (inCompiler COMMA_THERE)) ;
  object->messageInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_messageInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::
messageInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                    const GGS_semanticExpressionAST & in_mExpression,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST::GGS_messageInstructionAST (const cPtr_messageInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_messageInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_semanticExpressionAST & in_mExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_messageInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_messageInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_messageInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_messageInstructionAST * p = (cPtr_messageInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @messageInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_messageInstructionAST::cPtr_messageInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_messageInstructionAST::cPtr_messageInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionAST & in_mExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_messageInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

void cPtr_messageInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@messageInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_messageInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_messageInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_messageInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @messageInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST ("messageInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_messageInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_messageInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_messageInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_messageInstructionAST result ;
  const GGS_messageInstructionAST * p = (const GGS_messageInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_messageInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_messageInstructionAST_2E_weak::objectCompare (const GGS_messageInstructionAST_2E_weak & inOperand) const {
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

GGS_messageInstructionAST_2E_weak::GGS_messageInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak & GGS_messageInstructionAST_2E_weak::operator = (const GGS_messageInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak::GGS_messageInstructionAST_2E_weak (const GGS_messageInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak GGS_messageInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_messageInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_messageInstructionAST result ;
  if (isValid ()) {
    const cPtr_messageInstructionAST * p = (cPtr_messageInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_messageInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST_2E_weak::bang_messageInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_messageInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionAST) ;
      result = GGS_messageInstructionAST ((cPtr_messageInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @messageInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST_2E_weak ("messageInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_messageInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_messageInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_messageInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak GGS_messageInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_messageInstructionAST_2E_weak result ;
  const GGS_messageInstructionAST_2E_weak * p = (const GGS_messageInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_messageInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_messageInstructionForGeneration_2E_weak::objectCompare (const GGS_messageInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_messageInstructionForGeneration_2E_weak::GGS_messageInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak & GGS_messageInstructionForGeneration_2E_weak::operator = (const GGS_messageInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak::GGS_messageInstructionForGeneration_2E_weak (const GGS_messageInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak GGS_messageInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_messageInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration GGS_messageInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_messageInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_messageInstructionForGeneration * p = (cPtr_messageInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_messageInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration GGS_messageInstructionForGeneration_2E_weak::bang_messageInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_messageInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionForGeneration) ;
      result = GGS_messageInstructionForGeneration ((cPtr_messageInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @messageInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration_2E_weak ("messageInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_messageInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_messageInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_messageInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak GGS_messageInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_messageInstructionForGeneration_2E_weak result ;
  const GGS_messageInstructionForGeneration_2E_weak * p = (const GGS_messageInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_messageInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionAST_2E_weak::objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak & GGS_methodCallInstructionAST_2E_weak::operator = (const GGS_methodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (const GGS_methodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_methodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_methodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionAST) ;
      result = GGS_methodCallInstructionAST ((cPtr_methodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ("methodCallInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_methodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  const GGS_methodCallInstructionAST_2E_weak * p = (const GGS_methodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak & GGS_methodCallInstructionForGeneration_2E_weak::operator = (const GGS_methodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (const GGS_methodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_methodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_methodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionForGeneration) ;
      result = GGS_methodCallInstructionForGeneration ((cPtr_methodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ("methodCallInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_methodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  const GGS_methodCallInstructionForGeneration_2E_weak * p = (const GGS_methodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST::objectCompare (const GGS_superInitInstructionAST & inOperand) const {
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

GGS_superInitInstructionAST::GGS_superInitInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_actualOutputArgumentList & in_mActualParameterList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionAST (inCompiler COMMA_THERE)) ;
  object->superInitInstructionAST_init_21__21_ (in_mInstructionLocation, in_mActualParameterList, inCompiler) ;
  const GGS_superInitInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::
superInitInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_actualOutputArgumentList & in_mActualParameterList,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST::GGS_superInitInstructionAST (const cPtr_superInitInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_actualOutputArgumentList & in_mActualParameterList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_superInitInstructionAST (in_mInstructionLocation, in_mActualParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_superInitInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                                            const GGS_actualOutputArgumentList & in_mActualParameterList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superInitInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

void cPtr_superInitInstructionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionAST (mProperty_mInstructionLocation, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST ("superInitInstructionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST result ;
  const GGS_superInitInstructionAST * p = (const GGS_superInitInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST_2E_weak::objectCompare (const GGS_superInitInstructionAST_2E_weak & inOperand) const {
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

GGS_superInitInstructionAST_2E_weak::GGS_superInitInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak & GGS_superInitInstructionAST_2E_weak::operator = (const GGS_superInitInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak::GGS_superInitInstructionAST_2E_weak (const GGS_superInitInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak GGS_superInitInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superInitInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_superInitInstructionAST result ;
  if (isValid ()) {
    const cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_superInitInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST_2E_weak::bang_superInitInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superInitInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionAST) ;
      result = GGS_superInitInstructionAST ((cPtr_superInitInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ("superInitInstructionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak GGS_superInitInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST_2E_weak result ;
  const GGS_superInitInstructionAST_2E_weak * p = (const GGS_superInitInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionForGeneration::objectCompare (const GGS_superInitInstructionForGeneration & inOperand) const {
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

GGS_superInitInstructionForGeneration::GGS_superInitInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_string & in_mSuperInitializerSignature,
                      const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                      const GGS_string & in_mSuperTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superInitInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName, inCompiler) ;
  const GGS_superInitInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::
superInitInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mSuperInitializerSignature,
                                                        const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                        const GGS_string & in_mSuperTypeName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration::GGS_superInitInstructionForGeneration (const cPtr_superInitInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             const GGS_string & in_mSuperInitializerSignature,
                                                                                             const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                             const GGS_string & in_mSuperTypeName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_superInitInstructionForGeneration (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_superInitInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superInitInstructionForGeneration::readProperty_mSuperInitializerSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperInitializerSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_superInitInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superInitInstructionForGeneration::readProperty_mSuperTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_string & in_mSuperInitializerSignature,
                                                                                const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                const GGS_string & in_mSuperTypeName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superInitInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
}

void cPtr_superInitInstructionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperInitializerSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSuperInitializerSignature, mProperty_mActualParameterList, mProperty_mSuperTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mSuperInitializerSignature.printNonNullClassInstanceProperties ("mSuperInitializerSignature") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mSuperTypeName.printNonNullClassInstanceProperties ("mSuperTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration ("superInitInstructionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration result ;
  const GGS_superInitInstructionForGeneration * p = (const GGS_superInitInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionForGeneration_2E_weak::objectCompare (const GGS_superInitInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_superInitInstructionForGeneration_2E_weak::GGS_superInitInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak & GGS_superInitInstructionForGeneration_2E_weak::operator = (const GGS_superInitInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak::GGS_superInitInstructionForGeneration_2E_weak (const GGS_superInitInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak GGS_superInitInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_superInitInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_superInitInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration_2E_weak::bang_superInitInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superInitInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionForGeneration) ;
      result = GGS_superInitInstructionForGeneration ((cPtr_superInitInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ("superInitInstructionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak GGS_superInitInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration_2E_weak result ;
  const GGS_superInitInstructionForGeneration_2E_weak * p = (const GGS_superInitInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionAST_2E_weak::objectCompare (const GGS_superMethodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_superMethodCallInstructionAST_2E_weak::GGS_superMethodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak & GGS_superMethodCallInstructionAST_2E_weak::operator = (const GGS_superMethodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak::GGS_superMethodCallInstructionAST_2E_weak (const GGS_superMethodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak GGS_superMethodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superMethodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_superMethodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_superMethodCallInstructionAST * p = (cPtr_superMethodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_superMethodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST_2E_weak::bang_superMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superMethodCallInstructionAST) ;
      result = GGS_superMethodCallInstructionAST ((cPtr_superMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ("superMethodCallInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superMethodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak GGS_superMethodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionAST_2E_weak result ;
  const GGS_superMethodCallInstructionAST_2E_weak * p = (const GGS_superMethodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionForGeneration::objectCompare (const GGS_superMethodCallInstructionForGeneration & inOperand) const {
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

GGS_superMethodCallInstructionForGeneration::GGS_superMethodCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mMethodName,
                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                          const GGS_bool & in_mHasCompilerArgument,
                          const GGS_unifiedTypeMapEntry & in_mBaseType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_superMethodCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superMethodCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mMethodName, in_mActualParameterList, in_mHasCompilerArgument, in_mBaseType, inCompiler) ;
  const GGS_superMethodCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionForGeneration::
superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_string & in_mMethodName,
                                                                  const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                  const GGS_bool & in_mHasCompilerArgument,
                                                                  const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mBaseType = in_mBaseType ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration::GGS_superMethodCallInstructionForGeneration (const cPtr_superMethodCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superMethodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_string & in_mMethodName,
                                                                                                         const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                         const GGS_bool & in_mHasCompilerArgument,
                                                                                                         const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_superMethodCallInstructionForGeneration (in_mInstructionLocation, in_mMethodName, in_mActualParameterList, in_mHasCompilerArgument, in_mBaseType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_superMethodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superMethodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_superMethodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_superMethodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_superMethodCallInstructionForGeneration::readProperty_mBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionForGeneration::cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mMethodName (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mBaseType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionForGeneration::cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_string & in_mMethodName,
                                                                                            const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                            const GGS_bool & in_mHasCompilerArgument,
                                                                                            const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mMethodName (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mBaseType () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mBaseType = in_mBaseType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superMethodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;
}

void cPtr_superMethodCallInstructionForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superMethodCallInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superMethodCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superMethodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mMethodName, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mBaseType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superMethodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mBaseType.printNonNullClassInstanceProperties ("mBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ("superMethodCallInstructionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superMethodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration result ;
  const GGS_superMethodCallInstructionForGeneration * p = (const GGS_superMethodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_superMethodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_superMethodCallInstructionForGeneration_2E_weak::GGS_superMethodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak & GGS_superMethodCallInstructionForGeneration_2E_weak::operator = (const GGS_superMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak::GGS_superMethodCallInstructionForGeneration_2E_weak (const GGS_superMethodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak GGS_superMethodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_superMethodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_superMethodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration_2E_weak::bang_superMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superMethodCallInstructionForGeneration) ;
      result = GGS_superMethodCallInstructionForGeneration ((cPtr_superMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ("superMethodCallInstructionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superMethodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak GGS_superMethodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration_2E_weak result ;
  const GGS_superMethodCallInstructionForGeneration_2E_weak * p = (const GGS_superMethodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionAST_2E_weak::objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const {
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

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak & GGS_procCallInstructionAST_2E_weak::operator = (const GGS_procCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (const GGS_procCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak GGS_procCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_procCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_procCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST_2E_weak::bang_procCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionAST) ;
      result = GGS_procCallInstructionAST ((cPtr_procCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ("procCallInstructionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak GGS_procCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionAST_2E_weak result ;
  const GGS_procCallInstructionAST_2E_weak * p = (const GGS_procCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionForGeneration_2E_weak::objectCompare (const GGS_procCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_procCallInstructionForGeneration_2E_weak::GGS_procCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak & GGS_procCallInstructionForGeneration_2E_weak::operator = (const GGS_procCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak::GGS_procCallInstructionForGeneration_2E_weak (const GGS_procCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak GGS_procCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_procCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_procCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration_2E_weak::bang_procCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionForGeneration) ;
      result = GGS_procCallInstructionForGeneration ((cPtr_procCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ("procCallInstructionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak GGS_procCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration_2E_weak result ;
  const GGS_procCallInstructionForGeneration_2E_weak * p = (const GGS_procCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST::objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const {
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

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mSourceExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfAssignmentInstructionAST_init_21__21_ (in_mInstructionLocation, in_mSourceExpression, inCompiler) ;
  const GGS_selfAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::
selfAssignmentInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfAssignmentInstructionAST (in_mInstructionLocation, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

void cPtr_selfAssignmentInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@selfAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ("selfAssignmentInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST result ;
  const GGS_selfAssignmentInstructionAST * p = (const GGS_selfAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST_2E_weak::objectCompare (const GGS_selfAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_selfAssignmentInstructionAST_2E_weak::GGS_selfAssignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak & GGS_selfAssignmentInstructionAST_2E_weak::operator = (const GGS_selfAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak::GGS_selfAssignmentInstructionAST_2E_weak (const GGS_selfAssignmentInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak GGS_selfAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfAssignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfAssignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST_2E_weak::bang_selfAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfAssignmentInstructionAST) ;
      result = GGS_selfAssignmentInstructionAST ((cPtr_selfAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfAssignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ("selfAssignmentInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAssignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAssignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak GGS_selfAssignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST_2E_weak result ;
  const GGS_selfAssignmentInstructionAST_2E_weak * p = (const GGS_selfAssignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAssignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfDivEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfDivEqualExpressionInstructionAST::objectCompare (const GGS_selfDivEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfDivEqualExpressionInstructionAST::GGS_selfDivEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfDivEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfDivEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfDivEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfDivEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::
selfDivEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST::GGS_selfDivEqualExpressionInstructionAST (const cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfDivEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfDivEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfDivEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfDivEqualExpressionInstructionAST * p = (cPtr_selfDivEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfDivEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfDivEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_semanticExpressionAST & in_mExpression,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfDivEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

void cPtr_selfDivEqualExpressionInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfDivEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfDivEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfDivEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfDivEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfDivEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ("selfDivEqualExpressionInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfDivEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfDivEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfDivEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST result ;
  const GGS_selfDivEqualExpressionInstructionAST * p = (const GGS_selfDivEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfDivEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfDivEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfDivEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfDivEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfDivEqualExpressionInstructionAST_2E_weak::GGS_selfDivEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak & GGS_selfDivEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfDivEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak::GGS_selfDivEqualExpressionInstructionAST_2E_weak (const GGS_selfDivEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak GGS_selfDivEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfDivEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfDivEqualExpressionInstructionAST * p = (cPtr_selfDivEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfDivEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST_2E_weak::bang_selfDivEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfDivEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfDivEqualExpressionInstructionAST) ;
      result = GGS_selfDivEqualExpressionInstructionAST ((cPtr_selfDivEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfDivEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ("selfDivEqualExpressionInstructionAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfDivEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfDivEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfDivEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak GGS_selfDivEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfDivEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfDivEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfDivEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfDivEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPlusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualExpressionInstructionAST::objectCompare (const GGS_selfPlusEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfPlusEqualExpressionInstructionAST::GGS_selfPlusEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfPlusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPlusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPlusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfPlusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::
selfPlusEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST::GGS_selfPlusEqualExpressionInstructionAST (const cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                     const GGS_semanticExpressionAST & in_mExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfPlusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfPlusEqualExpressionInstructionAST * p = (cPtr_selfPlusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPlusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_semanticExpressionAST & in_mExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPlusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

void cPtr_selfPlusEqualExpressionInstructionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPlusEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPlusEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPlusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPlusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfPlusEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ("selfPlusEqualExpressionInstructionAST",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPlusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPlusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPlusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  const GGS_selfPlusEqualExpressionInstructionAST * p = (const GGS_selfPlusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPlusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfPlusEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfPlusEqualExpressionInstructionAST_2E_weak::GGS_selfPlusEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak & GGS_selfPlusEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfPlusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak::GGS_selfPlusEqualExpressionInstructionAST_2E_weak (const GGS_selfPlusEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak GGS_selfPlusEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfPlusEqualExpressionInstructionAST * p = (cPtr_selfPlusEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfPlusEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST_2E_weak::bang_selfPlusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
      result = GGS_selfPlusEqualExpressionInstructionAST ((cPtr_selfPlusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfPlusEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ("selfPlusEqualExpressionInstructionAST.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPlusEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPlusEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPlusEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak GGS_selfPlusEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfPlusEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfPlusEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPlusEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfMinusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMinusEqualExpressionInstructionAST::objectCompare (const GGS_selfMinusEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfMinusEqualExpressionInstructionAST::GGS_selfMinusEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMinusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMinusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMinusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfMinusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::
selfMinusEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_semanticExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST::GGS_selfMinusEqualExpressionInstructionAST (const cPtr_selfMinusEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                       const GGS_semanticExpressionAST & in_mExpression,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfMinusEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfMinusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfMinusEqualExpressionInstructionAST * p = (cPtr_selfMinusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMinusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMinusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_semanticExpressionAST & in_mExpression,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfMinusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

void cPtr_selfMinusEqualExpressionInstructionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@selfMinusEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfMinusEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMinusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMinusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfMinusEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ("selfMinusEqualExpressionInstructionAST",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMinusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMinusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMinusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  const GGS_selfMinusEqualExpressionInstructionAST * p = (const GGS_selfMinusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMinusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMinusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMinusEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfMinusEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfMinusEqualExpressionInstructionAST_2E_weak::GGS_selfMinusEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak & GGS_selfMinusEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfMinusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak::GGS_selfMinusEqualExpressionInstructionAST_2E_weak (const GGS_selfMinusEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak GGS_selfMinusEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfMinusEqualExpressionInstructionAST * p = (cPtr_selfMinusEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfMinusEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST_2E_weak::bang_selfMinusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
      result = GGS_selfMinusEqualExpressionInstructionAST ((cPtr_selfMinusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfMinusEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ("selfMinusEqualExpressionInstructionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMinusEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMinusEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMinusEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak GGS_selfMinusEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfMinusEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfMinusEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMinusEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMinusEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

