#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionStringForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionStringForGeneration * p = (const cPtr_templateInstructionStringForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateString.objectCompare (p->mProperty_mTemplateString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionStringForGeneration::objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const {
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

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionStringForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::constructor_new (const GALGAS_string & inAttribute_mTemplateString
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  if (inAttribute_mTemplateString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringForGeneration (inAttribute_mTemplateString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionStringForGeneration::getter_mTemplateString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionStringForGeneration * p = (const cPtr_templateInstructionStringForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
    result = p->mProperty_mTemplateString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionStringForGeneration::setter_setMTemplateString (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_templateInstructionStringForGeneration * p = (cPtr_templateInstructionStringForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
    p->mProperty_mTemplateString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mTemplateString (in_mTemplateString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionStringForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

void cPtr_templateInstructionStringForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@templateInstructionStringForGeneration:" ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionStringForGeneration (mProperty_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ("templateInstructionStringForGeneration",
                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  const GALGAS_templateInstructionStringForGeneration * p = (const GALGAS_templateInstructionStringForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionStringForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionStringForGeneration_2D_weak::GALGAS_templateInstructionStringForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak & GALGAS_templateInstructionStringForGeneration_2D_weak::operator = (const GALGAS_templateInstructionStringForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak::GALGAS_templateInstructionStringForGeneration_2D_weak (const GALGAS_templateInstructionStringForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak GALGAS_templateInstructionStringForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration_2D_weak::bang_templateInstructionStringForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionStringForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringForGeneration) ;
      result = GALGAS_templateInstructionStringForGeneration ((cPtr_templateInstructionStringForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionStringForGeneration_2D_weak::getter_mTemplateString (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_templateInstructionStringForGeneration * objectPtr = (cPtr_templateInstructionStringForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionStringForGeneration) ;
      result = objectPtr->mProperty_mTemplateString ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionStringForGeneration_2D_weak::setter_setMTemplateString (const GALGAS_string inValue,
                                                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_templateInstructionStringForGeneration * objectPtr = (cPtr_templateInstructionStringForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_templateInstructionStringForGeneration) ;
      objectPtr->mProperty_mTemplateString = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ("templateInstructionStringForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak GALGAS_templateInstructionStringForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration_2D_weak result ;
  const GALGAS_templateInstructionStringForGeneration_2D_weak * p = (const GALGAS_templateInstructionStringForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry::GALGAS_unifiedTypeMap_2D_entry (void) :
AC_GALGAS_sharedMapEntry () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
  result.makeNullEntry (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_entry::class_method_makeOptionalEntry (GALGAS_unifiedTypeMap & ioMap,
                                                                     GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_entry & outEntry
                                                                     COMMA_LOCATION_ARGS) {
  outEntry.internalMakeOptionalEntry (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_entry & outEntry
                                                             COMMA_LOCATION_ARGS) {
  outEntry.internalMakeEntry (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_entry & outEntry
                                                                       COMMA_LOCATION_ARGS) {
  outEntry.internalMakeEntryFromString (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mIsPredefined (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mIsPredefined" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mIsPredefined;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mIsConcrete (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mIsConcrete" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mIsConcrete;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::getter_mSuperType (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mSuperType" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mSuperType;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_unifiedTypeMap_2D_entry::getter_mTypeKindEnum (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindEnum result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeKindEnum" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeKindEnum;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mSupportCollectionValue (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mSupportCollectionValue" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mSupportCollectionValue;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_unifiedTypeMap_2D_entry::getter_mAllTypedPropertyList (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mAllTypedPropertyList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mAllTypedPropertyList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_unifiedTypeMap_2D_entry::getter_mPropertyMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mPropertyMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mPropertyMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_unifiedTypeMap_2D_entry::getter_mCurrentTypedPropertyList (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mCurrentTypedPropertyList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mCurrentTypedPropertyList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_unifiedTypeMap_2D_entry::getter_mConstructorMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mConstructorMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mConstructorMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap GALGAS_unifiedTypeMap_2D_entry::getter_mGetterMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_getterMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mGetterMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mGetterMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_unifiedTypeMap_2D_entry::getter_mSetterMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mSetterMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mSetterMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_unifiedTypeMap_2D_entry::getter_mInstanceMethodMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mInstanceMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mInstanceMethodMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_unifiedTypeMap_2D_entry::getter_mClassMethodMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mClassMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mClassMethodMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_unifiedTypeMap_2D_entry::getter_mOptionalMethodMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mOptionalMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mOptionalMethodMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_unifiedTypeMap_2D_entry::getter_mEnumerationDescriptor (C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mEnumerationDescriptor" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mEnumerationDescriptor;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_unifiedTypeMap_2D_entry::getter_mHandledOperatorFlags (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_operators result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mHandledOperatorFlags" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mHandledOperatorFlags;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_unifiedTypeMap_2D_entry::getter_mAddAssignOperatorArguments (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mAddAssignOperatorArguments" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mAddAssignOperatorArguments;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_unifiedTypeMap_2D_entry::getter_mEnumConstantMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mEnumConstantMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mEnumConstantMap;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_unifiedTypeMap_2D_entry::getter_mEnumConstantList (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mEnumConstantList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mEnumConstantList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap_2D_entry::getter_mMapSearchMethodList (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mMapSearchMethodList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mMapSearchMethodList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap_2D_entry::getter_mMapEntrySearchConstructorList (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mMapEntrySearchConstructorList" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mMapEntrySearchConstructorList;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMap_2D_entry::getter_mGenerateHeaderInSeparateFile (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mGenerateHeaderInSeparateFile" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mGenerateHeaderInSeparateFile;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::getter_mTypeForEnumeratedElement (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeForEnumeratedElement" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mTypeForEnumeratedElement;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_unifiedTypeMap_2D_entry::getter_mDefaultConstructorName (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mDefaultConstructorName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mDefaultConstructorName;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_unifiedTypeMap_2D_entry::getter_mHeaderFileName (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mHeaderFileName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mHeaderFileName;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_unifiedTypeMap_2D_entry::getter_mHeaderKind (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_headerKind result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mHeaderKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mHeaderKind;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMap-entry type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_entry ("unifiedTypeMap-entry",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_entry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_entry ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_entry::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_entry (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_unifiedTypeMap_2D_entry::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const GALGAS_unifiedTypeMap_2D_entry * p = (const GALGAS_unifiedTypeMap_2D_entry *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_entry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-entry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTypeMap (),
mProperty_mRoutineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_mGrammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_unifiedTypeMap & inOperand0,
                                                const GALGAS_routineMap & inOperand1,
                                                const GALGAS_functionMap & inOperand2,
                                                const GALGAS_filewrapperMap & inOperand3,
                                                const GALGAS_grammarMap & inOperand4,
                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                const GALGAS_syntaxComponentMap & inOperand7) :
mProperty_mTypeMap (inOperand0),
mProperty_mRoutineMap (inOperand1),
mProperty_mFunctionMap (inOperand2),
mProperty_mFilewrapperMap (inOperand3),
mProperty_mGrammarMap (inOperand4),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand5),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand6),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_filewrapperMap::constructor_emptyMap (HERE),
                                 GALGAS_grammarMap::constructor_emptyMap (HERE),
                                 GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_syntaxComponentMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_unifiedTypeMap & inOperand0,
                                                                const GALGAS_routineMap & inOperand1,
                                                                const GALGAS_functionMap & inOperand2,
                                                                const GALGAS_filewrapperMap & inOperand3,
                                                                const GALGAS_grammarMap & inOperand4,
                                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                                const GALGAS_syntaxComponentMap & inOperand7 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionMap.objectCompare (inOperand.mProperty_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperMap.objectCompare (inOperand.mProperty_mFilewrapperMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGrammarMap.objectCompare (inOperand.mProperty_mGrammarMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mOptionComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mLexiqueComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mSyntaxComponentMapForSemanticAnalysis) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTypeMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_mGrammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mTypeMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_mGrammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGrammarMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_semanticContext::getter_mRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap GALGAS_semanticContext::getter_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap GALGAS_semanticContext::getter_mFilewrapperMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap GALGAS_semanticContext::getter_mGrammarMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_semanticContext::getter_mOptionComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentMapForSemanticAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_semanticContext::getter_mLexiqueComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueComponentMapForSemanticAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap GALGAS_semanticContext::getter_mSyntaxComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentMapForSemanticAnalysis ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@semanticContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes::GALGAS_predefinedTypes (void) :
mProperty_mLocationType (),
mProperty_mBoolType (),
mProperty_mCharType (),
mProperty_mStringType (),
mProperty_mUIntType (),
mProperty_mSIntType (),
mProperty_mUInt_36__34_Type (),
mProperty_mSInt_36__34_Type (),
mProperty_mDoubleType (),
mProperty_mLBoolType (),
mProperty_mLCharType (),
mProperty_mLStringType (),
mProperty_mLUIntType (),
mProperty_mLSIntType (),
mProperty_mLUInt_36__34_Type (),
mProperty_mLSInt_36__34_Type (),
mProperty_mLDoubleType (),
mProperty_mStringListType (),
mProperty_mLBigIntType (),
mProperty_mBigIntType (),
mProperty_mStringSetType (),
mProperty_mLStringListType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes::~ GALGAS_predefinedTypes (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes::GALGAS_predefinedTypes (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand6,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand7,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand8,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand9,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand10,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand11,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand12,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand13,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand14,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand15,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand16,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand17,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand18,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand19,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand20,
                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand21) :
mProperty_mLocationType (inOperand0),
mProperty_mBoolType (inOperand1),
mProperty_mCharType (inOperand2),
mProperty_mStringType (inOperand3),
mProperty_mUIntType (inOperand4),
mProperty_mSIntType (inOperand5),
mProperty_mUInt_36__34_Type (inOperand6),
mProperty_mSInt_36__34_Type (inOperand7),
mProperty_mDoubleType (inOperand8),
mProperty_mLBoolType (inOperand9),
mProperty_mLCharType (inOperand10),
mProperty_mLStringType (inOperand11),
mProperty_mLUIntType (inOperand12),
mProperty_mLSIntType (inOperand13),
mProperty_mLUInt_36__34_Type (inOperand14),
mProperty_mLSInt_36__34_Type (inOperand15),
mProperty_mLDoubleType (inOperand16),
mProperty_mStringListType (inOperand17),
mProperty_mLBigIntType (inOperand18),
mProperty_mBigIntType (inOperand19),
mProperty_mStringSetType (inOperand20),
mProperty_mLStringListType (inOperand21) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_predefinedTypes::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_predefinedTypes (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_predefinedTypes::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand6,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand7,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand8,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand9,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand10,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand11,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand12,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand13,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand14,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand15,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand16,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand17,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand18,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand19,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand20,
                                                                const GALGAS_unifiedTypeMap_2D_entry & inOperand21 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid ()) {
    result = GALGAS_predefinedTypes (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_predefinedTypes::objectCompare (const GALGAS_predefinedTypes & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLocationType.objectCompare (inOperand.mProperty_mLocationType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoolType.objectCompare (inOperand.mProperty_mBoolType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCharType.objectCompare (inOperand.mProperty_mCharType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringType.objectCompare (inOperand.mProperty_mStringType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUIntType.objectCompare (inOperand.mProperty_mUIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSIntType.objectCompare (inOperand.mProperty_mSIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUInt_36__34_Type.objectCompare (inOperand.mProperty_mUInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSInt_36__34_Type.objectCompare (inOperand.mProperty_mSInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDoubleType.objectCompare (inOperand.mProperty_mDoubleType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLBoolType.objectCompare (inOperand.mProperty_mLBoolType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLCharType.objectCompare (inOperand.mProperty_mLCharType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLStringType.objectCompare (inOperand.mProperty_mLStringType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLUIntType.objectCompare (inOperand.mProperty_mLUIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLSIntType.objectCompare (inOperand.mProperty_mLSIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLUInt_36__34_Type.objectCompare (inOperand.mProperty_mLUInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLSInt_36__34_Type.objectCompare (inOperand.mProperty_mLSInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLDoubleType.objectCompare (inOperand.mProperty_mLDoubleType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringListType.objectCompare (inOperand.mProperty_mStringListType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLBigIntType.objectCompare (inOperand.mProperty_mLBigIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBigIntType.objectCompare (inOperand.mProperty_mBigIntType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringSetType.objectCompare (inOperand.mProperty_mStringSetType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLStringListType.objectCompare (inOperand.mProperty_mLStringListType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypes::isValid (void) const {
  return mProperty_mLocationType.isValid () && mProperty_mBoolType.isValid () && mProperty_mCharType.isValid () && mProperty_mStringType.isValid () && mProperty_mUIntType.isValid () && mProperty_mSIntType.isValid () && mProperty_mUInt_36__34_Type.isValid () && mProperty_mSInt_36__34_Type.isValid () && mProperty_mDoubleType.isValid () && mProperty_mLBoolType.isValid () && mProperty_mLCharType.isValid () && mProperty_mLStringType.isValid () && mProperty_mLUIntType.isValid () && mProperty_mLSIntType.isValid () && mProperty_mLUInt_36__34_Type.isValid () && mProperty_mLSInt_36__34_Type.isValid () && mProperty_mLDoubleType.isValid () && mProperty_mStringListType.isValid () && mProperty_mLBigIntType.isValid () && mProperty_mBigIntType.isValid () && mProperty_mStringSetType.isValid () && mProperty_mLStringListType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypes::drop (void) {
  mProperty_mLocationType.drop () ;
  mProperty_mBoolType.drop () ;
  mProperty_mCharType.drop () ;
  mProperty_mStringType.drop () ;
  mProperty_mUIntType.drop () ;
  mProperty_mSIntType.drop () ;
  mProperty_mUInt_36__34_Type.drop () ;
  mProperty_mSInt_36__34_Type.drop () ;
  mProperty_mDoubleType.drop () ;
  mProperty_mLBoolType.drop () ;
  mProperty_mLCharType.drop () ;
  mProperty_mLStringType.drop () ;
  mProperty_mLUIntType.drop () ;
  mProperty_mLSIntType.drop () ;
  mProperty_mLUInt_36__34_Type.drop () ;
  mProperty_mLSInt_36__34_Type.drop () ;
  mProperty_mLDoubleType.drop () ;
  mProperty_mStringListType.drop () ;
  mProperty_mLBigIntType.drop () ;
  mProperty_mBigIntType.drop () ;
  mProperty_mStringSetType.drop () ;
  mProperty_mLStringListType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypes::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @predefinedTypes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLocationType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoolType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCharType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDoubleType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLBoolType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLCharType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLStringType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLUIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLSIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLDoubleType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringListType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLBigIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBigIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringSetType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLStringListType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLocationType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocationType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mBoolType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoolType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mCharType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCharType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mStringType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mUIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mSIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mUInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mSInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mDoubleType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoubleType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLBoolType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLBoolType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLCharType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLCharType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLStringType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLStringType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLUIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLUIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLSIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLSIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLUInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLUInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLSInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLSInt_36__34_Type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLDoubleType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLDoubleType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mStringListType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringListType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLBigIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLBigIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mBigIntType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBigIntType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mStringSetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringSetType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_predefinedTypes::getter_mLStringListType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLStringListType ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@predefinedTypes type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypes ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypes (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_predefinedTypes::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypes result ;
  const GALGAS_predefinedTypes * p = (const GALGAS_predefinedTypes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalImplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mListName.objectCompare (p->mProperty_mListName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalImplicitRuleAST::objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const {
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

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalImplicitRuleAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_new (const GALGAS_lstring & inAttribute_mListName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  if (inAttribute_mListName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalImplicitRuleAST (inAttribute_mListName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalImplicitRuleAST::getter_mListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    result = p->mProperty_mListName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalImplicitRuleAST::setter_setMListName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    p->mProperty_mListName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mListName (in_mListName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalImplicitRuleAST:" ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalImplicitRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  const GALGAS_lexicalImplicitRuleAST * p = (const GALGAS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalImplicitRuleAST_2D_weak::objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const {
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

GALGAS_lexicalImplicitRuleAST_2D_weak::GALGAS_lexicalImplicitRuleAST_2D_weak (void) :
GALGAS_abstractLexicalRuleAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak & GALGAS_lexicalImplicitRuleAST_2D_weak::operator = (const GALGAS_lexicalImplicitRuleAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak::GALGAS_lexicalImplicitRuleAST_2D_weak (const GALGAS_lexicalImplicitRuleAST & inSource) :
GALGAS_abstractLexicalRuleAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak GALGAS_lexicalImplicitRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST_2D_weak::bang_lexicalImplicitRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalImplicitRuleAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalImplicitRuleAST) ;
      result = GALGAS_lexicalImplicitRuleAST ((cPtr_lexicalImplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalImplicitRuleAST_2D_weak::getter_mListName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalImplicitRuleAST * objectPtr = (cPtr_lexicalImplicitRuleAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalImplicitRuleAST) ;
      result = objectPtr->mProperty_mListName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalImplicitRuleAST_2D_weak::setter_setMListName (const GALGAS_lstring inValue,
                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalImplicitRuleAST * objectPtr = (cPtr_lexicalImplicitRuleAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalImplicitRuleAST) ;
      objectPtr->mProperty_mListName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalImplicitRuleAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ("lexicalImplicitRuleAST-weak",
                                                       & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak GALGAS_lexicalImplicitRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST_2D_weak result ;
  const GALGAS_lexicalImplicitRuleAST_2D_weak * p = (const GALGAS_lexicalImplicitRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalImplicitRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterSetMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacterSetName.objectCompare (p->mProperty_mCharacterSetName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterSetMatchAST::objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const {
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

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterSetMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mCharacterSetName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (inAttribute_mCharacterSetName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterSetMatchAST (inAttribute_mCharacterSetName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalCharacterSetMatchAST::getter_mCharacterSetName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    result = p->mProperty_mCharacterSetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterSetMatchAST::setter_setMCharacterSetName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    p->mProperty_mCharacterSetName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacterSetName (in_mCharacterSetName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterSetMatchAST:" ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterSetMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                    & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  const GALGAS_lexicalCharacterSetMatchAST * p = (const GALGAS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterSetMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterSetMatchAST_2D_weak::GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak & GALGAS_lexicalCharacterSetMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterSetMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak::GALGAS_lexicalCharacterSetMatchAST_2D_weak (const GALGAS_lexicalCharacterSetMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak GALGAS_lexicalCharacterSetMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST_2D_weak::bang_lexicalCharacterSetMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterSetMatchAST) ;
      result = GALGAS_lexicalCharacterSetMatchAST ((cPtr_lexicalCharacterSetMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalCharacterSetMatchAST_2D_weak::getter_mCharacterSetName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalCharacterSetMatchAST * objectPtr = (cPtr_lexicalCharacterSetMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterSetMatchAST) ;
      result = objectPtr->mProperty_mCharacterSetName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterSetMatchAST_2D_weak::setter_setMCharacterSetName (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalCharacterSetMatchAST * objectPtr = (cPtr_lexicalCharacterSetMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterSetMatchAST) ;
      objectPtr->mProperty_mCharacterSetName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterSetMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ("lexicalCharacterSetMatchAST-weak",
                                                            & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak GALGAS_lexicalCharacterSetMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterSetMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterSetMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterMatchAST::objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const {
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

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterMatchAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterMatchAST::setter_setMCharacter (GALGAS_lchar inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    p->mProperty_mCharacter = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  const GALGAS_lexicalCharacterMatchAST * p = (const GALGAS_lexicalCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterMatchAST_2D_weak::GALGAS_lexicalCharacterMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak & GALGAS_lexicalCharacterMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak::GALGAS_lexicalCharacterMatchAST_2D_weak (const GALGAS_lexicalCharacterMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak GALGAS_lexicalCharacterMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST_2D_weak::bang_lexicalCharacterMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterMatchAST) ;
      result = GALGAS_lexicalCharacterMatchAST ((cPtr_lexicalCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterMatchAST_2D_weak::getter_mCharacter (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalCharacterMatchAST * objectPtr = (cPtr_lexicalCharacterMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterMatchAST) ;
      result = objectPtr->mProperty_mCharacter ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterMatchAST_2D_weak::setter_setMCharacter (const GALGAS_lchar inValue,
                                                                    C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalCharacterMatchAST * objectPtr = (cPtr_lexicalCharacterMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterMatchAST) ;
      objectPtr->mProperty_mCharacter = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ("lexicalCharacterMatchAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak GALGAS_lexicalCharacterMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLowerBound.objectCompare (p->mProperty_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBound.objectCompare (p->mProperty_mUpperBound) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const {
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

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                   GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::getter_mLowerBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    result = p->mProperty_mLowerBound ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::getter_mUpperBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    result = p->mProperty_mUpperBound ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterIntervalMatchAST::setter_setMLowerBound (GALGAS_lchar inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    p->mProperty_mLowerBound = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterIntervalMatchAST::setter_setMUpperBound (GALGAS_lchar inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    p->mProperty_mUpperBound = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterIntervalMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                              const GALGAS_lchar & in_mUpperBound
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterIntervalMatchAST:" ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterIntervalMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  const GALGAS_lexicalCharacterIntervalMatchAST * p = (const GALGAS_lexicalCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterIntervalMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (const GALGAS_lexicalCharacterIntervalMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::bang_lexicalCharacterIntervalMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = GALGAS_lexicalCharacterIntervalMatchAST ((cPtr_lexicalCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::getter_mLowerBound (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = objectPtr->mProperty_mLowerBound ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::getter_mUpperBound (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = objectPtr->mProperty_mUpperBound ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::setter_setMLowerBound (const GALGAS_lchar inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      objectPtr->mProperty_mLowerBound = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::setter_setMUpperBound (const GALGAS_lchar inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      objectPtr->mProperty_mUpperBound = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterIntervalMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ("lexicalCharacterIntervalMatchAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStringMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalStringMatchAST::objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const {
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

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  if (inAttribute_mString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringMatchAST (inAttribute_mString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringMatchAST::getter_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    result = p->mProperty_mString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStringMatchAST::setter_setMString (GALGAS_lstring inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    p->mProperty_mString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (in_mString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@lexicalStringMatchAST:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                              & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  const GALGAS_lexicalStringMatchAST * p = (const GALGAS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalStringMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStringMatchAST_2D_weak::GALGAS_lexicalStringMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak & GALGAS_lexicalStringMatchAST_2D_weak::operator = (const GALGAS_lexicalStringMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak::GALGAS_lexicalStringMatchAST_2D_weak (const GALGAS_lexicalStringMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST_2D_weak::bang_lexicalStringMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStringMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringMatchAST) ;
      result = GALGAS_lexicalStringMatchAST ((cPtr_lexicalStringMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringMatchAST_2D_weak::getter_mString (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalStringMatchAST * objectPtr = (cPtr_lexicalStringMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalStringMatchAST) ;
      result = objectPtr->mProperty_mString ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStringMatchAST_2D_weak::setter_setMString (const GALGAS_lstring inValue,
                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalStringMatchAST * objectPtr = (cPtr_lexicalStringMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalStringMatchAST) ;
      objectPtr->mProperty_mString = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ("lexicalStringMatchAST-weak",
                                                      & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST_2D_weak result ;
  const GALGAS_lexicalStringMatchAST_2D_weak * p = (const GALGAS_lexicalStringMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStringNotMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessage.objectCompare (p->mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalStringNotMatchAST::objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const {
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

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringNotMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString,
                                                                                  const GALGAS_lstring & inAttribute_mErrorMessage
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  if (inAttribute_mString.isValid () && inAttribute_mErrorMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringNotMatchAST (inAttribute_mString, inAttribute_mErrorMessage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::getter_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    result = p->mProperty_mString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStringNotMatchAST::setter_setMString (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    p->mProperty_mString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStringNotMatchAST::setter_setMErrorMessage (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    p->mProperty_mErrorMessage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                                              const GALGAS_lstring & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (in_mString),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalStringNotMatchAST:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringNotMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  const GALGAS_lexicalStringNotMatchAST * p = (const GALGAS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalStringNotMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStringNotMatchAST_2D_weak::GALGAS_lexicalStringNotMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak & GALGAS_lexicalStringNotMatchAST_2D_weak::operator = (const GALGAS_lexicalStringNotMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak::GALGAS_lexicalStringNotMatchAST_2D_weak (const GALGAS_lexicalStringNotMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST_2D_weak::bang_lexicalStringNotMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStringNotMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringNotMatchAST) ;
      result = GALGAS_lexicalStringNotMatchAST ((cPtr_lexicalStringNotMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST_2D_weak::getter_mString (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalStringNotMatchAST * objectPtr = (cPtr_lexicalStringNotMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalStringNotMatchAST) ;
      result = objectPtr->mProperty_mString ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST_2D_weak::getter_mErrorMessage (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalStringNotMatchAST * objectPtr = (cPtr_lexicalStringNotMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalStringNotMatchAST) ;
      result = objectPtr->mProperty_mErrorMessage ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStringNotMatchAST_2D_weak::setter_setMString (const GALGAS_lstring inValue,
                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalStringNotMatchAST * objectPtr = (cPtr_lexicalStringNotMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalStringNotMatchAST) ;
      objectPtr->mProperty_mString = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStringNotMatchAST_2D_weak::setter_setMErrorMessage (const GALGAS_lstring inValue,
                                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalStringNotMatchAST * objectPtr = (cPtr_lexicalStringNotMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalStringNotMatchAST) ;
      objectPtr->mProperty_mErrorMessage = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringNotMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ("lexicalStringNotMatchAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST_2D_weak result ;
  const GALGAS_lexicalStringNotMatchAST_2D_weak * p = (const GALGAS_lexicalStringNotMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringNotMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSimpleSendInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSentTerminal.objectCompare (p->mProperty_mSentTerminal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalSimpleSendInstructionAST::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const {
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

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSimpleSendInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (inAttribute_mSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSimpleSendInstructionAST (inAttribute_mSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSimpleSendInstructionAST::getter_mSentTerminal (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    result = p->mProperty_mSentTerminal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSimpleSendInstructionAST::setter_setMSentTerminal (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    p->mProperty_mSentTerminal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSimpleSendInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mSentTerminal (in_mSentTerminal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSimpleSendInstructionAST:" ;
  mProperty_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSimpleSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mProperty_mSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSimpleSendInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  const GALGAS_lexicalSimpleSendInstructionAST * p = (const GALGAS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSimpleSendInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSimpleSendInstructionAST_2D_weak::GALGAS_lexicalSimpleSendInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak & GALGAS_lexicalSimpleSendInstructionAST_2D_weak::operator = (const GALGAS_lexicalSimpleSendInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak::GALGAS_lexicalSimpleSendInstructionAST_2D_weak (const GALGAS_lexicalSimpleSendInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak GALGAS_lexicalSimpleSendInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST_2D_weak::bang_lexicalSimpleSendInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      result = GALGAS_lexicalSimpleSendInstructionAST ((cPtr_lexicalSimpleSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSimpleSendInstructionAST_2D_weak::getter_mSentTerminal (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalSimpleSendInstructionAST * objectPtr = (cPtr_lexicalSimpleSendInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      result = objectPtr->mProperty_mSentTerminal ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSimpleSendInstructionAST_2D_weak::setter_setMSentTerminal (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalSimpleSendInstructionAST * objectPtr = (cPtr_lexicalSimpleSendInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      objectPtr->mProperty_mSentTerminal = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSimpleSendInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ("lexicalSimpleSendInstructionAST-weak",
                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak GALGAS_lexicalSimpleSendInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST_2D_weak result ;
  const GALGAS_lexicalSimpleSendInstructionAST_2D_weak * p = (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSendTerminalByDefaultAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSendTerminalByDefaultAST * p = (const cPtr_lexicalSendTerminalByDefaultAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefaultSentTerminal.objectCompare (p->mProperty_mDefaultSentTerminal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalSendTerminalByDefaultAST::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const {
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

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (const GALGAS_lstring & inAttribute_mDefaultSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  if (inAttribute_mDefaultSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSendTerminalByDefaultAST (inAttribute_mDefaultSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendTerminalByDefaultAST::getter_mDefaultSentTerminal (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSendTerminalByDefaultAST * p = (const cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    result = p->mProperty_mDefaultSentTerminal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendTerminalByDefaultAST::setter_setMDefaultSentTerminal (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    p->mProperty_mDefaultSentTerminal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultSentTerminal (in_mDefaultSentTerminal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSendTerminalByDefaultAST:" ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSendTerminalByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendTerminalByDefaultAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                        & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  const GALGAS_lexicalSendTerminalByDefaultAST * p = (const GALGAS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (void) :
GALGAS_lexicalSendDefaultActionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::operator = (const GALGAS_lexicalSendTerminalByDefaultAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (const GALGAS_lexicalSendTerminalByDefaultAST & inSource) :
GALGAS_lexicalSendDefaultActionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::bang_lexicalSendTerminalByDefaultAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      result = GALGAS_lexicalSendTerminalByDefaultAST ((cPtr_lexicalSendTerminalByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::getter_mDefaultSentTerminal (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalSendTerminalByDefaultAST * objectPtr = (cPtr_lexicalSendTerminalByDefaultAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      result = objectPtr->mProperty_mDefaultSentTerminal ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::setter_setMDefaultSentTerminal (const GALGAS_lstring inValue,
                                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalSendTerminalByDefaultAST * objectPtr = (cPtr_lexicalSendTerminalByDefaultAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      objectPtr->mProperty_mDefaultSentTerminal = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendTerminalByDefaultAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ("lexicalSendTerminalByDefaultAST-weak",
                                                                & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST_2D_weak result ;
  const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak * p = (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalErrorByDefaultAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalErrorByDefaultAST * p = (const cPtr_lexicalErrorByDefaultAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefaultErrorMessageName.objectCompare (p->mProperty_mDefaultErrorMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalErrorByDefaultAST::objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const {
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

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalErrorByDefaultAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::constructor_new (const GALGAS_lstring & inAttribute_mDefaultErrorMessageName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  if (inAttribute_mDefaultErrorMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalErrorByDefaultAST (inAttribute_mDefaultErrorMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorByDefaultAST::getter_mDefaultErrorMessageName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalErrorByDefaultAST * p = (const cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    result = p->mProperty_mDefaultErrorMessageName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalErrorByDefaultAST::setter_setMDefaultErrorMessageName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    p->mProperty_mDefaultErrorMessageName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultErrorMessageName (in_mDefaultErrorMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalErrorByDefaultAST:" ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorByDefaultAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                 & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  const GALGAS_lexicalErrorByDefaultAST * p = (const GALGAS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalErrorByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalErrorByDefaultAST_2D_weak & inOperand) const {
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

GALGAS_lexicalErrorByDefaultAST_2D_weak::GALGAS_lexicalErrorByDefaultAST_2D_weak (void) :
GALGAS_lexicalSendDefaultActionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak & GALGAS_lexicalErrorByDefaultAST_2D_weak::operator = (const GALGAS_lexicalErrorByDefaultAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak::GALGAS_lexicalErrorByDefaultAST_2D_weak (const GALGAS_lexicalErrorByDefaultAST & inSource) :
GALGAS_lexicalSendDefaultActionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST_2D_weak::bang_lexicalErrorByDefaultAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalErrorByDefaultAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorByDefaultAST) ;
      result = GALGAS_lexicalErrorByDefaultAST ((cPtr_lexicalErrorByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorByDefaultAST_2D_weak::getter_mDefaultErrorMessageName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalErrorByDefaultAST * objectPtr = (cPtr_lexicalErrorByDefaultAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalErrorByDefaultAST) ;
      result = objectPtr->mProperty_mDefaultErrorMessageName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalErrorByDefaultAST_2D_weak::setter_setMDefaultErrorMessageName (const GALGAS_lstring inValue,
                                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalErrorByDefaultAST * objectPtr = (cPtr_lexicalErrorByDefaultAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalErrorByDefaultAST) ;
      objectPtr->mProperty_mDefaultErrorMessageName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorByDefaultAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ("lexicalErrorByDefaultAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST_2D_weak result ;
  const GALGAS_lexicalErrorByDefaultAST_2D_weak * p = (const GALGAS_lexicalErrorByDefaultAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRoutineInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualArgumentList.objectCompare (p->mProperty_mActualArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageList.objectCompare (p->mProperty_mErrorMessageList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalRoutineInstructionAST::objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const {
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

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRoutineInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstringlist::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (const cPtr_lexicalRoutineInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                          const GALGAS_lexicalRoutineCallActualArgumentListAST & inAttribute_mActualArgumentList,
                                                                                          const GALGAS_lstringlist & inAttribute_mErrorMessageList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualArgumentList.isValid () && inAttribute_mErrorMessageList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRoutineInstructionAST (inAttribute_mRoutineName, inAttribute_mActualArgumentList, inAttribute_mErrorMessageList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRoutineInstructionAST::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineInstructionAST::getter_mActualArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mProperty_mActualArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalRoutineInstructionAST::getter_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mProperty_mErrorMessageList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineInstructionAST::setter_setMRoutineName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalRoutineInstructionAST * p = (cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    p->mProperty_mRoutineName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineInstructionAST::setter_setMActualArgumentList (GALGAS_lexicalRoutineCallActualArgumentListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalRoutineInstructionAST * p = (cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    p->mProperty_mActualArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineInstructionAST::setter_setMErrorMessageList (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalRoutineInstructionAST * p = (cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    p->mProperty_mErrorMessageList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineInstructionAST::cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                      const GALGAS_lstringlist & in_mErrorMessageList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualArgumentList (in_mActualArgumentList),
mProperty_mErrorMessageList (in_mErrorMessageList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRoutineInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

void cPtr_lexicalRoutineInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@lexicalRoutineInstructionAST:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRoutineInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRoutineInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ("lexicalRoutineInstructionAST",
                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  const GALGAS_lexicalRoutineInstructionAST * p = (const GALGAS_lexicalRoutineInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRoutineInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRoutineInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRoutineInstructionAST_2D_weak::GALGAS_lexicalRoutineInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak & GALGAS_lexicalRoutineInstructionAST_2D_weak::operator = (const GALGAS_lexicalRoutineInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak::GALGAS_lexicalRoutineInstructionAST_2D_weak (const GALGAS_lexicalRoutineInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak GALGAS_lexicalRoutineInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST_2D_weak::bang_lexicalRoutineInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineInstructionAST) ;
      result = GALGAS_lexicalRoutineInstructionAST ((cPtr_lexicalRoutineInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRoutineInstructionAST_2D_weak::getter_mRoutineName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalRoutineInstructionAST * objectPtr = (cPtr_lexicalRoutineInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRoutineInstructionAST) ;
      result = objectPtr->mProperty_mRoutineName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineInstructionAST_2D_weak::getter_mActualArgumentList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalRoutineInstructionAST * objectPtr = (cPtr_lexicalRoutineInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRoutineInstructionAST) ;
      result = objectPtr->mProperty_mActualArgumentList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalRoutineInstructionAST_2D_weak::getter_mErrorMessageList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalRoutineInstructionAST * objectPtr = (cPtr_lexicalRoutineInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRoutineInstructionAST) ;
      result = objectPtr->mProperty_mErrorMessageList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineInstructionAST_2D_weak::setter_setMRoutineName (const GALGAS_lstring inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalRoutineInstructionAST * objectPtr = (cPtr_lexicalRoutineInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRoutineInstructionAST) ;
      objectPtr->mProperty_mRoutineName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineInstructionAST_2D_weak::setter_setMActualArgumentList (const GALGAS_lexicalRoutineCallActualArgumentListAST inValue,
                                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalRoutineInstructionAST * objectPtr = (cPtr_lexicalRoutineInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRoutineInstructionAST) ;
      objectPtr->mProperty_mActualArgumentList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineInstructionAST_2D_weak::setter_setMErrorMessageList (const GALGAS_lstringlist inValue,
                                                                               C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalRoutineInstructionAST * objectPtr = (cPtr_lexicalRoutineInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRoutineInstructionAST) ;
      objectPtr->mProperty_mErrorMessageList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST_2D_weak ("lexicalRoutineInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST_2D_weak GALGAS_lexicalRoutineInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST_2D_weak result ;
  const GALGAS_lexicalRoutineInstructionAST_2D_weak * p = (const GALGAS_lexicalRoutineInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalAttributeInputOutputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualPassingModeLocation.objectCompare (p->mProperty_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
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

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                                              const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputOutputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputOutputArgumentAST::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeInputOutputArgumentAST::setter_setMAttributeName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    p->mProperty_mAttributeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                          const GALGAS_lstring & in_mAttributeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputOutputArgumentAST:" ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputOutputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                               & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::operator = (const GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (const GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::bang_lexicalAttributeInputOutputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = GALGAS_lexicalAttributeInputOutputArgumentAST ((cPtr_lexicalAttributeInputOutputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::getter_mAttributeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalAttributeInputOutputArgumentAST * objectPtr = (cPtr_lexicalAttributeInputOutputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = objectPtr->mProperty_mAttributeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::setter_setMAttributeName (const GALGAS_lstring inValue,
                                                                                      C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalAttributeInputOutputArgumentAST * objectPtr = (cPtr_lexicalAttributeInputOutputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      objectPtr->mProperty_mAttributeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputOutputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ("lexicalAttributeInputOutputArgumentAST-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalAttributeInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputArgumentAST * p = (const cPtr_lexicalAttributeInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalAttributeInputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const {
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

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputArgumentAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  if (inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputArgumentAST (inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputArgumentAST::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalAttributeInputArgumentAST * p = (const cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    result = p->mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeInputArgumentAST::setter_setMAttributeName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    p->mProperty_mAttributeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputArgumentAST:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                         & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  const GALGAS_lexicalAttributeInputArgumentAST * p = (const GALGAS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalAttributeInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalAttributeInputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak & GALGAS_lexicalAttributeInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalAttributeInputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputArgumentAST_2D_weak (const GALGAS_lexicalAttributeInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST_2D_weak::bang_lexicalAttributeInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      result = GALGAS_lexicalAttributeInputArgumentAST ((cPtr_lexicalAttributeInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputArgumentAST_2D_weak::getter_mAttributeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalAttributeInputArgumentAST * objectPtr = (cPtr_lexicalAttributeInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      result = objectPtr->mProperty_mAttributeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeInputArgumentAST_2D_weak::setter_setMAttributeName (const GALGAS_lstring inValue,
                                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalAttributeInputArgumentAST * objectPtr = (cPtr_lexicalAttributeInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      objectPtr->mProperty_mAttributeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ("lexicalAttributeInputArgumentAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalAttributeInputArgumentAST_2D_weak * p = (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterInputArgumentAST * p = (const cPtr_lexicalCharacterInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const {
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

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterInputArgumentAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterInputArgumentAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterInputArgumentAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterInputArgumentAST * p = (const cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterInputArgumentAST::setter_setMCharacter (GALGAS_lchar inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalCharacterInputArgumentAST * p = (cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
    p->mProperty_mCharacter = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

void cPtr_lexicalCharacterInputArgumentAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterInputArgumentAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterInputArgumentAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ("lexicalCharacterInputArgumentAST",
                                                         & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  const GALGAS_lexicalCharacterInputArgumentAST * p = (const GALGAS_lexicalCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCharacterInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak & GALGAS_lexicalCharacterInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalCharacterInputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCharacterInputArgumentAST_2D_weak (const GALGAS_lexicalCharacterInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST_2D_weak::bang_lexicalCharacterInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      result = GALGAS_lexicalCharacterInputArgumentAST ((cPtr_lexicalCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterInputArgumentAST_2D_weak::getter_mCharacter (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalCharacterInputArgumentAST * objectPtr = (cPtr_lexicalCharacterInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      result = objectPtr->mProperty_mCharacter ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCharacterInputArgumentAST_2D_weak::setter_setMCharacter (const GALGAS_lchar inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalCharacterInputArgumentAST * objectPtr = (cPtr_lexicalCharacterInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      objectPtr->mProperty_mCharacter = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterInputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ("lexicalCharacterInputArgumentAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalCharacterInputArgumentAST_2D_weak * p = (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalUnsignedInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalUnsignedInputArgumentAST * p = (const cPtr_lexicalUnsignedInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mUnsigned.objectCompare (p->mProperty_mUnsigned) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalUnsignedInputArgumentAST::objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const {
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

GALGAS_lexicalUnsignedInputArgumentAST::GALGAS_lexicalUnsignedInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST::GALGAS_lexicalUnsignedInputArgumentAST (const cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalUnsignedInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (const GALGAS_luint & inAttribute_mUnsigned
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  if (inAttribute_mUnsigned.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalUnsignedInputArgumentAST (inAttribute_mUnsigned COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_lexicalUnsignedInputArgumentAST::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalUnsignedInputArgumentAST * p = (const cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
    result = p->mProperty_mUnsigned ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalUnsignedInputArgumentAST::setter_setMUnsigned (GALGAS_luint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
    p->mProperty_mUnsigned = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalUnsignedInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_luint & in_mUnsigned
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mUnsigned (in_mUnsigned) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalUnsignedInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

void cPtr_lexicalUnsignedInputArgumentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalUnsignedInputArgumentAST:" ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalUnsignedInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalUnsignedInputArgumentAST (mProperty_mUnsigned COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalUnsignedInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ("lexicalUnsignedInputArgumentAST",
                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalUnsignedInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalUnsignedInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalUnsignedInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  const GALGAS_lexicalUnsignedInputArgumentAST * p = (const GALGAS_lexicalUnsignedInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalUnsignedInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalUnsignedInputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (const GALGAS_lexicalUnsignedInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::bang_lexicalUnsignedInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalUnsignedInputArgumentAST) ;
      result = GALGAS_lexicalUnsignedInputArgumentAST ((cPtr_lexicalUnsignedInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::getter_mUnsigned (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalUnsignedInputArgumentAST * objectPtr = (cPtr_lexicalUnsignedInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalUnsignedInputArgumentAST) ;
      result = objectPtr->mProperty_mUnsigned ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::setter_setMUnsigned (const GALGAS_luint inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalUnsignedInputArgumentAST * objectPtr = (cPtr_lexicalUnsignedInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalUnsignedInputArgumentAST) ;
      objectPtr->mProperty_mUnsigned = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalUnsignedInputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ("lexicalUnsignedInputArgumentAST-weak",
                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak * p = (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionInputArgumentAST * p = (const cPtr_lexicalFunctionInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionActualArgumentList.objectCompare (p->mProperty_mFunctionActualArgumentList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionInputArgumentAST::objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const {
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

GALGAS_lexicalFunctionInputArgumentAST::GALGAS_lexicalFunctionInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionInputArgumentAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST::GALGAS_lexicalFunctionInputArgumentAST (const cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                                const GALGAS_lexicalFunctionCallActualArgumentListAST & inAttribute_mFunctionActualArgumentList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mFunctionActualArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionInputArgumentAST (inAttribute_mFunctionName, inAttribute_mFunctionActualArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionInputArgumentAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionInputArgumentAST * p = (const cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionInputArgumentAST::getter_mFunctionActualArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionInputArgumentAST * p = (const cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    result = p->mProperty_mFunctionActualArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionInputArgumentAST::setter_setMFunctionName (GALGAS_lstring inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionInputArgumentAST::setter_setMFunctionActualArgumentList (GALGAS_lexicalFunctionCallActualArgumentListAST inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    p->mProperty_mFunctionActualArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                                            const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFunctionActualArgumentList (in_mFunctionActualArgumentList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

void cPtr_lexicalFunctionInputArgumentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionInputArgumentAST:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionActualArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionInputArgumentAST (mProperty_mFunctionName, mProperty_mFunctionActualArgumentList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ("lexicalFunctionInputArgumentAST",
                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  const GALGAS_lexicalFunctionInputArgumentAST * p = (const GALGAS_lexicalFunctionInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFunctionInputArgumentAST_2D_weak::GALGAS_lexicalFunctionInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak & GALGAS_lexicalFunctionInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalFunctionInputArgumentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak::GALGAS_lexicalFunctionInputArgumentAST_2D_weak (const GALGAS_lexicalFunctionInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak GALGAS_lexicalFunctionInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST_2D_weak::bang_lexicalFunctionInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      result = GALGAS_lexicalFunctionInputArgumentAST ((cPtr_lexicalFunctionInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionInputArgumentAST_2D_weak::getter_mFunctionName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalFunctionInputArgumentAST * objectPtr = (cPtr_lexicalFunctionInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      result = objectPtr->mProperty_mFunctionName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionInputArgumentAST_2D_weak::getter_mFunctionActualArgumentList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalFunctionInputArgumentAST * objectPtr = (cPtr_lexicalFunctionInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      result = objectPtr->mProperty_mFunctionActualArgumentList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionInputArgumentAST_2D_weak::setter_setMFunctionName (const GALGAS_lstring inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalFunctionInputArgumentAST * objectPtr = (cPtr_lexicalFunctionInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      objectPtr->mProperty_mFunctionName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionInputArgumentAST_2D_weak::setter_setMFunctionActualArgumentList (const GALGAS_lexicalFunctionCallActualArgumentListAST inValue,
                                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalFunctionInputArgumentAST * objectPtr = (cPtr_lexicalFunctionInputArgumentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      objectPtr->mProperty_mFunctionActualArgumentList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionInputArgumentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2D_weak ("lexicalFunctionInputArgumentAST-weak",
                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak GALGAS_lexicalFunctionInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalFunctionInputArgumentAST_2D_weak * p = (const GALGAS_lexicalFunctionInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalDropInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalDropInstructionAST * p = (const cPtr_lexicalDropInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalDropInstructionAST::objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const {
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

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalDropInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTerminalName
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  if (inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalDropInstructionAST (inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalDropInstructionAST::getter_mTerminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalDropInstructionAST * p = (const cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    result = p->mProperty_mTerminalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalDropInstructionAST::setter_setMTerminalName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    p->mProperty_mTerminalName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalDropInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mTerminalName (in_mTerminalName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@lexicalDropInstructionAST:" ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalDropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalDropInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                  & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  const GALGAS_lexicalDropInstructionAST * p = (const GALGAS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalDropInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalDropInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalDropInstructionAST_2D_weak::GALGAS_lexicalDropInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak & GALGAS_lexicalDropInstructionAST_2D_weak::operator = (const GALGAS_lexicalDropInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak::GALGAS_lexicalDropInstructionAST_2D_weak (const GALGAS_lexicalDropInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak GALGAS_lexicalDropInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST_2D_weak::bang_lexicalDropInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalDropInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalDropInstructionAST) ;
      result = GALGAS_lexicalDropInstructionAST ((cPtr_lexicalDropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalDropInstructionAST_2D_weak::getter_mTerminalName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalDropInstructionAST * objectPtr = (cPtr_lexicalDropInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalDropInstructionAST) ;
      result = objectPtr->mProperty_mTerminalName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalDropInstructionAST_2D_weak::setter_setMTerminalName (const GALGAS_lstring inValue,
                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalDropInstructionAST * objectPtr = (cPtr_lexicalDropInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalDropInstructionAST) ;
      objectPtr->mProperty_mTerminalName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalDropInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2D_weak ("lexicalDropInstructionAST-weak",
                                                          & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalDropInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalDropInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalDropInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak GALGAS_lexicalDropInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST_2D_weak result ;
  const GALGAS_lexicalDropInstructionAST_2D_weak * p = (const GALGAS_lexicalDropInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalDropInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalErrorInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalErrorInstructionAST * p = (const cPtr_lexicalErrorInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageName.objectCompare (p->mProperty_mErrorMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalErrorInstructionAST::objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const {
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

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalErrorInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mErrorMessageName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  if (inAttribute_mErrorMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalErrorInstructionAST (inAttribute_mErrorMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorInstructionAST::getter_mErrorMessageName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalErrorInstructionAST * p = (const cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    result = p->mProperty_mErrorMessageName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalErrorInstructionAST::setter_setMErrorMessageName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    p->mProperty_mErrorMessageName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mErrorMessageName (in_mErrorMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

void cPtr_lexicalErrorInstructionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@lexicalErrorInstructionAST:" ;
  mProperty_mErrorMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalErrorInstructionAST (mProperty_mErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ("lexicalErrorInstructionAST",
                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  const GALGAS_lexicalErrorInstructionAST * p = (const GALGAS_lexicalErrorInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalErrorInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalErrorInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalErrorInstructionAST_2D_weak::GALGAS_lexicalErrorInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak & GALGAS_lexicalErrorInstructionAST_2D_weak::operator = (const GALGAS_lexicalErrorInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak::GALGAS_lexicalErrorInstructionAST_2D_weak (const GALGAS_lexicalErrorInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak GALGAS_lexicalErrorInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST_2D_weak::bang_lexicalErrorInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalErrorInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorInstructionAST) ;
      result = GALGAS_lexicalErrorInstructionAST ((cPtr_lexicalErrorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorInstructionAST_2D_weak::getter_mErrorMessageName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalErrorInstructionAST * objectPtr = (cPtr_lexicalErrorInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalErrorInstructionAST) ;
      result = objectPtr->mProperty_mErrorMessageName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalErrorInstructionAST_2D_weak::setter_setMErrorMessageName (const GALGAS_lstring inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalErrorInstructionAST * objectPtr = (cPtr_lexicalErrorInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalErrorInstructionAST) ;
      objectPtr->mProperty_mErrorMessageName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2D_weak ("lexicalErrorInstructionAST-weak",
                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak GALGAS_lexicalErrorInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST_2D_weak result ;
  const GALGAS_lexicalErrorInstructionAST_2D_weak * p = (const GALGAS_lexicalErrorInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalWarningInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalWarningInstructionAST * p = (const cPtr_lexicalWarningInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mWarningMessageName.objectCompare (p->mProperty_mWarningMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalWarningInstructionAST::objectCompare (const GALGAS_lexicalWarningInstructionAST & inOperand) const {
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

GALGAS_lexicalWarningInstructionAST::GALGAS_lexicalWarningInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalWarningInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST::GALGAS_lexicalWarningInstructionAST (const cPtr_lexicalWarningInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalWarningInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mWarningMessageName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST result ;
  if (inAttribute_mWarningMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalWarningInstructionAST (inAttribute_mWarningMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalWarningInstructionAST::getter_mWarningMessageName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalWarningInstructionAST * p = (const cPtr_lexicalWarningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
    result = p->mProperty_mWarningMessageName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWarningInstructionAST::setter_setMWarningMessageName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
    p->mProperty_mWarningMessageName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalWarningInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (const GALGAS_lstring & in_mWarningMessageName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mWarningMessageName (in_mWarningMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalWarningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

void cPtr_lexicalWarningInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@lexicalWarningInstructionAST:" ;
  mProperty_mWarningMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalWarningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalWarningInstructionAST (mProperty_mWarningMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalWarningInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ("lexicalWarningInstructionAST",
                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWarningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWarningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWarningInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST result ;
  const GALGAS_lexicalWarningInstructionAST * p = (const GALGAS_lexicalWarningInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWarningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalWarningInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalWarningInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalWarningInstructionAST_2D_weak::GALGAS_lexicalWarningInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak & GALGAS_lexicalWarningInstructionAST_2D_weak::operator = (const GALGAS_lexicalWarningInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak::GALGAS_lexicalWarningInstructionAST_2D_weak (const GALGAS_lexicalWarningInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak GALGAS_lexicalWarningInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST_2D_weak::bang_lexicalWarningInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWarningInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalWarningInstructionAST) ;
      result = GALGAS_lexicalWarningInstructionAST ((cPtr_lexicalWarningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalWarningInstructionAST_2D_weak::getter_mWarningMessageName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalWarningInstructionAST * objectPtr = (cPtr_lexicalWarningInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalWarningInstructionAST) ;
      result = objectPtr->mProperty_mWarningMessageName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWarningInstructionAST_2D_weak::setter_setMWarningMessageName (const GALGAS_lstring inValue,
                                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalWarningInstructionAST * objectPtr = (cPtr_lexicalWarningInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalWarningInstructionAST) ;
      objectPtr->mProperty_mWarningMessageName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalWarningInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2D_weak ("lexicalWarningInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWarningInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWarningInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWarningInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak GALGAS_lexicalWarningInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST_2D_weak result ;
  const GALGAS_lexicalWarningInstructionAST_2D_weak * p = (const GALGAS_lexicalWarningInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWarningInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalTagInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalTagInstructionAST * p = (const cPtr_lexicalTagInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTagName.objectCompare (p->mProperty_mLexicalTagName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalTagInstructionAST::objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const {
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

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalTagInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalTagInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalTagInstructionAST (inAttribute_mLexicalTagName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalTagInstructionAST::getter_mLexicalTagName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalTagInstructionAST * p = (const cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    result = p->mProperty_mLexicalTagName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagInstructionAST::setter_setMLexicalTagName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    p->mProperty_mLexicalTagName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalTagInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (in_mLexicalTagName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalTagInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

void cPtr_lexicalTagInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalTagInstructionAST:" ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalTagInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalTagInstructionAST (mProperty_mLexicalTagName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagInstructionAST ("lexicalTagInstructionAST",
                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  const GALGAS_lexicalTagInstructionAST * p = (const GALGAS_lexicalTagInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalTagInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalTagInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalTagInstructionAST_2D_weak::GALGAS_lexicalTagInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak & GALGAS_lexicalTagInstructionAST_2D_weak::operator = (const GALGAS_lexicalTagInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak::GALGAS_lexicalTagInstructionAST_2D_weak (const GALGAS_lexicalTagInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak GALGAS_lexicalTagInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST_2D_weak::bang_lexicalTagInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalTagInstructionAST) ;
      result = GALGAS_lexicalTagInstructionAST ((cPtr_lexicalTagInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalTagInstructionAST_2D_weak::getter_mLexicalTagName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalTagInstructionAST * objectPtr = (cPtr_lexicalTagInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalTagInstructionAST) ;
      result = objectPtr->mProperty_mLexicalTagName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagInstructionAST_2D_weak::setter_setMLexicalTagName (const GALGAS_lstring inValue,
                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalTagInstructionAST * objectPtr = (cPtr_lexicalTagInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalTagInstructionAST) ;
      objectPtr->mProperty_mLexicalTagName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2D_weak ("lexicalTagInstructionAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak GALGAS_lexicalTagInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST_2D_weak result ;
  const GALGAS_lexicalTagInstructionAST_2D_weak * p = (const GALGAS_lexicalTagInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRewindInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTagName.objectCompare (p->mProperty_mLexicalTagName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalRewindInstructionAST::objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const {
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

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRewindInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName,
                                                                                        const GALGAS_lstring & inAttribute_mTerminalName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid () && inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRewindInstructionAST (inAttribute_mLexicalTagName, inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::getter_mLexicalTagName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    result = p->mProperty_mLexicalTagName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::getter_mTerminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    result = p->mProperty_mTerminalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRewindInstructionAST::setter_setMLexicalTagName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    p->mProperty_mLexicalTagName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRewindInstructionAST::setter_setMTerminalName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    p->mProperty_mTerminalName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRewindInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                                                    const GALGAS_lstring & in_mTerminalName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (in_mLexicalTagName),
mProperty_mTerminalName (in_mTerminalName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRewindInstructionAST:" ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRewindInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mProperty_mLexicalTagName, mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRewindInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  const GALGAS_lexicalRewindInstructionAST * p = (const GALGAS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRewindInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRewindInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRewindInstructionAST_2D_weak::GALGAS_lexicalRewindInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak & GALGAS_lexicalRewindInstructionAST_2D_weak::operator = (const GALGAS_lexicalRewindInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak::GALGAS_lexicalRewindInstructionAST_2D_weak (const GALGAS_lexicalRewindInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak GALGAS_lexicalRewindInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST_2D_weak::bang_lexicalRewindInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRewindInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRewindInstructionAST) ;
      result = GALGAS_lexicalRewindInstructionAST ((cPtr_lexicalRewindInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST_2D_weak::getter_mLexicalTagName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalRewindInstructionAST * objectPtr = (cPtr_lexicalRewindInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRewindInstructionAST) ;
      result = objectPtr->mProperty_mLexicalTagName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST_2D_weak::getter_mTerminalName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalRewindInstructionAST * objectPtr = (cPtr_lexicalRewindInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRewindInstructionAST) ;
      result = objectPtr->mProperty_mTerminalName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRewindInstructionAST_2D_weak::setter_setMLexicalTagName (const GALGAS_lstring inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalRewindInstructionAST * objectPtr = (cPtr_lexicalRewindInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRewindInstructionAST) ;
      objectPtr->mProperty_mLexicalTagName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRewindInstructionAST_2D_weak::setter_setMTerminalName (const GALGAS_lstring inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalRewindInstructionAST * objectPtr = (cPtr_lexicalRewindInstructionAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalRewindInstructionAST) ;
      objectPtr->mProperty_mTerminalName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRewindInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2D_weak ("lexicalRewindInstructionAST-weak",
                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak GALGAS_lexicalRewindInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST_2D_weak result ;
  const GALGAS_lexicalRewindInstructionAST_2D_weak * p = (const GALGAS_lexicalRewindInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRewindInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexiqueComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsTemplate.objectCompare (p->mProperty_mIsTemplate) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateDelimitorList.objectCompare (p->mProperty_mTemplateDelimitorList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateReplacementList.objectCompare (p->mProperty_mTemplateReplacementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalAttributeList.objectCompare (p->mProperty_mLexicalAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalStyleList.objectCompare (p->mProperty_mLexicalStyleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalDeclarationList.objectCompare (p->mProperty_mTerminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalMessageDeclarationList.objectCompare (p->mProperty_mLexicalMessageDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalListDeclarationList.objectCompare (p->mProperty_mLexicalListDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRuleList.objectCompare (p->mProperty_mLexicalRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternRoutineList.objectCompare (p->mProperty_mExternRoutineList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternFunctionList.objectCompare (p->mProperty_mExternFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingListAST.objectCompare (p->mProperty_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingDirectory.objectCompare (p->mProperty_mIndexingDirectory) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalFunctionListAST.objectCompare (p->mProperty_mLexicalFunctionListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexiqueComponentAST::objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const {
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

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (HERE),
                                                      GALGAS_templateReplacementListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalAttributeListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalStyleListAST::constructor_emptyList (HERE),
                                                      GALGAS_terminalDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalListDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalRuleListAST::constructor_emptyList (HERE),
                                                      GALGAS_externRoutineListAST::constructor_emptyList (HERE),
                                                      GALGAS_externFunctionListAST::constructor_emptyList (HERE),
                                                      GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lexicalFunctionListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                        const GALGAS_bool & inAttribute_mIsTemplate,
                                                                        const GALGAS_metamodelTemplateDelimitorListAST & inAttribute_mTemplateDelimitorList,
                                                                        const GALGAS_templateReplacementListAST & inAttribute_mTemplateReplacementList,
                                                                        const GALGAS_lexicalAttributeListAST & inAttribute_mLexicalAttributeList,
                                                                        const GALGAS_lexicalStyleListAST & inAttribute_mLexicalStyleList,
                                                                        const GALGAS_terminalDeclarationListAST & inAttribute_mTerminalDeclarationList,
                                                                        const GALGAS_lexicalMessageDeclarationListAST & inAttribute_mLexicalMessageDeclarationList,
                                                                        const GALGAS_lexicalListDeclarationListAST & inAttribute_mLexicalListDeclarationList,
                                                                        const GALGAS_lexicalRuleListAST & inAttribute_mLexicalRuleList,
                                                                        const GALGAS_externRoutineListAST & inAttribute_mExternRoutineList,
                                                                        const GALGAS_externFunctionListAST & inAttribute_mExternFunctionList,
                                                                        const GALGAS_indexingListAST & inAttribute_mIndexingListAST,
                                                                        const GALGAS_lstring & inAttribute_mIndexingDirectory,
                                                                        const GALGAS_lexicalFunctionListAST & inAttribute_mLexicalFunctionListAST
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mLexiqueComponentName.isValid () && inAttribute_mIsTemplate.isValid () && inAttribute_mTemplateDelimitorList.isValid () && inAttribute_mTemplateReplacementList.isValid () && inAttribute_mLexicalAttributeList.isValid () && inAttribute_mLexicalStyleList.isValid () && inAttribute_mTerminalDeclarationList.isValid () && inAttribute_mLexicalMessageDeclarationList.isValid () && inAttribute_mLexicalListDeclarationList.isValid () && inAttribute_mLexicalRuleList.isValid () && inAttribute_mExternRoutineList.isValid () && inAttribute_mExternFunctionList.isValid () && inAttribute_mIndexingListAST.isValid () && inAttribute_mIndexingDirectory.isValid () && inAttribute_mLexicalFunctionListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueComponentAST (inAttribute_mIsPredefined, inAttribute_mLexiqueComponentName, inAttribute_mIsTemplate, inAttribute_mTemplateDelimitorList, inAttribute_mTemplateReplacementList, inAttribute_mLexicalAttributeList, inAttribute_mLexicalStyleList, inAttribute_mTerminalDeclarationList, inAttribute_mLexicalMessageDeclarationList, inAttribute_mLexicalListDeclarationList, inAttribute_mLexicalRuleList, inAttribute_mExternRoutineList, inAttribute_mExternFunctionList, inAttribute_mIndexingListAST, inAttribute_mIndexingDirectory, inAttribute_mLexicalFunctionListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexiqueComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexiqueComponentAST::getter_mIsTemplate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mIsTemplate ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_lexiqueComponentAST::getter_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mTemplateDelimitorList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST::getter_mTemplateReplacementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mTemplateReplacementList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST::getter_mLexicalAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST::getter_mLexicalStyleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalStyleList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST::getter_mTerminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mTerminalDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST::getter_mLexicalMessageDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalMessageDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST::getter_mLexicalListDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalListDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST::getter_mLexicalRuleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalRuleList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_lexiqueComponentAST::getter_mExternRoutineList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mExternRoutineList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_lexiqueComponentAST::getter_mExternFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mExternFunctionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentAST::getter_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mIndexingListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::getter_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mIndexingDirectory ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexiqueComponentAST::getter_mLexicalFunctionListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalFunctionListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexiqueComponentName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexiqueComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMIsTemplate (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mIsTemplate = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMTemplateDelimitorList (GALGAS_metamodelTemplateDelimitorListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mTemplateDelimitorList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMTemplateReplacementList (GALGAS_templateReplacementListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mTemplateReplacementList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexicalAttributeList (GALGAS_lexicalAttributeListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexicalStyleList (GALGAS_lexicalStyleListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalStyleList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMTerminalDeclarationList (GALGAS_terminalDeclarationListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mTerminalDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexicalMessageDeclarationList (GALGAS_lexicalMessageDeclarationListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalMessageDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexicalListDeclarationList (GALGAS_lexicalListDeclarationListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalListDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexicalRuleList (GALGAS_lexicalRuleListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalRuleList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMExternRoutineList (GALGAS_externRoutineListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mExternRoutineList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMExternFunctionList (GALGAS_externFunctionListAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mExternFunctionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMIndexingListAST (GALGAS_indexingListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mIndexingListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMIndexingDirectory (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mIndexingDirectory = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST::setter_setMLexicalFunctionListAST (GALGAS_lexicalFunctionListAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalFunctionListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueComponentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                                    const GALGAS_bool & in_mIsTemplate,
                                                    const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                    const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                    const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                    const GALGAS_indexingListAST & in_mIndexingListAST,
                                                    const GALGAS_lstring & in_mIndexingDirectory,
                                                    const GALGAS_lexicalFunctionListAST & in_mLexicalFunctionListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mIsTemplate (in_mIsTemplate),
mProperty_mTemplateDelimitorList (in_mTemplateDelimitorList),
mProperty_mTemplateReplacementList (in_mTemplateReplacementList),
mProperty_mLexicalAttributeList (in_mLexicalAttributeList),
mProperty_mLexicalStyleList (in_mLexicalStyleList),
mProperty_mTerminalDeclarationList (in_mTerminalDeclarationList),
mProperty_mLexicalMessageDeclarationList (in_mLexicalMessageDeclarationList),
mProperty_mLexicalListDeclarationList (in_mLexicalListDeclarationList),
mProperty_mLexicalRuleList (in_mLexicalRuleList),
mProperty_mExternRoutineList (in_mExternRoutineList),
mProperty_mExternFunctionList (in_mExternFunctionList),
mProperty_mIndexingListAST (in_mIndexingListAST),
mProperty_mIndexingDirectory (in_mIndexingDirectory),
mProperty_mLexicalFunctionListAST (in_mLexicalFunctionListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@lexiqueComponentAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalMessageDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalListDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternRoutineList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexingDirectory.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalFunctionListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_mIsPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, mProperty_mLexicalAttributeList, mProperty_mLexicalStyleList, mProperty_mTerminalDeclarationList, mProperty_mLexicalMessageDeclarationList, mProperty_mLexicalListDeclarationList, mProperty_mLexicalRuleList, mProperty_mExternRoutineList, mProperty_mExternFunctionList, mProperty_mIndexingListAST, mProperty_mIndexingDirectory, mProperty_mLexicalFunctionListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  const GALGAS_lexiqueComponentAST * p = (const GALGAS_lexiqueComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueComponentAST_2D_weak::objectCompare (const GALGAS_lexiqueComponentAST_2D_weak & inOperand) const {
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

GALGAS_lexiqueComponentAST_2D_weak::GALGAS_lexiqueComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak & GALGAS_lexiqueComponentAST_2D_weak::operator = (const GALGAS_lexiqueComponentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak::GALGAS_lexiqueComponentAST_2D_weak (const GALGAS_lexiqueComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak GALGAS_lexiqueComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST_2D_weak::bang_lexiqueComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueComponentAST) ;
      result = GALGAS_lexiqueComponentAST ((cPtr_lexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST_2D_weak::getter_mLexiqueComponentName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexiqueComponentName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexiqueComponentAST_2D_weak::getter_mIsTemplate (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mIsTemplate ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mTemplateDelimitorList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mTemplateDelimitorList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mTemplateReplacementList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mTemplateReplacementList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mLexicalAttributeList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexicalAttributeList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mLexicalStyleList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexicalStyleList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mTerminalDeclarationList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mTerminalDeclarationList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mLexicalMessageDeclarationList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexicalMessageDeclarationList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mLexicalListDeclarationList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexicalListDeclarationList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mLexicalRuleList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexicalRuleList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mExternRoutineList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mExternRoutineList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mExternFunctionList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mExternFunctionList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mIndexingListAST (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mIndexingListAST ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST_2D_weak::getter_mIndexingDirectory (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mIndexingDirectory ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexiqueComponentAST_2D_weak::getter_mLexicalFunctionListAST (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      result = objectPtr->mProperty_mLexicalFunctionListAST ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexiqueComponentName (const GALGAS_lstring inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexiqueComponentName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMIsTemplate (const GALGAS_bool inValue,
                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mIsTemplate = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMTemplateDelimitorList (const GALGAS_metamodelTemplateDelimitorListAST inValue,
                                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mTemplateDelimitorList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMTemplateReplacementList (const GALGAS_templateReplacementListAST inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mTemplateReplacementList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexicalAttributeList (const GALGAS_lexicalAttributeListAST inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexicalAttributeList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexicalStyleList (const GALGAS_lexicalStyleListAST inValue,
                                                                      C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexicalStyleList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMTerminalDeclarationList (const GALGAS_terminalDeclarationListAST inValue,
                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mTerminalDeclarationList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexicalMessageDeclarationList (const GALGAS_lexicalMessageDeclarationListAST inValue,
                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexicalMessageDeclarationList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexicalListDeclarationList (const GALGAS_lexicalListDeclarationListAST inValue,
                                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexicalListDeclarationList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexicalRuleList (const GALGAS_lexicalRuleListAST inValue,
                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexicalRuleList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMExternRoutineList (const GALGAS_externRoutineListAST inValue,
                                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mExternRoutineList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMExternFunctionList (const GALGAS_externFunctionListAST inValue,
                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mExternFunctionList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMIndexingListAST (const GALGAS_indexingListAST inValue,
                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mIndexingListAST = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMIndexingDirectory (const GALGAS_lstring inValue,
                                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mIndexingDirectory = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentAST_2D_weak::setter_setMLexicalFunctionListAST (const GALGAS_lexicalFunctionListAST inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexiqueComponentAST * objectPtr = (cPtr_lexiqueComponentAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexiqueComponentAST) ;
      objectPtr->mProperty_mLexicalFunctionListAST = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ("lexiqueComponentAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak GALGAS_lexiqueComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST_2D_weak result ;
  const GALGAS_lexiqueComponentAST_2D_weak * p = (const GALGAS_lexiqueComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (void) :
mProperty_mLexiqueName (),
mProperty_mLexicalRoutineMessageMap (),
mProperty_mLexicalFunctionMap (),
mProperty_mLexicalMessageMap (),
mProperty_mTerminalMap (),
mProperty_mTerminalList (),
mProperty_mLexicalAttributeMap (),
mProperty_mLexicalTokenListMap (),
mProperty_mUnicodeStringToGenerate (),
mProperty_mTemplateDelimitorList (),
mProperty_mStyleMap (),
mProperty_mExternUnicodeTestFunctions () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::~ GALGAS_lexiqueAnalysisContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (const GALGAS_string & inOperand0,
                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                              const GALGAS_terminalMap & inOperand4,
                                                              const GALGAS_terminalList & inOperand5,
                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                              const GALGAS_stringset & inOperand8,
                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                              const GALGAS_styleMap & inOperand10,
                                                              const GALGAS_stringset & inOperand11) :
mProperty_mLexiqueName (inOperand0),
mProperty_mLexicalRoutineMessageMap (inOperand1),
mProperty_mLexicalFunctionMap (inOperand2),
mProperty_mLexicalMessageMap (inOperand3),
mProperty_mTerminalMap (inOperand4),
mProperty_mTerminalList (inOperand5),
mProperty_mLexicalAttributeMap (inOperand6),
mProperty_mLexicalTokenListMap (inOperand7),
mProperty_mUnicodeStringToGenerate (inOperand8),
mProperty_mTemplateDelimitorList (inOperand9),
mProperty_mStyleMap (inOperand10),
mProperty_mExternUnicodeTestFunctions (inOperand11) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueAnalysisContext (GALGAS_string::constructor_default (HERE),
                                        GALGAS_lexicalRoutineMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalFunctionMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalMessageMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalList::constructor_emptyList (HERE),
                                        GALGAS_lexicalAttributeMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_templateDelimitorList::constructor_emptyList (HERE),
                                        GALGAS_styleMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_new (const GALGAS_string & inOperand0,
                                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                                              const GALGAS_terminalMap & inOperand4,
                                                                              const GALGAS_terminalList & inOperand5,
                                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                              const GALGAS_stringset & inOperand8,
                                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                                              const GALGAS_styleMap & inOperand10,
                                                                              const GALGAS_stringset & inOperand11 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_lexiqueAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueAnalysisContext::objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueName.objectCompare (inOperand.mProperty_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRoutineMessageMap.objectCompare (inOperand.mProperty_mLexicalRoutineMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFunctionMap.objectCompare (inOperand.mProperty_mLexicalFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalMessageMap.objectCompare (inOperand.mProperty_mLexicalMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalMap.objectCompare (inOperand.mProperty_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalList.objectCompare (inOperand.mProperty_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalAttributeMap.objectCompare (inOperand.mProperty_mLexicalAttributeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalTokenListMap.objectCompare (inOperand.mProperty_mLexicalTokenListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnicodeStringToGenerate.objectCompare (inOperand.mProperty_mUnicodeStringToGenerate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateDelimitorList.objectCompare (inOperand.mProperty_mTemplateDelimitorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyleMap.objectCompare (inOperand.mProperty_mStyleMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternUnicodeTestFunctions.objectCompare (inOperand.mProperty_mExternUnicodeTestFunctions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mExternUnicodeTestFunctions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueAnalysisContext::drop (void) {
  mProperty_mLexiqueName.drop () ;
  mProperty_mLexicalRoutineMessageMap.drop () ;
  mProperty_mLexicalFunctionMap.drop () ;
  mProperty_mLexicalMessageMap.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLexicalAttributeMap.drop () ;
  mProperty_mLexicalTokenListMap.drop () ;
  mProperty_mUnicodeStringToGenerate.drop () ;
  mProperty_mTemplateDelimitorList.drop () ;
  mProperty_mStyleMap.drop () ;
  mProperty_mExternUnicodeTestFunctions.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueAnalysisContext::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lexiqueAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyleMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueAnalysisContext::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexiqueAnalysisContext::getter_mLexicalRoutineMessageMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalRoutineMessageMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexiqueAnalysisContext::getter_mLexicalFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexiqueAnalysisContext::getter_mLexicalMessageMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalMessageMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_lexiqueAnalysisContext::getter_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_lexiqueAnalysisContext::getter_mTerminalList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexiqueAnalysisContext::getter_mLexicalAttributeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalAttributeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexiqueAnalysisContext::getter_mLexicalTokenListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalTokenListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_lexiqueAnalysisContext::getter_mUnicodeStringToGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnicodeStringToGenerate ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_lexiqueAnalysisContext::getter_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateDelimitorList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_lexiqueAnalysisContext::getter_mStyleMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStyleMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_lexiqueAnalysisContext::getter_mExternUnicodeTestFunctions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternUnicodeTestFunctions ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueAnalysisContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  const GALGAS_lexiqueAnalysisContext * p = (const GALGAS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCallAST * p = (const cPtr_lexicalFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCalledFunctionName.objectCompare (p->mProperty_mCalledFunctionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCallAST::objectCompare (const GALGAS_lexicalFunctionCallAST & inOperand) const {
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

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (const cPtr_lexicalFunctionCallAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mCalledFunctionName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  if (inAttribute_mCalledFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCallAST (inAttribute_mCalledFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionCallAST::getter_mCalledFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCallAST * p = (const cPtr_lexicalFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
    result = p->mProperty_mCalledFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallAST::setter_setMCalledFunctionName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalFunctionCallAST * p = (cPtr_lexicalFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
    p->mProperty_mCalledFunctionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCallAST::cPtr_lexicalFunctionCallAST (const GALGAS_lstring & in_mCalledFunctionName
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCalledFunctionName (in_mCalledFunctionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

void cPtr_lexicalFunctionCallAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCallAST:" ;
  mProperty_mCalledFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCallAST (mProperty_mCalledFunctionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCallAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallAST ("lexicalFunctionCallAST",
                                               & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  const GALGAS_lexicalFunctionCallAST * p = (const GALGAS_lexicalFunctionCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCallAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionCallAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFunctionCallAST_2D_weak::GALGAS_lexicalFunctionCallAST_2D_weak (void) :
GALGAS_lexicalFunctionExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak & GALGAS_lexicalFunctionCallAST_2D_weak::operator = (const GALGAS_lexicalFunctionCallAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak::GALGAS_lexicalFunctionCallAST_2D_weak (const GALGAS_lexicalFunctionCallAST & inSource) :
GALGAS_lexicalFunctionExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak GALGAS_lexicalFunctionCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST_2D_weak::bang_lexicalFunctionCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionCallAST) ;
      result = GALGAS_lexicalFunctionCallAST ((cPtr_lexicalFunctionCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionCallAST_2D_weak::getter_mCalledFunctionName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalFunctionCallAST * objectPtr = (cPtr_lexicalFunctionCallAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCallAST) ;
      result = objectPtr->mProperty_mCalledFunctionName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallAST_2D_weak::setter_setMCalledFunctionName (const GALGAS_lstring inValue,
                                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalFunctionCallAST * objectPtr = (cPtr_lexicalFunctionCallAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCallAST) ;
      objectPtr->mProperty_mCalledFunctionName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallAST_2D_weak ("lexicalFunctionCallAST-weak",
                                                       & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak GALGAS_lexicalFunctionCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST_2D_weak result ;
  const GALGAS_lexicalFunctionCallAST_2D_weak * p = (const GALGAS_lexicalFunctionCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterMatchAST * p = (const cPtr_lexicalFunctionCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCharacterMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST & inOperand) const {
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

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (const cPtr_lexicalFunctionCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterMatchAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCharacterMatchAST * p = (const cPtr_lexicalFunctionCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCharacterMatchAST::setter_setMCharacter (GALGAS_lchar inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalFunctionCharacterMatchAST * p = (cPtr_lexicalFunctionCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
    p->mProperty_mCharacter = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCharacterMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCharacterMatchAST::cPtr_lexicalFunctionCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

void cPtr_lexicalFunctionCharacterMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ("lexicalFunctionCharacterMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  const GALGAS_lexicalFunctionCharacterMatchAST * p = (const GALGAS_lexicalFunctionCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterMatchAST_2D_weak (void) :
GALGAS_lexicalFunctionExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak & GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::operator = (const GALGAS_lexicalFunctionCharacterMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterMatchAST_2D_weak (const GALGAS_lexicalFunctionCharacterMatchAST & inSource) :
GALGAS_lexicalFunctionExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::bang_lexicalFunctionCharacterMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionCharacterMatchAST) ;
      result = GALGAS_lexicalFunctionCharacterMatchAST ((cPtr_lexicalFunctionCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::getter_mCharacter (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalFunctionCharacterMatchAST * objectPtr = (cPtr_lexicalFunctionCharacterMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCharacterMatchAST) ;
      result = objectPtr->mProperty_mCharacter ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::setter_setMCharacter (const GALGAS_lchar inValue,
                                                                            C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalFunctionCharacterMatchAST * objectPtr = (cPtr_lexicalFunctionCharacterMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCharacterMatchAST) ;
      objectPtr->mProperty_mCharacter = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST_2D_weak ("lexicalFunctionCharacterMatchAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST_2D_weak result ;
  const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak * p = (const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLowerBound.objectCompare (p->mProperty_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBound.objectCompare (p->mProperty_mUpperBound) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inOperand) const {
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

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                           GALGAS_lchar::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (const cPtr_lexicalFunctionCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::getter_mLowerBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    result = p->mProperty_mLowerBound ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::getter_mUpperBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    result = p->mProperty_mUpperBound ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCharacterIntervalMatchAST::setter_setMLowerBound (GALGAS_lchar inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    p->mProperty_mLowerBound = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCharacterIntervalMatchAST::setter_setMUpperBound (GALGAS_lchar inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    p->mProperty_mUpperBound = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCharacterIntervalMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCharacterIntervalMatchAST::cPtr_lexicalFunctionCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                                              const GALGAS_lchar & in_mUpperBound
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

void cPtr_lexicalFunctionCharacterIntervalMatchAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterIntervalMatchAST:" ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterIntervalMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ("lexicalFunctionCharacterIntervalMatchAST",
                                                                 & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST * p = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak (void) :
GALGAS_lexicalFunctionExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak & GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::operator = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inSource) :
GALGAS_lexicalFunctionExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::bang_lexicalFunctionCharacterIntervalMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
      result = GALGAS_lexicalFunctionCharacterIntervalMatchAST ((cPtr_lexicalFunctionCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::getter_mLowerBound (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalFunctionCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
      result = objectPtr->mProperty_mLowerBound ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::getter_mUpperBound (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_lexicalFunctionCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
      result = objectPtr->mProperty_mUpperBound ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::setter_setMLowerBound (const GALGAS_lchar inValue,
                                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalFunctionCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
      objectPtr->mProperty_mLowerBound = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::setter_setMUpperBound (const GALGAS_lchar inValue,
                                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_lexicalFunctionCharacterIntervalMatchAST * objectPtr = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
      objectPtr->mProperty_mUpperBound = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterIntervalMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak ("lexicalFunctionCharacterIntervalMatchAST-weak",
                                                                         & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak result ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak * p = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterIntervalMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_optionComponentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptions.objectCompare (p->mProperty_mOptions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionComponentDeclarationAST::objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const {
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

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_commandLineOptionListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                            const GALGAS_commandLineOptionListAST & inAttribute_mOptions
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionComponentDeclarationAST (inAttribute_mIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionComponentDeclarationAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST::getter_mOptions (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    result = p->mProperty_mOptions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST::setter_setMOptionComponentName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST::setter_setMOptions (GALGAS_commandLineOptionListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lstring & in_mOptionComponentName,
                                                                        const GALGAS_commandLineOptionListAST & in_mOptions
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptions (in_mOptions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@optionComponentDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mOptions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  const GALGAS_optionComponentDeclarationAST * p = (const GALGAS_optionComponentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionComponentDeclarationAST_2D_weak::objectCompare (const GALGAS_optionComponentDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_optionComponentDeclarationAST_2D_weak::GALGAS_optionComponentDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak & GALGAS_optionComponentDeclarationAST_2D_weak::operator = (const GALGAS_optionComponentDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak::GALGAS_optionComponentDeclarationAST_2D_weak (const GALGAS_optionComponentDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak GALGAS_optionComponentDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST_2D_weak::bang_optionComponentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentDeclarationAST) ;
      result = GALGAS_optionComponentDeclarationAST ((cPtr_optionComponentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionComponentDeclarationAST_2D_weak::getter_mOptionComponentName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_optionComponentDeclarationAST * objectPtr = (cPtr_optionComponentDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_optionComponentDeclarationAST) ;
      result = objectPtr->mProperty_mOptionComponentName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST_2D_weak::getter_mOptions (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_optionComponentDeclarationAST * objectPtr = (cPtr_optionComponentDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_optionComponentDeclarationAST) ;
      result = objectPtr->mProperty_mOptions ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST_2D_weak::setter_setMOptionComponentName (const GALGAS_lstring inValue,
                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_optionComponentDeclarationAST * objectPtr = (cPtr_optionComponentDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_optionComponentDeclarationAST) ;
      objectPtr->mProperty_mOptionComponentName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST_2D_weak::setter_setMOptions (const GALGAS_commandLineOptionListAST inValue,
                                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_optionComponentDeclarationAST * objectPtr = (cPtr_optionComponentDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_optionComponentDeclarationAST) ;
      objectPtr->mProperty_mOptions = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2D_weak ("optionComponentDeclarationAST-weak",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak GALGAS_optionComponentDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST_2D_weak result ;
  const GALGAS_optionComponentDeclarationAST_2D_weak * p = (const GALGAS_optionComponentDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const {
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

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration::getter_mHasHeader (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    result = p->mProperty_mHasHeader ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration::getter_mImplementationCppFileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    result = p->mProperty_mImplementationCppFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMHasHeader (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mHasHeader = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMImplementationCppFileName (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mImplementationCppFileName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationWithHeaderForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                  const GALGAS_string & in_mImplementationCppFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mHasHeader (in_mHasHeader),
mProperty_mImplementationCppFileName (in_mImplementationCppFileName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationWithHeaderForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ("semanticDeclarationWithHeaderForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & inOperand) const {
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

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::operator = (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::bang_semanticDeclarationWithHeaderForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = GALGAS_semanticDeclarationWithHeaderForGeneration ((cPtr_semanticDeclarationWithHeaderForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::getter_mHasHeader (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_semanticDeclarationWithHeaderForGeneration * objectPtr = (cPtr_semanticDeclarationWithHeaderForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = objectPtr->mProperty_mHasHeader ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::getter_mImplementationCppFileName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_semanticDeclarationWithHeaderForGeneration * objectPtr = (cPtr_semanticDeclarationWithHeaderForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = objectPtr->mProperty_mImplementationCppFileName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::setter_setMHasHeader (const GALGAS_bool inValue,
                                                                                      C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_semanticDeclarationWithHeaderForGeneration * objectPtr = (cPtr_semanticDeclarationWithHeaderForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      objectPtr->mProperty_mHasHeader = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::setter_setMImplementationCppFileName (const GALGAS_string inValue,
                                                                                                      C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_semanticDeclarationWithHeaderForGeneration * objectPtr = (cPtr_semanticDeclarationWithHeaderForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      objectPtr->mProperty_mImplementationCppFileName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationWithHeaderForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ("semanticDeclarationWithHeaderForGeneration-weak",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayTypeName.objectCompare (p->mProperty_mArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDimension.objectCompare (p->mProperty_mDimension) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayDeclarationAST::objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const {
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

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_luint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (const cPtr_arrayDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                        const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                        const GALGAS_luint & inAttribute_mDimension
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mDimension.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayDeclarationAST (inAttribute_mIsPredefined, inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mDimension COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    result = p->mProperty_mArrayTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_arrayDeclarationAST::getter_mDimension (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    result = p->mProperty_mDimension ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayDeclarationAST::setter_setMArrayTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    p->mProperty_mArrayTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayDeclarationAST::setter_setMElementTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayDeclarationAST::setter_setMDimension (GALGAS_luint inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    p->mProperty_mDimension = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayDeclarationAST::cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mArrayTypeName,
                                                    const GALGAS_lstring & in_mElementTypeName,
                                                    const GALGAS_luint & in_mDimension
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mArrayTypeName (in_mArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mDimension (in_mDimension) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

void cPtr_arrayDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@arrayDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDimension.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayDeclarationAST (mProperty_mIsPredefined, mProperty_mArrayTypeName, mProperty_mElementTypeName, mProperty_mDimension COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST ("arrayDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  const GALGAS_arrayDeclarationAST * p = (const GALGAS_arrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayDeclarationAST_2D_weak::objectCompare (const GALGAS_arrayDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_arrayDeclarationAST_2D_weak::GALGAS_arrayDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak & GALGAS_arrayDeclarationAST_2D_weak::operator = (const GALGAS_arrayDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak::GALGAS_arrayDeclarationAST_2D_weak (const GALGAS_arrayDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak GALGAS_arrayDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST_2D_weak::bang_arrayDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayDeclarationAST) ;
      result = GALGAS_arrayDeclarationAST ((cPtr_arrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST_2D_weak::getter_mArrayTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_arrayDeclarationAST * objectPtr = (cPtr_arrayDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_arrayDeclarationAST) ;
      result = objectPtr->mProperty_mArrayTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST_2D_weak::getter_mElementTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_arrayDeclarationAST * objectPtr = (cPtr_arrayDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_arrayDeclarationAST) ;
      result = objectPtr->mProperty_mElementTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_arrayDeclarationAST_2D_weak::getter_mDimension (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_arrayDeclarationAST * objectPtr = (cPtr_arrayDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_arrayDeclarationAST) ;
      result = objectPtr->mProperty_mDimension ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayDeclarationAST_2D_weak::setter_setMArrayTypeName (const GALGAS_lstring inValue,
                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_arrayDeclarationAST * objectPtr = (cPtr_arrayDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_arrayDeclarationAST) ;
      objectPtr->mProperty_mArrayTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayDeclarationAST_2D_weak::setter_setMElementTypeName (const GALGAS_lstring inValue,
                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_arrayDeclarationAST * objectPtr = (cPtr_arrayDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_arrayDeclarationAST) ;
      objectPtr->mProperty_mElementTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayDeclarationAST_2D_weak::setter_setMDimension (const GALGAS_luint inValue,
                                                               C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_arrayDeclarationAST * objectPtr = (cPtr_arrayDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_arrayDeclarationAST) ;
      objectPtr->mProperty_mDimension = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST_2D_weak ("arrayDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak GALGAS_arrayDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST_2D_weak result ;
  const GALGAS_arrayDeclarationAST_2D_weak * p = (const GALGAS_arrayDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticTypeForGeneration::objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const {
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

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_semanticTypeForGeneration::getter_mSelfTypeEntry (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticTypeForGeneration * p = (const cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    result = p->mProperty_mSelfTypeEntry ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypeForGeneration::setter_setMSelfTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    p->mProperty_mSelfTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticTypeForGeneration::cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mSelfTypeEntry (in_mSelfTypeEntry) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration ("semanticTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration result ;
  const GALGAS_semanticTypeForGeneration * p = (const GALGAS_semanticTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticTypeForGeneration_2D_weak::objectCompare (const GALGAS_semanticTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak & GALGAS_semanticTypeForGeneration_2D_weak::operator = (const GALGAS_semanticTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (const GALGAS_semanticTypeForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration_2D_weak::bang_semanticTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticTypeForGeneration) ;
      result = GALGAS_semanticTypeForGeneration ((cPtr_semanticTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_semanticTypeForGeneration_2D_weak::getter_mSelfTypeEntry (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_semanticTypeForGeneration * objectPtr = (cPtr_semanticTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticTypeForGeneration) ;
      result = objectPtr->mProperty_mSelfTypeEntry ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypeForGeneration_2D_weak::setter_setMSelfTypeEntry (const GALGAS_unifiedTypeMap_2D_entry inValue,
                                                                         C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_semanticTypeForGeneration * objectPtr = (cPtr_semanticTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_semanticTypeForGeneration) ;
      objectPtr->mProperty_mSelfTypeEntry = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ("semanticTypeForGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  const GALGAS_semanticTypeForGeneration_2D_weak * p = (const GALGAS_semanticTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolsetDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBoolsetTypeName.objectCompare (p->mProperty_mBoolsetTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetDeclarationAST::objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const {
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

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_lstring & inAttribute_mBoolsetTypeName,
                                                                            const GALGAS_lstringlist & inAttribute_mFlagList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mBoolsetTypeName.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetDeclarationAST (inAttribute_mIsPredefined, inAttribute_mBoolsetTypeName, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_boolsetDeclarationAST::getter_mBoolsetTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    result = p->mProperty_mBoolsetTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetDeclarationAST::getter_mFlagList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    result = p->mProperty_mFlagList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolsetDeclarationAST::setter_setMBoolsetTypeName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    p->mProperty_mBoolsetTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolsetDeclarationAST::setter_setMFlagList (GALGAS_lstringlist inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    p->mProperty_mFlagList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mBoolsetTypeName,
                                                        const GALGAS_lstringlist & in_mFlagList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mBoolsetTypeName (in_mBoolsetTypeName),
mProperty_mFlagList (in_mFlagList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

void cPtr_boolsetDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolsetDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBoolsetTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_mIsPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  const GALGAS_boolsetDeclarationAST * p = (const GALGAS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetDeclarationAST_2D_weak::objectCompare (const GALGAS_boolsetDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_boolsetDeclarationAST_2D_weak::GALGAS_boolsetDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak & GALGAS_boolsetDeclarationAST_2D_weak::operator = (const GALGAS_boolsetDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak::GALGAS_boolsetDeclarationAST_2D_weak (const GALGAS_boolsetDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST_2D_weak::bang_boolsetDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetDeclarationAST) ;
      result = GALGAS_boolsetDeclarationAST ((cPtr_boolsetDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_boolsetDeclarationAST_2D_weak::getter_mBoolsetTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_boolsetDeclarationAST * objectPtr = (cPtr_boolsetDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_boolsetDeclarationAST) ;
      result = objectPtr->mProperty_mBoolsetTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetDeclarationAST_2D_weak::getter_mFlagList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_boolsetDeclarationAST * objectPtr = (cPtr_boolsetDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_boolsetDeclarationAST) ;
      result = objectPtr->mProperty_mFlagList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolsetDeclarationAST_2D_weak::setter_setMBoolsetTypeName (const GALGAS_lstring inValue,
                                                                       C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_boolsetDeclarationAST * objectPtr = (cPtr_boolsetDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_boolsetDeclarationAST) ;
      objectPtr->mProperty_mBoolsetTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolsetDeclarationAST_2D_weak::setter_setMFlagList (const GALGAS_lstringlist inValue,
                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_boolsetDeclarationAST * objectPtr = (cPtr_boolsetDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_boolsetDeclarationAST) ;
      objectPtr->mProperty_mFlagList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ("boolsetDeclarationAST-weak",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  const GALGAS_boolsetDeclarationAST_2D_weak * p = (const GALGAS_boolsetDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolsetTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
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

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                  const GALGAS_lstringlist & inAttribute_mFlagList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration::getter_mFlagList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    result = p->mProperty_mFlagList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolsetTypeForGeneration::setter_setMFlagList (GALGAS_lstringlist inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_boolsetTypeForGeneration * p = (cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    p->mProperty_mFlagList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolsetTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                              const GALGAS_lstringlist & in_mFlagList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mFlagList (in_mFlagList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@boolsetTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  const GALGAS_boolsetTypeForGeneration * p = (const GALGAS_boolsetTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetTypeForGeneration_2D_weak::objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak & GALGAS_boolsetTypeForGeneration_2D_weak::operator = (const GALGAS_boolsetTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (const GALGAS_boolsetTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration_2D_weak::bang_boolsetTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetTypeForGeneration) ;
      result = GALGAS_boolsetTypeForGeneration ((cPtr_boolsetTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration_2D_weak::getter_mFlagList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_boolsetTypeForGeneration * objectPtr = (cPtr_boolsetTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_boolsetTypeForGeneration) ;
      result = objectPtr->mProperty_mFlagList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolsetTypeForGeneration_2D_weak::setter_setMFlagList (const GALGAS_lstringlist inValue,
                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_boolsetTypeForGeneration * objectPtr = (cPtr_boolsetTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_boolsetTypeForGeneration) ;
      objectPtr->mProperty_mFlagList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ("boolsetTypeForGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  const GALGAS_boolsetTypeForGeneration_2D_weak * p = (const GALGAS_boolsetTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_classDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReference.objectCompare (p->mProperty_mIsReference) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassFeatureList.objectCompare (p->mProperty_mClassFeatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
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

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_bool & inAttribute_mIsReference,
                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                        const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsReference.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsAbstract, inAttribute_mIsReference, inAttribute_mClassTypeName, inAttribute_mSuperClassName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::getter_mIsReference (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mIsReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_classDeclarationAST::getter_mClassFeatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mClassFeatureList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_classDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST::setter_setMIsAbstract (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST::setter_setMIsReference (GALGAS_bool inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mIsReference = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST::setter_setMClassTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mClassTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST::setter_setMClassFeatureList (GALGAS_lstringlist inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mClassFeatureList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_bool & in_mIsReference,
                                                    const GALGAS_lstring & in_mClassTypeName,
                                                    const GALGAS_lstring & in_mSuperClassName,
                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsReference (in_mIsReference),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@classDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassFeatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_mIsPredefined, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@classDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  const GALGAS_classDeclarationAST * p = (const GALGAS_classDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classDeclarationAST_2D_weak::objectCompare (const GALGAS_classDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_classDeclarationAST_2D_weak::GALGAS_classDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak & GALGAS_classDeclarationAST_2D_weak::operator = (const GALGAS_classDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak::GALGAS_classDeclarationAST_2D_weak (const GALGAS_classDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST_2D_weak::bang_classDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classDeclarationAST) ;
      result = GALGAS_classDeclarationAST ((cPtr_classDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST_2D_weak::getter_mIsAbstract (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      result = objectPtr->mProperty_mIsAbstract ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST_2D_weak::getter_mIsReference (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      result = objectPtr->mProperty_mIsReference ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST_2D_weak::getter_mClassTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      result = objectPtr->mProperty_mClassTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST_2D_weak::getter_mSuperClassName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      result = objectPtr->mProperty_mSuperClassName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_classDeclarationAST_2D_weak::getter_mClassFeatureList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      result = objectPtr->mProperty_mClassFeatureList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_classDeclarationAST_2D_weak::getter_mPropertyList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      result = objectPtr->mProperty_mPropertyList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST_2D_weak::setter_setMIsAbstract (const GALGAS_bool inValue,
                                                                C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      objectPtr->mProperty_mIsAbstract = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST_2D_weak::setter_setMIsReference (const GALGAS_bool inValue,
                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      objectPtr->mProperty_mIsReference = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST_2D_weak::setter_setMClassTypeName (const GALGAS_lstring inValue,
                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      objectPtr->mProperty_mClassTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST_2D_weak::setter_setMSuperClassName (const GALGAS_lstring inValue,
                                                                    C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      objectPtr->mProperty_mSuperClassName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST_2D_weak::setter_setMClassFeatureList (const GALGAS_lstringlist inValue,
                                                                      C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      objectPtr->mProperty_mClassFeatureList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classDeclarationAST_2D_weak::setter_setMPropertyList (const GALGAS_propertyInCollectionListAST inValue,
                                                                  C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classDeclarationAST * objectPtr = (cPtr_classDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classDeclarationAST) ;
      objectPtr->mProperty_mPropertyList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ("classDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  const GALGAS_classDeclarationAST_2D_weak * p = (const GALGAS_classDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_classTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReference.objectCompare (p->mProperty_mIsReference) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedAttributeList.objectCompare (p->mProperty_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_classTypeForGeneration::objectCompare (const GALGAS_classTypeForGeneration & inOperand) const {
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

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                         GALGAS_bool::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                              const GALGAS_bool & inAttribute_mIsAbstract,
                                                                              const GALGAS_bool & inAttribute_mIsReference,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSuperClass,
                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedAttributeList,
                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsReference.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedAttributeList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mIsAbstract, inAttribute_mIsReference, inAttribute_mSuperClass, inAttribute_mAllTypedAttributeList, inAttribute_mTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::getter_mIsReference (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mIsReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_classTypeForGeneration::getter_mSuperClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mSuperClass ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::getter_mAllTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mAllTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::getter_mGenerateHeaderInSeparateFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mGenerateHeaderInSeparateFile ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration::setter_setMIsReference (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mIsReference = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration::setter_setMSuperClass (GALGAS_unifiedTypeMap_2D_entry inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mSuperClass = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration::setter_setMAllTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mAllTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration::setter_setMGenerateHeaderInSeparateFile (GALGAS_bool inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mGenerateHeaderInSeparateFile = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @classTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_classTypeForGeneration::cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                          const GALGAS_bool & in_mIsAbstract,
                                                          const GALGAS_bool & in_mIsReference,
                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mSuperClass,
                                                          const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsReference (in_mIsReference),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedAttributeList (in_mAllTypedAttributeList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

void cPtr_classTypeForGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@classTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mSuperClass, mProperty_mAllTypedAttributeList, mProperty_mTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@classTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration ("classTypeForGeneration",
                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  const GALGAS_classTypeForGeneration * p = (const GALGAS_classTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classTypeForGeneration_2D_weak::objectCompare (const GALGAS_classTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak & GALGAS_classTypeForGeneration_2D_weak::operator = (const GALGAS_classTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (const GALGAS_classTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration_2D_weak::bang_classTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classTypeForGeneration) ;
      result = GALGAS_classTypeForGeneration ((cPtr_classTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration_2D_weak::getter_mIsAbstract (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      result = objectPtr->mProperty_mIsAbstract ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration_2D_weak::getter_mIsReference (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      result = objectPtr->mProperty_mIsReference ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_classTypeForGeneration_2D_weak::getter_mSuperClass (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      result = objectPtr->mProperty_mSuperClass ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration_2D_weak::getter_mAllTypedAttributeList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      result = objectPtr->mProperty_mAllTypedAttributeList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration_2D_weak::getter_mTypedAttributeList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      result = objectPtr->mProperty_mTypedAttributeList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration_2D_weak::getter_mGenerateHeaderInSeparateFile (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      result = objectPtr->mProperty_mGenerateHeaderInSeparateFile ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration_2D_weak::setter_setMIsAbstract (const GALGAS_bool inValue,
                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      objectPtr->mProperty_mIsAbstract = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration_2D_weak::setter_setMIsReference (const GALGAS_bool inValue,
                                                                    C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      objectPtr->mProperty_mIsReference = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration_2D_weak::setter_setMSuperClass (const GALGAS_unifiedTypeMap_2D_entry inValue,
                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      objectPtr->mProperty_mSuperClass = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration_2D_weak::setter_setMAllTypedAttributeList (const GALGAS_typedPropertyList inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      objectPtr->mProperty_mAllTypedAttributeList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration_2D_weak::setter_setMTypedAttributeList (const GALGAS_typedPropertyList inValue,
                                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      objectPtr->mProperty_mTypedAttributeList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classTypeForGeneration_2D_weak::setter_setMGenerateHeaderInSeparateFile (const GALGAS_bool inValue,
                                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_classTypeForGeneration * objectPtr = (cPtr_classTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_classTypeForGeneration) ;
      objectPtr->mProperty_mGenerateHeaderInSeparateFile = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ("classTypeForGeneration-weak",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  const GALGAS_classTypeForGeneration_2D_weak * p = (const GALGAS_classTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_weakReferenceDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWeakReferenceTypeName.objectCompare (p->mProperty_mWeakReferenceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperWeakReferenceTypeName.objectCompare (p->mProperty_mSuperWeakReferenceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassFeatureList.objectCompare (p->mProperty_mClassFeatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_weakReferenceDeclarationAST::objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const {
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

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mWeakReferenceTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mSuperWeakReferenceTypeName,
                                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mWeakReferenceTypeName.isValid () && inAttribute_mSuperWeakReferenceTypeName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_weakReferenceDeclarationAST (inAttribute_mIsPredefined, inAttribute_mClassTypeName, inAttribute_mWeakReferenceTypeName, inAttribute_mSuperWeakReferenceTypeName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::getter_mWeakReferenceTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    result = p->mProperty_mWeakReferenceTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::getter_mSuperWeakReferenceTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    result = p->mProperty_mSuperWeakReferenceTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_weakReferenceDeclarationAST::getter_mClassFeatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    result = p->mProperty_mClassFeatureList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_weakReferenceDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST::setter_setMClassTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    p->mProperty_mClassTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST::setter_setMWeakReferenceTypeName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    p->mProperty_mWeakReferenceTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST::setter_setMSuperWeakReferenceTypeName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    p->mProperty_mSuperWeakReferenceTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST::setter_setMClassFeatureList (GALGAS_lstringlist inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    p->mProperty_mClassFeatureList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_lstring & in_mClassTypeName,
                                                                    const GALGAS_lstring & in_mWeakReferenceTypeName,
                                                                    const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mWeakReferenceTypeName (in_mWeakReferenceTypeName),
mProperty_mSuperWeakReferenceTypeName (in_mSuperWeakReferenceTypeName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

void cPtr_weakReferenceDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@weakReferenceDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassFeatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_mIsPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  const GALGAS_weakReferenceDeclarationAST * p = (const GALGAS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_weakReferenceDeclarationAST_2D_weak::objectCompare (const GALGAS_weakReferenceDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_weakReferenceDeclarationAST_2D_weak::GALGAS_weakReferenceDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak & GALGAS_weakReferenceDeclarationAST_2D_weak::operator = (const GALGAS_weakReferenceDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak::GALGAS_weakReferenceDeclarationAST_2D_weak (const GALGAS_weakReferenceDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST_2D_weak::bang_weakReferenceDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceDeclarationAST) ;
      result = GALGAS_weakReferenceDeclarationAST ((cPtr_weakReferenceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST_2D_weak::getter_mClassTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      result = objectPtr->mProperty_mClassTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST_2D_weak::getter_mWeakReferenceTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      result = objectPtr->mProperty_mWeakReferenceTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST_2D_weak::getter_mSuperWeakReferenceTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      result = objectPtr->mProperty_mSuperWeakReferenceTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_weakReferenceDeclarationAST_2D_weak::getter_mClassFeatureList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      result = objectPtr->mProperty_mClassFeatureList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_weakReferenceDeclarationAST_2D_weak::getter_mPropertyList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      result = objectPtr->mProperty_mPropertyList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST_2D_weak::setter_setMClassTypeName (const GALGAS_lstring inValue,
                                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      objectPtr->mProperty_mClassTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST_2D_weak::setter_setMWeakReferenceTypeName (const GALGAS_lstring inValue,
                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      objectPtr->mProperty_mWeakReferenceTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST_2D_weak::setter_setMSuperWeakReferenceTypeName (const GALGAS_lstring inValue,
                                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      objectPtr->mProperty_mSuperWeakReferenceTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST_2D_weak::setter_setMClassFeatureList (const GALGAS_lstringlist inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      objectPtr->mProperty_mClassFeatureList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceDeclarationAST_2D_weak::setter_setMPropertyList (const GALGAS_propertyInCollectionListAST inValue,
                                                                          C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceDeclarationAST * objectPtr = (cPtr_weakReferenceDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceDeclarationAST) ;
      objectPtr->mProperty_mPropertyList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ("weakReferenceDeclarationAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  const GALGAS_weakReferenceDeclarationAST_2D_weak * p = (const GALGAS_weakReferenceDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_weakReferenceTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedPropertyList.objectCompare (p->mProperty_mAllTypedPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_weakReferenceTypeForGeneration::objectCompare (const GALGAS_weakReferenceTypeForGeneration & inOperand) const {
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

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_weakReferenceTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                 GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                 GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                 GALGAS_bool::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (const cPtr_weakReferenceTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                              const GALGAS_string & inAttribute_mClassTypeName,
                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSuperClass,
                                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedPropertyList,
                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedPropertyList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_weakReferenceTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mClassTypeName, inAttribute_mSuperClass, inAttribute_mAllTypedPropertyList, inAttribute_mTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_weakReferenceTypeForGeneration::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_weakReferenceTypeForGeneration::getter_mSuperClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    result = p->mProperty_mSuperClass ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::getter_mAllTypedPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    result = p->mProperty_mAllTypedPropertyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_weakReferenceTypeForGeneration::getter_mGenerateHeaderInSeparateFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    result = p->mProperty_mGenerateHeaderInSeparateFile ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration::setter_setMClassTypeName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    p->mProperty_mClassTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration::setter_setMSuperClass (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    p->mProperty_mSuperClass = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration::setter_setMAllTypedPropertyList (GALGAS_typedPropertyList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    p->mProperty_mAllTypedPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration::setter_setMGenerateHeaderInSeparateFile (GALGAS_bool inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    p->mProperty_mGenerateHeaderInSeparateFile = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReferenceTypeForGeneration::cPtr_weakReferenceTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                          const GALGAS_string & in_mClassTypeName,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mSuperClass,
                                                                          const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedPropertyList (in_mAllTypedPropertyList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

void cPtr_weakReferenceTypeForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@weakReferenceTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_weakReferenceTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mClassTypeName, mProperty_mSuperClass, mProperty_mAllTypedPropertyList, mProperty_mTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ("weakReferenceTypeForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  const GALGAS_weakReferenceTypeForGeneration * p = (const GALGAS_weakReferenceTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_weakReferenceTypeForGeneration_2D_weak::objectCompare (const GALGAS_weakReferenceTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak & GALGAS_weakReferenceTypeForGeneration_2D_weak::operator = (const GALGAS_weakReferenceTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (const GALGAS_weakReferenceTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration_2D_weak::bang_weakReferenceTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = GALGAS_weakReferenceTypeForGeneration ((cPtr_weakReferenceTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_weakReferenceTypeForGeneration_2D_weak::getter_mClassTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = objectPtr->mProperty_mClassTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_weakReferenceTypeForGeneration_2D_weak::getter_mSuperClass (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = objectPtr->mProperty_mSuperClass ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration_2D_weak::getter_mAllTypedPropertyList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = objectPtr->mProperty_mAllTypedPropertyList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration_2D_weak::getter_mTypedAttributeList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = objectPtr->mProperty_mTypedAttributeList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_weakReferenceTypeForGeneration_2D_weak::getter_mGenerateHeaderInSeparateFile (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = objectPtr->mProperty_mGenerateHeaderInSeparateFile ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration_2D_weak::setter_setMClassTypeName (const GALGAS_string inValue,
                                                                              C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      objectPtr->mProperty_mClassTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration_2D_weak::setter_setMSuperClass (const GALGAS_unifiedTypeMap_2D_entry inValue,
                                                                           C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      objectPtr->mProperty_mSuperClass = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration_2D_weak::setter_setMAllTypedPropertyList (const GALGAS_typedPropertyList inValue,
                                                                                     C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      objectPtr->mProperty_mAllTypedPropertyList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration_2D_weak::setter_setMTypedAttributeList (const GALGAS_typedPropertyList inValue,
                                                                                   C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      objectPtr->mProperty_mTypedAttributeList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_weakReferenceTypeForGeneration_2D_weak::setter_setMGenerateHeaderInSeparateFile (const GALGAS_bool inValue,
                                                                                             C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_weakReferenceTypeForGeneration * objectPtr = (cPtr_weakReferenceTypeForGeneration *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_weakReferenceTypeForGeneration) ;
      objectPtr->mProperty_mGenerateHeaderInSeparateFile = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ("weakReferenceTypeForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  const GALGAS_weakReferenceTypeForGeneration_2D_weak * p = (const GALGAS_weakReferenceTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumTypeName.objectCompare (p->mProperty_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultConstantName.objectCompare (p->mProperty_mDefaultConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumDeclarationAST::objectCompare (const GALGAS_enumDeclarationAST & inOperand) const {
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

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_enumConstantList::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                      const GALGAS_enumConstantList & inAttribute_mConstantList,
                                                                      const GALGAS_lstring & inAttribute_mDefaultConstantName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mConstantList.isValid () && inAttribute_mDefaultConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclarationAST (inAttribute_mIsPredefined, inAttribute_mEnumTypeName, inAttribute_mConstantList, inAttribute_mDefaultConstantName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    result = p->mProperty_mEnumTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumDeclarationAST::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    result = p->mProperty_mConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::getter_mDefaultConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    result = p->mProperty_mDefaultConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumDeclarationAST::setter_setMEnumTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    p->mProperty_mEnumTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumDeclarationAST::setter_setMConstantList (GALGAS_enumConstantList inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    p->mProperty_mConstantList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumDeclarationAST::setter_setMDefaultConstantName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    p->mProperty_mDefaultConstantName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mEnumTypeName,
                                                  const GALGAS_enumConstantList & in_mConstantList,
                                                  const GALGAS_lstring & in_mDefaultConstantName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mEnumTypeName (in_mEnumTypeName),
mProperty_mConstantList (in_mConstantList),
mProperty_mDefaultConstantName (in_mDefaultConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@enumDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_mIsPredefined, mProperty_mEnumTypeName, mProperty_mConstantList, mProperty_mDefaultConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  const GALGAS_enumDeclarationAST * p = (const GALGAS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumDeclarationAST_2D_weak::objectCompare (const GALGAS_enumDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_enumDeclarationAST_2D_weak::GALGAS_enumDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak & GALGAS_enumDeclarationAST_2D_weak::operator = (const GALGAS_enumDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak::GALGAS_enumDeclarationAST_2D_weak (const GALGAS_enumDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST_2D_weak::bang_enumDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumDeclarationAST) ;
      result = GALGAS_enumDeclarationAST ((cPtr_enumDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST_2D_weak::getter_mEnumTypeName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_enumDeclarationAST * objectPtr = (cPtr_enumDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_enumDeclarationAST) ;
      result = objectPtr->mProperty_mEnumTypeName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumDeclarationAST_2D_weak::getter_mConstantList (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_enumDeclarationAST * objectPtr = (cPtr_enumDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_enumDeclarationAST) ;
      result = objectPtr->mProperty_mConstantList ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST_2D_weak::getter_mDefaultConstantName (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    const cPtr_enumDeclarationAST * objectPtr = (cPtr_enumDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_enumDeclarationAST) ;
      result = objectPtr->mProperty_mDefaultConstantName ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumDeclarationAST_2D_weak::setter_setMEnumTypeName (const GALGAS_lstring inValue,
                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_enumDeclarationAST * objectPtr = (cPtr_enumDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_enumDeclarationAST) ;
      objectPtr->mProperty_mEnumTypeName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumDeclarationAST_2D_weak::setter_setMConstantList (const GALGAS_enumConstantList inValue,
                                                                 C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_enumDeclarationAST * objectPtr = (cPtr_enumDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_enumDeclarationAST) ;
      objectPtr->mProperty_mConstantList = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumDeclarationAST_2D_weak::setter_setMDefaultConstantName (const GALGAS_lstring inValue,
                                                                        C_Compiler * inCompiler COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_weakReference_class * ptr = (cPtr_weakReference_class *) mObjectPtr ;
    cPtr_enumDeclarationAST * objectPtr = (cPtr_enumDeclarationAST *) ptr->strongObject () ;
    if (objectPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (objectPtr, cPtr_enumDeclarationAST) ;
      objectPtr->mProperty_mDefaultConstantName = inValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ("enumDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  const GALGAS_enumDeclarationAST_2D_weak * p = (const GALGAS_enumDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumTypeForGeneration * p = (const cPtr_enumTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumTypeForGeneration::objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const {
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

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                        GALGAS_enumConstantListForGeneration::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_enumConstantListForGeneration & inAttribute_mConstantList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mConstantList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumTypeForGeneration::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumTypeForGeneration * p = (const cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    result = p->mProperty_mConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumTypeForGeneration::setter_setMConstantList (GALGAS_enumConstantListForGeneration inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    p->mProperty_mConstantList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                        const GALGAS_enumConstantListForGeneration & in_mConstantList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mConstantList (in_mConstantList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

void cPtr_enumTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@enumTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mConstantList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeForGeneration ("enumTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  const GALGAS_enumTypeForGeneration * p = (const GALGAS_enumTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

