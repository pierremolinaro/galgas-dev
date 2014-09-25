#ifndef struct_2D_parsedComponentStruct_1_DEFINED
#define struct_2D_parsedComponentStruct_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-parsedGrammarComponentMap-1.h"
#include "map-parsedGuiComponentMap-1.h"
#include "map-parsedLexiqueComponentMap-1.h"
#include "map-parsedOptionComponentMap-1.h"
#include "map-parsedProgramComponentMap-1.h"
#include "map-parsedSemanticsComponentMap-1.h"
#include "map-parsedSyntaxComponentMap-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @parsedComponentStruct struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parsedComponentStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_parsedSemanticsComponentMap mAttribute_mParsedSemanticsComponentMap ;
  public : GALGAS_parsedLexiqueComponentMap mAttribute_mParsedLexiqueComponentMap ;
  public : GALGAS_parsedSyntaxComponentMap mAttribute_mParsedSyntaxComponentMap ;
  public : GALGAS_parsedOptionComponentMap mAttribute_mParsedOptionComponentMap ;
  public : GALGAS_parsedGrammarComponentMap mAttribute_mParsedGrammarComponentMap ;
  public : GALGAS_parsedProgramComponentMap mAttribute_mParsedProgramComponentMap ;
  public : GALGAS_parsedGuiComponentMap mAttribute_mParsedGuiComponentMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_parsedComponentStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_parsedComponentStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_parsedComponentStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_parsedComponentStruct (const GALGAS_parsedSemanticsComponentMap & in_mParsedSemanticsComponentMap,
                                         const GALGAS_parsedLexiqueComponentMap & in_mParsedLexiqueComponentMap,
                                         const GALGAS_parsedSyntaxComponentMap & in_mParsedSyntaxComponentMap,
                                         const GALGAS_parsedOptionComponentMap & in_mParsedOptionComponentMap,
                                         const GALGAS_parsedGrammarComponentMap & in_mParsedGrammarComponentMap,
                                         const GALGAS_parsedProgramComponentMap & in_mParsedProgramComponentMap,
                                         const GALGAS_parsedGuiComponentMap & in_mParsedGuiComponentMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parsedComponentStruct extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_parsedComponentStruct constructor_new (const class GALGAS_parsedSemanticsComponentMap & inOperand0,
                                                                const class GALGAS_parsedLexiqueComponentMap & inOperand1,
                                                                const class GALGAS_parsedSyntaxComponentMap & inOperand2,
                                                                const class GALGAS_parsedOptionComponentMap & inOperand3,
                                                                const class GALGAS_parsedGrammarComponentMap & inOperand4,
                                                                const class GALGAS_parsedProgramComponentMap & inOperand5,
                                                                const class GALGAS_parsedGuiComponentMap & inOperand6
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parsedComponentStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGrammarComponentMap reader_mParsedGrammarComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGuiComponentMap reader_mParsedGuiComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedLexiqueComponentMap reader_mParsedLexiqueComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedOptionComponentMap reader_mParsedOptionComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedProgramComponentMap reader_mParsedProgramComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSemanticsComponentMap reader_mParsedSemanticsComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSyntaxComponentMap reader_mParsedSyntaxComponentMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parsedComponentStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parsedComponentStruct ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

