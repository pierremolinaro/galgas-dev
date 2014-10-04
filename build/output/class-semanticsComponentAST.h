#ifndef class_2D_semanticsComponentAST_DEFINED
#define class_2D_semanticsComponentAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticsComponentAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticDeclarationListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @semanticsComponentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticsComponentAST : public acPtr_class {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSemanticsComponentName ;
  public : GALGAS_lstringlist mAttribute_mImportedComponentFileNameList ;
  public : GALGAS_semanticDeclarationListAST mAttribute_mSemanticDeclarationList ;
  public : GALGAS_location mAttribute_mEndOfSourceFile ;

//--- Constructor
  public : cPtr_semanticsComponentAST (const GALGAS_lstring & in_mSemanticsComponentName,
                                       const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                       const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                       const GALGAS_location & in_mEndOfSourceFile
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSemanticsComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mImportedComponentFileNameList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticDeclarationListAST reader_mSemanticDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSourceFile (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

