#ifndef struct_2D_analysisContext_1_DEFINED
#define struct_2D_analysisContext_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "mapproxy-unifiedTypeMapProxy.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @analysisContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_analysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticContext mAttribute_mSemanticContext ;
  public : GALGAS_predefinedTypes mAttribute_mPredefinedTypes ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mSelfCopyTypeProxy ;
  public : GALGAS_string mAttribute_mSelfObjectCppName ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mSelfTypeProxy ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_analysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_analysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_analysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_analysisContext (const GALGAS_semanticContext & in_mSemanticContext,
                                   const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                   const GALGAS_unifiedTypeMapProxy & in_mSelfCopyTypeProxy,
                                   const GALGAS_string & in_mSelfObjectCppName,
                                   const GALGAS_unifiedTypeMapProxy & in_mSelfTypeProxy) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_analysisContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_analysisContext constructor_new (const class GALGAS_semanticContext & inOperand0,
                                                          const class GALGAS_predefinedTypes & inOperand1,
                                                          const class GALGAS_unifiedTypeMapProxy & inOperand2,
                                                          const class GALGAS_string & inOperand3,
                                                          const class GALGAS_unifiedTypeMapProxy & inOperand4
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_analysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypes reader_mPredefinedTypes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mSelfCopyTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSelfObjectCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mSelfTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticContext reader_mSemanticContext (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_analysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

