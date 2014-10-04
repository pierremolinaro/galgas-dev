#ifndef class_2D_templateFileWrapperWithStaticPathAST_DEFINED
#define class_2D_templateFileWrapperWithStaticPathAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateFileWrapperWithStaticPathAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @templateFileWrapperWithStaticPathAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateFileWrapperWithStaticPathAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFileWrapperName ;
  public : GALGAS_uint mAttribute_mFileIndex ;

//--- Constructor
  public : cPtr_templateFileWrapperWithStaticPathAST (const GALGAS_lstring & in_mFileWrapperName,
                                                      const GALGAS_uint & in_mFileIndex
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFileWrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mFileIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

