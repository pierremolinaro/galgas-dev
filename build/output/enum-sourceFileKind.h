#ifndef enum_2D_sourceFileKind_1_DEFINED
#define enum_2D_sourceFileKind_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @sourceFileKind enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sourceFileKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_sourceFileKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_externSourceFile,
    kEnum_lexiqueSourceFile,
    kEnum_guiSourceFile,
    kEnum_optionSourceFile,
    kEnum_syntaxSourceFile,
    kEnum_semanticsSourceFile,
    kEnum_grammarSourceFile,
    kEnum_programSourceFile
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sourceFileKind extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sourceFileKind constructor_externSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_grammarSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_guiSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_lexiqueSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_optionSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_programSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_semanticsSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_syntaxSourceFile (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sourceFileKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isExternSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGrammarSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGuiSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexiqueSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isOptionSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isProgramSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSemanticsSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSyntaxSourceFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sourceFileKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceFileKind ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

