#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-15.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_lexiqueIntrospectionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueGetterName.objectCompare (p->mProperty_mLexiqueGetterName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_lexiqueIntrospectionExpressionAST::objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                                                    const GALGAS_lstring & inAttribute_mLexiqueGetterName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  if (inAttribute_mLexiqueComponentName.isValid () && inAttribute_mLexiqueGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionExpressionAST (inAttribute_mLexiqueComponentName, inAttribute_mLexiqueGetterName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    result = p->mProperty_mLexiqueComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_lexiqueIntrospectionExpressionAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    result = p->mProperty_mLexiqueGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_lexiqueIntrospectionExpressionAST::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueIntrospectionExpressionAST::setter_setMLexiqueComponentName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    p->mProperty_mLexiqueComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueIntrospectionExpressionAST::setter_setMLexiqueComponentName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueIntrospectionExpressionAST::setter_setMLexiqueGetterName (GALGAS_lstring inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    p->mProperty_mLexiqueGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueIntrospectionExpressionAST::setter_setMLexiqueGetterName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @lexiqueIntrospectionExpressionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                const GALGAS_lstring & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mLexiqueGetterName (in_mLexiqueGetterName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

void cPtr_lexiqueIntrospectionExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@lexiqueIntrospectionExpressionAST:" ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_lexiqueIntrospectionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @lexiqueIntrospectionExpressionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  const GALGAS_lexiqueIntrospectionExpressionAST * p = (const GALGAS_lexiqueIntrospectionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueIntrospectionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_filewrapperObjectInstanciationInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_filewrapperObjectInstanciationInExpressionAST::objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperObjectInstanciationInExpressionAST (inAttribute_mFilewrapperName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_filewrapperObjectInstanciationInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_filewrapperObjectInstanciationInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperObjectInstanciationInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperObjectInstanciationInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @filewrapperObjectInstanciationInExpressionAST class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@filewrapperObjectInstanciationInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mProperty_mFilewrapperName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @filewrapperObjectInstanciationInExpressionAST type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_filewrapperObjectInstanciationInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperObjectInstanciationInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST * p = (const GALGAS_filewrapperObjectInstanciationInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperObjectInstanciationInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_filewrapperInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (p->mProperty_mFilewrapperPath) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_filewrapperInExpressionAST::objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_filewrapperInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_filewrapperInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_filewrapperInExpressionAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    result = p->mProperty_mFilewrapperPath ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_filewrapperInExpressionAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperPath ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperInExpressionAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperInExpressionAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperPath = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @filewrapperInExpressionAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                  const GALGAS_lstring & in_mFilewrapperPath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@filewrapperInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_filewrapperInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @filewrapperInExpressionAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_filewrapperInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  const GALGAS_filewrapperInExpressionAST * p = (const GALGAS_filewrapperInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_filewrapperTemplateInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateName.objectCompare (p->mProperty_mFilewrapperTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_filewrapperTemplateInExpressionAST::objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperTemplateName,
                                                                                                      const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperTemplateName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperTemplateInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperTemplateName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_filewrapperTemplateInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    result = p->mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_filewrapperTemplateInExpressionAST::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTemplateName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList GALGAS_filewrapperTemplateInExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList cPtr_filewrapperTemplateInExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperTemplateInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMFilewrapperTemplateName (GALGAS_lstring inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mFilewrapperTemplateName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperTemplateInExpressionAST::setter_setMFilewrapperTemplateName (GALGAS_lstring inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperTemplateName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperTemplateInExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @filewrapperTemplateInExpressionAST class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                                  const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                  const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperTemplateName (in_mFilewrapperTemplateName),
mProperty_mExpressions (in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

void cPtr_filewrapperTemplateInExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@filewrapperTemplateInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_filewrapperTemplateInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @filewrapperTemplateInExpressionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ("filewrapperTemplateInExpressionAST",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  const GALGAS_filewrapperTemplateInExpressionAST * p = (const GALGAS_filewrapperTemplateInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_getterCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiver.objectCompare (p->mProperty_mReceiver) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_getterCallExpressionAST::objectCompare (const GALGAS_getterCallExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiver,
                                                                                const GALGAS_lstring & inAttribute_mGetterName,
                                                                                const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST result ;
  if (inAttribute_mReceiver.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getterCallExpressionAST (inAttribute_mReceiver, inAttribute_mGetterName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_getterCallExpressionAST::getter_mReceiver (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    result = p->mProperty_mReceiver ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_getterCallExpressionAST::getter_mReceiver (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiver ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_getterCallExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    result = p->mProperty_mGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_getterCallExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList GALGAS_getterCallExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList cPtr_getterCallExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionAST::setter_setMReceiver (GALGAS_semanticExpressionAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    p->mProperty_mReceiver = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionAST::setter_setMReceiver (GALGAS_semanticExpressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiver = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionAST::setter_setMGetterName (GALGAS_lstring inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    p->mProperty_mGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionAST::setter_setMGetterName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @getterCallExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiver,
                                                            const GALGAS_lstring & in_mGetterName,
                                                            const GALGAS_actualOutputExpressionList & in_mExpressions
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mReceiver (in_mReceiver),
mProperty_mGetterName (in_mGetterName),
mProperty_mExpressions (in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@getterCallExpressionAST:" ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_getterCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_mReceiver, mProperty_mGetterName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @getterCallExpressionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST result ;
  const GALGAS_getterCallExpressionAST * p = (const GALGAS_getterCallExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_constructorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_constructorExpressionAST::objectCompare (const GALGAS_constructorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionAST::GALGAS_constructorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionAST::GALGAS_constructorExpressionAST (const cPtr_constructorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                  const GALGAS_lstring & inAttribute_mConstructorName,
                                                                                  const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorExpressionAST (inAttribute_mTypeName, inAttribute_mConstructorName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_constructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_constructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_constructorExpressionAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_constructorExpressionAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList GALGAS_constructorExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList cPtr_constructorExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionAST::setter_setMConstructorName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionAST::setter_setMConstructorName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstructorName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @constructorExpressionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_constructorExpressionAST::cPtr_constructorExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                              const GALGAS_lstring & in_mConstructorName,
                                                              const GALGAS_actualOutputExpressionList & in_mExpressions
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mExpressions (in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_constructorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST ;
}

void cPtr_constructorExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@constructorExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_constructorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorExpressionAST (mProperty_mTypeName, mProperty_mConstructorName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @constructorExpressionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorExpressionAST ("constructorExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionAST result ;
  const GALGAS_constructorExpressionAST * p = (const GALGAS_constructorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_defaultConstructorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_defaultConstructorExpressionAST * p = (const cPtr_defaultConstructorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_defaultConstructorExpressionAST::objectCompare (const GALGAS_defaultConstructorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionAST::GALGAS_defaultConstructorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_defaultConstructorExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionAST::GALGAS_defaultConstructorExpressionAST (const cPtr_defaultConstructorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_defaultConstructorExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_defaultConstructorExpressionAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_defaultConstructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_defaultConstructorExpressionAST * p = (const cPtr_defaultConstructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_defaultConstructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_defaultConstructorExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_defaultConstructorExpressionAST * p = (cPtr_defaultConstructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_defaultConstructorExpressionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @defaultConstructorExpressionAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_defaultConstructorExpressionAST::cPtr_defaultConstructorExpressionAST (const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_defaultConstructorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;
}

void cPtr_defaultConstructorExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@defaultConstructorExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_defaultConstructorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_defaultConstructorExpressionAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @defaultConstructorExpressionAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ("defaultConstructorExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_defaultConstructorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_defaultConstructorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultConstructorExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST result ;
  const GALGAS_defaultConstructorExpressionAST * p = (const GALGAS_defaultConstructorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultConstructorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultConstructorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_functionCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_functionCallExpressionAST::objectCompare (const GALGAS_functionCallExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionAST::GALGAS_functionCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionCallExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionAST::GALGAS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                    const GALGAS_actualOutputExpressionList & inAttribute_mExpressionList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionCallExpressionAST (inAttribute_mFunctionName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_functionCallExpressionAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_functionCallExpressionAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList GALGAS_functionCallExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList cPtr_functionCallExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionCallExpressionAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_functionCallExpressionAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionCallExpressionAST::setter_setMExpressionList (GALGAS_actualOutputExpressionList inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_functionCallExpressionAST::setter_setMExpressionList (GALGAS_actualOutputExpressionList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @functionCallExpressionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                                                const GALGAS_actualOutputExpressionList & in_mExpressionList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mExpressionList (in_mExpressionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@functionCallExpressionAST:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_functionCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mProperty_mFunctionName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @functionCallExpressionAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST result ;
  const GALGAS_functionCallExpressionAST * p = (const GALGAS_functionCallExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalTypeInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalTypeInExpressionAST * p = (const cPtr_literalTypeInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralTypeName.objectCompare (p->mProperty_mLiteralTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalTypeInExpressionAST::objectCompare (const GALGAS_literalTypeInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionAST::GALGAS_literalTypeInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalTypeInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionAST::GALGAS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralTypeName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST result ;
  if (inAttribute_mLiteralTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalTypeInExpressionAST (inAttribute_mLiteralTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_literalTypeInExpressionAST::getter_mLiteralTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalTypeInExpressionAST * p = (const cPtr_literalTypeInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
    result = p->mProperty_mLiteralTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_literalTypeInExpressionAST::getter_mLiteralTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_literalTypeInExpressionAST::setter_setMLiteralTypeName (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_literalTypeInExpressionAST * p = (cPtr_literalTypeInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
    p->mProperty_mLiteralTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_literalTypeInExpressionAST::setter_setMLiteralTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @literalTypeInExpressionAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (const GALGAS_lstring & in_mLiteralTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLiteralTypeName (in_mLiteralTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalTypeInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

void cPtr_literalTypeInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalTypeInExpressionAST:" ;
  mProperty_mLiteralTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalTypeInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionAST (mProperty_mLiteralTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @literalTypeInExpressionAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalTypeInExpressionAST ("literalTypeInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalTypeInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalTypeInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalTypeInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST result ;
  const GALGAS_literalTypeInExpressionAST * p = (const GALGAS_literalTypeInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalTypeInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_collectionValueAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_collectionValueAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementList.objectCompare (p->mProperty_mElementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfCollectionValue.objectCompare (p->mProperty_mEndOfCollectionValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_collectionValueAST::objectCompare (const GALGAS_collectionValueAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueAST::GALGAS_collectionValueAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueAST GALGAS_collectionValueAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_collectionValueAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_collectionValueElementList::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueAST::GALGAS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_collectionValueAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueAST GALGAS_collectionValueAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_collectionValueElementList & inAttribute_mElementList,
                                                                      const GALGAS_location & inAttribute_mEndOfCollectionValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mElementList.isValid () && inAttribute_mEndOfCollectionValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_collectionValueAST (inAttribute_mTypeName, inAttribute_mElementList, inAttribute_mEndOfCollectionValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_collectionValueAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_collectionValueAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementList GALGAS_collectionValueAST::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result ;
  if (NULL != mObjectPtr) {
    const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    result = p->mProperty_mElementList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementList cPtr_collectionValueAST::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_collectionValueAST::getter_mEndOfCollectionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    result = p->mProperty_mEndOfCollectionValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_collectionValueAST::getter_mEndOfCollectionValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfCollectionValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_collectionValueAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueAST::setter_setMElementList (GALGAS_collectionValueElementList inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    p->mProperty_mElementList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_collectionValueAST::setter_setMElementList (GALGAS_collectionValueElementList inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueAST::setter_setMEndOfCollectionValue (GALGAS_location inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    p->mProperty_mEndOfCollectionValue = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_collectionValueAST::setter_setMEndOfCollectionValue (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfCollectionValue = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @collectionValueAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_collectionValueAST::cPtr_collectionValueAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_collectionValueElementList & in_mElementList,
                                                  const GALGAS_location & in_mEndOfCollectionValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mElementList (in_mElementList),
mProperty_mEndOfCollectionValue (in_mEndOfCollectionValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_collectionValueAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

void cPtr_collectionValueAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@collectionValueAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfCollectionValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_collectionValueAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_collectionValueAST (mProperty_mTypeName, mProperty_mElementList, mProperty_mEndOfCollectionValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @collectionValueAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueAST ("collectionValueAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_collectionValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_collectionValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueAST GALGAS_collectionValueAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST result ;
  const GALGAS_collectionValueAST * p = (const GALGAS_collectionValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structPropertyAccessExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structPropertyAccessExpressionAST * p = (const cPtr_structPropertyAccessExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructFieldName.objectCompare (p->mProperty_mStructFieldName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_structPropertyAccessExpressionAST::objectCompare (const GALGAS_structPropertyAccessExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionAST::GALGAS_structPropertyAccessExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionAST::GALGAS_structPropertyAccessExpressionAST (const cPtr_structPropertyAccessExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionAST GALGAS_structPropertyAccessExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mStructFieldName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structPropertyAccessExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_structPropertyAccessExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionAST * p = (const cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_structPropertyAccessExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_structPropertyAccessExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionAST * p = (const cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_structPropertyAccessExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structPropertyAccessExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionAST * p = (const cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    result = p->mProperty_mStructFieldName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_structPropertyAccessExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructFieldName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structPropertyAccessExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structPropertyAccessExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structPropertyAccessExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structPropertyAccessExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structPropertyAccessExpressionAST::setter_setMStructFieldName (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    p->mProperty_mStructFieldName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structPropertyAccessExpressionAST::setter_setMStructFieldName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructFieldName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @structPropertyAccessExpressionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                const GALGAS_lstring & in_mStructFieldName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression),
mProperty_mStructFieldName (in_mStructFieldName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structPropertyAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

void cPtr_structPropertyAccessExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@structPropertyAccessExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structPropertyAccessExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @structPropertyAccessExpressionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ("structPropertyAccessExpressionAST",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structPropertyAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structPropertyAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structPropertyAccessExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionAST GALGAS_structPropertyAccessExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionAST result ;
  const GALGAS_structPropertyAccessExpressionAST * p = (const GALGAS_structPropertyAccessExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structPropertyAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mSelfCopyTypeProxy (),
mProperty_mSelfObjectCppName (),
mProperty_mSelfTypeProxy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_string & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mSelfCopyTypeProxy (inOperand2),
mProperty_mSelfObjectCppName (inOperand3),
mProperty_mSelfTypeProxy (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analysisContext GALGAS_analysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_analysisContext (GALGAS_semanticContext::constructor_default (HERE),
                                 GALGAS_predefinedTypes::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_string::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_string & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_analysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_analysisContext::objectCompare (const GALGAS_analysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSemanticContext.objectCompare (inOperand.mProperty_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPredefinedTypes.objectCompare (inOperand.mProperty_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfCopyTypeProxy.objectCompare (inOperand.mProperty_mSelfCopyTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfObjectCppName.objectCompare (inOperand.mProperty_mSelfObjectCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfTypeProxy.objectCompare (inOperand.mProperty_mSelfTypeProxy) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_analysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mSelfCopyTypeProxy.isValid () && mProperty_mSelfObjectCppName.isValid () && mProperty_mSelfTypeProxy.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_analysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mSelfCopyTypeProxy.drop () ;
  mProperty_mSelfObjectCppName.drop () ;
  mProperty_mSelfTypeProxy.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_analysisContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @analysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfCopyTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfObjectCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfTypeProxy.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_analysisContext::getter_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_predefinedTypes GALGAS_analysisContext::getter_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPredefinedTypes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_analysisContext::getter_mSelfCopyTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfCopyTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_analysisContext::getter_mSelfObjectCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfObjectCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_analysisContext::getter_mSelfTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfTypeProxy ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @analysisContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_analysisContext GALGAS_analysisContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  const GALGAS_analysisContext * p = (const GALGAS_analysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVariableName.objectCompare (p->mProperty_mTargetVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mTargetVariableName,
                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetVariableName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetVariableName, inAttribute_mStructAttributeList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_assignmentInstructionAST::getter_mTargetVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mTargetVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_assignmentInstructionAST::getter_mTargetVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_assignmentInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_assignmentInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionAST::setter_setMTargetVariableName (GALGAS_lstring inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mTargetVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionAST::setter_setMTargetVariableName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @assignmentInstructionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mTargetVariableName,
                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                              const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetVariableName (in_mTargetVariableName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetVariableName, mProperty_mStructAttributeList, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @assignmentInstructionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_plusEqualElementsInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_plusEqualElementsInstructionAST::objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_plusEqualElementsInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                  GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (const cPtr_plusEqualElementsInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualElementsInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualElementsInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_plusEqualElementsInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_plusEqualElementsInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_plusEqualElementsInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_plusEqualElementsInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList GALGAS_plusEqualElementsInstructionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualOutputExpressionList cPtr_plusEqualElementsInstructionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualElementsInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualElementsInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualElementsInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualElementsInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualElementsInstructionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualElementsInstructionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @plusEqualElementsInstructionAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_plusEqualElementsInstructionAST::cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mReceiverName,
                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                            const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpressions (in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_plusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

void cPtr_plusEqualElementsInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@plusEqualElementsInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_plusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualElementsInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @plusEqualElementsInstructionAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ("plusEqualElementsInstructionAST",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_plusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_plusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  const GALGAS_plusEqualElementsInstructionAST * p = (const GALGAS_plusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_plusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_plusEqualExpressionInstructionAST::objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (const cPtr_plusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualExpressionInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_plusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_plusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_plusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_plusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_plusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_plusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @plusEqualExpressionInstructionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_plusEqualExpressionInstructionAST::cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                const GALGAS_semanticExpressionAST & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_plusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

void cPtr_plusEqualExpressionInstructionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@plusEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_plusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @plusEqualExpressionInstructionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ("plusEqualExpressionInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_plusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_plusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  const GALGAS_plusEqualExpressionInstructionAST * p = (const GALGAS_plusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_minusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_minusEqualExpressionInstructionAST::objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (const cPtr_minusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_minusEqualExpressionInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_minusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_minusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_minusEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_minusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_minusEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_minusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_minusEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_minusEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_minusEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_minusEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_minusEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_minusEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_minusEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @minusEqualExpressionInstructionAST class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_minusEqualExpressionInstructionAST::cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_lstring & in_mReceiverName,
                                                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_minusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

void cPtr_minusEqualExpressionInstructionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@minusEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_minusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_minusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @minusEqualExpressionInstructionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ("minusEqualExpressionInstructionAST",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_minusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_minusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_minusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  const GALGAS_minusEqualExpressionInstructionAST * p = (const GALGAS_minusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_minusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("minusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_mulEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_mulEqualExpressionInstructionAST::objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (const cPtr_mulEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mulEqualExpressionInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mulEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_mulEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_mulEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_mulEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_mulEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_mulEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_mulEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mulEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mulEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mulEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mulEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mulEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mulEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @mulEqualExpressionInstructionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_mulEqualExpressionInstructionAST::cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mReceiverName,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionAST & in_mExpression
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_mulEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

void cPtr_mulEqualExpressionInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@mulEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_mulEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mulEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @mulEqualExpressionInstructionAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ("mulEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mulEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mulEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  const GALGAS_mulEqualExpressionInstructionAST * p = (const GALGAS_mulEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mulEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mulEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_divEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_divEqualExpressionInstructionAST::objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (const cPtr_divEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divEqualExpressionInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_divEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_divEqualExpressionInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_divEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_divEqualExpressionInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_divEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_divEqualExpressionInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divEqualExpressionInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divEqualExpressionInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divEqualExpressionInstructionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @divEqualExpressionInstructionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_divEqualExpressionInstructionAST::cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mReceiverName,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionAST & in_mExpression
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_divEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

void cPtr_divEqualExpressionInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@divEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_divEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @divEqualExpressionInstructionAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ("divEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_divEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_divEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  const GALGAS_divEqualExpressionInstructionAST * p = (const GALGAS_divEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_plusEqualnstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_plusEqualnstructionForGeneration::objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_plusEqualnstructionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualnstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                  const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                  const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  if (inAttribute_mReceiverCppName.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mInstructionLocation.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualnstructionForGeneration (inAttribute_mReceiverCppName, inAttribute_mTargetType, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mInstructionLocation, inAttribute_mStructAttributeList, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_plusEqualnstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mProperty_mReceiverCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_plusEqualnstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_plusEqualnstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_plusEqualnstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_plusEqualnstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_plusEqualnstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameForCheckingFormalParameterUsing ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_plusEqualnstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_plusEqualnstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_plusEqualnstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_plusEqualnstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration GALGAS_plusEqualnstructionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration cPtr_plusEqualnstructionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualnstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualnstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualnstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualnstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualnstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualnstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameForCheckingFormalParameterUsing = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualnstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualnstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualnstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualnstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_plusEqualnstructionForGeneration::setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_plusEqualnstructionForGeneration::setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @plusEqualnstructionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_plusEqualnstructionForGeneration::cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                              const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mTargetType (in_mTargetType),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpressionList (in_mExpressionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_plusEqualnstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

void cPtr_plusEqualnstructionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@plusEqualnstructionForGeneration:" ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_plusEqualnstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualnstructionForGeneration (mProperty_mReceiverCppName, mProperty_mTargetType, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mInstructionLocation, mProperty_mStructAttributeList, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @plusEqualnstructionForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ("plusEqualnstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_plusEqualnstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_plusEqualnstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualnstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  const GALGAS_plusEqualnstructionForGeneration * p = (const GALGAS_plusEqualnstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualnstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumeratedCollectionImplicitVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfEnumerationExpression.objectCompare (p->mProperty_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (inAttribute_mPrefix.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionImplicitVarInExpAST (inAttribute_mPrefix, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumeratedCollectionImplicitVarInExpAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mProperty_mPrefix ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumeratedCollectionImplicitVarInExpAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPrefix ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionImplicitVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionImplicitVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_enumeratedCollectionImplicitVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mProperty_mEndOfEnumerationExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_enumeratedCollectionImplicitVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnumerationExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionImplicitVarInExpAST::setter_setMPrefix (GALGAS_lstring inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    p->mProperty_mPrefix = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionImplicitVarInExpAST::setter_setMPrefix (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPrefix = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionImplicitVarInExpAST::setter_setMEnumeratedExpression (GALGAS_semanticExpressionAST inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    p->mProperty_mEnumeratedExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionImplicitVarInExpAST::setter_setMEnumeratedExpression (GALGAS_semanticExpressionAST inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumeratedExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionImplicitVarInExpAST::setter_setMEndOfEnumerationExpression (GALGAS_location inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    p->mProperty_mEndOfEnumerationExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionImplicitVarInExpAST::setter_setMEndOfEnumerationExpression (GALGAS_location inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfEnumerationExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          Pointer class for @enumeratedCollectionImplicitVarInExpAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumeratedCollectionImplicitVarInExpAST::cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionImplicitVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

void cPtr_enumeratedCollectionImplicitVarInExpAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionImplicitVarInExpAST:" ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumeratedCollectionImplicitVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionImplicitVarInExpAST (mProperty_mPrefix, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @enumeratedCollectionImplicitVarInExpAST type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ("enumeratedCollectionImplicitVarInExpAST",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumeratedCollectionVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationOptionalTypeName.objectCompare (p->mProperty_mEnumerationOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationVariable.objectCompare (p->mProperty_mEnumerationVariable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfEnumerationExpression.objectCompare (p->mProperty_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationOptionalTypeName,
                                                                                                const GALGAS_lstring & inAttribute_mEnumerationVariable,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (inAttribute_mEnumerationOptionalTypeName.isValid () && inAttribute_mEnumerationVariable.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionVarInExpAST (inAttribute_mEnumerationOptionalTypeName, inAttribute_mEnumerationVariable, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::getter_mEnumerationOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mProperty_mEnumerationOptionalTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumeratedCollectionVarInExpAST::getter_mEnumerationOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationOptionalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::getter_mEnumerationVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mProperty_mEnumerationVariable ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumeratedCollectionVarInExpAST::getter_mEnumerationVariable (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationVariable ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionVarInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_enumeratedCollectionVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mProperty_mEndOfEnumerationExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_enumeratedCollectionVarInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnumerationExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionVarInExpAST::setter_setMEnumerationOptionalTypeName (GALGAS_lstring inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    p->mProperty_mEnumerationOptionalTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionVarInExpAST::setter_setMEnumerationOptionalTypeName (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumerationOptionalTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionVarInExpAST::setter_setMEnumerationVariable (GALGAS_lstring inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    p->mProperty_mEnumerationVariable = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionVarInExpAST::setter_setMEnumerationVariable (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumerationVariable = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionVarInExpAST::setter_setMEnumeratedExpression (GALGAS_semanticExpressionAST inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    p->mProperty_mEnumeratedExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionVarInExpAST::setter_setMEnumeratedExpression (GALGAS_semanticExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumeratedExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumeratedCollectionVarInExpAST::setter_setMEndOfEnumerationExpression (GALGAS_location inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    p->mProperty_mEndOfEnumerationExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumeratedCollectionVarInExpAST::setter_setMEndOfEnumerationExpression (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfEnumerationExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @enumeratedCollectionVarInExpAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                                            const GALGAS_lstring & in_mEnumerationVariable,
                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mEnumerationOptionalTypeName (in_mEnumerationOptionalTypeName),
mProperty_mEnumerationVariable (in_mEnumerationVariable),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionVarInExpAST:" ;
  mProperty_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumeratedCollectionVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mProperty_mEnumerationOptionalTypeName, mProperty_mEnumerationVariable, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @enumeratedCollectionVarInExpAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  const GALGAS_enumeratedCollectionVarInExpAST * p = (const GALGAS_enumeratedCollectionVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedObjectList.objectCompare (p->mProperty_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexVariableName.objectCompare (p->mProperty_mIndexVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_while_5F_expression.objectCompare (p->mProperty_mEndOf_5F_while_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_before_5F_branch.objectCompare (p->mProperty_mEndOf_5F_before_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_between_5F_branch.objectCompare (p->mProperty_mEndOf_5F_between_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_branch.objectCompare (p->mProperty_mEndOf_5F_do_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_after_5F_branch.objectCompare (p->mProperty_mEndOf_5F_after_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_foreach_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_foreach_5F_instruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_forInstructionEnumeratedObjectListAST & inAttribute_mEnumeratedObjectList,
                                                                    const GALGAS_lstring & inAttribute_mIndexVariableName,
                                                                    const GALGAS_semanticExpressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_while_5F_expression,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_before_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_between_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mAfterInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_after_5F_branch,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_foreach_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEnumeratedObjectList.isValid () && inAttribute_mIndexVariableName.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_while_5F_expression.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mEndOf_5F_before_5F_branch.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mEndOf_5F_between_5F_branch.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_branch.isValid () && inAttribute_mAfterInstructionList.isValid () && inAttribute_mEndOf_5F_after_5F_branch.isValid () && inAttribute_mEndOf_5F_foreach_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mEnumeratedObjectList, inAttribute_mIndexVariableName, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_while_5F_expression, inAttribute_mBeforeInstructionList, inAttribute_mEndOf_5F_before_5F_branch, inAttribute_mBetweenInstructionList, inAttribute_mEndOf_5F_between_5F_branch, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_branch, inAttribute_mAfterInstructionList, inAttribute_mEndOf_5F_after_5F_branch, inAttribute_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionAST::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEnumeratedObjectList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST cPtr_forInstructionAST::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_forInstructionAST::getter_mIndexVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mIndexVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_forInstructionAST::getter_mIndexVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_while_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_while_5F_expression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_while_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_while_5F_expression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mBeforeInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBeforeInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_before_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_before_5F_branch ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_before_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_before_5F_branch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mBetweenInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBetweenInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_between_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_between_5F_branch ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_between_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_between_5F_branch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_do_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_do_5F_branch ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_do_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_branch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mAfterInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_forInstructionAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAfterInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_after_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_after_5F_branch ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_after_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_after_5F_branch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_foreach_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_foreach_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_foreach_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_foreach_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEnumeratedObjectList (GALGAS_forInstructionEnumeratedObjectListAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEnumeratedObjectList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEnumeratedObjectList (GALGAS_forInstructionEnumeratedObjectListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumeratedObjectList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMIndexVariableName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mIndexVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMIndexVariableName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIndexVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMWhileExpression (GALGAS_semanticExpressionAST inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMWhileExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhileExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEndOf_5F_while_5F_expression (GALGAS_location inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_while_5F_expression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEndOf_5F_while_5F_expression (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_while_5F_expression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMBeforeInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mBeforeInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMBeforeInstructionList (GALGAS_semanticInstructionListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBeforeInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEndOf_5F_before_5F_branch (GALGAS_location inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_before_5F_branch = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEndOf_5F_before_5F_branch (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_before_5F_branch = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMBetweenInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mBetweenInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMBetweenInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBetweenInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEndOf_5F_between_5F_branch (GALGAS_location inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_between_5F_branch = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEndOf_5F_between_5F_branch (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_between_5F_branch = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMDoInstructionList (GALGAS_semanticInstructionListAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMDoInstructionList (GALGAS_semanticInstructionListAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEndOf_5F_do_5F_branch (GALGAS_location inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_branch = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEndOf_5F_do_5F_branch (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_do_5F_branch = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMAfterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mAfterInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMAfterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAfterInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEndOf_5F_after_5F_branch (GALGAS_location inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_after_5F_branch = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEndOf_5F_after_5F_branch (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_after_5F_branch = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionAST::setter_setMEndOf_5F_foreach_5F_instruction (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_foreach_5F_instruction = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionAST::setter_setMEndOf_5F_foreach_5F_instruction (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_foreach_5F_instruction = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @forInstructionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                                const GALGAS_lstring & in_mIndexVariableName,
                                                const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                                const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                                const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mEnumeratedObjectList (in_mEnumeratedObjectList),
mProperty_mIndexVariableName (in_mIndexVariableName),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_while_5F_expression (in_mEndOf_5F_while_5F_expression),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mEndOf_5F_before_5F_branch (in_mEndOf_5F_before_5F_branch),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mEndOf_5F_between_5F_branch (in_mEndOf_5F_between_5F_branch),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_branch (in_mEndOf_5F_do_5F_branch),
mProperty_mAfterInstructionList (in_mAfterInstructionList),
mProperty_mEndOf_5F_after_5F_branch (in_mEndOf_5F_after_5F_branch),
mProperty_mEndOf_5F_foreach_5F_instruction (in_mEndOf_5F_foreach_5F_instruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_while_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_before_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_between_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_after_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_foreach_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableName, mProperty_mWhileExpression, mProperty_mEndOf_5F_while_5F_expression, mProperty_mBeforeInstructionList, mProperty_mEndOf_5F_before_5F_branch, mProperty_mBetweenInstructionList, mProperty_mEndOf_5F_between_5F_branch, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_branch, mProperty_mAfterInstructionList, mProperty_mEndOf_5F_after_5F_branch, mProperty_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @forInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    result = p->mProperty_mActualParameterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInVar:" ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultInVar type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                                                 COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    result = p->mProperty_mActualParameterTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    result = p->mProperty_mActualParameterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    p->mProperty_mActualParameterTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar type                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                                  const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    result = p->mProperty_mActualParameterTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    result = p->mProperty_mActualParameterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    p->mProperty_mActualParameterTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::setter_setMActualParameterTypeName (GALGAS_lstring inValue
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    p->mProperty_mActualParameterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::setter_setMActualParameterName (GALGAS_lstring inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//              Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GALGAS_lstring & in_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst type                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                         & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInFileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSourceExpression.objectCompare (p->mProperty_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInFileInstructionAST::objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInFileInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                        const GALGAS_lstring & inAttribute_mLabelName,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression,
                                                                                        const GALGAS_location & inAttribute_mEndOfSourceExpression,
                                                                                        const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mEndOfSourceExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInFileInstructionAST (inAttribute_mInstructionLocation, inAttribute_mGrammarComponentName, inAttribute_mLabelName, inAttribute_mSourceExpression, inAttribute_mEndOfSourceExpression, inAttribute_mActualParameterList, inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInFileInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mProperty_mGrammarComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInFileInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInFileInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInFileInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_grammarInFileInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_grammarInFileInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_grammarInFileInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mProperty_mEndOfSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_grammarInFileInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_grammarInFileInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_grammarInFileInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInFileInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    result = p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_grammarInFileInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInFileInstructionAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    p->mProperty_mGrammarComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInFileInstructionAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInFileInstructionAST::setter_setMLabelName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInFileInstructionAST::setter_setMLabelName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInFileInstructionAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInFileInstructionAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInFileInstructionAST::setter_setMEndOfSourceExpression (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    p->mProperty_mEndOfSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInFileInstructionAST::setter_setMEndOfSourceExpression (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInFileInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInFileInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInFileInstructionAST::setter_setMAbstractGrammarInstructionSyntaxDirectedTranslationResult (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue
                                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInFileInstructionAST::setter_setMAbstractGrammarInstructionSyntaxDirectedTranslationResult (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @grammarInFileInstructionAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInFileInstructionAST::cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_lstring & in_mGrammarComponentName,
                                                                    const GALGAS_lstring & in_mLabelName,
                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                    const GALGAS_location & in_mEndOfSourceExpression,
                                                                    const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mEndOfSourceExpression (in_mEndOfSourceExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInFileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

void cPtr_grammarInFileInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@grammarInFileInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInFileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInFileInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @grammarInFileInstructionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST ("grammarInFileInstructionAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  const GALGAS_grammarInFileInstructionAST * p = (const GALGAS_grammarInFileInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInFileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInStringInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSourceExpression.objectCompare (p->mProperty_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameExpression.objectCompare (p->mProperty_mNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfNameExpression.objectCompare (p->mProperty_mEndOfNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInStringInstructionAST::objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInStringInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                            const GALGAS_lstring & inAttribute_mLabelName,
                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression,
                                                                                            const GALGAS_location & inAttribute_mEndOfSourceExpression,
                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mNameExpression,
                                                                                            const GALGAS_location & inAttribute_mEndOfNameExpression,
                                                                                            const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mEndOfSourceExpression.isValid () && inAttribute_mNameExpression.isValid () && inAttribute_mEndOfNameExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInStringInstructionAST (inAttribute_mInstructionLocation, inAttribute_mGrammarComponentName, inAttribute_mLabelName, inAttribute_mSourceExpression, inAttribute_mEndOfSourceExpression, inAttribute_mNameExpression, inAttribute_mEndOfNameExpression, inAttribute_mActualParameterList, inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInStringInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mGrammarComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInStringInstructionAST::getter_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_grammarInStringInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_grammarInStringInstructionAST::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_grammarInStringInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_grammarInStringInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mEndOfSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_grammarInStringInstructionAST::getter_mEndOfSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::getter_mNameExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mNameExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_grammarInStringInstructionAST::getter_mNameExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_grammarInStringInstructionAST::getter_mEndOfNameExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mEndOfNameExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_grammarInStringInstructionAST::getter_mEndOfNameExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfNameExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_grammarInStringInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_grammarInStringInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInStringInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    result = p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_grammarInStringInstructionAST::getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mGrammarComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMGrammarComponentName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMLabelName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMLabelName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMEndOfSourceExpression (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mEndOfSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMEndOfSourceExpression (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMNameExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mNameExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMNameExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMEndOfNameExpression (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mEndOfNameExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMEndOfNameExpression (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfNameExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInStringInstructionAST::setter_setMAbstractGrammarInstructionSyntaxDirectedTranslationResult (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue
                                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInStringInstructionAST::setter_setMAbstractGrammarInstructionSyntaxDirectedTranslationResult (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @grammarInStringInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInStringInstructionAST::cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mLabelName,
                                                                        const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mEndOfSourceExpression,
                                                                        const GALGAS_semanticExpressionAST & in_mNameExpression,
                                                                        const GALGAS_location & in_mEndOfNameExpression,
                                                                        const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mEndOfSourceExpression (in_mEndOfSourceExpression),
mProperty_mNameExpression (in_mNameExpression),
mProperty_mEndOfNameExpression (in_mEndOfNameExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInStringInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

void cPtr_grammarInStringInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@grammarInStringInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInStringInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInStringInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mNameExpression, mProperty_mEndOfNameExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @grammarInStringInstructionAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST ("grammarInStringInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  const GALGAS_grammarInStringInstructionAST * p = (const GALGAS_grammarInStringInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInStringInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_incDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_incDecInstructionAST::objectCompare (const GALGAS_incDecInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_lstring & inAttribute_mReceiverName,
                                                                          const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                          const GALGAS_incDecKind & inAttribute_mKind
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_incDecInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_incDecInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_incDecInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_incDecInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind cPtr_incDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @incDecInstructionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mReceiverName,
                                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                                      const GALGAS_incDecKind & in_mKind
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@incDecInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @incDecInstructionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  const GALGAS_incDecInstructionAST * p = (const GALGAS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_incDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_incDecNoOVFInstructionAST::objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_incDecNoOVFInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_incDecNoOVFInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_incDecNoOVFInstructionAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind cPtr_incDecNoOVFInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @incDecNoOVFInstructionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_incDecNoOVFInstructionAST::cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_lstring & in_mReceiverName,
                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                const GALGAS_incDecKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

void cPtr_incDecNoOVFInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_incDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @incDecNoOVFInstructionAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ("incDecNoOVFInstructionAST",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  const GALGAS_incDecNoOVFInstructionAST * p = (const GALGAS_incDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_incDecInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_incDecInstructionForGeneration::objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                              const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                              const GALGAS_incDecKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_incDecInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_incDecInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_incDecInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mProperty_mReceiverCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_incDecInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_incDecInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_incDecInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_incDecInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind cPtr_incDecInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @incDecInstructionForGeneration class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mReceiverCppName,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                                                          const GALGAS_incDecKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@incDecInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @incDecInstructionForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  const GALGAS_incDecInstructionForGeneration * p = (const GALGAS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_incDecNoOVFInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_incDecNoOVFInstructionForGeneration::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                        const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                        const GALGAS_incDecKind & inAttribute_mKind
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_incDecNoOVFInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mProperty_mReceiverCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_incDecNoOVFInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_incDecNoOVFInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_incDecNoOVFInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_incDecNoOVFInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind cPtr_incDecNoOVFInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_incDecNoOVFInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @incDecNoOVFInstructionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mReceiverCppName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @incDecNoOVFInstructionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  const GALGAS_incDecNoOVFInstructionForGeneration * p = (const GALGAS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (p->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                        const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                                                        const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mIsConstant, inAttribute_mOptionalTypeName, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mProperty_mIsConstant ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mProperty_mVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_localVariableOrConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMIsConstant (GALGAS_bool inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    p->mProperty_mIsConstant = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMIsConstant (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsConstant = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMOptionalTypeName (GALGAS_lstring inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMOptionalTypeName (GALGAS_lstring inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionalTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                    Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_localVariableOrConstantDeclarationWithAssignmentAST::cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                    const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                    const GALGAS_lstring & in_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mIsConstant, mProperty_mOptionalTypeName, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @localVariableOrConstantDeclarationWithAssignmentAST type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ("localVariableOrConstantDeclarationWithAssignmentAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_undefinedLocalConstantDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantTypeName.objectCompare (p->mProperty_mConstantTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationAST::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_lstring & inAttribute_mConstantTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mConstantName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantTypeName.isValid () && inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationAST (inAttribute_mInstructionLocation, inAttribute_mConstantTypeName, inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    result = p->mProperty_mConstantTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_undefinedLocalConstantDeclarationAST::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_undefinedLocalConstantDeclarationAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_undefinedLocalConstantDeclarationAST::setter_setMConstantTypeName (GALGAS_lstring inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    p->mProperty_mConstantTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_undefinedLocalConstantDeclarationAST::setter_setMConstantTypeName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstantTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_undefinedLocalConstantDeclarationAST::setter_setMConstantName (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_undefinedLocalConstantDeclarationAST::setter_setMConstantName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstantName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @undefinedLocalConstantDeclarationAST class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                                      const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantTypeName (in_mConstantTypeName),
mProperty_mConstantName (in_mConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

void cPtr_undefinedLocalConstantDeclarationAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_undefinedLocalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationAST (mProperty_mInstructionLocation, mProperty_mConstantTypeName, mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @undefinedLocalConstantDeclarationAST type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ("undefinedLocalConstantDeclarationAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  const GALGAS_undefinedLocalConstantDeclarationAST * p = (const GALGAS_undefinedLocalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_localConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localConstantDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_localConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    result = p->mProperty_mVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_localConstantDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_localConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_localConstantDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localConstantDeclarationWithAssignmentAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localConstantDeclarationWithAssignmentAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localConstantDeclarationWithAssignmentAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localConstantDeclarationWithAssignmentAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @localConstantDeclarationWithAssignmentAST class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_localConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

void cPtr_localConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@localConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_localConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @localConstantDeclarationWithAssignmentAST type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ("localConstantDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST * p = (const GALGAS_localConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_undefinedLocalConstantDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                                 GALGAS_string::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                                              const GALGAS_string & inAttribute_mCppVariableName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (inAttribute_mTargetType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_undefinedLocalConstantDeclarationForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_undefinedLocalConstantDeclarationForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_undefinedLocalConstantDeclarationForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    result = p->mProperty_mCppVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_undefinedLocalConstantDeclarationForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_undefinedLocalConstantDeclarationForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_undefinedLocalConstantDeclarationForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_undefinedLocalConstantDeclarationForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    p->mProperty_mCppVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_undefinedLocalConstantDeclarationForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @undefinedLocalConstantDeclarationForGeneration class                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                                          const GALGAS_string & in_mCppVariableName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mCppVariableName (in_mCppVariableName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @undefinedLocalConstantDeclarationForGeneration type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_methodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_methodCallInstructionAST::objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                  const GALGAS_lstring & inAttribute_mMethodName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_methodCallInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_methodCallInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_methodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mProperty_mMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_methodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_methodCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_methodCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_methodCallInstructionAST::setter_setMReceiverExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_methodCallInstructionAST::setter_setMReceiverExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_methodCallInstructionAST::setter_setMMethodName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    p->mProperty_mMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_methodCallInstructionAST::setter_setMMethodName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_methodCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_methodCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @methodCallInstructionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                              const GALGAS_lstring & in_mMethodName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_methodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

void cPtr_methodCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@methodCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_methodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_methodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @methodCallInstructionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionAST ("methodCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_methodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  const GALGAS_methodCallInstructionAST * p = (const GALGAS_methodCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_procCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_procCallInstructionAST::objectCompare (const GALGAS_procCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                              const GALGAS_lstring & inAttribute_mRoutineName,
                                                                              const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_procCallInstructionAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_procCallInstructionAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_procCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_procCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procCallInstructionAST::setter_setMRoutineName (GALGAS_lstring inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_procCallInstructionAST::setter_setMRoutineName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_procCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @procCallInstructionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mRoutineName,
                                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@procCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_procCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mProperty_mInstructionLocation, mProperty_mRoutineName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @procCallInstructionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  const GALGAS_procCallInstructionAST * p = (const GALGAS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_procCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_procCallInstructionForGeneration::objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                  const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionForGeneration (inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_procCallInstructionForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_procCallInstructionForGeneration::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration GALGAS_procCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration cPtr_procCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procCallInstructionForGeneration::setter_setMRoutineName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_procCallInstructionForGeneration::setter_setMRoutineName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_procCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_procCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @procCallInstructionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_procCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

void cPtr_procCallInstructionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@procCallInstructionForGeneration:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_procCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionForGeneration (mProperty_mRoutineName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @procCallInstructionForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionForGeneration ("procCallInstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  const GALGAS_procCallInstructionForGeneration * p = (const GALGAS_procCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_setterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverStructAttributes.objectCompare (p->mProperty_mReceiverStructAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeNameForCasting.objectCompare (p->mProperty_mTypeNameForCasting) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_setterCallInstructionAST::objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_setterCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                  const GALGAS_lstringlist & inAttribute_mReceiverStructAttributes,
                                                                                  const GALGAS_lstring & inAttribute_mTypeNameForCasting,
                                                                                  const GALGAS_lstring & inAttribute_mSetterName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mTypeNameForCasting.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mReceiverStructAttributes, inAttribute_mTypeNameForCasting, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_setterCallInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_setterCallInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_setterCallInstructionAST::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mProperty_mReceiverStructAttributes ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_setterCallInstructionAST::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverStructAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_setterCallInstructionAST::getter_mTypeNameForCasting (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mProperty_mTypeNameForCasting ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_setterCallInstructionAST::getter_mTypeNameForCasting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeNameForCasting ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_setterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mProperty_mSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_setterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_setterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_setterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionAST::setter_setMReceiverStructAttributes (GALGAS_lstringlist inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    p->mProperty_mReceiverStructAttributes = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionAST::setter_setMReceiverStructAttributes (GALGAS_lstringlist inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverStructAttributes = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionAST::setter_setMTypeNameForCasting (GALGAS_lstring inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    p->mProperty_mTypeNameForCasting = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionAST::setter_setMTypeNameForCasting (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeNameForCasting = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionAST::setter_setMSetterName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    p->mProperty_mSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionAST::setter_setMSetterName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @setterCallInstructionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mReceiverName,
                                                              const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                              const GALGAS_lstring & in_mTypeNameForCasting,
                                                              const GALGAS_lstring & in_mSetterName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverStructAttributes (in_mReceiverStructAttributes),
mProperty_mTypeNameForCasting (in_mTypeNameForCasting),
mProperty_mSetterName (in_mSetterName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_setterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

void cPtr_setterCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@setterCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeNameForCasting.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_setterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverName, mProperty_mReceiverStructAttributes, mProperty_mTypeNameForCasting, mProperty_mSetterName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @setterCallInstructionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionAST ("setterCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_setterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_setterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  const GALGAS_setterCallInstructionAST * p = (const GALGAS_setterCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selfSetterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_selfSetterCallInstructionAST::objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfSetterCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (const cPtr_selfSetterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mSetterName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selfSetterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    result = p->mProperty_mSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selfSetterCallInstructionAST::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_selfSetterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_selfSetterCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionAST::setter_setMSetterName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    p->mProperty_mSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionAST::setter_setMSetterName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @selfSetterCallInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mSetterName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSetterName (in_mSetterName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

void cPtr_selfSetterCallInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@selfSetterCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selfSetterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mSetterName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @selfSetterCallInstructionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ("selfSetterCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selfSetterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  const GALGAS_selfSetterCallInstructionAST * p = (const GALGAS_selfSetterCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfSetterCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_setterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverBaseName.objectCompare (p->mProperty_mReceiverBaseName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverStructAttributes.objectCompare (p->mProperty_mReceiverStructAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodBaseType.objectCompare (p->mProperty_mMethodBaseType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_setterCallInstructionForGeneration::objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                      const GALGAS_string & inAttribute_mReceiverBaseName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mReceiverStructAttributes,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mCastType,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                      const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverBaseName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mCastType.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverBaseName, inAttribute_mReceiverStructAttributes, inAttribute_mCastType, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_setterCallInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_setterCallInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_setterCallInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_setterCallInstructionForGeneration::getter_mReceiverCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_setterCallInstructionForGeneration::getter_mReceiverBaseName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverBaseName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_setterCallInstructionForGeneration::getter_mReceiverBaseName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverBaseName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_setterCallInstructionForGeneration::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverStructAttributes ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_setterCallInstructionForGeneration::getter_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverStructAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mCastType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_setterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_setterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodKind GALGAS_setterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodKind cPtr_setterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration GALGAS_setterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration cPtr_setterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_setterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_setterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_setterCallInstructionForGeneration::getter_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    result = p->mProperty_mMethodBaseType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_setterCallInstructionForGeneration::getter_mMethodBaseType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMethodBaseType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMReceiverBaseName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mReceiverBaseName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMReceiverBaseName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverBaseName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMReceiverStructAttributes (GALGAS_lstringlist inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mReceiverStructAttributes = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMReceiverStructAttributes (GALGAS_lstringlist inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverStructAttributes = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mCastType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCastType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMSetterName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMSetterName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_setterCallInstructionForGeneration::setter_setMMethodBaseType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    p->mProperty_mMethodBaseType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_setterCallInstructionForGeneration::setter_setMMethodBaseType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMethodBaseType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @setterCallInstructionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_setterCallInstructionForGeneration::cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_string & in_mReceiverCppName,
                                                                                  const GALGAS_string & in_mReceiverBaseName,
                                                                                  const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mCastType,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                  const GALGAS_lstring & in_mSetterName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverBaseName (in_mReceiverBaseName),
mProperty_mReceiverStructAttributes (in_mReceiverStructAttributes),
mProperty_mCastType (in_mCastType),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mSetterName (in_mSetterName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mMethodBaseType (in_mMethodBaseType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_setterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

void cPtr_setterCallInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@setterCallInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverBaseName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_setterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverBaseName, mProperty_mReceiverStructAttributes, mProperty_mCastType, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @setterCallInstructionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ("setterCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_setterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_setterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  const GALGAS_setterCallInstructionForGeneration * p = (const GALGAS_setterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selfSetterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfCppName.objectCompare (p->mProperty_mSelfCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_selfSetterCallInstructionForGeneration::objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mSelfCppName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                              const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                              const GALGAS_methodKind & inAttribute_mKind,
                                                                                                              const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                              const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  if (inAttribute_mSelfCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionForGeneration (inAttribute_mSelfCppName, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selfSetterCallInstructionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mProperty_mSelfCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_selfSetterCallInstructionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_selfSetterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_selfSetterCallInstructionForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selfSetterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mProperty_mSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selfSetterCallInstructionForGeneration::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodKind GALGAS_selfSetterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodKind cPtr_selfSetterCallInstructionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration GALGAS_selfSetterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration cPtr_selfSetterCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_selfSetterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_selfSetterCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionForGeneration::setter_setMSelfCppName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    p->mProperty_mSelfCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionForGeneration::setter_setMSelfCppName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelfCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionForGeneration::setter_setMSetterName (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    p->mProperty_mSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionForGeneration::setter_setMSetterName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfSetterCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfSetterCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @selfSetterCallInstructionForGeneration class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selfSetterCallInstructionForGeneration::cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                          const GALGAS_lstring & in_mSetterName,
                                                                                          const GALGAS_methodKind & in_mKind,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mSelfCppName (in_mSelfCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mSetterName (in_mSetterName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

void cPtr_selfSetterCallInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@selfSetterCallInstructionForGeneration:" ;
  mProperty_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selfSetterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionForGeneration (mProperty_mSelfCppName, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @selfSetterCallInstructionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ("selfSetterCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selfSetterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  const GALGAS_selfSetterCallInstructionForGeneration * p = (const GALGAS_selfSetterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfSetterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeMethodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeMethodCallInstructionAST::objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeMethodCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mMethodName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeMethodCallInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    result = p->mProperty_mMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeMethodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST GALGAS_typeMethodCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListAST cPtr_typeMethodCallInstructionAST::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionAST::setter_setMMethodName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    p->mProperty_mMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionAST::setter_setMMethodName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionAST::setter_setMActualParameterList (GALGAS_actualParameterListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @typeMethodCallInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeMethodCallInstructionAST::cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mMethodName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

void cPtr_typeMethodCallInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@typeMethodCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeMethodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @typeMethodCallInstructionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ("typeMethodCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeMethodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  const GALGAS_typeMethodCallInstructionAST * p = (const GALGAS_typeMethodCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typeMethodCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typeMethodCallInstructionForGeneration::objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionForGeneration::GALGAS_typeMethodCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeMethodCallInstructionForGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_actualParameterListForGeneration::constructor_emptyList (HERE),
                                                                         GALGAS_bool::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionForGeneration::GALGAS_typeMethodCallInstructionForGeneration (const cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                              const GALGAS_lstring & inAttribute_mMethodName,
                                                                                                              const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                              const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionForGeneration (inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeMethodCallInstructionForGeneration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeMethodCallInstructionForGeneration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typeMethodCallInstructionForGeneration::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    result = p->mProperty_mMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typeMethodCallInstructionForGeneration::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration GALGAS_typeMethodCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration cPtr_typeMethodCallInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeMethodCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_typeMethodCallInstructionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionForGeneration::setter_setMTypeName (GALGAS_lstring inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionForGeneration::setter_setMTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionForGeneration::setter_setMMethodName (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    p->mProperty_mMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionForGeneration::setter_setMMethodName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeMethodCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_typeMethodCallInstructionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @typeMethodCallInstructionForGeneration class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typeMethodCallInstructionForGeneration::cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                                                          const GALGAS_lstring & in_mMethodName,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;
}

void cPtr_typeMethodCallInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@typeMethodCallInstructionForGeneration:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typeMethodCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionForGeneration (mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @typeMethodCallInstructionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ("typeMethodCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeMethodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  const GALGAS_typeMethodCallInstructionForGeneration * p = (const GALGAS_typeMethodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_localVariableDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationAST * p = (const cPtr_localVariableDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUndefinedConstant.objectCompare (p->mProperty_mIsUndefinedConstant) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_localVariableDeclarationAST::objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationAST::GALGAS_localVariableDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableDeclarationAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationAST::GALGAS_localVariableDeclarationAST (const cPtr_localVariableDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mVariableName,
                                                                                        const GALGAS_bool & inAttribute_mIsUndefinedConstant
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mIsUndefinedConstant.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mVariableName, inAttribute_mIsUndefinedConstant COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_localVariableDeclarationAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationAST * p = (const cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_localVariableDeclarationAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_localVariableDeclarationAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationAST * p = (const cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    result = p->mProperty_mVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_localVariableDeclarationAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_localVariableDeclarationAST::getter_mIsUndefinedConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationAST * p = (const cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    result = p->mProperty_mIsUndefinedConstant ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_localVariableDeclarationAST::getter_mIsUndefinedConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUndefinedConstant ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationAST::setter_setMTypeName (GALGAS_lstring inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationAST * p = (cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationAST::setter_setMTypeName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationAST * p = (cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationAST::setter_setMIsUndefinedConstant (GALGAS_bool inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationAST * p = (cPtr_localVariableDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationAST) ;
    p->mProperty_mIsUndefinedConstant = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationAST::setter_setMIsUndefinedConstant (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsUndefinedConstant = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @localVariableDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_localVariableDeclarationAST::cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_lstring & in_mTypeName,
                                                                    const GALGAS_lstring & in_mVariableName,
                                                                    const GALGAS_bool & in_mIsUndefinedConstant
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mVariableName (in_mVariableName),
mProperty_mIsUndefinedConstant (in_mIsUndefinedConstant) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_localVariableDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationAST ;
}

void cPtr_localVariableDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUndefinedConstant.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_localVariableDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mVariableName, mProperty_mIsUndefinedConstant COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @localVariableDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationAST ("localVariableDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_localVariableDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationAST GALGAS_localVariableDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationAST result ;
  const GALGAS_localVariableDeclarationAST * p = (const GALGAS_localVariableDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_localVariableDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mVariableType.objectCompare (p->mProperty_mVariableType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_localVariableDeclarationForGeneration::objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_localVariableDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mVariableType,
                                                                                                            const GALGAS_string & inAttribute_mCppVariableName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  if (inAttribute_mVariableType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (inAttribute_mVariableType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localVariableDeclarationForGeneration::getter_mVariableType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    result = p->mProperty_mVariableType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_localVariableDeclarationForGeneration::getter_mVariableType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariableType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_localVariableDeclarationForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    result = p->mProperty_mCppVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_localVariableDeclarationForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationForGeneration::setter_setMVariableType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    p->mProperty_mVariableType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationForGeneration::setter_setMVariableType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariableType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    p->mProperty_mCppVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @localVariableDeclarationForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType,
                                                                                        const GALGAS_string & in_mCppVariableName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mVariableType (in_mVariableType),
mProperty_mCppVariableName (in_mCppVariableName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationForGeneration:" ;
  mProperty_mVariableType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mProperty_mVariableType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @localVariableDeclarationForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  const GALGAS_localVariableDeclarationForGeneration * p = (const GALGAS_localVariableDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_localVariableDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationWithAssignmentAST * p = (const cPtr_localVariableDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_localVariableDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationWithAssignmentAST::GALGAS_localVariableDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationWithAssignmentAST::GALGAS_localVariableDeclarationWithAssignmentAST (const cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_localVariableDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationWithAssignmentAST * p = (const cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    result = p->mProperty_mVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_localVariableDeclarationWithAssignmentAST::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_localVariableDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableDeclarationWithAssignmentAST * p = (const cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_localVariableDeclarationWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationWithAssignmentAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationWithAssignmentAST::setter_setMVariableName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableDeclarationWithAssignmentAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableDeclarationWithAssignmentAST::setter_setMSourceExpression (GALGAS_semanticExpressionAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @localVariableDeclarationWithAssignmentAST class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_localVariableDeclarationWithAssignmentAST::cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_localVariableDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

void cPtr_localVariableDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@localVariableDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_localVariableDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @localVariableDeclarationWithAssignmentAST type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ("localVariableDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_localVariableDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableDeclarationWithAssignmentAST * p = (const GALGAS_localVariableDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_readAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfKeyExpression.objectCompare (p->mProperty_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_else_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_readAccessWithInstructionAST::objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (const cPtr_readAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readAccessWithInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mPrefix,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                          const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mDoBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_mElseBranchInstructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_mElseBranchInstructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_readAccessWithInstructionAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mPrefix ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_readAccessWithInstructionAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPrefix ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_readAccessWithInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readAccessWithInstructionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mEndOfReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readAccessWithInstructionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mKeyExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_readAccessWithInstructionAST::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKeyExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readAccessWithInstructionAST::getter_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mEndOfKeyExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readAccessWithInstructionAST::getter_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfKeyExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_readAccessWithInstructionAST::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_readAccessWithInstructionAST::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodNameForErrorSignaling ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::getter_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mDoBranchInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_readAccessWithInstructionAST::getter_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoBranchInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readAccessWithInstructionAST::getter_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mEndOf_5F_do_5F_instructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readAccessWithInstructionAST::getter_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_instructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::getter_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mElseBranchInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_readAccessWithInstructionAST::getter_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseBranchInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readAccessWithInstructionAST::getter_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mProperty_mEndOf_5F_else_5F_instructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readAccessWithInstructionAST::getter_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_else_5F_instructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMPrefix (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mPrefix = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMPrefix (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPrefix = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMReceiverExpression (GALGAS_semanticExpressionAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMReceiverExpression (GALGAS_semanticExpressionAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMEndOfReceiverExpression (GALGAS_location inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOfReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMEndOfReceiverExpression (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMKeyExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMKeyExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKeyExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMEndOfKeyExpression (GALGAS_location inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOfKeyExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMEndOfKeyExpression (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfKeyExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMSearchMethodNameForErrorSignaling (GALGAS_lstring inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMSearchMethodNameForErrorSignaling (GALGAS_lstring inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodNameForErrorSignaling = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mDoBranchInstructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMDoBranchInstructions (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoBranchInstructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMEndOf_5F_do_5F_instructions (GALGAS_location inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMEndOf_5F_do_5F_instructions (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_do_5F_instructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mElseBranchInstructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMElseBranchInstructions (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseBranchInstructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readAccessWithInstructionAST::setter_setMEndOf_5F_else_5F_instructions (GALGAS_location inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_else_5F_instructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readAccessWithInstructionAST::setter_setMEndOf_5F_else_5F_instructions (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_else_5F_instructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @readAccessWithInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_readAccessWithInstructionAST::cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mPrefix,
                                                                      const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                      const GALGAS_location & in_mEndOfReceiverExpression,
                                                                      const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                      const GALGAS_location & in_mEndOfKeyExpression,
                                                                      const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                      const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mEndOfKeyExpression (in_mEndOfKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions),
mProperty_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_readAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

void cPtr_readAccessWithInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@readAccessWithInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_readAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readAccessWithInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefix, mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mKeyExpression, mProperty_mEndOfKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mEndOf_5F_do_5F_instructions, mProperty_mElseBranchInstructions, mProperty_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @readAccessWithInstructionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readAccessWithInstructionAST ("readAccessWithInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_readAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_readAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  const GALGAS_readAccessWithInstructionAST * p = (const GALGAS_readAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_readWriteAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldList.objectCompare (p->mProperty_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfKeyExpression.objectCompare (p->mProperty_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_do_5F_Instructions.objectCompare (p->mProperty_m_5F_do_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_Instructions.objectCompare (p->mProperty_m_5F_else_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_else_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_readWriteAccessWithInstructionAST::objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (const cPtr_readWriteAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteAccessWithInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_lstringlist & inAttribute_mFieldList,
                                                                                                    const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                                    const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_do_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_else_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_m_5F_do_5F_Instructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_m_5F_else_5F_Instructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readWriteAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverName, inAttribute_mFieldList, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_m_5F_do_5F_Instructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_m_5F_else_5F_Instructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mPrefix ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_readWriteAccessWithInstructionAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPrefix ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_readWriteAccessWithInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_readWriteAccessWithInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mFieldList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_readWriteAccessWithInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mEndOfReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_readWriteAccessWithInstructionAST::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mKeyExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_readWriteAccessWithInstructionAST::getter_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKeyExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::getter_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mEndOfKeyExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::getter_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfKeyExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_readWriteAccessWithInstructionAST::getter_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodNameForErrorSignaling ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::getter_m_5F_do_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_m_5F_do_5F_Instructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_readWriteAccessWithInstructionAST::getter_m_5F_do_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_do_5F_Instructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::getter_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mEndOf_5F_do_5F_instructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::getter_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_instructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::getter_m_5F_else_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_m_5F_else_5F_Instructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_readWriteAccessWithInstructionAST::getter_m_5F_else_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_else_5F_Instructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::getter_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mProperty_mEndOf_5F_else_5F_instructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::getter_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_else_5F_instructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMPrefix (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mPrefix = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMPrefix (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPrefix = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMFieldList (GALGAS_lstringlist inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mFieldList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMFieldList (GALGAS_lstringlist inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFieldList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOfReceiverExpression (GALGAS_location inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOfReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMEndOfReceiverExpression (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMKeyExpression (GALGAS_semanticExpressionAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mKeyExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMKeyExpression (GALGAS_semanticExpressionAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKeyExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOfKeyExpression (GALGAS_location inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOfKeyExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMEndOfKeyExpression (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfKeyExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMSearchMethodNameForErrorSignaling (GALGAS_lstring inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mSearchMethodNameForErrorSignaling = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMSearchMethodNameForErrorSignaling (GALGAS_lstring inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodNameForErrorSignaling = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setM_5F_do_5F_Instructions (GALGAS_semanticInstructionListAST inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_m_5F_do_5F_Instructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setM_5F_do_5F_Instructions (GALGAS_semanticInstructionListAST inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_do_5F_Instructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOf_5F_do_5F_instructions (GALGAS_location inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMEndOf_5F_do_5F_instructions (GALGAS_location inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_do_5F_instructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setM_5F_else_5F_Instructions (GALGAS_semanticInstructionListAST inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_m_5F_else_5F_Instructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setM_5F_else_5F_Instructions (GALGAS_semanticInstructionListAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_else_5F_Instructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_readWriteAccessWithInstructionAST::setter_setMEndOf_5F_else_5F_instructions (GALGAS_location inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    p->mProperty_mEndOf_5F_else_5F_instructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_readWriteAccessWithInstructionAST::setter_setMEndOf_5F_else_5F_instructions (GALGAS_location inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_else_5F_instructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @readWriteAccessWithInstructionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_readWriteAccessWithInstructionAST::cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstring & in_mPrefix,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_lstringlist & in_mFieldList,
                                                                                const GALGAS_location & in_mEndOfReceiverExpression,
                                                                                const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                                const GALGAS_location & in_mEndOfKeyExpression,
                                                                                const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mFieldList (in_mFieldList),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mEndOfKeyExpression (in_mEndOfKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_m_5F_do_5F_Instructions (in_m_5F_do_5F_Instructions),
mProperty_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mProperty_m_5F_else_5F_Instructions (in_m_5F_else_5F_Instructions),
mProperty_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_readWriteAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

void cPtr_readWriteAccessWithInstructionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@readWriteAccessWithInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_do_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_else_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_readWriteAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readWriteAccessWithInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefix, mProperty_mReceiverName, mProperty_mFieldList, mProperty_mEndOfReceiverExpression, mProperty_mKeyExpression, mProperty_mEndOfKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_m_5F_do_5F_Instructions, mProperty_mEndOf_5F_do_5F_instructions, mProperty_m_5F_else_5F_Instructions, mProperty_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @readWriteAccessWithInstructionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ("readWriteAccessWithInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_readWriteAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_readWriteAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  const GALGAS_readWriteAccessWithInstructionAST * p = (const GALGAS_readWriteAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readWriteAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

