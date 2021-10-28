#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionIfAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionIfBranchList.objectCompare (p->mProperty_mTemplateInstructionIfBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionIfAST::objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST::GALGAS_templateInstructionIfAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionIfAST::constructor_new (GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (HERE),
                                                           GALGAS_templateInstructionListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST::GALGAS_templateInstructionIfAST (const cPtr_templateInstructionIfAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::constructor_new (const GALGAS_templateInstructionIfBranchListAST & inAttribute_mTemplateInstructionIfBranchList,
                                                                                  const GALGAS_templateInstructionListAST & inAttribute_mElseInstructionList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST result ;
  if (inAttribute_mTemplateInstructionIfBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfAST (inAttribute_mTemplateInstructionIfBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfAST::getter_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    result = p->mProperty_mTemplateInstructionIfBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfAST::setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    p->mProperty_mTemplateInstructionIfBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfAST::setter_setMElseInstructionList (GALGAS_templateInstructionListAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfAST::cPtr_templateInstructionIfAST (const GALGAS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                                              const GALGAS_templateInstructionListAST & in_mElseInstructionList
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mTemplateInstructionIfBranchList (in_mTemplateInstructionIfBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionIfAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

void cPtr_templateInstructionIfAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateInstructionIfAST:" ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionIfAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionIfAST (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfAST ("templateInstructionIfAST",
                                                 & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST result ;
  const GALGAS_templateInstructionIfAST * p = (const GALGAS_templateInstructionIfAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionIfAST_2D_weak::objectCompare (const GALGAS_templateInstructionIfAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak::GALGAS_templateInstructionIfAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak & GALGAS_templateInstructionIfAST_2D_weak::operator = (const GALGAS_templateInstructionIfAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak::GALGAS_templateInstructionIfAST_2D_weak (const GALGAS_templateInstructionIfAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak GALGAS_templateInstructionIfAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST_2D_weak::bang_templateInstructionIfAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfAST) ;
      result = GALGAS_templateInstructionIfAST ((cPtr_templateInstructionIfAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfAST_2D_weak::getter_mTemplateInstructionIfBranchList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionIfAST * objectPtr = (cPtr_templateInstructionIfAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfAST) ;
      result = objectPtr->mProperty_mTemplateInstructionIfBranchList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfAST_2D_weak::getter_mElseInstructionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionIfAST * objectPtr = (cPtr_templateInstructionIfAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfAST) ;
      result = objectPtr->mProperty_mElseInstructionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfAST_2D_weak::setter_setMTemplateInstructionIfBranchList (const GALGAS_templateInstructionIfBranchListAST inValue,
                                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionIfAST * objectPtr = (cPtr_templateInstructionIfAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfAST) ;
      objectPtr->mProperty_mTemplateInstructionIfBranchList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfAST_2D_weak::setter_setMElseInstructionList (const GALGAS_templateInstructionListAST inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionIfAST * objectPtr = (cPtr_templateInstructionIfAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfAST) ;
      objectPtr->mProperty_mElseInstructionList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfAST_2D_weak ("templateInstructionIfAST-weak",
                                                         & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak GALGAS_templateInstructionIfAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST_2D_weak result ;
  const GALGAS_templateInstructionIfAST_2D_weak * p = (const GALGAS_templateInstructionIfAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_expression_i0_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                 C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1819 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 32)) ;
      GALGAS_templateExpressionAST var_leftOperand_1883 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_1939 ;
      nt_relation_5F_term_ (var_rightOperand_1939, inCompiler) ;
      outArgument_outExpression = GALGAS_templateOrOperationAST::constructor_new (var_operatorLocation_1819, var_leftOperand_1883, var_rightOperand_1939  COMMA_SOURCE_FILE ("templateSyntax.galgas", 36)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2107 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      GALGAS_templateExpressionAST var_leftOperand_2171 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_2227 ;
      nt_relation_5F_term_ (var_rightOperand_2227, inCompiler) ;
      outArgument_outExpression = GALGAS_templateXorOperationAST::constructor_new (var_operatorLocation_2107, var_leftOperand_2171, var_rightOperand_2227  COMMA_SOURCE_FILE ("templateSyntax.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_expression_i0_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 32)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_i1_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                       C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2890 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 58)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 59)) ;
      GALGAS_templateExpressionAST var_leftOperand_2954 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_3010 ;
      nt_relation_5F_factor_ (var_rightOperand_3010, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAndOperationAST::constructor_new (var_operatorLocation_2890, var_leftOperand_2954, var_rightOperand_3010  COMMA_SOURCE_FILE ("templateSyntax.galgas", 63)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_i1_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 59)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_i2_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                         C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_operatorLocation_3676 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 79)) ;
    GALGAS_templateExpressionAST var_leftExpression_3744 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_3803 ;
    nt_simple_5F_expression_ (var_rightExpression_3803, inCompiler) ;
    outArgument_outExpression = GALGAS_templateEqualTestAST::constructor_new (var_operatorLocation_3676, var_leftExpression_3744, var_rightExpression_3803  COMMA_SOURCE_FILE ("templateSyntax.galgas", 83)) ;
  } break ;
  case 3: {
    GALGAS_location var_operatorLocation_3979 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 85)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    GALGAS_templateExpressionAST var_leftExpression_4047 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_4106 ;
    nt_simple_5F_expression_ (var_rightExpression_4106, inCompiler) ;
    outArgument_outExpression = GALGAS_templateNonEqualTestAST::constructor_new (var_operatorLocation_3979, var_leftExpression_4047, var_rightExpression_4106  COMMA_SOURCE_FILE ("templateSyntax.galgas", 90)) ;
  } break ;
  case 4: {
    GALGAS_location var_operatorLocation_4285 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 92)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    GALGAS_templateExpressionAST var_leftExpression_4353 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_4412 ;
    nt_simple_5F_expression_ (var_rightExpression_4412, inCompiler) ;
    outArgument_outExpression = GALGAS_templateInfOrEqualTestAST::constructor_new (var_operatorLocation_4285, var_leftExpression_4353, var_rightExpression_4412  COMMA_SOURCE_FILE ("templateSyntax.galgas", 97)) ;
  } break ;
  case 5: {
    GALGAS_location var_operatorLocation_4593 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 99)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    GALGAS_templateExpressionAST var_leftExpression_4661 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_4720 ;
    nt_simple_5F_expression_ (var_rightExpression_4720, inCompiler) ;
    outArgument_outExpression = GALGAS_templateSupOrEqualTestAST::constructor_new (var_operatorLocation_4593, var_leftExpression_4661, var_rightExpression_4720  COMMA_SOURCE_FILE ("templateSyntax.galgas", 104)) ;
  } break ;
  case 6: {
    GALGAS_location var_operatorLocation_4901 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 106)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    GALGAS_templateExpressionAST var_leftExpression_4968 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_5027 ;
    nt_simple_5F_expression_ (var_rightExpression_5027, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictSupTestAST::constructor_new (var_operatorLocation_4901, var_leftExpression_4968, var_rightExpression_5027  COMMA_SOURCE_FILE ("templateSyntax.galgas", 111)) ;
  } break ;
  case 7: {
    GALGAS_location var_operatorLocation_5207 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 113)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    GALGAS_templateExpressionAST var_leftExpression_5274 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_5333 ;
    nt_simple_5F_expression_ (var_rightExpression_5333, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictInfTestAST::constructor_new (var_operatorLocation_5207, var_leftExpression_5274, var_rightExpression_5333  COMMA_SOURCE_FILE ("templateSyntax.galgas", 118)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_i2_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 79)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_i3_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                           C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_6004 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 133)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 134)) ;
      GALGAS_templateExpressionAST var_leftExpression_6072 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_6131 ;
      nt_term_ (var_rightExpression_6131, inCompiler) ;
      outArgument_outExpression = GALGAS_templateLeftShiftOperationAST::constructor_new (var_operatorLocation_6004, var_leftExpression_6072, var_rightExpression_6131  COMMA_SOURCE_FILE ("templateSyntax.galgas", 138)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_6307 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      GALGAS_templateExpressionAST var_leftExpression_6375 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_6434 ;
      nt_term_ (var_rightExpression_6434, inCompiler) ;
      outArgument_outExpression = GALGAS_templateRightShiftOperationAST::constructor_new (var_operatorLocation_6307, var_leftExpression_6375, var_rightExpression_6434  COMMA_SOURCE_FILE ("templateSyntax.galgas", 145)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_6611 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      GALGAS_templateExpressionAST var_leftExpression_6678 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_6737 ;
      nt_term_ (var_rightExpression_6737, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAddOperationAST::constructor_new (var_operatorLocation_6611, var_leftExpression_6678, var_rightExpression_6737  COMMA_SOURCE_FILE ("templateSyntax.galgas", 152)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_6907 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      GALGAS_templateExpressionAST var_leftExpression_6974 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_7033 ;
      nt_term_ (var_rightExpression_7033, inCompiler) ;
      outArgument_outExpression = GALGAS_templateSubOperationAST::constructor_new (var_operatorLocation_6907, var_leftExpression_6974, var_rightExpression_7033  COMMA_SOURCE_FILE ("templateSyntax.galgas", 159)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_i3_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 134)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_term_i4_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                           C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_7679 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 174)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 175)) ;
      GALGAS_templateExpressionAST var_leftExpression_7746 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_7805 ;
      nt_factor_ (var_rightExpression_7805, inCompiler) ;
      outArgument_outExpression = GALGAS_templateMultiplyOperationAST::constructor_new (var_operatorLocation_7679, var_leftExpression_7746, var_rightExpression_7805  COMMA_SOURCE_FILE ("templateSyntax.galgas", 179)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_7982 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      GALGAS_templateExpressionAST var_leftExpression_8049 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_8108 ;
      nt_factor_ (var_rightExpression_8108, inCompiler) ;
      outArgument_outExpression = GALGAS_templateDivideOperationAST::constructor_new (var_operatorLocation_7982, var_leftExpression_8049, var_rightExpression_8108  COMMA_SOURCE_FILE ("templateSyntax.galgas", 186)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_8283 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      GALGAS_templateExpressionAST var_leftExpression_8352 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_8411 ;
      nt_factor_ (var_rightExpression_8411, inCompiler) ;
      outArgument_outExpression = GALGAS_templateModuloOperationAST::constructor_new (var_operatorLocation_8283, var_leftExpression_8352, var_rightExpression_8411  COMMA_SOURCE_FILE ("templateSyntax.galgas", 193)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_term_i4_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 175)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i5_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 207)) ;
      GALGAS_lstring var_structFieldName_9086 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 208)) ;
      outArgument_outExpression = GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (var_structFieldName_9086.getter_location (HERE), outArgument_outExpression, var_structFieldName_9086  COMMA_SOURCE_FILE ("templateSyntax.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i5_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 208)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i6_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_9682 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 221)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 222)) ;
  GALGAS_templateExpressionAST var_expression_9741 ;
  nt_factor_ (var_expression_9741, inCompiler) ;
  outArgument_outExpression = GALGAS_templateUnaryMinusOperationAST::constructor_new (var_operatorLocation_9682, var_expression_9741  COMMA_SOURCE_FILE ("templateSyntax.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i6_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 222)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i7_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_10316 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 236)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 237)) ;
  GALGAS_templateExpressionAST var_ifCondition_10378 ;
  nt_factor_ (var_ifCondition_10378, inCompiler) ;
  outArgument_outExpression = GALGAS_templateNotOperatorAST::constructor_new (var_operatorLocation_10316, var_ifCondition_10378  COMMA_SOURCE_FILE ("templateSyntax.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i7_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 237)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i8_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_10947 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 251)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 252)) ;
  GALGAS_templateExpressionAST var_ifCondition_11007 ;
  nt_factor_ (var_ifCondition_11007, inCompiler) ;
  outArgument_outExpression = GALGAS_templateLogicalNegateAST::constructor_new (var_operatorLocation_10947, var_ifCondition_11007  COMMA_SOURCE_FILE ("templateSyntax.galgas", 255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i8_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 252)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i9_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                              C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_11589 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 265)) ;
  outArgument_outExpression = GALGAS_templateVarInExpressionAST::constructor_new (var_identifier_11589  COMMA_SOURCE_FILE ("templateSyntax.galgas", 266)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i9_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 265)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i10_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 276)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i10_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 276)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 278)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i11_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 288)) ;
  outArgument_outExpression = GALGAS_templateTrueBoolAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 289))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i11_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 288)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i12_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 299)) ;
  outArgument_outExpression = GALGAS_templateFalseBoolAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 300))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i12_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 299)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i13_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt_13677 ;
  var_literalInt_13677 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 311)) ;
  outArgument_outExpression = GALGAS_templateLiteralUIntExpressionAST::constructor_new (var_literalInt_13677  COMMA_SOURCE_FILE ("templateSyntax.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i13_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 311)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i14_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt_14302 ;
  var_literalInt_14302 = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("templateSyntax.galgas", 323)) ;
  outArgument_outExpression = GALGAS_templateLiteralSIntExpressionAST::constructor_new (var_literalInt_14302  COMMA_SOURCE_FILE ("templateSyntax.galgas", 324)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i14_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("templateSyntax.galgas", 323)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i15_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt_14931 ;
  var_literalInt_14931 = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("templateSyntax.galgas", 335)) ;
  outArgument_outExpression = GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (var_literalInt_14931  COMMA_SOURCE_FILE ("templateSyntax.galgas", 336)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i15_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("templateSyntax.galgas", 335)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i16_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt_15562 ;
  var_literalInt_15562 = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("templateSyntax.galgas", 347)) ;
  outArgument_outExpression = GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (var_literalInt_15562  COMMA_SOURCE_FILE ("templateSyntax.galgas", 348)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i16_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("templateSyntax.galgas", 347)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i17_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_16121 ;
  var_literalDouble_16121 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 359)) ;
  outArgument_outExpression = GALGAS_templateLiteralDoubleExpressionAST::constructor_new (var_literalDouble_16121  COMMA_SOURCE_FILE ("templateSyntax.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i17_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 359)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i18_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_16777 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 370)) ;
  outArgument_outExpression = GALGAS_templateLiteralCharExpressionAST::constructor_new (var_literalChar_16777  COMMA_SOURCE_FILE ("templateSyntax.galgas", 371)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i18_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 370)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i19_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_17392 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 381)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_17433 ;
    var_literalString_17433 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 384)) ;
    var_literalStringList_17392.addAssign_operation (var_literalString_17433.getter_string (SOURCE_FILE ("templateSyntax.galgas", 385))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 385)) ;
    switch (select_templateSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_templateLiteralStringExpressionAST::constructor_new (var_literalStringList_17392, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 388))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 388)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i19_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 384)) ;
    switch (select_templateSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i20_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
    GALGAS_templateExpressionAST var_receiverExpression_18905 ;
    nt_expression_ (var_receiverExpression_18905, inCompiler) ;
    GALGAS_lstring var_templateName_18987 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 410)) ;
    GALGAS_templateExpressionListAST var_expressionList_19033 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_19033, inCompiler) ;
    outArgument_outExpression = GALGAS_templateExtensionTemplateCallAST::constructor_new (var_receiverExpression_18905, var_templateName_18987, var_expressionList_19033  COMMA_SOURCE_FILE ("templateSyntax.galgas", 413)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_19278 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 418)) ;
    GALGAS_lstring var_constructorName_19326 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 419)) ;
    GALGAS_templateExpressionListAST var_expressionList_19402 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_19402, inCompiler) ;
    outArgument_outExpression = GALGAS_templateConstructorAST::constructor_new (var_typeName_19278, var_constructorName_19326, var_expressionList_19402  COMMA_SOURCE_FILE ("templateSyntax.galgas", 421)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
    GALGAS_lstring var_filewrapperName_19631 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
    GALGAS_lstring var_templateName_19683 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
    GALGAS_templateExpressionListAST var_expressionList_19729 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_19729, inCompiler) ;
    outArgument_outExpression = GALGAS_templateFileWrapperTemplateCallAST::constructor_new (var_filewrapperName_19631, var_templateName_19683, var_expressionList_19729  COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
  } break ;
  case 4: {
    GALGAS_templateExpressionAST var_receiverExpression_19981 ;
    nt_expression_ (var_receiverExpression_19981, inCompiler) ;
    GALGAS_lstring var_getterName_20061 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 436)) ;
    GALGAS_templateExpressionListAST var_expressionList_20107 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_20107, inCompiler) ;
    outArgument_outExpression = GALGAS_templateGetterCallInExpressionAST::constructor_new (var_receiverExpression_19981, var_getterName_20061, var_expressionList_20107  COMMA_SOURCE_FILE ("templateSyntax.galgas", 439)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 444)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 446)) ;
      GALGAS_lstring var_optionName_20363 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 447)) ;
      GALGAS_lstring var_getterName_20407 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 448)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 449))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)), var_optionName_20363, var_getterName_20407  COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_optionComponentName_20602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
      GALGAS_lstring var_optionName_20656 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
      GALGAS_lstring var_getterName_20700 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 454)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::constructor_new (var_optionComponentName_20602, var_optionName_20656, var_getterName_20700  COMMA_SOURCE_FILE ("templateSyntax.galgas", 455)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 458)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i20_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 410)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 418)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 419)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 436)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 444)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 446)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 447)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 448)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 454)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 458)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i21_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_21417 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
  GALGAS_templateExpressionListAST var_expressionList_21497 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_21497, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 472)) ;
  outArgument_outExpression = GALGAS_templateFunctionCallAST::constructor_new (var_functionName_21417, var_expressionList_21497  COMMA_SOURCE_FILE ("templateSyntax.galgas", 473)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i21_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 472)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i22_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_21829 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 480)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 481)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_21887 ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 484)) ;
    var_kind_21887 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("templateSyntax.galgas", 485)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 487)) ;
    var_kind_21887 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("templateSyntax.galgas", 488)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 490)) ;
    var_kind_21887 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("templateSyntax.galgas", 491)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_22041 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
  outArgument_outExpression = GALGAS_templateTestDynamicClassAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_21829, var_kind_21887, var_typeName_22041  COMMA_SOURCE_FILE ("templateSyntax.galgas", 494)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i22_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 481)) ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 484)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 487)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 490)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_i23_ (GALGAS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                    C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_templateExpressionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 509)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_22769 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 512)) ;
      GALGAS_templateExpressionAST var_expression_22807 ;
      nt_expression_ (var_expression_22807, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_22769, var_expression_22807, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 515))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 515)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_i23_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 512)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  GALGAS_lstring var_selector_23393 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_23393.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_23393.getter_location (SOURCE_FILE ("templateSyntax.galgas", 528)), GALGAS_string ("the selector should be '!'"), fixItArray1  COMMA_SOURCE_FILE ("templateSyntax.galgas", 528)) ;
    }
  }
  GALGAS_templateExpressionAST var_expression_23535 ;
  nt_expression_ (var_expression_23535, inCompiler) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionAST::constructor_new (var_expression_23535, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 531))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 531))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 531)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 537)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationAST::constructor_new (SOURCE_FILE ("templateSyntax.galgas", 538))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 538)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 537)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i26_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (SOURCE_FILE ("templateSyntax.galgas", 545))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 545)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i26_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i27_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 551)) ;
  GALGAS_templateExpressionAST var_expression_24489 ;
  nt_expression_ (var_expression_24489, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  GALGAS_templateInstructionListAST var_blockInstructionList_24571 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 556)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString (var_blockInstructionList_24571, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 558)) ;
    }
    switch (select_templateSyntax_11 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (var_blockInstructionList_24571, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 563)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateBlockInstructionAST::constructor_new (var_expression_24489, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 566)), var_blockInstructionList_24571  COMMA_SOURCE_FILE ("templateSyntax.galgas", 564))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 564)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i27_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 551)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_11 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 563)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i28_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
  GALGAS_bool var_ascending_25104 ;
  switch (select_templateSyntax_12 (inCompiler)) {
  case 1: {
    var_ascending_25104 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 578)) ;
    var_ascending_25104 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
    var_ascending_25104 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("templateSyntax.galgas", 586)) ;
  GALGAS_templateExpressionAST var_expression_25282 ;
  nt_expression_ (var_expression_25282, inCompiler) ;
  GALGAS_string var_foreachPrefix_25306 ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
    var_foreachPrefix_25306 = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
    GALGAS_lstring var_prefixString_25396 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 593)) ;
    var_foreachPrefix_25306 = var_prefixString_25396.getter_string (SOURCE_FILE ("templateSyntax.galgas", 594)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_beforeInstructionList_25514 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 597)) ;
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("templateSyntax.galgas", 600)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      {
      routine_enterTemplateString (var_beforeInstructionList_25514, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 602)) ;
      }
      switch (select_templateSyntax_15 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_beforeInstructionList_25514, inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("templateSyntax.galgas", 608)) ;
  GALGAS_lstring var_indexIdentifier_25734 ;
  switch (select_templateSyntax_16 (inCompiler)) {
  case 1: {
    var_indexIdentifier_25734 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 611))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 611)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_index COMMA_SOURCE_FILE ("templateSyntax.galgas", 613)) ;
    var_indexIdentifier_25734 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 614)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_doInstructionList_25906 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 616)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    {
    routine_enterTemplateString (var_doInstructionList_25906, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 618)) ;
    }
    switch (select_templateSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (var_doInstructionList_25906, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_templateInstructionListAST var_betweenInstructionList_26099 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 623)) ;
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("templateSyntax.galgas", 626)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString (var_betweenInstructionList_26099, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 628)) ;
      }
      switch (select_templateSyntax_19 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_betweenInstructionList_26099, inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_afterInstructionList_26342 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 634)) ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("templateSyntax.galgas", 637)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      {
      routine_enterTemplateString (var_afterInstructionList_26342, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 639)) ;
      }
      switch (select_templateSyntax_21 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_beforeInstructionList_25514, inCompiler) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 645)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionForeachAST::constructor_new (var_ascending_25104, var_expression_25282, var_foreachPrefix_25306, var_beforeInstructionList_25514, var_doInstructionList_25906, var_indexIdentifier_25734, var_betweenInstructionList_26099, var_afterInstructionList_26342  COMMA_SOURCE_FILE ("templateSyntax.galgas", 646))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 646)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i28_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
  switch (select_templateSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 578)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("templateSyntax.galgas", 586)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 593)) ;
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("templateSyntax.galgas", 600)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_templateSyntax_15 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("templateSyntax.galgas", 608)) ;
  switch (select_templateSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_index COMMA_SOURCE_FILE ("templateSyntax.galgas", 613)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 614)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_templateSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("templateSyntax.galgas", 626)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_19 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("templateSyntax.galgas", 637)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      switch (select_templateSyntax_21 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 645)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i29_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 660)) ;
  GALGAS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList_27020 = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 661)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_templateExpressionAST var_expression_27102 ;
    nt_expression_ (var_expression_27102, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 664)) ;
    GALGAS_templateInstructionListAST var_instructionList_27161 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 665)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      {
      routine_enterTemplateString (var_instructionList_27161, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 667)) ;
      }
      switch (select_templateSyntax_23 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_instructionList_27161, inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_templateInstructionIfBranchList_27020.addAssign_operation (var_expression_27102, var_instructionList_27161  COMMA_SOURCE_FILE ("templateSyntax.galgas", 671)) ;
    switch (select_templateSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_templateInstructionListAST var_elseInstructionList_27442 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 676)) ;
  switch (select_templateSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 679)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString (var_elseInstructionList_27442, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 681)) ;
      }
      switch (select_templateSyntax_25 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_elseInstructionList_27442, inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 687)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionIfAST::constructor_new (var_templateInstructionIfBranchList_27020, var_elseInstructionList_27442  COMMA_SOURCE_FILE ("templateSyntax.galgas", 688))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 688)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i29_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 660)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 664)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_23 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_templateSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 679)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_25 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 687)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_ (GALGAS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 696)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 698)) ;
    }
    switch (select_templateSyntax_26 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_26 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 29)) ;
  GALGAS_templateExpressionAST var_switchExpression_1390 ;
  nt_expression_ (var_switchExpression_1390, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1430 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 32)) ;
  GALGAS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList_1548 = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 37)) ;
      GALGAS_lstringlist var_constantNameList_1650 ;
      GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1720 ;
      nt_switch_5F_case_ (var_constantNameList_1650, var_associatedValuesExtraction_1720, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 41)) ;
      GALGAS_templateInstructionListAST var_instructionList_1780 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 42)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        {
        routine_enterTemplateString (var_instructionList_1780, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 44)) ;
        }
        switch (select_templateSyntax_28 (inCompiler)) {
        case 2: {
          nt_template_5F_instruction_ (var_instructionList_1780, inCompiler) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_templateInstructionSwitchBranchList_1548.addAssign_operation (var_constantNameList_1650, var_associatedValuesExtraction_1720, var_instructionList_1780, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 48))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 50)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchAST::constructor_new (var_switchExpression_1390, var_endOfSwitchExpression_1430, var_templateInstructionSwitchBranchList_1548  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 52))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 37)) ;
      nt_switch_5F_case_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 41)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_templateSyntax_28 (inCompiler)) {
        case 2: {
          nt_template_5F_instruction_parse (inCompiler) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i32_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                      GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                      C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2571 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2571  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 68)) ;
    switch (select_templateSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 72)) ;
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 75)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        GALGAS_luint var_n_2763 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 78)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 79)) ;
        cEnumerator_range enumerator_2809 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_n_2763.getter_uint (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 80))), kENUMERATION_UP) ;
        while (enumerator_2809.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 81)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 81)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 81)) ;
          enumerator_2809.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 84)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 85)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 85)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3050 ;
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          var_typeName_3050 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 89)) ;
        } break ;
        case 2: {
          var_typeName_3050 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 91)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3199 ;
        switch (select_templateSyntax_34 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3199 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 97)) ;
          var_constantMarkedAsUnused_3199 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3399 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3050, var_constantName_3399, var_constantMarkedAsUnused_3199  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 101)) ;
      } break ;
      default:
        break ;
      }
      switch (select_templateSyntax_31 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i32_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
    switch (select_templateSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 75)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 78)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 79)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 84)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 89)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_templateSyntax_34 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 97)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)) ;
      } break ;
      default:
        break ;
      }
      switch (select_templateSyntax_31 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateInstructionForGeneration::objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration result ;
  const GALGAS_templateInstructionForGeneration * p = (const GALGAS_templateInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak::GALGAS_templateInstructionForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak & GALGAS_templateInstructionForGeneration_2D_weak::operator = (const GALGAS_templateInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak::GALGAS_templateInstructionForGeneration_2D_weak (const GALGAS_templateInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak GALGAS_templateInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionForGeneration_2D_weak::bang_templateInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForGeneration) ;
      result = GALGAS_templateInstructionForGeneration ((cPtr_templateInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak ("templateInstructionForGeneration-weak",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak GALGAS_templateInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration_2D_weak result ;
  const GALGAS_templateInstructionForGeneration_2D_weak * p = (const GALGAS_templateInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionListForGeneration : public cCollectionElement {
  public: GALGAS_templateInstructionListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionListForGeneration * operand = (cCollectionElement_templateInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration::GALGAS_templateInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration::GALGAS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::constructor_listWithValue (const GALGAS_templateInstructionForGeneration & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::addAssign_operation (const GALGAS_templateInstructionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_append (GALGAS_templateInstructionListForGeneration_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_insertAtIndex (const GALGAS_templateInstructionForGeneration inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_removeAtIndex (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_popFirst (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_popLast (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::method_first (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::method_last (GALGAS_templateInstructionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::add_operation (const GALGAS_templateInstructionListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_setMInstructionAtIndex (GALGAS_templateInstructionForGeneration inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionListForGeneration::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionListForGeneration::cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element cEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration cEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListForGeneration ("templateInstructionListForGeneration",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration result ;
  const GALGAS_templateInstructionListForGeneration * p = (const GALGAS_templateInstructionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGetColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGetColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration::GALGAS_templateInstructionGetColumnLocationForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration::GALGAS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGetColumnLocationForGeneration (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGetColumnLocationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionGetColumnLocationForGeneration::cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGetColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

void cPtr_templateInstructionGetColumnLocationForGeneration::description (C_String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGetColumnLocationForGeneration]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGetColumnLocationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationForGeneration (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGetColumnLocationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ("templateInstructionGetColumnLocationForGeneration",
                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  const GALGAS_templateInstructionGetColumnLocationForGeneration * p = (const GALGAS_templateInstructionGetColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::operator = (const GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (const GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::bang_templateInstructionGetColumnLocationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
      result = GALGAS_templateInstructionGetColumnLocationForGeneration ((cPtr_templateInstructionGetColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGetColumnLocationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak ("templateInstructionGetColumnLocationForGeneration-weak",
                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak result ;
  const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak * p = (const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGotoColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration::GALGAS_templateInstructionGotoColumnLocationForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration::GALGAS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGotoColumnLocationForGeneration (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGotoColumnLocationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionGotoColumnLocationForGeneration::cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGotoColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

void cPtr_templateInstructionGotoColumnLocationForGeneration::description (C_String & ioString,
                                                                           const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGotoColumnLocationForGeneration]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGotoColumnLocationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationForGeneration (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGotoColumnLocationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ("templateInstructionGotoColumnLocationForGeneration",
                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  const GALGAS_templateInstructionGotoColumnLocationForGeneration * p = (const GALGAS_templateInstructionGotoColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak & GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::operator = (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::bang_templateInstructionGotoColumnLocationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
      result = GALGAS_templateInstructionGotoColumnLocationForGeneration ((cPtr_templateInstructionGotoColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGotoColumnLocationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak ("templateInstructionGotoColumnLocationForGeneration-weak",
                                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak result ;
  const GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak * p = (const GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionIfBranchListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionIfBranchListForGeneration : public cCollectionElement {
  public: GALGAS_templateInstructionIfBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                           const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                                  const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionIfBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionIfBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionIfBranchListForGeneration (mObject.mProperty_mExpression, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionIfBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionIfBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionIfBranchListForGeneration * operand = (cCollectionElement_templateInstructionIfBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration::GALGAS_templateInstructionIfBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration::GALGAS_templateInstructionIfBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionIfBranchListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::constructor_listWithValue (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                    const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                     const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (in_mExpression,
                                                                                  in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::addAssign_operation (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                               const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_append (GALGAS_templateInstructionIfBranchListForGeneration_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_insertAtIndex (const GALGAS_semanticExpressionForGeneration inOperand0,
                                                                                const GALGAS_templateInstructionListForGeneration inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_removeAtIndex (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                                GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
        outOperand1 = p->mObject.mProperty_mInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_popFirst (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                           GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_popLast (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                          GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::method_first (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                        GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::method_last (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                       GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::add_operation (const GALGAS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::plusAssign_operation (const GALGAS_templateInstructionIfBranchListForGeneration inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_setMExpressionAtIndex (GALGAS_semanticExpressionForGeneration inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListForGeneration inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionIfBranchListForGeneration::cEnumerator_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element cEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfBranchListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ("templateInstructionIfBranchListForGeneration",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  const GALGAS_templateInstructionIfBranchListForGeneration * p = (const GALGAS_templateInstructionIfBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionIfForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionIfBranchList.objectCompare (p->mProperty_mTemplateInstructionIfBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionIfForGeneration::objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration::GALGAS_templateInstructionIfForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionIfForGeneration::constructor_new (GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration::GALGAS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::constructor_new (const GALGAS_templateInstructionIfBranchListForGeneration & inAttribute_mTemplateInstructionIfBranchList,
                                                                                                      const GALGAS_templateInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration result ;
  if (inAttribute_mTemplateInstructionIfBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfForGeneration (inAttribute_mTemplateInstructionIfBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfForGeneration::getter_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    result = p->mProperty_mTemplateInstructionIfBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfForGeneration::setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListForGeneration inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    p->mProperty_mTemplateInstructionIfBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfForGeneration::setter_setMElseInstructionList (GALGAS_templateInstructionListForGeneration inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                                                  const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mTemplateInstructionIfBranchList (in_mTemplateInstructionIfBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionIfForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

void cPtr_templateInstructionIfForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateInstructionIfForGeneration:" ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionIfForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionIfForGeneration (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ("templateInstructionIfForGeneration",
                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration result ;
  const GALGAS_templateInstructionIfForGeneration * p = (const GALGAS_templateInstructionIfForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionIfForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionIfForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration_2D_weak::GALGAS_templateInstructionIfForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration_2D_weak & GALGAS_templateInstructionIfForGeneration_2D_weak::operator = (const GALGAS_templateInstructionIfForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration_2D_weak::GALGAS_templateInstructionIfForGeneration_2D_weak (const GALGAS_templateInstructionIfForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration_2D_weak GALGAS_templateInstructionIfForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration_2D_weak::bang_templateInstructionIfForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfForGeneration) ;
      result = GALGAS_templateInstructionIfForGeneration ((cPtr_templateInstructionIfForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfForGeneration_2D_weak::getter_mTemplateInstructionIfBranchList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionIfForGeneration * objectPtr = (cPtr_templateInstructionIfForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfForGeneration) ;
      result = objectPtr->mProperty_mTemplateInstructionIfBranchList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfForGeneration_2D_weak::getter_mElseInstructionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionIfForGeneration * objectPtr = (cPtr_templateInstructionIfForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfForGeneration) ;
      result = objectPtr->mProperty_mElseInstructionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfForGeneration_2D_weak::setter_setMTemplateInstructionIfBranchList (const GALGAS_templateInstructionIfBranchListForGeneration inValue,
                                                                                                    C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionIfForGeneration * objectPtr = (cPtr_templateInstructionIfForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfForGeneration) ;
      objectPtr->mProperty_mTemplateInstructionIfBranchList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfForGeneration_2D_weak::setter_setMElseInstructionList (const GALGAS_templateInstructionListForGeneration inValue,
                                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionIfForGeneration * objectPtr = (cPtr_templateInstructionIfForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionIfForGeneration) ;
      objectPtr->mProperty_mElseInstructionList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2D_weak ("templateInstructionIfForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration_2D_weak GALGAS_templateInstructionIfForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration_2D_weak result ;
  const GALGAS_templateInstructionIfForGeneration_2D_weak * p = (const GALGAS_templateInstructionIfForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap::cMapElement_templateVariableMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                  const GALGAS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mCppName (in_mCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_templateVariableMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_templateVariableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_templateVariableMap (mProperty_lkey, mProperty_mType, mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_templateVariableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mProperty_mCppName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_templateVariableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_templateVariableMap * operand = (cMapElement_templateVariableMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppName.objectCompare (operand->mProperty_mCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap::GALGAS_templateVariableMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap::GALGAS_templateVariableMap (const GALGAS_templateVariableMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap & GALGAS_templateVariableMap::operator = (const GALGAS_templateVariableMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_mapWithMapToOverride (const GALGAS_templateVariableMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_templateVariableMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_unifiedTypeMap_2D_entry & inArgument0,
                                                      const GALGAS_string & inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@templateVariableMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                   GALGAS_string inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_templateVariableMap_searchKey = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                   GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_templateVariableMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_templateVariableMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateVariableMap::getter_mCppNameForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::setter_setMTypeForKey (GALGAS_unifiedTypeMap_2D_entry inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::setter_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap * GALGAS_templateVariableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * result = (cMapElement_templateVariableMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_templateVariableMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateVariableMap::cEnumerator_templateVariableMap (const GALGAS_templateVariableMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element cEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return GALGAS_templateVariableMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mCppName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_templateVariableMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateVariableMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                     GALGAS_string & outArgument1) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateVariableMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVariableMap ("templateVariableMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVariableMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  const GALGAS_templateVariableMap * p = (const GALGAS_templateVariableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVariableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis> gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                      extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) {
  gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_templateExpressionAST_templateExpressionAnalysis (void) {
  gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateExpressionAST_templateExpressionAnalysis (NULL,
                                                                             freeExtensionMethod_templateExpressionAST_templateExpressionAnalysis) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                     const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.count ()) {
      f = gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.count ()) {
          f = gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis> gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) {
  gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_templateInstructionAST_templateInstructionAnalysis (void) {
  gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionAST_templateInstructionAnalysis (NULL,
                                                                               freeExtensionMethod_templateInstructionAST_templateInstructionAnalysis) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                      const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                      GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                      GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.count ()) {
      f = gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.count ()) {
          f = gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration> gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                  extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) {
  gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_templateInstructionForGeneration_templateCodeGeneration (void) {
  gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForGeneration_templateCodeGeneration (NULL,
                                                                                    freeExtensionMethod_templateInstructionForGeneration_templateCodeGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                 GALGAS_string & io_ioGeneratedCode,
                                                 GALGAS_stringset & io_ioInclusionSet,
                                                 GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GALGAS_bool & io_ioUseColumnMarker,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration f = NULL ;
    if (classIndex < gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.count ()) {
      f = gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.count ()) {
          f = gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, io_ioUseColumnMarker, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionSwitchBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionSwitchBranchListAST : public cCollectionElement {
  public: GALGAS_templateInstructionSwitchBranchListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_lstringlist & in_mConstantList,
                                                                     const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                     const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                     const GALGAS_location & in_mEndOfBranch
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                      const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                                                      const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                      const GALGAS_location & in_mEndOfBranch
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mAssociatedValuesExtraction, in_mInstructionList, in_mEndOfBranch) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantList, inElement.mProperty_mAssociatedValuesExtraction, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionSwitchBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListAST (mObject.mProperty_mConstantList, mObject.mProperty_mAssociatedValuesExtraction, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionSwitchBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mProperty_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedValuesExtraction" ":" ;
  mObject.mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranch" ":" ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListAST * operand = (cCollectionElement_templateInstructionSwitchBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST::GALGAS_templateInstructionSwitchBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST::GALGAS_templateInstructionSwitchBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                        const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                                        const GALGAS_templateInstructionListAST & inOperand2,
                                                                                                                        const GALGAS_location & inOperand3
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_lstringlist & in_mConstantList,
                                                                               const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                               const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                               const GALGAS_location & in_mEndOfBranch
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (in_mConstantList,
                                                                            in_mAssociatedValuesExtraction,
                                                                            in_mInstructionList,
                                                                            in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                         const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                         const GALGAS_templateInstructionListAST & inOperand2,
                                                                         const GALGAS_location & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_append (GALGAS_templateInstructionSwitchBranchListAST_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                          const GALGAS_switchExtractedValuesListAST inOperand1,
                                                                          const GALGAS_templateInstructionListAST inOperand2,
                                                                          const GALGAS_location inOperand3,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                          GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                          GALGAS_templateInstructionListAST & outOperand2,
                                                                          GALGAS_location & outOperand3,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mConstantList ;
        outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mEndOfBranch ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                                     GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                     GALGAS_templateInstructionListAST & outOperand2,
                                                                     GALGAS_location & outOperand3,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_popLast (GALGAS_lstringlist & outOperand0,
                                                                    GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                    GALGAS_templateInstructionListAST & outOperand2,
                                                                    GALGAS_location & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::method_first (GALGAS_lstringlist & outOperand0,
                                                                  GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                  GALGAS_templateInstructionListAST & outOperand2,
                                                                  GALGAS_location & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::method_last (GALGAS_lstringlist & outOperand0,
                                                                 GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                 GALGAS_templateInstructionListAST & outOperand2,
                                                                 GALGAS_location & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::add_operation (const GALGAS_templateInstructionSwitchBranchListAST & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListAST inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMConstantListAtIndex (GALGAS_lstringlist inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListAST::getter_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMAssociatedValuesExtractionAtIndex (GALGAS_switchExtractedValuesListAST inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociatedValuesExtraction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_templateInstructionSwitchBranchListAST::getter_mAssociatedValuesExtractionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_switchExtractedValuesListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mAssociatedValuesExtraction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListAST inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionSwitchBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_templateInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMEndOfBranchAtIndex (GALGAS_location inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranch = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionSwitchBranchListAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionSwitchBranchListAST::cEnumerator_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element cEnumerator_templateInstructionSwitchBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListAST::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST cEnumerator_templateInstructionSwitchBranchListAST::current_mAssociatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mAssociatedValuesExtraction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST cEnumerator_templateInstructionSwitchBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_templateInstructionSwitchBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ("templateInstructionSwitchBranchListAST",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  const GALGAS_templateInstructionSwitchBranchListAST * p = (const GALGAS_templateInstructionSwitchBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@switchExtractedValuesListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_switchExtractedValuesListAST : public cCollectionElement {
  public: GALGAS_switchExtractedValuesListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_switchExtractedValuesListAST (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                           const GALGAS_lstring & in_mExtractedValueName,
                                                           const GALGAS_bool & in_mMarkedAsUnused
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                                                  const GALGAS_lstring & in_mExtractedValueName,
                                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExtractedValueTypeName, in_mExtractedValueName, in_mMarkedAsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExtractedValueTypeName, inElement.mProperty_mExtractedValueName, inElement.mProperty_mMarkedAsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_switchExtractedValuesListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchExtractedValuesListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchExtractedValuesListAST (mObject.mProperty_mExtractedValueTypeName, mObject.mProperty_mExtractedValueName, mObject.mProperty_mMarkedAsUnused COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_switchExtractedValuesListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedValueTypeName" ":" ;
  mObject.mProperty_mExtractedValueTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedValueName" ":" ;
  mObject.mProperty_mExtractedValueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMarkedAsUnused" ":" ;
  mObject.mProperty_mMarkedAsUnused.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_switchExtractedValuesListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchExtractedValuesListAST * operand = (cCollectionElement_switchExtractedValuesListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchExtractedValuesListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST::GALGAS_switchExtractedValuesListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST::GALGAS_switchExtractedValuesListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchExtractedValuesListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_bool & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_switchExtractedValuesListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchExtractedValuesListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                     const GALGAS_lstring & in_mExtractedValueName,
                                                                     const GALGAS_bool & in_mMarkedAsUnused
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (in_mExtractedValueTypeName,
                                                                  in_mExtractedValueName,
                                                                  in_mMarkedAsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_bool & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_append (GALGAS_switchExtractedValuesListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_bool inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
        outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
        outOperand1 = p->mObject.mProperty_mExtractedValueName ;
        outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_bool & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::add_operation (const GALGAS_switchExtractedValuesListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::plusAssign_operation (const GALGAS_switchExtractedValuesListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_setMExtractedValueTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedValueTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_switchExtractedValuesListAST::getter_mExtractedValueTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mExtractedValueTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_setMExtractedValueNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedValueName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_switchExtractedValuesListAST::getter_mExtractedValueNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mExtractedValueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_setMMarkedAsUnusedAtIndex (GALGAS_bool inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMarkedAsUnused = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_switchExtractedValuesListAST::getter_mMarkedAsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mMarkedAsUnused ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_switchExtractedValuesListAST::cEnumerator_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element cEnumerator_switchExtractedValuesListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_switchExtractedValuesListAST::current_mExtractedValueTypeName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_switchExtractedValuesListAST::current_mExtractedValueName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_switchExtractedValuesListAST::current_mMarkedAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mMarkedAsUnused ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@switchExtractedValuesListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchExtractedValuesListAST ("switchExtractedValuesListAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchExtractedValuesListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchExtractedValuesListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchExtractedValuesListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST result ;
  const GALGAS_switchExtractedValuesListAST * p = (const GALGAS_switchExtractedValuesListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchExtractedValuesListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionSwitchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpressionEndLocation.objectCompare (p->mProperty_mSwitchExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionSwitchBranchList.objectCompare (p->mProperty_mTemplateInstructionSwitchBranchList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionSwitchAST::objectCompare (const GALGAS_templateInstructionSwitchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST::GALGAS_templateInstructionSwitchAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST::GALGAS_templateInstructionSwitchAST (const cPtr_templateInstructionSwitchAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mSwitchExpression,
                                                                                          const GALGAS_location & inAttribute_mSwitchExpressionEndLocation,
                                                                                          const GALGAS_templateInstructionSwitchBranchListAST & inAttribute_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST result ;
  if (inAttribute_mSwitchExpression.isValid () && inAttribute_mSwitchExpressionEndLocation.isValid () && inAttribute_mTemplateInstructionSwitchBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchAST (inAttribute_mSwitchExpression, inAttribute_mSwitchExpressionEndLocation, inAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionSwitchAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionSwitchAST::getter_mSwitchExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mProperty_mSwitchExpressionEndLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchAST::getter_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mProperty_mTemplateInstructionSwitchBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST::setter_setMSwitchExpression (GALGAS_templateExpressionAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST::setter_setMSwitchExpressionEndLocation (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    p->mProperty_mSwitchExpressionEndLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST::setter_setMTemplateInstructionSwitchBranchList (GALGAS_templateInstructionSwitchBranchListAST inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    p->mProperty_mTemplateInstructionSwitchBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchAST::cPtr_templateInstructionSwitchAST (const GALGAS_templateExpressionAST & in_mSwitchExpression,
                                                                      const GALGAS_location & in_mSwitchExpressionEndLocation,
                                                                      const GALGAS_templateInstructionSwitchBranchListAST & in_mTemplateInstructionSwitchBranchList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mSwitchExpressionEndLocation (in_mSwitchExpressionEndLocation),
mProperty_mTemplateInstructionSwitchBranchList (in_mTemplateInstructionSwitchBranchList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

void cPtr_templateInstructionSwitchAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateInstructionSwitchAST:" ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchAST (mProperty_mSwitchExpression, mProperty_mSwitchExpressionEndLocation, mProperty_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchAST ("templateInstructionSwitchAST",
                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST result ;
  const GALGAS_templateInstructionSwitchAST * p = (const GALGAS_templateInstructionSwitchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionSwitchAST_2D_weak::objectCompare (const GALGAS_templateInstructionSwitchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST_2D_weak::GALGAS_templateInstructionSwitchAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST_2D_weak & GALGAS_templateInstructionSwitchAST_2D_weak::operator = (const GALGAS_templateInstructionSwitchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST_2D_weak::GALGAS_templateInstructionSwitchAST_2D_weak (const GALGAS_templateInstructionSwitchAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST_2D_weak GALGAS_templateInstructionSwitchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST_2D_weak::bang_templateInstructionSwitchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionSwitchAST) ;
      result = GALGAS_templateInstructionSwitchAST ((cPtr_templateInstructionSwitchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionSwitchAST_2D_weak::getter_mSwitchExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionSwitchAST * objectPtr = (cPtr_templateInstructionSwitchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionSwitchAST) ;
      result = objectPtr->mProperty_mSwitchExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionSwitchAST_2D_weak::getter_mSwitchExpressionEndLocation (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionSwitchAST * objectPtr = (cPtr_templateInstructionSwitchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionSwitchAST) ;
      result = objectPtr->mProperty_mSwitchExpressionEndLocation ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchAST_2D_weak::getter_mTemplateInstructionSwitchBranchList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionSwitchAST * objectPtr = (cPtr_templateInstructionSwitchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionSwitchAST) ;
      result = objectPtr->mProperty_mTemplateInstructionSwitchBranchList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST_2D_weak::setter_setMSwitchExpression (const GALGAS_templateExpressionAST inValue,
                                                                               C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionSwitchAST * objectPtr = (cPtr_templateInstructionSwitchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionSwitchAST) ;
      objectPtr->mProperty_mSwitchExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST_2D_weak::setter_setMSwitchExpressionEndLocation (const GALGAS_location inValue,
                                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionSwitchAST * objectPtr = (cPtr_templateInstructionSwitchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionSwitchAST) ;
      objectPtr->mProperty_mSwitchExpressionEndLocation = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST_2D_weak::setter_setMTemplateInstructionSwitchBranchList (const GALGAS_templateInstructionSwitchBranchListAST inValue,
                                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionSwitchAST * objectPtr = (cPtr_templateInstructionSwitchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionSwitchAST) ;
      objectPtr->mProperty_mTemplateInstructionSwitchBranchList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2D_weak ("templateInstructionSwitchAST-weak",
                                                             & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST_2D_weak GALGAS_templateInstructionSwitchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST_2D_weak result ;
  const GALGAS_templateInstructionSwitchAST_2D_weak * p = (const GALGAS_templateInstructionSwitchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionSwitchBranchListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionSwitchBranchListForGeneration : public cCollectionElement {
  public: GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                               const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                               const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                               const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                          const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                          const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                          const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionSwitchBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListForGeneration (mObject.mProperty_mConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionSwitchBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mProperty_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedAssociatedValuesForGeneration" ":" ;
  mObject.mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranchLocationIndex" ":" ;
  mObject.mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * operand = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                                            const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                            const GALGAS_uint & inOperand2,
                                                                                                                                            const GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                         const GALGAS_lstringlist & in_mConstantList,
                                                                                         const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                         const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                         const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (in_mConstantList,
                                                                                      in_mExtractedAssociatedValuesForGeneration,
                                                                                      in_mEndOfBranchLocationIndex,
                                                                                      in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                                   const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                   const GALGAS_uint & inOperand2,
                                                                                   const GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_append (GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element inElement,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                                    const GALGAS_extractedAssociatedValuesForGeneration inOperand1,
                                                                                    const GALGAS_uint inOperand2,
                                                                                    const GALGAS_templateInstructionListForGeneration inOperand3,
                                                                                    const GALGAS_uint inInsertionIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                                    GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                                    GALGAS_uint & outOperand2,
                                                                                    GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                                    const GALGAS_uint inRemoveIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mConstantList ;
        outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
        outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
        outOperand3 = p->mObject.mProperty_mInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                                               GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                               GALGAS_uint & outOperand2,
                                                                               GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_popLast (GALGAS_lstringlist & outOperand0,
                                                                              GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                              GALGAS_uint & outOperand2,
                                                                              GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_first (GALGAS_lstringlist & outOperand0,
                                                                            GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                            GALGAS_uint & outOperand2,
                                                                            GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_last (GALGAS_lstringlist & outOperand0,
                                                                           GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                           GALGAS_uint & outOperand2,
                                                                           GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::add_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMConstantListAtIndex (GALGAS_lstringlist inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                                        GALGAS_uint inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GALGAS_uint inOperand,
                                                                                                          GALGAS_uint inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranchLocationIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mEndOfBranchLocationIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListForGeneration inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionSwitchBranchListForGeneration::cEnumerator_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element cEnumerator_templateInstructionSwitchBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchBranchListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ("templateInstructionSwitchBranchListForGeneration",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@extractedAssociatedValuesForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_extractedAssociatedValuesForGeneration : public cCollectionElement {
  public: GALGAS_extractedAssociatedValuesForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                     const GALGAS_string & in_mCppName,
                                                                     const GALGAS_uint & in_mIndex
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                                                                      const GALGAS_string & in_mCppName,
                                                                                                                      const GALGAS_uint & in_mIndex
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mCppName, in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mCppName, inElement.mProperty_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_extractedAssociatedValuesForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_extractedAssociatedValuesForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extractedAssociatedValuesForGeneration (mObject.mProperty_mType, mObject.mProperty_mCppName, mObject.mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_extractedAssociatedValuesForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_extractedAssociatedValuesForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extractedAssociatedValuesForGeneration * operand = (cCollectionElement_extractedAssociatedValuesForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration::GALGAS_extractedAssociatedValuesForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration::GALGAS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extractedAssociatedValuesForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_uint & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extractedAssociatedValuesForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                               const GALGAS_string & in_mCppName,
                                                                               const GALGAS_uint & in_mIndex
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (in_mType,
                                                                            in_mCppName,
                                                                            in_mIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::addAssign_operation (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_uint & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_append (GALGAS_extractedAssociatedValuesForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_entry inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_uint inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_uint & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
        outOperand0 = p->mObject.mProperty_mType ;
        outOperand1 = p->mObject.mProperty_mCppName ;
        outOperand2 = p->mObject.mProperty_mIndex ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_popFirst (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_uint & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_popLast (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_uint & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::method_first (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_uint & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::method_last (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_uint & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::add_operation (const GALGAS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::plusAssign_operation (const GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_setMTypeAtIndex (GALGAS_unifiedTypeMap_2D_entry inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_extractedAssociatedValuesForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_setMCppNameAtIndex (GALGAS_string inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extractedAssociatedValuesForGeneration::getter_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_setMIndexAtIndex (GALGAS_uint inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_extractedAssociatedValuesForGeneration::getter_mIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mIndex ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extractedAssociatedValuesForGeneration::cEnumerator_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element cEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_extractedAssociatedValuesForGeneration::current_mIndex (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@extractedAssociatedValuesForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ("extractedAssociatedValuesForGeneration",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  const GALGAS_extractedAssociatedValuesForGeneration * p = (const GALGAS_extractedAssociatedValuesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extractedAssociatedValuesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticDeclarationAST::objectCompare (const GALGAS_semanticDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST::GALGAS_semanticDeclarationAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST::GALGAS_semanticDeclarationAST (const cPtr_semanticDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationAST::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationAST * p = (const cPtr_semanticDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationAST) ;
    result = p->mProperty_mIsPredefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationAST::setter_setMIsPredefined (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationAST * p = (cPtr_semanticDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationAST) ;
    p->mProperty_mIsPredefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationAST::cPtr_semanticDeclarationAST (const GALGAS_bool & in_mIsPredefined
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mIsPredefined (in_mIsPredefined) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationAST ("semanticDeclarationAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationAST result ;
  const GALGAS_semanticDeclarationAST * p = (const GALGAS_semanticDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationAST_2D_weak::objectCompare (const GALGAS_semanticDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak::GALGAS_semanticDeclarationAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak & GALGAS_semanticDeclarationAST_2D_weak::operator = (const GALGAS_semanticDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak::GALGAS_semanticDeclarationAST_2D_weak (const GALGAS_semanticDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak GALGAS_semanticDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationAST_2D_weak::bang_semanticDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationAST) ;
      result = GALGAS_semanticDeclarationAST ((cPtr_semanticDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationAST_2D_weak::getter_mIsPredefined (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_semanticDeclarationAST * objectPtr = (cPtr_semanticDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticDeclarationAST) ;
      result = objectPtr->mProperty_mIsPredefined ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationAST_2D_weak::setter_setMIsPredefined (const GALGAS_bool inValue,
                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_semanticDeclarationAST * objectPtr = (cPtr_semanticDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticDeclarationAST) ;
      objectPtr->mProperty_mIsPredefined = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ("semanticDeclarationAST-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak GALGAS_semanticDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationAST_2D_weak result ;
  const GALGAS_semanticDeclarationAST_2D_weak * p = (const GALGAS_semanticDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalExpressionAST::objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST result ;
  const GALGAS_lexicalExpressionAST * p = (const GALGAS_lexicalExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExpressionAST_2D_weak::objectCompare (const GALGAS_lexicalExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak::GALGAS_lexicalExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak & GALGAS_lexicalExpressionAST_2D_weak::operator = (const GALGAS_lexicalExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak::GALGAS_lexicalExpressionAST_2D_weak (const GALGAS_lexicalExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak GALGAS_lexicalExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExpressionAST_2D_weak::bang_lexicalExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExpressionAST) ;
      result = GALGAS_lexicalExpressionAST ((cPtr_lexicalExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ("lexicalExpressionAST-weak",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak GALGAS_lexicalExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST_2D_weak result ;
  const GALGAS_lexicalExpressionAST_2D_weak * p = (const GALGAS_lexicalExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalInstructionAST::objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalInstructionAST::cPtr_lexicalInstructionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST ("lexicalInstructionAST",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST result ;
  const GALGAS_lexicalInstructionAST * p = (const GALGAS_lexicalInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak::GALGAS_lexicalInstructionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak & GALGAS_lexicalInstructionAST_2D_weak::operator = (const GALGAS_lexicalInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak::GALGAS_lexicalInstructionAST_2D_weak (const GALGAS_lexicalInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak GALGAS_lexicalInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionAST_2D_weak::bang_lexicalInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalInstructionAST) ;
      result = GALGAS_lexicalInstructionAST ((cPtr_lexicalInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ("lexicalInstructionAST-weak",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak GALGAS_lexicalInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST_2D_weak result ;
  const GALGAS_lexicalInstructionAST_2D_weak * p = (const GALGAS_lexicalInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalInstructionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public: GALGAS_lexicalInstructionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalInstructionListAST * operand = (cCollectionElement_lexicalInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalInstructionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_listWithValue (const GALGAS_lexicalInstructionAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::addAssign_operation (const GALGAS_lexicalInstructionAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_append (GALGAS_lexicalInstructionListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_insertAtIndex (const GALGAS_lexicalInstructionAST inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_removeAtIndex (GALGAS_lexicalInstructionAST & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_popFirst (GALGAS_lexicalInstructionAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_popLast (GALGAS_lexicalInstructionAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::method_first (GALGAS_lexicalInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::method_last (GALGAS_lexicalInstructionAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_setMInstructionAtIndex (GALGAS_lexicalInstructionAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalInstructionListAST::cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element cEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST cEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalInstructionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  const GALGAS_lexicalInstructionListAST * p = (const GALGAS_lexicalInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@metamodelTemplateDelimitorListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_metamodelTemplateDelimitorListAST : public cCollectionElement {
  public: GALGAS_metamodelTemplateDelimitorListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                const GALGAS_lstringlist & in_mOptionList,
                                                                const GALGAS_lstring & in_mEndString
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                                                            const GALGAS_lstringlist & in_mOptionList,
                                                                                                            const GALGAS_lstring & in_mEndString
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mOptionList, in_mEndString) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_mOptionList, inElement.mProperty_mEndString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_metamodelTemplateDelimitorListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_metamodelTemplateDelimitorListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_metamodelTemplateDelimitorListAST (mObject.mProperty_mStartString, mObject.mProperty_mOptionList, mObject.mProperty_mEndString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_metamodelTemplateDelimitorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mProperty_mOptionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_metamodelTemplateDelimitorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_metamodelTemplateDelimitorListAST * operand = (cCollectionElement_metamodelTemplateDelimitorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_metamodelTemplateDelimitorListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_metamodelTemplateDelimitorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mStartString,
                                                                          const GALGAS_lstringlist & in_mOptionList,
                                                                          const GALGAS_lstring & in_mEndString
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (in_mStartString,
                                                                       in_mOptionList,
                                                                       in_mEndString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1,
                                                                    const GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_append (GALGAS_metamodelTemplateDelimitorListAST_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_lstringlist inOperand1,
                                                                     const GALGAS_lstring inOperand2,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstringlist & outOperand1,
                                                                     GALGAS_lstring & outOperand2,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
        outOperand0 = p->mObject.mProperty_mStartString ;
        outOperand1 = p->mObject.mProperty_mOptionList ;
        outOperand2 = p->mObject.mProperty_mEndString ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstringlist & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstringlist & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::add_operation (const GALGAS_metamodelTemplateDelimitorListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::plusAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_setMStartStringAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST::getter_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_setMOptionListAtIndex (GALGAS_lstringlist inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_metamodelTemplateDelimitorListAST::getter_mOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    result = p->mObject.mProperty_mOptionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_setMEndStringAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST::getter_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_metamodelTemplateDelimitorListAST::cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element cEnumerator_metamodelTemplateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mProperty_mStartString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_metamodelTemplateDelimitorListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mProperty_mOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mProperty_mEndString ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@metamodelTemplateDelimitorListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ("metamodelTemplateDelimitorListAST",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  const GALGAS_metamodelTemplateDelimitorListAST * p = (const GALGAS_metamodelTemplateDelimitorListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_metamodelTemplateDelimitorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("metamodelTemplateDelimitorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateReplacementListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public: GALGAS_templateReplacementListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                         const GALGAS_lstring & in_mReplacementString,
                                                         const GALGAS_lstring & in_mReplacementFunction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateReplacementListAST (const GALGAS_templateReplacementListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                                                              const GALGAS_lstring & in_mReplacementString,
                                                                                              const GALGAS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_templateReplacementListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMatchString, inElement.mProperty_mReplacementString, inElement.mProperty_mReplacementFunction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mProperty_mMatchString, mObject.mProperty_mReplacementString, mObject.mProperty_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateReplacementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchString" ":" ;
  mObject.mProperty_mMatchString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementString" ":" ;
  mObject.mProperty_mReplacementString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunction" ":" ;
  mObject.mProperty_mReplacementFunction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateReplacementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateReplacementListAST * operand = (cCollectionElement_templateReplacementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateReplacementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateReplacementListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateReplacementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateReplacementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mMatchString,
                                                                   const GALGAS_lstring & in_mReplacementString,
                                                                   const GALGAS_lstring & in_mReplacementFunction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (in_mMatchString,
                                                                in_mReplacementString,
                                                                in_mReplacementFunction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_lstring & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_append (GALGAS_templateReplacementListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateReplacementListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_lstring inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
        outOperand0 = p->mObject.mProperty_mMatchString ;
        outOperand1 = p->mObject.mProperty_mReplacementString ;
        outOperand2 = p->mObject.mProperty_mReplacementFunction ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::add_operation (const GALGAS_templateReplacementListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_setMMatchStringAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMatchString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateReplacementListAST::getter_mMatchStringAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mMatchString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_setMReplacementStringAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReplacementString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateReplacementListAST::getter_mReplacementStringAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mReplacementString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_setMReplacementFunctionAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReplacementFunction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateReplacementListAST::getter_mReplacementFunctionAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mReplacementFunction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateReplacementListAST::cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element cEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mMatchString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementFunction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateReplacementListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  const GALGAS_templateReplacementListAST * p = (const GALGAS_templateReplacementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReplacementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractLexicalRuleAST::objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRuleAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRuleAST::cPtr_abstractLexicalRuleAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractLexicalRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST ("abstractLexicalRuleAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST GALGAS_abstractLexicalRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST result ;
  const GALGAS_abstractLexicalRuleAST * p = (const GALGAS_abstractLexicalRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLexicalRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractLexicalRuleAST_2D_weak::objectCompare (const GALGAS_abstractLexicalRuleAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak::GALGAS_abstractLexicalRuleAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak & GALGAS_abstractLexicalRuleAST_2D_weak::operator = (const GALGAS_abstractLexicalRuleAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak::GALGAS_abstractLexicalRuleAST_2D_weak (const GALGAS_abstractLexicalRuleAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak GALGAS_abstractLexicalRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST GALGAS_abstractLexicalRuleAST_2D_weak::bang_abstractLexicalRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractLexicalRuleAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRuleAST) ;
      result = GALGAS_abstractLexicalRuleAST ((cPtr_abstractLexicalRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractLexicalRuleAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ("abstractLexicalRuleAST-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak GALGAS_abstractLexicalRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST_2D_weak result ;
  const GALGAS_abstractLexicalRuleAST_2D_weak * p = (const GALGAS_abstractLexicalRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLexicalRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRuleListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public: GALGAS_lexicalRuleListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRuleListAST (const GALGAS_lexicalRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_lexicalRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRule) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRuleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRuleListAST (mObject.mProperty_mLexicalRule COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRule" ":" ;
  mObject.mProperty_mLexicalRule.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRuleListAST * operand = (cCollectionElement_lexicalRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRuleListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_listWithValue (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::addAssign_operation (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_append (GALGAS_lexicalRuleListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalRuleListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_insertAtIndex (const GALGAS_abstractLexicalRuleAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_removeAtIndex (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
        outOperand0 = p->mObject.mProperty_mLexicalRule ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_popFirst (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_popLast (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::method_first (GALGAS_abstractLexicalRuleAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::method_last (GALGAS_abstractLexicalRuleAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_setMLexicalRuleAtIndex (GALGAS_abstractLexicalRuleAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRule = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST GALGAS_lexicalRuleListAST::getter_mLexicalRuleAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  GALGAS_abstractLexicalRuleAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    result = p->mObject.mProperty_mLexicalRule ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalRuleListAST::cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element cEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST cEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mProperty_mLexicalRule ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRuleListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  const GALGAS_lexicalRuleListAST * p = (const GALGAS_lexicalRuleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalExplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRuleExpression.objectCompare (p->mProperty_mLexicalRuleExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalExplicitRuleAST::objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLexicalRuleExpression,
                                                                              const GALGAS_lexicalInstructionListAST & inAttribute_mInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  if (inAttribute_mLexicalRuleExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalExplicitRuleAST (inAttribute_mLexicalRuleExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExplicitRuleAST::getter_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mProperty_mLexicalRuleExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalExplicitRuleAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitRuleAST::setter_setMLexicalRuleExpression (GALGAS_lexicalExpressionAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    p->mProperty_mLexicalRuleExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitRuleAST::setter_setMInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExplicitRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mLexicalRuleExpression (in_mLexicalRuleExpression),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalExplicitRuleAST:" ;
  mProperty_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalExplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mProperty_mLexicalRuleExpression, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  const GALGAS_lexicalExplicitRuleAST * p = (const GALGAS_lexicalExplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExplicitRuleAST_2D_weak::objectCompare (const GALGAS_lexicalExplicitRuleAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak::GALGAS_lexicalExplicitRuleAST_2D_weak (void) :
GALGAS_abstractLexicalRuleAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak & GALGAS_lexicalExplicitRuleAST_2D_weak::operator = (const GALGAS_lexicalExplicitRuleAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak::GALGAS_lexicalExplicitRuleAST_2D_weak (const GALGAS_lexicalExplicitRuleAST & inSource) :
GALGAS_abstractLexicalRuleAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak GALGAS_lexicalExplicitRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST_2D_weak::bang_lexicalExplicitRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitRuleAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExplicitRuleAST) ;
      result = GALGAS_lexicalExplicitRuleAST ((cPtr_lexicalExplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExplicitRuleAST_2D_weak::getter_mLexicalRuleExpression (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalExplicitRuleAST * objectPtr = (cPtr_lexicalExplicitRuleAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalExplicitRuleAST) ;
      result = objectPtr->mProperty_mLexicalRuleExpression ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalExplicitRuleAST_2D_weak::getter_mInstructionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalExplicitRuleAST * objectPtr = (cPtr_lexicalExplicitRuleAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalExplicitRuleAST) ;
      result = objectPtr->mProperty_mInstructionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitRuleAST_2D_weak::setter_setMLexicalRuleExpression (const GALGAS_lexicalExpressionAST inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalExplicitRuleAST * objectPtr = (cPtr_lexicalExplicitRuleAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalExplicitRuleAST) ;
      objectPtr->mProperty_mLexicalRuleExpression = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitRuleAST_2D_weak::setter_setMInstructionList (const GALGAS_lexicalInstructionListAST inValue,
                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalExplicitRuleAST * objectPtr = (cPtr_lexicalExplicitRuleAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalExplicitRuleAST) ;
      objectPtr->mProperty_mInstructionList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitRuleAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ("lexicalExplicitRuleAST-weak",
                                                       & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak GALGAS_lexicalExplicitRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST_2D_weak result ;
  const GALGAS_lexicalExplicitRuleAST_2D_weak * p = (const GALGAS_lexicalExplicitRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalMessageDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                               const GALGAS_lstring & in_mMessageValue
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                                                          const GALGAS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMessageName, inElement.mProperty_mMessageValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalMessageDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalMessageDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalMessageDeclarationListAST (mObject.mProperty_mMessageName, mObject.mProperty_mMessageValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalMessageDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageName" ":" ;
  mObject.mProperty_mMessageName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageValue" ":" ;
  mObject.mProperty_mMessageValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalMessageDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalMessageDeclarationListAST * operand = (cCollectionElement_lexicalMessageDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mMessageName,
                                                                         const GALGAS_lstring & in_mMessageValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (in_mMessageName,
                                                                      in_mMessageValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_append (GALGAS_lexicalMessageDeclarationListAST_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstring inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mMessageName ;
        outOperand1 = p->mObject.mProperty_mMessageValue ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_setMMessageNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST::getter_mMessageNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_setMMessageValueAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST::getter_mMessageValueAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalMessageDeclarationListAST::cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element cEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalMessageDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  const GALGAS_lexicalMessageDeclarationListAST * p = (const GALGAS_lexicalMessageDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalAttributeListAST : public cCollectionElement {
  public: GALGAS_lexicalAttributeListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_lstring & in_mName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                                                        const GALGAS_lstring & in_mName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalAttributeListAST (mObject.mProperty_mTypeName, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalAttributeListAST * operand = (cCollectionElement_lexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_lstring & in_mName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalAttributeListAST (in_mTypeName,
                                                             in_mName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_append (GALGAS_lexicalAttributeListAST_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_setMTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalAttributeListAST::cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element cEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST ("lexicalAttributeListAST",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  const GALGAS_lexicalAttributeListAST * p = (const GALGAS_lexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalStyleListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalStyleListAST : public cCollectionElement {
  public: GALGAS_lexicalStyleListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                  const GALGAS_lstring & in_mComment
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalStyleListAST (const GALGAS_lexicalStyleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                                                const GALGAS_lstring & in_mComment
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lexicalStyleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalStyleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalStyleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalStyleListAST (mObject.mProperty_mName, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalStyleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mProperty_mComment.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalStyleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalStyleListAST * operand = (cCollectionElement_lexicalStyleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalStyleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalStyleListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalStyleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalStyleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mComment
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalStyleListAST (in_mName,
                                                         in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_append (GALGAS_lexicalStyleListAST_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalStyleListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
        outOperand0 = p->mObject.mProperty_mName ;
        outOperand1 = p->mObject.mProperty_mComment ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::add_operation (const GALGAS_lexicalStyleListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStyleListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_setMCommentAtIndex (GALGAS_lstring inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStyleListAST::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    result = p->mObject.mProperty_mComment ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalStyleListAST::cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element cEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStyleListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST ("lexicalStyleListAST",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStyleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  const GALGAS_lexicalStyleListAST * p = (const GALGAS_lexicalStyleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStyleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_terminalDeclarationListAST : public cCollectionElement {
  public: GALGAS_terminalDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                         const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                         const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                         const GALGAS_lstring & in_mStyle,
                                                         const GALGAS_lstringlist & in_mOptionList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                              const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                              const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                              const GALGAS_lstring & in_mStyle,
                                                                                              const GALGAS_lstringlist & in_mOptionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mStyle, in_mOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mSentAttributeList, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mStyle, inElement.mProperty_mOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mSentAttributeList, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mStyle, mObject.mProperty_mOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_terminalDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mProperty_mOptionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_terminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalDeclarationListAST * operand = (cCollectionElement_terminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3,
                                                                                                const GALGAS_lstringlist & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_terminalDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mName,
                                                                   const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                   const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                   const GALGAS_lstring & in_mStyle,
                                                                   const GALGAS_lstringlist & in_mOptionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalDeclarationListAST (in_mName,
                                                                in_mSentAttributeList,
                                                                in_mSyntaxErrorMessage,
                                                                in_mStyle,
                                                                in_mOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_lstring & inOperand3,
                                                             const GALGAS_lstringlist & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_append (GALGAS_terminalDeclarationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_sentLexicalAttributeListAST inOperand1,
                                                              const GALGAS_lstring inOperand2,
                                                              const GALGAS_lstring inOperand3,
                                                              const GALGAS_lstringlist inOperand4,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_lstring & outOperand3,
                                                              GALGAS_lstringlist & outOperand4,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mName ;
        outOperand1 = p->mObject.mProperty_mSentAttributeList ;
        outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
        outOperand3 = p->mObject.mProperty_mStyle ;
        outOperand4 = p->mObject.mProperty_mOptionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_lstring & outOperand3,
                                                         GALGAS_lstringlist & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_lstring & outOperand3,
                                                        GALGAS_lstringlist & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstringlist & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_lstringlist & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMSentAttributeListAtIndex (GALGAS_sentLexicalAttributeListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_terminalDeclarationListAST::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_sentLexicalAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMStyleAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyle = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalDeclarationListAST::getter_mStyleAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMOptionListAtIndex (GALGAS_lstringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_terminalDeclarationListAST::getter_mOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mOptionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_terminalDeclarationListAST::cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element cEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST cEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_terminalDeclarationListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mOptionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@terminalDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST ("terminalDeclarationListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  const GALGAS_terminalDeclarationListAST * p = (const GALGAS_terminalDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@sentLexicalAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public: GALGAS_sentLexicalAttributeListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_lstring & in_mAttributeName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sentLexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sentLexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sentLexicalAttributeListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mAttributeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sentLexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sentLexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sentLexicalAttributeListAST * operand = (cCollectionElement_sentLexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sentLexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sentLexicalAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mAttributeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (in_mFormalSelector,
                                                                 in_mAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_append (GALGAS_sentLexicalAttributeListAST_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mAttributeName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sentLexicalAttributeListAST::cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element cEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@sentLexicalAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  const GALGAS_sentLexicalAttributeListAST * p = (const GALGAS_sentLexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sentLexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalListEntryListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public: GALGAS_lexicalListEntryListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                      const GALGAS_lstring & in_mTerminalSpelling,
                                                      const GALGAS_lstringlist & in_mAttributeList
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                                                        const GALGAS_lstring & in_mTerminalSpelling,
                                                                                        const GALGAS_lstringlist & in_mAttributeList
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_mAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntrySpelling, inElement.mProperty_mTerminalSpelling, inElement.mProperty_mAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalListEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalListEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListEntryListAST (mObject.mProperty_mEntrySpelling, mObject.mProperty_mTerminalSpelling, mObject.mProperty_mAttributeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalListEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntrySpelling" ":" ;
  mObject.mProperty_mEntrySpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalSpelling" ":" ;
  mObject.mProperty_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalListEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListEntryListAST * operand = (cCollectionElement_lexicalListEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListEntryListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalListEntryListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mEntrySpelling,
                                                                const GALGAS_lstring & in_mTerminalSpelling,
                                                                const GALGAS_lstringlist & in_mAttributeList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (in_mEntrySpelling,
                                                             in_mTerminalSpelling,
                                                             in_mAttributeList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1,
                                                          const GALGAS_lstringlist & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_append (GALGAS_lexicalListEntryListAST_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_lstringlist inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstringlist & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
        outOperand0 = p->mObject.mProperty_mEntrySpelling ;
        outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
        outOperand2 = p->mObject.mProperty_mAttributeList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstringlist & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstringlist & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMEntrySpellingAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntrySpelling = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListEntryListAST::getter_mEntrySpellingAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mEntrySpelling ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMTerminalSpellingAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalSpelling = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListEntryListAST::getter_mTerminalSpellingAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mTerminalSpelling ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMAttributeListAtIndex (GALGAS_lstringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalListEntryListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalListEntryListAST::cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element cEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mEntrySpelling ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mTerminalSpelling ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_lexicalListEntryListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalListEntryListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  const GALGAS_lexicalListEntryListAST * p = (const GALGAS_lexicalListEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalListDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public: GALGAS_lexicalListDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mStyle,
                                                            const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                            const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                            const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                    const GALGAS_lstring & in_mStyle,
                                                                                                    const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mStyle, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mSentAttributeList, inElement.mProperty_mEntryList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalListDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalListDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mStyle, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mSentAttributeList, mObject.mProperty_mEntryList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalListDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntryList" ":" ;
  mObject.mProperty_mEntryList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalListDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListDeclarationListAST * operand = (cCollectionElement_lexicalListDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                      const GALGAS_lexicalListEntryListAST & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mName,
                                                                      const GALGAS_lstring & in_mStyle,
                                                                      const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                      const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                      const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (in_mName,
                                                                   in_mStyle,
                                                                   in_mSyntaxErrorMessage,
                                                                   in_mSentAttributeList,
                                                                   in_mEntryList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                const GALGAS_lexicalListEntryListAST & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_append (GALGAS_lexicalListDeclarationListAST_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstring inOperand2,
                                                                 const GALGAS_sentLexicalAttributeListAST inOperand3,
                                                                 const GALGAS_lexicalListEntryListAST inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                                 GALGAS_lexicalListEntryListAST & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mName ;
        outOperand1 = p->mObject.mProperty_mStyle ;
        outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
        outOperand3 = p->mObject.mProperty_mSentAttributeList ;
        outOperand4 = p->mObject.mProperty_mEntryList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                            GALGAS_lexicalListEntryListAST & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                           GALGAS_lexicalListEntryListAST & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                         GALGAS_lexicalListEntryListAST & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                        GALGAS_lexicalListEntryListAST & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMStyleAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyle = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mStyleAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMSentAttributeListAtIndex (GALGAS_sentLexicalAttributeListAST inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_lexicalListDeclarationListAST::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_sentLexicalAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMEntryListAtIndex (GALGAS_lexicalListEntryListAST inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntryList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListDeclarationListAST::getter_mEntryListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lexicalListEntryListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mEntryList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalListDeclarationListAST::cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element cEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST cEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST cEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mEntryList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalListDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  const GALGAS_lexicalListDeclarationListAST * p = (const GALGAS_lexicalListDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalOrExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalOrExpressionAST::objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLeftOperand,
                                                                              const GALGAS_lexicalExpressionAST & inAttribute_mRightOperand
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalOrExpressionAST (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalOrExpressionAST::setter_setMLeftOperand (GALGAS_lexicalExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalOrExpressionAST::setter_setMRightOperand (GALGAS_lexicalExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalOrExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GALGAS_lexicalExpressionAST & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalOrExpressionAST:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalOrExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalOrExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                               & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalOrExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  const GALGAS_lexicalOrExpressionAST * p = (const GALGAS_lexicalOrExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalOrExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

