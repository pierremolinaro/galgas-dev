#ifndef class_2D_externTypeDeclarationForGeneration_DEFINED
#define class_2D_externTypeDeclarationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-externTypeDeclarationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @externTypeDeclarationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_externTypeDeclarationForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mExternTypeName ;
  public : GALGAS_string mAttribute_mCppPreDeclarationCode ;
  public : GALGAS_string mAttribute_mCppClassCode ;

//--- Constructor
  public : cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                                    const GALGAS_string & in_mExternTypeName,
                                                    const GALGAS_string & in_mCppPreDeclarationCode,
                                                    const GALGAS_string & in_mCppClassCode
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mExternTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppClassCode (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

