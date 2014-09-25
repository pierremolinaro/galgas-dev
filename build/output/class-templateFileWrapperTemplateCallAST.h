#ifndef class_2D_templateFileWrapperTemplateCallAST_DEFINED
#define class_2D_templateFileWrapperTemplateCallAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateFileWrapperTemplateCallAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-templateExpressionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @templateFileWrapperTemplateCallAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateFileWrapperTemplateCallAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFileWrapperName ;
  public : GALGAS_lstring mAttribute_mTemplateName ;
  public : GALGAS_templateExpressionListAST mAttribute_mOutExpressionList ;

//--- Constructor
  public : cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                    const GALGAS_lstring & in_mTemplateName,
                                                    const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFileWrapperName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTemplateName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST reader_mOutExpressionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

