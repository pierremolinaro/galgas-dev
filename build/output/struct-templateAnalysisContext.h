#ifndef struct_2D_templateAnalysisContext_1_DEFINED
#define struct_2D_templateAnalysisContext_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-templateVariableMap-1.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateAnalysisContext struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticContext mAttribute_mSemanticContext ;
  public : GALGAS_predefinedTypes mAttribute_mPredefinedTypes ;
  public : GALGAS_templateVariableMap mAttribute_mTemplateVariableMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateAnalysisContext (const GALGAS_semanticContext & in_mSemanticContext,
                                           const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                           const GALGAS_templateVariableMap & in_mTemplateVariableMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateAnalysisContext extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateAnalysisContext constructor_new (const class GALGAS_semanticContext & inOperand0,
                                                                  const class GALGAS_predefinedTypes & inOperand1,
                                                                  const class GALGAS_templateVariableMap & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypes reader_mPredefinedTypes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticContext reader_mSemanticContext (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateVariableMap reader_mTemplateVariableMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateAnalysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

