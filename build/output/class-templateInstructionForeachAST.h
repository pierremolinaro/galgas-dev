//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    File 'class-templateInstructionForeachAST.h'                                     *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_templateInstructionForeachAST_DEFINED
#define class_2D_templateInstructionForeachAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionForeachAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
#include "list-templateInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @templateInstructionForeachAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionForeachAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsAscending ;
  public : GALGAS_templateExpressionAST mAttribute_mExpression ;
  public : GALGAS_string mAttribute_mPrefix ;
  public : GALGAS_templateInstructionListAST mAttribute_mBeforeInstructionList ;
  public : GALGAS_templateInstructionListAST mAttribute_mDoInstructionList ;
  public : GALGAS_lstring mAttribute_mIndexIdentifier ;
  public : GALGAS_templateInstructionListAST mAttribute_mBetweenInstructionList ;
  public : GALGAS_templateInstructionListAST mAttribute_mAfterInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                               const GALGAS_templateExpressionAST & in_mExpression,
                                               const GALGAS_string & in_mPrefix,
                                               const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                               const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                               const GALGAS_lstring & in_mIndexIdentifier,
                                               const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                               const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsAscending (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mPrefix (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mIndexIdentifier (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

