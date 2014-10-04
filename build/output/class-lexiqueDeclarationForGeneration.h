#ifndef class_2D_lexiqueDeclarationForGeneration_DEFINED
#define class_2D_lexiqueDeclarationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexiqueDeclarationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexiqueDeclarationForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mLexiqueName ;
  public : GALGAS_string mAttribute_mHeaderContents ;
  public : GALGAS_string mAttribute_mCppContents ;
  public : GALGAS_string mAttribute_mCocoaHeader ;
  public : GALGAS_string mAttribute_mCocoaImplementation ;

//--- Constructor
  public : cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                 const GALGAS_string & in_mImplementationCppFileName,
                                                 const GALGAS_string & in_mLexiqueName,
                                                 const GALGAS_string & in_mHeaderContents,
                                                 const GALGAS_string & in_mCppContents,
                                                 const GALGAS_string & in_mCocoaHeader,
                                                 const GALGAS_string & in_mCocoaImplementation
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mHeaderContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCocoaHeader (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCocoaImplementation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

