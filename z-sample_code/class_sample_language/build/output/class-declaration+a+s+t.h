#ifndef class_2D_declaration_2B_a_2B_s_2B_t_DEFINED
#define class_2D_declaration_2B_a_2B_s_2B_t_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-declaration+a+s+t-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @declarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_declarationAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void declarationAST_init (Compiler * inCompiler) ;


//--- Extension method buildGraph
  public: virtual void method_buildGraph (class GGS_inheritanceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateCode
  public: virtual void method_generateCode (class GGS_string & arg_ioCodeToGenerate,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_declarationAST (Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;


//----------------------------------------------------------------------------------------------------------------------

#endif

