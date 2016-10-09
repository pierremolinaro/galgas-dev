#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-12.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_listTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListElementTypeIndex.objectCompare (p->mAttribute_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_listTypeForGeneration::objectCompare (const GALGAS_listTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_typedPropertyList::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mListElementTypeIndex,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_listTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    result = p->mAttribute_mListElementTypeIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_listTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListElementTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_listTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_listTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @listTypeForGeneration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mListElementTypeIndex,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mListElementTypeIndex (in_mListElementTypeIndex),
mAttribute_mTypedAttributeList (in_mTypedAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_listTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mListElementTypeIndex, mAttribute_mTypedAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @listTypeForGeneration type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  const GALGAS_listTypeForGeneration * p = (const GALGAS_listTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_listmapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListmapTypeName.objectCompare (p->mAttribute_mListmapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedListTypeName.objectCompare (p->mAttribute_mAssociatedListTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_listmapDeclarationAST::objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (const cPtr_listmapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_lstring & inAttribute_mListmapTypeName,
                                                                            const GALGAS_lstring & inAttribute_mAssociatedListTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mListmapTypeName.isValid () && inAttribute_mAssociatedListTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mListmapTypeName, inAttribute_mAssociatedListTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_listmapDeclarationAST::getter_mListmapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    result = p->mAttribute_mListmapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_listmapDeclarationAST::getter_mListmapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListmapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_listmapDeclarationAST::getter_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    result = p->mAttribute_mAssociatedListTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_listmapDeclarationAST::getter_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedListTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @listmapDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_listmapDeclarationAST::cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mListmapTypeName,
                                                        const GALGAS_lstring & in_mAssociatedListTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mListmapTypeName (in_mListmapTypeName),
mAttribute_mAssociatedListTypeName (in_mAssociatedListTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_listmapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

void cPtr_listmapDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listmapDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListmapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_listmapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapDeclarationAST (mAttribute_mIsPredefined, mAttribute_mListmapTypeName, mAttribute_mAssociatedListTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @listmapDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST ("listmapDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listmapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST result ;
  const GALGAS_listmapDeclarationAST * p = (const GALGAS_listmapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_listmapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedListTypeIndex.objectCompare (p->mAttribute_mAssociatedListTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedListTypedAttributeList.objectCompare (p->mAttribute_mAssociatedListTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedListMapElementTypeIndex.objectCompare (p->mAttribute_mAssociatedListMapElementTypeIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_listmapTypeForGeneration::objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (const cPtr_listmapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedListTypeIndex,
                                                                                  const GALGAS_typedPropertyList & inAttribute_mAssociatedListTypedAttributeList,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedListMapElementTypeIndex
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mAssociatedListTypeIndex.isValid () && inAttribute_mAssociatedListTypedAttributeList.isValid () && inAttribute_mAssociatedListMapElementTypeIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mAssociatedListTypeIndex, inAttribute_mAssociatedListTypedAttributeList, inAttribute_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_listmapTypeForGeneration::getter_mAssociatedListTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    result = p->mAttribute_mAssociatedListTypeIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_listmapTypeForGeneration::getter_mAssociatedListTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedListTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_listmapTypeForGeneration::getter_mAssociatedListTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    result = p->mAttribute_mAssociatedListTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_listmapTypeForGeneration::getter_mAssociatedListTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedListTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_listmapTypeForGeneration::getter_mAssociatedListMapElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    result = p->mAttribute_mAssociatedListMapElementTypeIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_listmapTypeForGeneration::getter_mAssociatedListMapElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedListMapElementTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @listmapTypeForGeneration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_listmapTypeForGeneration::cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListTypeIndex,
                                                              const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListMapElementTypeIndex
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mAssociatedListTypeIndex (in_mAssociatedListTypeIndex),
mAttribute_mAssociatedListTypedAttributeList (in_mAssociatedListTypedAttributeList),
mAttribute_mAssociatedListMapElementTypeIndex (in_mAssociatedListMapElementTypeIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_listmapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

void cPtr_listmapTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@listmapTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedListTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedListTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedListMapElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_listmapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mAssociatedListTypeIndex, mAttribute_mAssociatedListTypedAttributeList, mAttribute_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @listmapTypeForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapTypeForGeneration ("listmapTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listmapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listmapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  const GALGAS_listmapTypeForGeneration * p = (const GALGAS_listmapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapTypeName.objectCompare (p->mAttribute_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyList.objectCompare (p->mAttribute_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertMethodList.objectCompare (p->mAttribute_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRemoveMethodList.objectCompare (p->mAttribute_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertOrReplaceDeclarationListAST.objectCompare (p->mAttribute_mInsertOrReplaceDeclarationListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_mapDeclarationAST::objectCompare (const GALGAS_mapDeclarationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                    GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_mapRemoveMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                    const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                    const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                    const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                    const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                    const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                    const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                    const GALGAS_insertOrReplaceDeclarationListAST & inAttribute_mInsertOrReplaceDeclarationListAST
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mInsertOrReplaceDeclarationListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_mapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_mapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_mapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_mapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_mapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mInsertMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST cPtr_mapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_mapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapDeclarationAST::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mRemoveMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST cPtr_mapDeclarationAST::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRemoveMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_mapDeclarationAST::getter_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mInsertOrReplaceDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST cPtr_mapDeclarationAST::getter_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertOrReplaceDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @mapDeclarationAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_lstring & in_mMapTypeName,
                                                const GALGAS_lstringlist & in_mAttributeList,
                                                const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mMapTypeName (in_mMapTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mPropertyList (in_mPropertyList),
mAttribute_mInsertMethodList (in_mInsertMethodList),
mAttribute_mSearchMethodList (in_mSearchMethodList),
mAttribute_mRemoveMethodList (in_mRemoveMethodList),
mAttribute_mInsertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@mapDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_mapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mAttribute_mIsPredefined, mAttribute_mMapTypeName, mAttribute_mAttributeList, mAttribute_mPropertyList, mAttribute_mInsertMethodList, mAttribute_mSearchMethodList, mAttribute_mRemoveMethodList, mAttribute_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @mapDeclarationAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  const GALGAS_mapDeclarationAST * p = (const GALGAS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementTypeProxy.objectCompare (p->mAttribute_mElementTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapTypeName.objectCompare (p->mAttribute_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertMethodList.objectCompare (p->mAttribute_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRemoveMethodList.objectCompare (p->mAttribute_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasInsertOrReplaceModifier.objectCompare (p->mAttribute_mHasInsertOrReplaceModifier) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_mapTypeForGeneration::objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_mapRemoveMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mElementTypeProxy,
                                                                          const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                          const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                          const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                          const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                          const GALGAS_bool & inAttribute_mHasInsertOrReplaceModifier
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mElementTypeProxy.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mHasInsertOrReplaceModifier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mElementTypeProxy, inAttribute_mMapTypeName, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mHasInsertOrReplaceModifier COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_mapTypeForGeneration::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mElementTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_mapTypeForGeneration::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_mapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_mapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_mapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mInsertMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST cPtr_mapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_mapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapTypeForGeneration::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mRemoveMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST cPtr_mapTypeForGeneration::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRemoveMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mapTypeForGeneration::getter_mHasInsertOrReplaceModifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mAttribute_mHasInsertOrReplaceModifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_mapTypeForGeneration::getter_mHasInsertOrReplaceModifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasInsertOrReplaceModifier ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @mapTypeForGeneration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                                      const GALGAS_lstring & in_mMapTypeName,
                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mElementTypeProxy (in_mElementTypeProxy),
mAttribute_mMapTypeName (in_mMapTypeName),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mInsertMethodList (in_mInsertMethodList),
mAttribute_mSearchMethodList (in_mSearchMethodList),
mAttribute_mRemoveMethodList (in_mRemoveMethodList),
mAttribute_mHasInsertOrReplaceModifier (in_mHasInsertOrReplaceModifier) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@mapTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_mapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mElementTypeProxy, mAttribute_mMapTypeName, mAttribute_mTypedAttributeList, mAttribute_mInsertMethodList, mAttribute_mSearchMethodList, mAttribute_mRemoveMethodList, mAttribute_mHasInsertOrReplaceModifier COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapTypeForGeneration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  const GALGAS_mapTypeForGeneration * p = (const GALGAS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mapProxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapProxyTypeName.objectCompare (p->mAttribute_mMapProxyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedMapTypeName.objectCompare (p->mAttribute_mAssociatedMapTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_mapProxyDeclarationAST::objectCompare (const GALGAS_mapProxyDeclarationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST::GALGAS_mapProxyDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST::GALGAS_mapProxyDeclarationAST (const cPtr_mapProxyDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapProxyDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_lstring & inAttribute_mMapProxyTypeName,
                                                                              const GALGAS_lstring & inAttribute_mAssociatedMapTypeName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapProxyTypeName.isValid () && inAttribute_mAssociatedMapTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapProxyDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapProxyTypeName, inAttribute_mAssociatedMapTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapProxyDeclarationAST::getter_mMapProxyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    result = p->mAttribute_mMapProxyTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapProxyDeclarationAST::getter_mMapProxyTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapProxyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapProxyDeclarationAST::getter_mAssociatedMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    result = p->mAttribute_mAssociatedMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapProxyDeclarationAST::getter_mAssociatedMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @mapProxyDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mapProxyDeclarationAST::cPtr_mapProxyDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_lstring & in_mMapProxyTypeName,
                                                          const GALGAS_lstring & in_mAssociatedMapTypeName
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mMapProxyTypeName (in_mMapProxyTypeName),
mAttribute_mAssociatedMapTypeName (in_mAssociatedMapTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_mapProxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;
}

void cPtr_mapProxyDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@mapProxyDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapProxyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedMapTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_mapProxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapProxyDeclarationAST (mAttribute_mIsPredefined, mAttribute_mMapProxyTypeName, mAttribute_mAssociatedMapTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapProxyDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapProxyDeclarationAST ("mapProxyDeclarationAST",
                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapProxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapProxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapProxyDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyDeclarationAST result ;
  const GALGAS_mapProxyDeclarationAST * p = (const GALGAS_mapProxyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapProxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapProxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mapProxyTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedMapTypeProxy.objectCompare (p->mAttribute_mAssociatedMapTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedMapTypedAttributeList.objectCompare (p->mAttribute_mAssociatedMapTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_mapProxyTypeForGeneration::objectCompare (const GALGAS_mapProxyTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyTypeForGeneration::GALGAS_mapProxyTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyTypeForGeneration GALGAS_mapProxyTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                            GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                            GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                            GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyTypeForGeneration::GALGAS_mapProxyTypeForGeneration (const cPtr_mapProxyTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapProxyTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyTypeForGeneration GALGAS_mapProxyTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedMapTypeProxy,
                                                                                    const GALGAS_typedPropertyList & inAttribute_mAssociatedMapTypedAttributeList,
                                                                                    const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mAssociatedMapTypeProxy.isValid () && inAttribute_mAssociatedMapTypedAttributeList.isValid () && inAttribute_mSearchMethodList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapProxyTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mAssociatedMapTypeProxy, inAttribute_mAssociatedMapTypedAttributeList, inAttribute_mSearchMethodList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_mapProxyTypeForGeneration::getter_mAssociatedMapTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    result = p->mAttribute_mAssociatedMapTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_mapProxyTypeForGeneration::getter_mAssociatedMapTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedMapTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_mapProxyTypeForGeneration::getter_mAssociatedMapTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    result = p->mAttribute_mAssociatedMapTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_mapProxyTypeForGeneration::getter_mAssociatedMapTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedMapTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapProxyTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_mapProxyTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @mapProxyTypeForGeneration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mapProxyTypeForGeneration::cPtr_mapProxyTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedMapTypeProxy,
                                                                const GALGAS_typedPropertyList & in_mAssociatedMapTypedAttributeList,
                                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mAssociatedMapTypeProxy (in_mAssociatedMapTypeProxy),
mAttribute_mAssociatedMapTypedAttributeList (in_mAssociatedMapTypedAttributeList),
mAttribute_mSearchMethodList (in_mSearchMethodList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_mapProxyTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ;
}

void cPtr_mapProxyTypeForGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@mapProxyTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedMapTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedMapTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_mapProxyTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapProxyTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mAssociatedMapTypeProxy, mAttribute_mAssociatedMapTypedAttributeList, mAttribute_mSearchMethodList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mapProxyTypeForGeneration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ("mapProxyTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapProxyTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapProxyTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapProxyTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyTypeForGeneration GALGAS_mapProxyTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyTypeForGeneration result ;
  const GALGAS_mapProxyTypeForGeneration * p = (const GALGAS_mapProxyTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapProxyTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapProxyTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sharedMapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapTypeName.objectCompare (p->mAttribute_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyList.objectCompare (p->mAttribute_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertMethodList.objectCompare (p->mAttribute_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapStateList.objectCompare (p->mAttribute_mMapStateList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapOverrideBlockListAST.objectCompare (p->mAttribute_mMapOverrideBlockListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSharedMapAttributeListAST.objectCompare (p->mAttribute_mSharedMapAttributeListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sharedMapDeclarationAST::objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                          GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapStateList::constructor_emptyList (HERE),
                                                          GALGAS_mapOverrideBlockListAST::constructor_emptyList (HERE),
                                                          GALGAS_sharedMapAttributeListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (const cPtr_sharedMapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                                const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                                const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                const GALGAS_mapStateList & inAttribute_mMapStateList,
                                                                                const GALGAS_mapOverrideBlockListAST & inAttribute_mMapOverrideBlockListAST,
                                                                                const GALGAS_sharedMapAttributeListAST & inAttribute_mSharedMapAttributeListAST
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapStateList.isValid () && inAttribute_mMapOverrideBlockListAST.isValid () && inAttribute_mSharedMapAttributeListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapStateList, inAttribute_mMapOverrideBlockListAST, inAttribute_mSharedMapAttributeListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sharedMapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_sharedMapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_sharedMapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_sharedMapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_sharedMapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_sharedMapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_sharedMapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mInsertMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST cPtr_sharedMapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_sharedMapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_sharedMapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList GALGAS_sharedMapDeclarationAST::getter_mMapStateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mMapStateList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList cPtr_sharedMapDeclarationAST::getter_mMapStateList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapStateList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST GALGAS_sharedMapDeclarationAST::getter_mMapOverrideBlockListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mMapOverrideBlockListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST cPtr_sharedMapDeclarationAST::getter_mMapOverrideBlockListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapOverrideBlockListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapDeclarationAST::getter_mSharedMapAttributeListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mSharedMapAttributeListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST cPtr_sharedMapDeclarationAST::getter_mSharedMapAttributeListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSharedMapAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @sharedMapDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sharedMapDeclarationAST::cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_lstring & in_mMapTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                            const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                            const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                            const GALGAS_mapStateList & in_mMapStateList,
                                                            const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST,
                                                            const GALGAS_sharedMapAttributeListAST & in_mSharedMapAttributeListAST
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mMapTypeName (in_mMapTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mPropertyList (in_mPropertyList),
mAttribute_mInsertMethodList (in_mInsertMethodList),
mAttribute_mSearchMethodList (in_mSearchMethodList),
mAttribute_mMapStateList (in_mMapStateList),
mAttribute_mMapOverrideBlockListAST (in_mMapOverrideBlockListAST),
mAttribute_mSharedMapAttributeListAST (in_mSharedMapAttributeListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sharedMapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

void cPtr_sharedMapDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@sharedMapDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapStateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapOverrideBlockListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSharedMapAttributeListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sharedMapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapDeclarationAST (mAttribute_mIsPredefined, mAttribute_mMapTypeName, mAttribute_mAttributeList, mAttribute_mPropertyList, mAttribute_mInsertMethodList, mAttribute_mSearchMethodList, mAttribute_mMapStateList, mAttribute_mMapOverrideBlockListAST, mAttribute_mSharedMapAttributeListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sharedMapDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapDeclarationAST ("sharedMapDeclarationAST",
                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sharedMapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sharedMapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  const GALGAS_sharedMapDeclarationAST * p = (const GALGAS_sharedMapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sharedMapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapTypeName.objectCompare (p->mAttribute_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertMethodList.objectCompare (p->mAttribute_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapAutomatonStateMap.objectCompare (p->mAttribute_mMapAutomatonStateMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapAutomatonActionMap.objectCompare (p->mAttribute_mMapAutomatonActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapStateSortedList.objectCompare (p->mAttribute_mMapStateSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapOverrideList.objectCompare (p->mAttribute_mMapOverrideList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mShadowBehaviour.objectCompare (p->mAttribute_mShadowBehaviour) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mShadowMessage.objectCompare (p->mAttribute_mShadowMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sharedMapTypeForGeneration::objectCompare (const GALGAS_sharedMapTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapTypeForGeneration::GALGAS_sharedMapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapTypeForGeneration::GALGAS_sharedMapTypeForGeneration (const cPtr_sharedMapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                      const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                                      const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                      const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                      const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                      const GALGAS_mapAutomatonStateMap & inAttribute_mMapAutomatonStateMap,
                                                                                      const GALGAS_mapAutomatonActionMap & inAttribute_mMapAutomatonActionMap,
                                                                                      const GALGAS_mapStateSortedList & inAttribute_mMapStateSortedList,
                                                                                      const GALGAS_mapOverrideList & inAttribute_mMapOverrideList,
                                                                                      const GALGAS_mapAutomatonMessageKind & inAttribute_mShadowBehaviour,
                                                                                      const GALGAS_string & inAttribute_mShadowMessage
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapAutomatonStateMap.isValid () && inAttribute_mMapAutomatonActionMap.isValid () && inAttribute_mMapStateSortedList.isValid () && inAttribute_mMapOverrideList.isValid () && inAttribute_mShadowBehaviour.isValid () && inAttribute_mShadowMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mMapTypeName, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapAutomatonStateMap, inAttribute_mMapAutomatonActionMap, inAttribute_mMapStateSortedList, inAttribute_mMapOverrideList, inAttribute_mShadowBehaviour, inAttribute_mShadowMessage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sharedMapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_sharedMapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_sharedMapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_sharedMapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_sharedMapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mInsertMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST cPtr_sharedMapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_sharedMapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_sharedMapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap GALGAS_sharedMapTypeForGeneration::getter_mMapAutomatonStateMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapAutomatonStateMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mMapAutomatonStateMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap cPtr_sharedMapTypeForGeneration::getter_mMapAutomatonStateMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapAutomatonStateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap GALGAS_sharedMapTypeForGeneration::getter_mMapAutomatonActionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapAutomatonActionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mMapAutomatonActionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap cPtr_sharedMapTypeForGeneration::getter_mMapAutomatonActionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapAutomatonActionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList GALGAS_sharedMapTypeForGeneration::getter_mMapStateSortedList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateSortedList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mMapStateSortedList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList cPtr_sharedMapTypeForGeneration::getter_mMapStateSortedList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapStateSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList GALGAS_sharedMapTypeForGeneration::getter_mMapOverrideList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mMapOverrideList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList cPtr_sharedMapTypeForGeneration::getter_mMapOverrideList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapOverrideList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_sharedMapTypeForGeneration::getter_mShadowBehaviour (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mShadowBehaviour ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cPtr_sharedMapTypeForGeneration::getter_mShadowBehaviour (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mShadowBehaviour ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sharedMapTypeForGeneration::getter_mShadowMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mAttribute_mShadowMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_sharedMapTypeForGeneration::getter_mShadowMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mShadowMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @sharedMapTypeForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sharedMapTypeForGeneration::cPtr_sharedMapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                  const GALGAS_lstring & in_mMapTypeName,
                                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                  const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                                  const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                                  const GALGAS_mapAutomatonStateMap & in_mMapAutomatonStateMap,
                                                                  const GALGAS_mapAutomatonActionMap & in_mMapAutomatonActionMap,
                                                                  const GALGAS_mapStateSortedList & in_mMapStateSortedList,
                                                                  const GALGAS_mapOverrideList & in_mMapOverrideList,
                                                                  const GALGAS_mapAutomatonMessageKind & in_mShadowBehaviour,
                                                                  const GALGAS_string & in_mShadowMessage
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mMapTypeName (in_mMapTypeName),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mInsertMethodList (in_mInsertMethodList),
mAttribute_mSearchMethodList (in_mSearchMethodList),
mAttribute_mMapAutomatonStateMap (in_mMapAutomatonStateMap),
mAttribute_mMapAutomatonActionMap (in_mMapAutomatonActionMap),
mAttribute_mMapStateSortedList (in_mMapStateSortedList),
mAttribute_mMapOverrideList (in_mMapOverrideList),
mAttribute_mShadowBehaviour (in_mShadowBehaviour),
mAttribute_mShadowMessage (in_mShadowMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sharedMapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;
}

void cPtr_sharedMapTypeForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@sharedMapTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapAutomatonStateMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapAutomatonActionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapStateSortedList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapOverrideList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mShadowBehaviour.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mShadowMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sharedMapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mMapTypeName, mAttribute_mTypedAttributeList, mAttribute_mInsertMethodList, mAttribute_mSearchMethodList, mAttribute_mMapAutomatonStateMap, mAttribute_mMapAutomatonActionMap, mAttribute_mMapStateSortedList, mAttribute_mMapOverrideList, mAttribute_mShadowBehaviour, mAttribute_mShadowMessage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sharedMapTypeForGeneration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ("sharedMapTypeForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sharedMapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sharedMapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration result ;
  const GALGAS_sharedMapTypeForGeneration * p = (const GALGAS_sharedMapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sortedListDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSortedListTypeName.objectCompare (p->mAttribute_mSortedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSortDescriptorList.objectCompare (p->mAttribute_mSortDescriptorList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sortedListDeclarationAST::objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                           GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mSortedListTypeName,
                                                                                  const GALGAS_propertyInCollectionListAST & inAttribute_mAttributeList,
                                                                                  const GALGAS_sortedListSortDescriptorListAST & inAttribute_mSortDescriptorList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mSortedListTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListDeclarationAST (inAttribute_mIsPredefined, inAttribute_mSortedListTypeName, inAttribute_mAttributeList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sortedListDeclarationAST::getter_mSortedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mAttribute_mSortedListTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_sortedListDeclarationAST::getter_mSortedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortedListTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_sortedListDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_sortedListDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListDeclarationAST::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mAttribute_mSortDescriptorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST cPtr_sortedListDeclarationAST::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @sortedListDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mSortedListTypeName,
                                                              const GALGAS_propertyInCollectionListAST & in_mAttributeList,
                                                              const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mSortedListTypeName (in_mSortedListTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mSortDescriptorList (in_mSortDescriptorList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@sortedListDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mAttribute_mIsPredefined, mAttribute_mSortedListTypeName, mAttribute_mAttributeList, mAttribute_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @sortedListDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  const GALGAS_sortedListDeclarationAST * p = (const GALGAS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sortedListTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListElementTypeIndex.objectCompare (p->mAttribute_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSortDescriptorList.objectCompare (p->mAttribute_mSortDescriptorList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sortedListTypeForGeneration::objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                              GALGAS_sortDescriptorListForGeneration::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mListElementTypeIndex,
                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                        const GALGAS_sortDescriptorListForGeneration & inAttribute_mSortDescriptorList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sortedListTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    result = p->mAttribute_mListElementTypeIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_sortedListTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListElementTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_sortedListTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_sortedListTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration GALGAS_sortedListTypeForGeneration::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    result = p->mAttribute_mSortDescriptorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration cPtr_sortedListTypeForGeneration::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @sortedListTypeForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mListElementTypeIndex,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mListElementTypeIndex (in_mListElementTypeIndex),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSortDescriptorList (in_mSortDescriptorList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sortedListTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

void cPtr_sortedListTypeForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@sortedListTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sortedListTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mListElementTypeIndex, mAttribute_mTypedAttributeList, mAttribute_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sortedListTypeForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListTypeForGeneration ("sortedListTypeForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  const GALGAS_sortedListTypeForGeneration * p = (const GALGAS_sortedListTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructTypeName.objectCompare (p->mAttribute_mStructTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedElementTypeName.objectCompare (p->mAttribute_mEnumeratedElementTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structDeclarationAST::objectCompare (const GALGAS_structDeclarationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                          const GALGAS_lstring & inAttribute_mStructTypeName,
                                                                          const GALGAS_propertyInCollectionListAST & inAttribute_mAttributeList,
                                                                          const GALGAS_string & inAttribute_mEnumeratedElementTypeName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mStructTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mEnumeratedElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structDeclarationAST (inAttribute_mIsPredefined, inAttribute_mStructTypeName, inAttribute_mAttributeList, inAttribute_mEnumeratedElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structDeclarationAST::getter_mStructTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mAttribute_mStructTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structDeclarationAST::getter_mStructTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_structDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_structDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_structDeclarationAST::getter_mEnumeratedElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mAttribute_mEnumeratedElementTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_structDeclarationAST::getter_mEnumeratedElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @structDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mStructTypeName,
                                                      const GALGAS_propertyInCollectionListAST & in_mAttributeList,
                                                      const GALGAS_string & in_mEnumeratedElementTypeName
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mStructTypeName (in_mStructTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mEnumeratedElementTypeName (in_mEnumeratedElementTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@structDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mAttribute_mIsPredefined, mAttribute_mStructTypeName, mAttribute_mAttributeList, mAttribute_mEnumeratedElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structDeclarationAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  const GALGAS_structDeclarationAST * p = (const GALGAS_structDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structTypeForGeneration * p = (const cPtr_structTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (p->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structTypeForGeneration::objectCompare (const GALGAS_structTypeForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                          GALGAS_typedPropertyList::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structTypeForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mTypedAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mTypedAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_structTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_structTypeForGeneration * p = (const cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_structTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @structTypeForGeneration class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                            const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mAttribute_mTypedAttributeList (in_mTypedAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

void cPtr_structTypeForGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structTypeForGeneration:" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mAttribute_mTypeProxy, mAttribute_mTypedAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @structTypeForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structTypeForGeneration ("structTypeForGeneration",
                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  const GALGAS_structTypeForGeneration * p = (const GALGAS_structTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterName.objectCompare (p->mAttribute_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterFormalInputParameterList.objectCompare (p->mAttribute_mAbstractExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterReturnedTypeName.objectCompare (p->mAttribute_mAbstractExtensionGetterReturnedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractExtensionGetterAST::objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionGetterName,
                                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mAbstractExtensionGetterFormalInputParameterList,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionGetterReturnedTypeName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mAbstractExtensionGetterFormalInputParameterList.isValid () && inAttribute_mAbstractExtensionGetterReturnedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionGetterName, inAttribute_mAbstractExtensionGetterFormalInputParameterList, inAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mAttribute_mAbstractExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_abstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mAttribute_mAbstractExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_abstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterFormalInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mAttribute_mAbstractExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterReturnedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @abstractExtensionGetterAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                  const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mAttribute_mAbstractExtensionGetterFormalInputParameterList (in_mAbstractExtensionGetterFormalInputParameterList),
mAttribute_mAbstractExtensionGetterReturnedTypeName (in_mAbstractExtensionGetterReturnedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

void cPtr_abstractExtensionGetterAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionGetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mAbstractExtensionGetterName, mAttribute_mAbstractExtensionGetterFormalInputParameterList, mAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractExtensionGetterAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterAST ("abstractExtensionGetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  const GALGAS_abstractExtensionGetterAST * p = (const GALGAS_abstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractExtensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterName.objectCompare (p->mAttribute_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterFormalParameterList.objectCompare (p->mAttribute_mAbstractExtensionGetterFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractExtensionGetterForGeneration::objectCompare (const GALGAS_abstractExtensionGetterForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mAbstractExtensionGetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mAbstractExtensionGetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionGetterName, inAttribute_mResultType, inAttribute_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mAttribute_mAbstractExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mAttribute_mAbstractExtensionGetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @abstractExtensionGetterForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mAttribute_mResultType (in_mResultType),
mAttribute_mAbstractExtensionGetterFormalParameterList (in_mAbstractExtensionGetterFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

void cPtr_abstractExtensionGetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionGetterForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mAbstractExtensionGetterName, mAttribute_mResultType, mAttribute_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @abstractExtensionGetterForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ("abstractExtensionGetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  const GALGAS_abstractExtensionGetterForGeneration * p = (const GALGAS_abstractExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionMethodName.objectCompare (p->mAttribute_mAbstractExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mAbstractExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractExtensionMethodAST::objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListAST & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionMethodAST::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    result = p->mAttribute_mAbstractExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionMethodAST::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_abstractExtensionMethodAST::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    result = p->mAttribute_mAbstractExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_abstractExtensionMethodAST::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @abstractExtensionMethodAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mAttribute_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

void cPtr_abstractExtensionMethodAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionMethodAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mAbstractExtensionMethodName, mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractExtensionMethodAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodAST ("abstractExtensionMethodAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  const GALGAS_abstractExtensionMethodAST * p = (const GALGAS_abstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractExtensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionMethodName.objectCompare (p->mAttribute_mAbstractExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mAbstractExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractExtensionMethodForGeneration::objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionMethodName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    result = p->mAttribute_mAbstractExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    result = p->mAttribute_mAbstractExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @abstractExtensionMethodForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mAttribute_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

void cPtr_abstractExtensionMethodForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionMethodForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mAbstractExtensionMethodName, mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @abstractExtensionMethodForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ("abstractExtensionMethodForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  const GALGAS_abstractExtensionMethodForGeneration * p = (const GALGAS_abstractExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionSetterName.objectCompare (p->mAttribute_mAbstractExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mAbstractExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractExtensionSetterAST::objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListAST & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractExtensionSetterAST::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mAttribute_mAbstractExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractExtensionSetterAST::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_abstractExtensionSetterAST::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mAttribute_mAbstractExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_abstractExtensionSetterAST::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @abstractExtensionSetterAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mAttribute_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

void cPtr_abstractExtensionSetterAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionSetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mAbstractExtensionSetterName, mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractExtensionSetterAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterAST ("abstractExtensionSetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  const GALGAS_abstractExtensionSetterAST * p = (const GALGAS_abstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractExtensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionSetterName.objectCompare (p->mAttribute_mAbstractExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mAbstractExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractExtensionSetterForGeneration::objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionSetterName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mAttribute_mAbstractExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mAttribute_mAbstractExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @abstractExtensionSetterForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mAttribute_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

void cPtr_abstractExtensionSetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionSetterForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mAbstractExtensionSetterName, mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @abstractExtensionSetterForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ("abstractExtensionSetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  const GALGAS_abstractExtensionSetterForGeneration * p = (const GALGAS_abstractExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterName.objectCompare (p->mAttribute_mExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterFormalInputParameterList.objectCompare (p->mAttribute_mExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterReturnedTypeName.objectCompare (p->mAttribute_mExtensionGetterReturnedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterReturnedVariableName.objectCompare (p->mAttribute_mExtensionGetterReturnedVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterInstructionList.objectCompare (p->mAttribute_mExtensionGetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReaderLocation.objectCompare (p->mAttribute_mEndOfReaderLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extensionGetterAST::objectCompare (const GALGAS_extensionGetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionGetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mExtensionGetterFormalInputParameterList.isValid () && inAttribute_mExtensionGetterReturnedTypeName.isValid () && inAttribute_mExtensionGetterReturnedVariableName.isValid () && inAttribute_mExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionGetterName, inAttribute_mExtensionGetterFormalInputParameterList, inAttribute_mExtensionGetterReturnedTypeName, inAttribute_mExtensionGetterReturnedVariableName, inAttribute_mExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_extensionGetterAST::getter_mExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_extensionGetterAST::getter_mExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterFormalInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterReturnedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mExtensionGetterReturnedVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterReturnedVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_extensionGetterAST::getter_mExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mExtensionGetterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_extensionGetterAST::getter_mExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mAttribute_mEndOfReaderLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_extensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReaderLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @extensionGetterAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterName,
                                                  const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GALGAS_location & in_mEndOfReaderLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mExtensionGetterName (in_mExtensionGetterName),
mAttribute_mExtensionGetterFormalInputParameterList (in_mExtensionGetterFormalInputParameterList),
mAttribute_mExtensionGetterReturnedTypeName (in_mExtensionGetterReturnedTypeName),
mAttribute_mExtensionGetterReturnedVariableName (in_mExtensionGetterReturnedVariableName),
mAttribute_mExtensionGetterInstructionList (in_mExtensionGetterInstructionList),
mAttribute_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

void cPtr_extensionGetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionGetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mExtensionGetterName, mAttribute_mExtensionGetterFormalInputParameterList, mAttribute_mExtensionGetterReturnedTypeName, mAttribute_mExtensionGetterReturnedVariableName, mAttribute_mExtensionGetterInstructionList, mAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @extensionGetterAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterAST ("extensionGetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  const GALGAS_extensionGetterAST * p = (const GALGAS_extensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterName.objectCompare (p->mAttribute_mExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementedAsFunction.objectCompare (p->mAttribute_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVarCppName.objectCompare (p->mAttribute_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterFormalParameterList.objectCompare (p->mAttribute_mExtensionGetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extensionGetterForGeneration::objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionGetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                          const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mExtensionGetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mExtensionGetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionGetterName, inAttribute_mImplementedAsFunction, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mExtensionGetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionGetterForGeneration::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_extensionGetterForGeneration::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_extensionGetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mImplementedAsFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_extensionGetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementedAsFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mResultVarCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_extensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_extensionGetterForGeneration::getter_mExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mExtensionGetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_extensionGetterForGeneration::getter_mExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_extensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_extensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_extensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_extensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @extensionGetterForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionGetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                      const GALGAS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mExtensionGetterName (in_mExtensionGetterName),
mAttribute_mImplementedAsFunction (in_mImplementedAsFunction),
mAttribute_mResultType (in_mResultType),
mAttribute_mResultVarCppName (in_mResultVarCppName),
mAttribute_mExtensionGetterFormalParameterList (in_mExtensionGetterFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

void cPtr_extensionGetterForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionGetterForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mExtensionGetterName, mAttribute_mImplementedAsFunction, mAttribute_mResultType, mAttribute_mResultVarCppName, mAttribute_mExtensionGetterFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @extensionGetterForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterForGeneration ("extensionGetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration result ;
  const GALGAS_extensionGetterForGeneration * p = (const GALGAS_extensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodName.objectCompare (p->mAttribute_mExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodInstructionList.objectCompare (p->mAttribute_mExtensionMethodInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfMethodLocation.objectCompare (p->mAttribute_mEndOfMethodLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extensionMethodAST::objectCompare (const GALGAS_extensionMethodAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodAST::GALGAS_extensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodAST::GALGAS_extensionMethodAST (const cPtr_extensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionMethodInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionMethodAST::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mAttribute_mExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionMethodAST::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_extensionMethodAST::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mAttribute_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_extensionMethodAST::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_extensionMethodAST::getter_mExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mAttribute_mExtensionMethodInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_extensionMethodAST::getter_mExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mAttribute_mEndOfMethodLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_extensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfMethodLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @extensionMethodAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extensionMethodAST::cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionMethodName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                  const GALGAS_location & in_mEndOfMethodLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mExtensionMethodName (in_mExtensionMethodName),
mAttribute_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mAttribute_mExtensionMethodInstructionList (in_mExtensionMethodInstructionList),
mAttribute_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

void cPtr_extensionMethodAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionMethodAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionMethodAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mExtensionMethodName, mAttribute_mExtensionMethodFormalParameterList, mAttribute_mExtensionMethodInstructionList, mAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @extensionMethodAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodAST ("extensionMethodAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST result ;
  const GALGAS_extensionMethodAST * p = (const GALGAS_extensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodName.objectCompare (p->mAttribute_mExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementedAsFunction.objectCompare (p->mAttribute_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extensionMethodForGeneration::objectCompare (const GALGAS_extensionMethodForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (const cPtr_extensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionMethodName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionMethodFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionMethodName, inAttribute_mImplementedAsFunction, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mAttribute_mExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_extensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_extensionMethodForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mAttribute_mImplementedAsFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_extensionMethodForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementedAsFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_extensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mAttribute_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_extensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_extensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_extensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_extensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_extensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @extensionMethodForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extensionMethodForGeneration::cPtr_extensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionMethodName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mExtensionMethodName (in_mExtensionMethodName),
mAttribute_mImplementedAsFunction (in_mImplementedAsFunction),
mAttribute_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

void cPtr_extensionMethodForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionMethodForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionMethodForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mExtensionMethodName, mAttribute_mImplementedAsFunction, mAttribute_mExtensionMethodFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @extensionMethodForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodForGeneration ("extensionMethodForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration result ;
  const GALGAS_extensionMethodForGeneration * p = (const GALGAS_extensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterName.objectCompare (p->mAttribute_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterInstructionList.objectCompare (p->mAttribute_mExtensionSetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSetterDeclarationLocation.objectCompare (p->mAttribute_mEndOfSetterDeclarationLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extensionSetterAST::objectCompare (const GALGAS_extensionSetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterAST::GALGAS_extensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterAST::GALGAS_extensionSetterAST (const cPtr_extensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionSetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionSetterName, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionSetterAST::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mAttribute_mExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extensionSetterAST::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_extensionSetterAST::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mAttribute_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_extensionSetterAST::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_extensionSetterAST::getter_mExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mAttribute_mExtensionSetterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_extensionSetterAST::getter_mExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mAttribute_mEndOfSetterDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_extensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSetterDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @extensionSetterAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extensionSetterAST::cPtr_extensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionSetterName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                  const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mExtensionSetterName (in_mExtensionSetterName),
mAttribute_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mAttribute_mExtensionSetterInstructionList (in_mExtensionSetterInstructionList),
mAttribute_mEndOfSetterDeclarationLocation (in_mEndOfSetterDeclarationLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

void cPtr_extensionSetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionSetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionSetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mExtensionSetterName, mAttribute_mExtensionSetterFormalParameterList, mAttribute_mExtensionSetterInstructionList, mAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @extensionSetterAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterAST ("extensionSetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST result ;
  const GALGAS_extensionSetterAST * p = (const GALGAS_extensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterName.objectCompare (p->mAttribute_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementedAsFunction.objectCompare (p->mAttribute_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extensionSetterForGeneration::objectCompare (const GALGAS_extensionSetterForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionSetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionSetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionSetterName, inAttribute_mImplementedAsFunction, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mAttribute_mExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_extensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_extensionSetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mAttribute_mImplementedAsFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_extensionSetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementedAsFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_extensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mAttribute_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_extensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_extensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_extensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_extensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_extensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @extensionSetterForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionSetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mExtensionSetterName (in_mExtensionSetterName),
mAttribute_mImplementedAsFunction (in_mImplementedAsFunction),
mAttribute_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

void cPtr_extensionSetterForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionSetterForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionSetterForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mExtensionSetterName, mAttribute_mImplementedAsFunction, mAttribute_mExtensionSetterFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @extensionSetterForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterForGeneration ("extensionSetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration result ;
  const GALGAS_extensionSetterForGeneration * p = (const GALGAS_extensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingAbstractExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterName.objectCompare (p->mAttribute_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterFormalInputParameterList.objectCompare (p->mAttribute_mAbstractExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractExtensionGetterReturnedTypeName.objectCompare (p->mAttribute_mAbstractExtensionGetterReturnedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingAbstractExtensionGetterAST::objectCompare (const GALGAS_overridingAbstractExtensionGetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionGetterAST::GALGAS_overridingAbstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionGetterAST::GALGAS_overridingAbstractExtensionGetterAST (const cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionGetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_formalInputParameterListAST & inAttribute_mAbstractExtensionGetterFormalInputParameterList,
                                                                                                          const GALGAS_lstring & inAttribute_mAbstractExtensionGetterReturnedTypeName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mAbstractExtensionGetterFormalInputParameterList.isValid () && inAttribute_mAbstractExtensionGetterReturnedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionGetterName, inAttribute_mAbstractExtensionGetterFormalInputParameterList, inAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mAttribute_mAbstractExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mAttribute_mAbstractExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterFormalInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    result = p->mAttribute_mAbstractExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractExtensionGetterReturnedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overridingAbstractExtensionGetterAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingAbstractExtensionGetterAST::cPtr_overridingAbstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                                      const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                                      const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mAttribute_mAbstractExtensionGetterFormalInputParameterList (in_mAbstractExtensionGetterFormalInputParameterList),
mAttribute_mAbstractExtensionGetterReturnedTypeName (in_mAbstractExtensionGetterReturnedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;
}

void cPtr_overridingAbstractExtensionGetterAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overridingAbstractExtensionGetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingAbstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionGetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mAbstractExtensionGetterName, mAttribute_mAbstractExtensionGetterFormalInputParameterList, mAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractExtensionGetterAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ("overridingAbstractExtensionGetterAST",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingAbstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST result ;
  const GALGAS_overridingAbstractExtensionGetterAST * p = (const GALGAS_overridingAbstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingAbstractExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionMethodName.objectCompare (p->mAttribute_mOverridingExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mOverridingExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingAbstractExtensionMethodAST::objectCompare (const GALGAS_overridingAbstractExtensionMethodAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionMethodAST::GALGAS_overridingAbstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionMethodAST::GALGAS_overridingAbstractExtensionMethodAST (const cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionMethodAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionMethodName,
                                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionMethodFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionMethodName.isValid () && inAttribute_mOverridingExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionMethodName, inAttribute_mOverridingExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    result = p->mAttribute_mOverridingExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    result = p->mAttribute_mOverridingExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingAbstractExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overridingAbstractExtensionMethodAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingAbstractExtensionMethodAST::cPtr_overridingAbstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingExtensionMethodName (in_mOverridingExtensionMethodName),
mAttribute_mOverridingExtensionMethodFormalParameterList (in_mOverridingExtensionMethodFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

void cPtr_overridingAbstractExtensionMethodAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overridingAbstractExtensionMethodAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingAbstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionMethodAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingExtensionMethodName, mAttribute_mOverridingExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractExtensionMethodAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ("overridingAbstractExtensionMethodAST",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingAbstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST result ;
  const GALGAS_overridingAbstractExtensionMethodAST * p = (const GALGAS_overridingAbstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingAbstractExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionSetterName.objectCompare (p->mAttribute_mOverridingExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mOverridingExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingAbstractExtensionSetterAST::objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionSetterAST::GALGAS_overridingAbstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionSetterAST::GALGAS_overridingAbstractExtensionSetterAST (const cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionSetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    result = p->mAttribute_mOverridingExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    result = p->mAttribute_mOverridingExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingAbstractExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overridingAbstractExtensionSetterAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingAbstractExtensionSetterAST::cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingExtensionSetterName (in_mOverridingExtensionSetterName),
mAttribute_mOverridingExtensionSetterFormalParameterList (in_mOverridingExtensionSetterFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

void cPtr_overridingAbstractExtensionSetterAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overridingAbstractExtensionSetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingAbstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionSetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingExtensionSetterName, mAttribute_mOverridingExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractExtensionSetterAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ("overridingAbstractExtensionSetterAST",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingAbstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  const GALGAS_overridingAbstractExtensionSetterAST * p = (const GALGAS_overridingAbstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterName.objectCompare (p->mAttribute_mOverridingExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterFormalInputParameterList.objectCompare (p->mAttribute_mOverridingExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterReturnedTypeName.objectCompare (p->mAttribute_mOverridingExtensionGetterReturnedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterReturnedVariableName.objectCompare (p->mAttribute_mOverridingExtensionGetterReturnedVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterInstructionList.objectCompare (p->mAttribute_mOverridingExtensionGetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReaderLocation.objectCompare (p->mAttribute_mEndOfReaderLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingExtensionGetterAST::objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionGetterAST::GALGAS_overridingExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionGetterAST::GALGAS_overridingExtensionGetterAST (const cPtr_overridingExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionGetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionGetterName,
                                                                                          const GALGAS_formalInputParameterListAST & inAttribute_mOverridingExtensionGetterFormalInputParameterList,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionGetterReturnedTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionGetterReturnedVariableName,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionGetterInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionGetterName.isValid () && inAttribute_mOverridingExtensionGetterFormalInputParameterList.isValid () && inAttribute_mOverridingExtensionGetterReturnedTypeName.isValid () && inAttribute_mOverridingExtensionGetterReturnedVariableName.isValid () && inAttribute_mOverridingExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionGetterName, inAttribute_mOverridingExtensionGetterFormalInputParameterList, inAttribute_mOverridingExtensionGetterReturnedTypeName, inAttribute_mOverridingExtensionGetterReturnedVariableName, inAttribute_mOverridingExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mOverridingExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mOverridingExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterFormalInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mOverridingExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterReturnedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mOverridingExtensionGetterReturnedVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterReturnedVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionGetterAST::getter_mOverridingExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mOverridingExtensionGetterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_overridingExtensionGetterAST::getter_mOverridingExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_overridingExtensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    result = p->mAttribute_mEndOfReaderLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_overridingExtensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReaderLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @overridingExtensionGetterAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingExtensionGetterName (in_mOverridingExtensionGetterName),
mAttribute_mOverridingExtensionGetterFormalInputParameterList (in_mOverridingExtensionGetterFormalInputParameterList),
mAttribute_mOverridingExtensionGetterReturnedTypeName (in_mOverridingExtensionGetterReturnedTypeName),
mAttribute_mOverridingExtensionGetterReturnedVariableName (in_mOverridingExtensionGetterReturnedVariableName),
mAttribute_mOverridingExtensionGetterInstructionList (in_mOverridingExtensionGetterInstructionList),
mAttribute_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

void cPtr_overridingExtensionGetterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@overridingExtensionGetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionGetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingExtensionGetterName, mAttribute_mOverridingExtensionGetterFormalInputParameterList, mAttribute_mOverridingExtensionGetterReturnedTypeName, mAttribute_mOverridingExtensionGetterReturnedVariableName, mAttribute_mOverridingExtensionGetterInstructionList, mAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @overridingExtensionGetterAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionGetterAST ("overridingExtensionGetterAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionGetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST result ;
  const GALGAS_overridingExtensionGetterAST * p = (const GALGAS_overridingExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overrideExtensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBaseTypeName.objectCompare (p->mAttribute_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterName.objectCompare (p->mAttribute_mOverridingExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVarCppName.objectCompare (p->mAttribute_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionGetterFormalParameterList.objectCompare (p->mAttribute_mOverridingExtensionGetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overrideExtensionGetterForGeneration::objectCompare (const GALGAS_overrideExtensionGetterForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                       GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                       GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (const cPtr_overrideExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overrideExtensionGetterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                          const GALGAS_string & inAttribute_mOverridingExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mOverridingExtensionGetterFormalParameterList,
                                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mOverridingExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mOverridingExtensionGetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overrideExtensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mOverridingExtensionGetterName, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mOverridingExtensionGetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overrideExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overrideExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mBaseTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overrideExtensionGetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mOverridingExtensionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overrideExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overrideExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mResultVarCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overrideExtensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mOverridingExtensionGetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_overrideExtensionGetterForGeneration::getter_mOverridingExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionGetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_overrideExtensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_overrideExtensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_overrideExtensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_overrideExtensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overrideExtensionGetterForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mBaseTypeName,
                                                                                      const GALGAS_string & in_mOverridingExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mBaseTypeName (in_mBaseTypeName),
mAttribute_mOverridingExtensionGetterName (in_mOverridingExtensionGetterName),
mAttribute_mResultType (in_mResultType),
mAttribute_mResultVarCppName (in_mResultVarCppName),
mAttribute_mOverridingExtensionGetterFormalParameterList (in_mOverridingExtensionGetterFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overrideExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

void cPtr_overrideExtensionGetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@overrideExtensionGetterForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overrideExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overrideExtensionGetterForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mBaseTypeName, mAttribute_mOverridingExtensionGetterName, mAttribute_mResultType, mAttribute_mResultVarCppName, mAttribute_mOverridingExtensionGetterFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overrideExtensionGetterForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ("overrideExtensionGetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overrideExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overrideExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration result ;
  const GALGAS_overrideExtensionGetterForGeneration * p = (const GALGAS_overrideExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overrideExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionMethodName.objectCompare (p->mAttribute_mOverridingExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mOverridingExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionMethodInstructionList.objectCompare (p->mAttribute_mOverridingExtensionMethodInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfMethodLocation.objectCompare (p->mAttribute_mEndOfMethodLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingExtensionMethodAST::objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodAST::GALGAS_overridingExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodAST::GALGAS_overridingExtensionMethodAST (const cPtr_overridingExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionMethodName,
                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionMethodFormalParameterList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionMethodInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionMethodName.isValid () && inAttribute_mOverridingExtensionMethodFormalParameterList.isValid () && inAttribute_mOverridingExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionMethodName, inAttribute_mOverridingExtensionMethodFormalParameterList, inAttribute_mOverridingExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mAttribute_mOverridingExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionMethodAST::getter_mOverridingExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mAttribute_mOverridingExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingExtensionMethodAST::getter_mOverridingExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionMethodAST::getter_mOverridingExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mAttribute_mOverridingExtensionMethodInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_overridingExtensionMethodAST::getter_mOverridingExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionMethodInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_overridingExtensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    result = p->mAttribute_mEndOfMethodLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_overridingExtensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfMethodLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @overridingExtensionMethodAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingExtensionMethodAST::cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                      const GALGAS_location & in_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingExtensionMethodName (in_mOverridingExtensionMethodName),
mAttribute_mOverridingExtensionMethodFormalParameterList (in_mOverridingExtensionMethodFormalParameterList),
mAttribute_mOverridingExtensionMethodInstructionList (in_mOverridingExtensionMethodInstructionList),
mAttribute_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

void cPtr_overridingExtensionMethodAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@overridingExtensionMethodAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingExtensionMethodName, mAttribute_mOverridingExtensionMethodFormalParameterList, mAttribute_mOverridingExtensionMethodInstructionList, mAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @overridingExtensionMethodAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionMethodAST ("overridingExtensionMethodAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  const GALGAS_overridingExtensionMethodAST * p = (const GALGAS_overridingExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingExtensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBaseTypeName.objectCompare (p->mAttribute_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodName.objectCompare (p->mAttribute_mExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodFormalParameterList.objectCompare (p->mAttribute_mExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingExtensionMethodForGeneration::objectCompare (const GALGAS_overridingExtensionMethodForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                         GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (const cPtr_overridingExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                              const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                              const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                              const GALGAS_string & inAttribute_mExtensionMethodName,
                                                                                                              const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionMethodFormalParameterList,
                                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overridingExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overridingExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mAttribute_mBaseTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingExtensionMethodForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mAttribute_mExtensionMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingExtensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mAttribute_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_overridingExtensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_overridingExtensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_overridingExtensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_overridingExtensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @overridingExtensionMethodForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingExtensionMethodForGeneration::cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                          const GALGAS_string & in_mExtensionMethodName,
                                                                                          const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mBaseTypeName (in_mBaseTypeName),
mAttribute_mExtensionMethodName (in_mExtensionMethodName),
mAttribute_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

void cPtr_overridingExtensionMethodForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@overridingExtensionMethodForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mBaseTypeName, mAttribute_mExtensionMethodName, mAttribute_mExtensionMethodFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @overridingExtensionMethodForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ("overridingExtensionMethodForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration result ;
  const GALGAS_overridingExtensionMethodForGeneration * p = (const GALGAS_overridingExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionSetterName.objectCompare (p->mAttribute_mOverridingExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mOverridingExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingExtensionSetterInstructionList.objectCompare (p->mAttribute_mOverridingExtensionSetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSetterDeclarationLocation.objectCompare (p->mAttribute_mEndOfSetterDeclarationLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingExtensionSetterAST::objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterAST::GALGAS_overridingExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterAST::GALGAS_overridingExtensionSetterAST (const cPtr_overridingExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                          const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionSetterInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid () && inAttribute_mOverridingExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList, inAttribute_mOverridingExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mAttribute_mOverridingExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingExtensionSetterAST::getter_mOverridingExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mAttribute_mOverridingExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingExtensionSetterAST::getter_mOverridingExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionSetterAST::getter_mOverridingExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mAttribute_mOverridingExtensionSetterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_overridingExtensionSetterAST::getter_mOverridingExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingExtensionSetterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_overridingExtensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    result = p->mAttribute_mEndOfSetterDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_overridingExtensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSetterDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @overridingExtensionSetterAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingExtensionSetterAST::cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingExtensionSetterName (in_mOverridingExtensionSetterName),
mAttribute_mOverridingExtensionSetterFormalParameterList (in_mOverridingExtensionSetterFormalParameterList),
mAttribute_mOverridingExtensionSetterInstructionList (in_mOverridingExtensionSetterInstructionList),
mAttribute_mEndOfSetterDeclarationLocation (in_mEndOfSetterDeclarationLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

void cPtr_overridingExtensionSetterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@overridingExtensionSetterAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingExtensionSetterName, mAttribute_mOverridingExtensionSetterFormalParameterList, mAttribute_mOverridingExtensionSetterInstructionList, mAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @overridingExtensionSetterAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionSetterAST ("overridingExtensionSetterAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  const GALGAS_overridingExtensionSetterAST * p = (const GALGAS_overridingExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingExtensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBaseTypeName.objectCompare (p->mAttribute_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterName.objectCompare (p->mAttribute_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterFormalParameterList.objectCompare (p->mAttribute_mExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingExtensionSetterForGeneration::objectCompare (const GALGAS_overridingExtensionSetterForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                         GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (const cPtr_overridingExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                              const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                              const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                              const GALGAS_string & inAttribute_mExtensionSetterName,
                                                                                                              const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionSetterFormalParameterList,
                                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mExtensionSetterName, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overridingExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overridingExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mAttribute_mBaseTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingExtensionSetterForGeneration::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mAttribute_mExtensionSetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingExtensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mAttribute_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_overridingExtensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_overridingExtensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_overridingExtensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_overridingExtensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @overridingExtensionSetterForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingExtensionSetterForGeneration::cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                          const GALGAS_string & in_mExtensionSetterName,
                                                                                          const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mBaseTypeName (in_mBaseTypeName),
mAttribute_mExtensionSetterName (in_mExtensionSetterName),
mAttribute_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

void cPtr_overridingExtensionSetterForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@overridingExtensionSetterForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mBaseTypeName, mAttribute_mExtensionSetterName, mAttribute_mExtensionSetterFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @overridingExtensionSetterForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ("overridingExtensionSetterForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration result ;
  const GALGAS_overridingExtensionSetterForGeneration * p = (const GALGAS_overridingExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalCharExpressionAST * p = (const cPtr_literalCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCharacter.objectCompare (p->mAttribute_mCharacter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalCharExpressionAST::objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalCharExpressionAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_literalCharExpressionAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalCharExpressionAST * p = (const cPtr_literalCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
    result = p->mAttribute_mCharacter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cPtr_literalCharExpressionAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCharacter ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @literalCharExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mCharacter (in_mCharacter) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

void cPtr_literalCharExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalCharExpressionAST:" ;
  mAttribute_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalCharExpressionAST (mAttribute_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalCharExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionAST ("literalCharExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  const GALGAS_literalCharExpressionAST * p = (const GALGAS_literalCharExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalDoubleExpressionAST * p = (const cPtr_literalDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalDoubleExpressionAST::objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalDoubleExpressionAST::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::constructor_new (const GALGAS_ldouble & inAttribute_mValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_literalDoubleExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_ldouble result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalDoubleExpressionAST * p = (const cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble cPtr_literalDoubleExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @literalDoubleExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalDoubleExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalDoubleExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  const GALGAS_literalDoubleExpressionAST * p = (const GALGAS_literalDoubleExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalUIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUIntExpressionAST * p = (const cPtr_literalUIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalUIntExpressionAST::objectCompare (const GALGAS_literalUIntExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUIntExpressionAST::GALGAS_literalUIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalUIntExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUIntExpressionAST::GALGAS_literalUIntExpressionAST (const cPtr_literalUIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_literalUIntExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalUIntExpressionAST * p = (const cPtr_literalUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_literalUIntExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @literalUIntExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalUIntExpressionAST::cPtr_literalUIntExpressionAST (const GALGAS_luint & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionAST ;
}

void cPtr_literalUIntExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalUIntExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalUIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUIntExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalUIntExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUIntExpressionAST ("literalUIntExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionAST result ;
  const GALGAS_literalUIntExpressionAST * p = (const GALGAS_literalUIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalUInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUInt_36__34_ExpressionAST * p = (const cPtr_literalUInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalUInt_36__34_ExpressionAST::objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUInt_36__34_ExpressionAST::GALGAS_literalUInt_36__34_ExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (GALGAS_luint_36__34_::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUInt_36__34_ExpressionAST::GALGAS_literalUInt_36__34_ExpressionAST (const cPtr_literalUInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (const GALGAS_luint_36__34_ & inAttribute_mValue
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUInt_36__34_ExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_literalUInt_36__34_ExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalUInt_36__34_ExpressionAST * p = (const cPtr_literalUInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ cPtr_literalUInt_36__34_ExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @literalUInt64ExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalUInt_36__34_ExpressionAST::cPtr_literalUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mValue
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalUInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;
}

void cPtr_literalUInt_36__34_ExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@literalUInt64ExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalUInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalUInt64ExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ("literalUInt64ExpressionAST",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionAST result ;
  const GALGAS_literalUInt_36__34_ExpressionAST * p = (const GALGAS_literalUInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalSIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSIntExpressionAST * p = (const cPtr_literalSIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalSIntExpressionAST::objectCompare (const GALGAS_literalSIntExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSIntExpressionAST::GALGAS_literalSIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalSIntExpressionAST::constructor_new (GALGAS_lsint::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSIntExpressionAST::GALGAS_literalSIntExpressionAST (const cPtr_literalSIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST::constructor_new (const GALGAS_lsint & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_literalSIntExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalSIntExpressionAST * p = (const cPtr_literalSIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint cPtr_literalSIntExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @literalSIntExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalSIntExpressionAST::cPtr_literalSIntExpressionAST (const GALGAS_lsint & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalSIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionAST ;
}

void cPtr_literalSIntExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalSIntExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalSIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSIntExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalSIntExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSIntExpressionAST ("literalSIntExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalSIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalSIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSIntExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionAST result ;
  const GALGAS_literalSIntExpressionAST * p = (const GALGAS_literalSIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalSInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSInt_36__34_ExpressionAST * p = (const cPtr_literalSInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalSInt_36__34_ExpressionAST::objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSInt_36__34_ExpressionAST::GALGAS_literalSInt_36__34_ExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (GALGAS_lsint_36__34_::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSInt_36__34_ExpressionAST::GALGAS_literalSInt_36__34_ExpressionAST (const cPtr_literalSInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (const GALGAS_lsint_36__34_ & inAttribute_mValue
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSInt_36__34_ExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_literalSInt_36__34_ExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalSInt_36__34_ExpressionAST * p = (const cPtr_literalSInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ cPtr_literalSInt_36__34_ExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @literalSInt64ExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalSInt_36__34_ExpressionAST::cPtr_literalSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mValue
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalSInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;
}

void cPtr_literalSInt_36__34_ExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@literalSInt64ExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalSInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalSInt64ExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ("literalSInt64ExpressionAST",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalSInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalSInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionAST result ;
  const GALGAS_literalSInt_36__34_ExpressionAST * p = (const GALGAS_literalSInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_constructorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorName.objectCompare (p->mAttribute_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressions.objectCompare (p->mAttribute_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorExpressionAST::GALGAS_constructorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorExpressionAST::GALGAS_constructorExpressionAST (const cPtr_constructorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorExpressionAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    result = p->mAttribute_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constructorExpressionAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_constructorExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    result = p->mAttribute_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_constructorExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @constructorExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_constructorExpressionAST::cPtr_constructorExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                              const GALGAS_lstring & in_mConstructorName,
                                                              const GALGAS_actualOutputExpressionList & in_mExpressions
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mConstructorName (in_mConstructorName),
mAttribute_mExpressions (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_constructorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST ;
}

void cPtr_constructorExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@constructorExpressionAST:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_constructorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorExpressionAST (mAttribute_mTypeName, mAttribute_mConstructorName, mAttribute_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @constructorExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorExpressionAST ("constructorExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_defaultConstructorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_defaultConstructorExpressionAST * p = (const cPtr_defaultConstructorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultConstructorExpressionAST::GALGAS_defaultConstructorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_defaultConstructorExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultConstructorExpressionAST::GALGAS_defaultConstructorExpressionAST (const cPtr_defaultConstructorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_defaultConstructorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_defaultConstructorExpressionAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_defaultConstructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_defaultConstructorExpressionAST * p = (const cPtr_defaultConstructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_defaultConstructorExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @defaultConstructorExpressionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_defaultConstructorExpressionAST::cPtr_defaultConstructorExpressionAST (const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_defaultConstructorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;
}

void cPtr_defaultConstructorExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@defaultConstructorExpressionAST:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_defaultConstructorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_defaultConstructorExpressionAST (mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @defaultConstructorExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ("defaultConstructorExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultConstructorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultConstructorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultConstructorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getterCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiver.objectCompare (p->mAttribute_mReceiver) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGetterName.objectCompare (p->mAttribute_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressions.objectCompare (p->mAttribute_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_getterCallExpressionAST::getter_mReceiver (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    result = p->mAttribute_mReceiver ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_getterCallExpressionAST::getter_mReceiver (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiver ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_getterCallExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    result = p->mAttribute_mGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_getterCallExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_getterCallExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    result = p->mAttribute_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_getterCallExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @getterCallExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiver,
                                                            const GALGAS_lstring & in_mGetterName,
                                                            const GALGAS_actualOutputExpressionList & in_mExpressions
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mReceiver (in_mReceiver),
mAttribute_mGetterName (in_mGetterName),
mAttribute_mExpressions (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@getterCallExpressionAST:" ;
  mAttribute_mReceiver.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getterCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mAttribute_mReceiver, mAttribute_mGetterName, mAttribute_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @getterCallExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_optionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionExpressionAST * p = (const cPtr_optionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionComponentName.objectCompare (p->mAttribute_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionEntryName.objectCompare (p->mAttribute_mOptionEntryName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionGetterName.objectCompare (p->mAttribute_mOptionGetterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_optionExpressionAST::objectCompare (const GALGAS_optionExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                        const GALGAS_lstring & inAttribute_mOptionEntryName,
                                                                        const GALGAS_lstring & inAttribute_mOptionGetterName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid () && inAttribute_mOptionGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionExpressionAST (inAttribute_mOptionComponentName, inAttribute_mOptionEntryName, inAttribute_mOptionGetterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionExpressionAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionExpressionAST * p = (const cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    result = p->mAttribute_mOptionComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_optionExpressionAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionExpressionAST::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionExpressionAST * p = (const cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    result = p->mAttribute_mOptionEntryName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_optionExpressionAST::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionEntryName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionExpressionAST::getter_mOptionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionExpressionAST * p = (const cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    result = p->mAttribute_mOptionGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_optionExpressionAST::getter_mOptionGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @optionExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                                    const GALGAS_lstring & in_mOptionEntryName,
                                                    const GALGAS_lstring & in_mOptionGetterName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOptionComponentName (in_mOptionComponentName),
mAttribute_mOptionEntryName (in_mOptionEntryName),
mAttribute_mOptionGetterName (in_mOptionGetterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

void cPtr_optionExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@optionExpressionAST:" ;
  mAttribute_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_optionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mAttribute_mOptionComponentName, mAttribute_mOptionEntryName, mAttribute_mOptionGetterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @optionExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  const GALGAS_optionExpressionAST * p = (const GALGAS_optionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexiqueIntrospectionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueComponentName.objectCompare (p->mAttribute_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueGetterName.objectCompare (p->mAttribute_mLexiqueGetterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                                                    const GALGAS_lstring & inAttribute_mLexiqueGetterName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  if (inAttribute_mLexiqueComponentName.isValid () && inAttribute_mLexiqueGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionExpressionAST (inAttribute_mLexiqueComponentName, inAttribute_mLexiqueGetterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    result = p->mAttribute_mLexiqueComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexiqueIntrospectionExpressionAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    result = p->mAttribute_mLexiqueGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexiqueIntrospectionExpressionAST::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @lexiqueIntrospectionExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                const GALGAS_lstring & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mLexiqueComponentName (in_mLexiqueComponentName),
mAttribute_mLexiqueGetterName (in_mLexiqueGetterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

void cPtr_lexiqueIntrospectionExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@lexiqueIntrospectionExpressionAST:" ;
  mAttribute_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexiqueIntrospectionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mAttribute_mLexiqueComponentName, mAttribute_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexiqueIntrospectionExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structFieldAccessExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structFieldAccessExpressionAST * p = (const cPtr_structFieldAccessExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structFieldAccessExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructFieldName.objectCompare (p->mAttribute_mStructFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structFieldAccessExpressionAST::objectCompare (const GALGAS_structFieldAccessExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionAST::GALGAS_structFieldAccessExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionAST::GALGAS_structFieldAccessExpressionAST (const cPtr_structFieldAccessExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionAST GALGAS_structFieldAccessExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                              const GALGAS_semanticExpressionAST & inAttribute_mExpression,
                                                                                              const GALGAS_lstring & inAttribute_mStructFieldName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structFieldAccessExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_structFieldAccessExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessExpressionAST * p = (const cPtr_structFieldAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_structFieldAccessExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_structFieldAccessExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessExpressionAST * p = (const cPtr_structFieldAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_structFieldAccessExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structFieldAccessExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessExpressionAST * p = (const cPtr_structFieldAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessExpressionAST) ;
    result = p->mAttribute_mStructFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structFieldAccessExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @structFieldAccessExpressionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structFieldAccessExpressionAST::cPtr_structFieldAccessExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                          const GALGAS_semanticExpressionAST & in_mExpression,
                                                                          const GALGAS_lstring & in_mStructFieldName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mExpression (in_mExpression),
mAttribute_mStructFieldName (in_mStructFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structFieldAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessExpressionAST ;
}

void cPtr_structFieldAccessExpressionAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@structFieldAccessExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structFieldAccessExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structFieldAccessExpressionAST (mAttribute_mOperatorLocation, mAttribute_mExpression, mAttribute_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @structFieldAccessExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessExpressionAST ("structFieldAccessExpressionAST",
                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structFieldAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structFieldAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessExpressionAST GALGAS_structFieldAccessExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessExpressionAST result ;
  const GALGAS_structFieldAccessExpressionAST * p = (const GALGAS_structFieldAccessExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallExpressionAST::GALGAS_functionCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionCallExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallExpressionAST::GALGAS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                    const GALGAS_actualOutputExpressionList & inAttribute_mExpressionList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionCallExpressionAST (inAttribute_mFunctionName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallExpressionAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionCallExpressionAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_functionCallExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_functionCallExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @functionCallExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                                                const GALGAS_actualOutputExpressionList & in_mExpressionList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@functionCallExpressionAST:" ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mAttribute_mFunctionName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionCallExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInExpressionAST::objectCompare (const GALGAS_varInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionAST (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInExpressionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInExpressionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varInExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varInExpressionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInExpressionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  const GALGAS_varInExpressionAST * p = (const GALGAS_varInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalTypeInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalTypeInExpressionAST * p = (const cPtr_literalTypeInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralTypeName.objectCompare (p->mAttribute_mLiteralTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalTypeInExpressionAST::GALGAS_literalTypeInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalTypeInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalTypeInExpressionAST::GALGAS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralTypeName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST result ;
  if (inAttribute_mLiteralTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalTypeInExpressionAST (inAttribute_mLiteralTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_literalTypeInExpressionAST::getter_mLiteralTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalTypeInExpressionAST * p = (const cPtr_literalTypeInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
    result = p->mAttribute_mLiteralTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_literalTypeInExpressionAST::getter_mLiteralTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @literalTypeInExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (const GALGAS_lstring & in_mLiteralTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mLiteralTypeName (in_mLiteralTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalTypeInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

void cPtr_literalTypeInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalTypeInExpressionAST:" ;
  mAttribute_mLiteralTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalTypeInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionAST (mAttribute_mLiteralTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalTypeInExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalTypeInExpressionAST ("literalTypeInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalTypeInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalTypeInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalTypeInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_castInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_castInExpressionAST * p = (const cPtr_castInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_castInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReceiverExpression.objectCompare (p->mAttribute_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_castInExpressionAST::objectCompare (const GALGAS_castInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                        const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_castInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_castInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_castInExpressionAST * p = (const cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_castInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_castInExpressionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_castInExpressionAST * p = (const cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    result = p->mAttribute_mEndOfReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_castInExpressionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_castInExpressionAST * p = (const cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_castInExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @castInExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                    const GALGAS_lstring & in_mTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

void cPtr_castInExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@castInExpressionAST:" ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_castInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mAttribute_mReceiverExpression, mAttribute_mEndOfReceiverExpression, mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @castInExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  const GALGAS_castInExpressionAST * p = (const GALGAS_castInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_testDynamicClassInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReceiverExpression.objectCompare (p->mAttribute_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeComparisonKind.objectCompare (p->mAttribute_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_testDynamicClassInExpressionAST::objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                                const GALGAS_lstring & inAttribute_mTypeName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_testDynamicClassInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_testDynamicClassInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_testDynamicClassInExpressionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    result = p->mAttribute_mEndOfReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_testDynamicClassInExpressionAST::getter_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionAST::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    result = p->mAttribute_mTypeComparisonKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind cPtr_testDynamicClassInExpressionAST::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_testDynamicClassInExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_testDynamicClassInExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @testDynamicClassInExpressionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GALGAS_location & in_mEndOfReceiverExpression,
                                                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mAttribute_mTypeComparisonKind (in_mTypeComparisonKind),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

void cPtr_testDynamicClassInExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@testDynamicClassInExpressionAST:" ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_testDynamicClassInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mAttribute_mReceiverExpression, mAttribute_mEndOfReceiverExpression, mAttribute_mTypeComparisonKind, mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @testDynamicClassInExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  const GALGAS_testDynamicClassInExpressionAST * p = (const GALGAS_testDynamicClassInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testDynamicClassInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperObjectInstanciationInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperObjectInstanciationInExpressionAST (inAttribute_mFilewrapperName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperObjectInstanciationInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperObjectInstanciationInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @filewrapperObjectInstanciationInExpressionAST class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mFilewrapperName (in_mFilewrapperName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@filewrapperObjectInstanciationInExpressionAST:" ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mAttribute_mFilewrapperName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @filewrapperObjectInstanciationInExpressionAST type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperObjectInstanciationInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperObjectInstanciationInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperPath.objectCompare (p->mAttribute_mFilewrapperPath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperInExpressionAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    result = p->mAttribute_mFilewrapperPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperInExpressionAST::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @filewrapperInExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                  const GALGAS_lstring & in_mFilewrapperPath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mFilewrapperName (in_mFilewrapperName),
mAttribute_mFilewrapperPath (in_mFilewrapperPath) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@filewrapperInExpressionAST:" ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mAttribute_mFilewrapperName, mAttribute_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @filewrapperInExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperTemplateInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateName.objectCompare (p->mAttribute_mFilewrapperTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressions.objectCompare (p->mAttribute_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperTemplateInExpressionAST::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    result = p->mAttribute_mFilewrapperTemplateName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperTemplateInExpressionAST::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_filewrapperTemplateInExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    result = p->mAttribute_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_filewrapperTemplateInExpressionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @filewrapperTemplateInExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                                  const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                  const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mFilewrapperName (in_mFilewrapperName),
mAttribute_mFilewrapperTemplateName (in_mFilewrapperTemplateName),
mAttribute_mExpressions (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

void cPtr_filewrapperTemplateInExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@filewrapperTemplateInExpressionAST:" ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperTemplateInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionAST (mAttribute_mFilewrapperName, mAttribute_mFilewrapperTemplateName, mAttribute_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @filewrapperTemplateInExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ("filewrapperTemplateInExpressionAST",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputActualParameterExpression.objectCompare (p->mAttribute_mOutputActualParameterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (p->mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputActualParameterAST::objectCompare (const GALGAS_outputActualParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mOutputActualParameterExpression,
                                                                                  const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputActualParameterExpression.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputActualParameterExpression, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_outputActualParameterAST::getter_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mAttribute_mOutputActualParameterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_outputActualParameterAST::getter_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputActualParameterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outputActualParameterAST::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mAttribute_mEndOfExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_outputActualParameterAST::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @outputActualParameterAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                              const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                              const GALGAS_location & in_mEndOfExpressionLocation
                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mOutputActualParameterExpression (in_mOutputActualParameterExpression),
mAttribute_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

void cPtr_outputActualParameterAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@outputActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputActualParameterAST (mAttribute_mActualSelector, mAttribute_mOutputActualParameterExpression, mAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @outputActualParameterAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterAST ("outputActualParameterAST",
                                                 & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  const GALGAS_outputActualParameterAST * p = (const GALGAS_outputActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputInputActualParameterName.objectCompare (p->mAttribute_mOutputInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputActualParameterAST::objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                            const GALGAS_lstring & inAttribute_mOutputInputActualParameterName,
                                                                                            const GALGAS_lstringlist & inAttribute_mStructAttributeList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputInputActualParameterName.isValid () && inAttribute_mStructAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputInputActualParameterName, inAttribute_mStructAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputInputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputInputActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputInputActualParameterAST::getter_mOutputInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mAttribute_mOutputInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputInputActualParameterAST::getter_mOutputInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_outputInputActualParameterAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_outputInputActualParameterAST::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @outputInputActualParameterAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                        const GALGAS_lstring & in_mOutputInputActualParameterName,
                                                                        const GALGAS_lstringlist & in_mStructAttributeList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mOutputInputActualParameterName (in_mOutputInputActualParameterName),
mAttribute_mStructAttributeList (in_mStructAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

void cPtr_outputInputActualParameterAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterAST (mAttribute_mActualSelector, mAttribute_mOutputInputActualParameterName, mAttribute_mStructAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outputInputActualParameterAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterAST ("outputInputActualParameterAST",
                                                      & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  const GALGAS_outputInputActualParameterAST * p = (const GALGAS_outputInputActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputSingleJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputSingleJokerParameterAST::objectCompare (const GALGAS_outputInputSingleJokerParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputSingleJokerParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (const cPtr_outputInputSingleJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSingleJokerParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputSingleJokerParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputInputSingleJokerParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputInputSingleJokerParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @outputInputSingleJokerParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputSingleJokerParameterAST::cPtr_outputInputSingleJokerParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputSingleJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

void cPtr_outputInputSingleJokerParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@outputInputSingleJokerParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputSingleJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputSingleJokerParameterAST (mAttribute_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outputInputSingleJokerParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ("outputInputSingleJokerParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputSingleJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputSingleJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSingleJokerParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  const GALGAS_outputInputSingleJokerParameterAST * p = (const GALGAS_outputInputSingleJokerParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputSingleJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSingleJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualExistingVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualExistingVariableParameterAST::objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualExistingVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_lstring::constructor_default (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualExistingVariableParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                                const GALGAS_lstring & inAttribute_mInputActualParameterName
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualExistingVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualExistingVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualExistingVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @inputActualExistingVariableParameterAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                            const GALGAS_lstring & in_mInputActualParameterName
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputActualParameterName (in_mInputActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualExistingVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

void cPtr_inputActualExistingVariableParameterAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@inputActualExistingVariableParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualExistingVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualExistingVariableParameterAST (mAttribute_mActualSelector, mAttribute_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @inputActualExistingVariableParameterAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ("inputActualExistingVariableParameterAST",
                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualExistingVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualExistingVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualExistingVariableParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  const GALGAS_inputActualExistingVariableParameterAST * p = (const GALGAS_inputActualExistingVariableParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualExistingVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualNewVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputOptionalActualTypeName.objectCompare (p->mAttribute_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualNewVariableParameterAST::objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                      const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mInputActualParameterName
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mInputOptionalActualTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputOptionalActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualNewVariableParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mAttribute_mInputActualParameterName (in_mInputActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewVariableParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualNewVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mAttribute_mActualSelector, mAttribute_mInputOptionalActualTypeName, mAttribute_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewVariableParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  const GALGAS_inputActualNewVariableParameterAST * p = (const GALGAS_inputActualNewVariableParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualNewConstantParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputOptionalActualTypeName.objectCompare (p->mAttribute_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMarkedAsUnused.objectCompare (p->mAttribute_mMarkedAsUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualNewConstantParameterAST::objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewConstantParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                      const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mInputActualParameterName,
                                                                                                      const GALGAS_bool & inAttribute_mMarkedAsUnused
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid () && inAttribute_mMarkedAsUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewConstantParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName, inAttribute_mMarkedAsUnused COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mInputOptionalActualTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputOptionalActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::getter_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_inputActualNewConstantParameterAST::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mMarkedAsUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_inputActualNewConstantParameterAST::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMarkedAsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualNewConstantParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mAttribute_mInputActualParameterName (in_mInputActualParameterName),
mAttribute_mMarkedAsUnused (in_mMarkedAsUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewConstantParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualNewConstantParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mAttribute_mActualSelector, mAttribute_mInputOptionalActualTypeName, mAttribute_mInputActualParameterName, mAttribute_mMarkedAsUnused COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewConstantParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  const GALGAS_inputActualNewConstantParameterAST * p = (const GALGAS_inputActualNewConstantParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewConstantParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputSingleJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputSingleJokerActualParameterAST::objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputSingleJokerActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputSingleJokerActualParameterAST::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputSingleJokerActualParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputSingleJokerActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mAttribute_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputSingleJokerActualParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  const GALGAS_inputSingleJokerActualParameterAST * p = (const GALGAS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterVariable) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterVariable::objectCompare (const GALGAS_inputParameterVariable & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterVariable::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterVariable::getter_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @inputParameterVariable class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@inputParameterVariable:" ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @inputParameterVariable type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                               & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  const GALGAS_inputParameterVariable * p = (const GALGAS_inputParameterVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

