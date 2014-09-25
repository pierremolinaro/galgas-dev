#ifndef struct_2D_terminalList_2D_element_1_DEFINED
#define struct_2D_terminalList_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-lexicalSentValueList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @terminalList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;
  public : GALGAS_string mAttribute_mSyntaxErrorMessage ;
  public : GALGAS_bool mAttribute_mIsEndOfTemplateMark ;
  public : GALGAS_bool mAttribute_mAtomicSelection ;
  public : GALGAS_uint mAttribute_mStyleIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalList_2D_element (const GALGAS_lstring & in_mTerminalName,
                                           const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                           const GALGAS_string & in_mSyntaxErrorMessage,
                                           const GALGAS_bool & in_mIsEndOfTemplateMark,
                                           const GALGAS_bool & in_mAtomicSelection,
                                           const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lexicalSentValueList & inOperand1,
                                                                  const class GALGAS_string & inOperand2,
                                                                  const class GALGAS_bool & inOperand3,
                                                                  const class GALGAS_bool & inOperand4,
                                                                  const class GALGAS_uint & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAtomicSelection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsEndOfTemplateMark (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_mSentAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStyleIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSyntaxErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

