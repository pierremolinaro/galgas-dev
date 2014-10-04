#ifndef class_2D_classTypeForGeneration_DEFINED
#define class_2D_classTypeForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-classTypeForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-typedAttributeList.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @classTypeForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_classTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsAbstract ;
  public : GALGAS_lstring mAttribute_mClassTypeName ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mSuperClass ;
  public : GALGAS_typedAttributeList mAttribute_mAllTypedAttributeList ;
  public : GALGAS_typedAttributeList mAttribute_mTypedAttributeList ;
  public : GALGAS_bool mAttribute_mGenerateHeaderInSeparateFile ;

//--- Constructor
  public : cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                        const GALGAS_bool & in_mIsAbstract,
                                        const GALGAS_lstring & in_mClassTypeName,
                                        const GALGAS_unifiedTypeMapProxy & in_mSuperClass,
                                        const GALGAS_typedAttributeList & in_mAllTypedAttributeList,
                                        const GALGAS_typedAttributeList & in_mTypedAttributeList,
                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsAbstract (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mClassTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mSuperClass (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedAttributeList reader_mAllTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedAttributeList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

