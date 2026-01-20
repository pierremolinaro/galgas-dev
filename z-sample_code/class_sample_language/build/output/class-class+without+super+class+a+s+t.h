#ifndef class_2D_class_2B_without_2B_super_2B_class_2B_a_2B_s_2B_t_DEFINED
#define class_2D_class_2B_without_2B_super_2B_class_2B_a_2B_s_2B_t_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-class+without+super+class+a+s+t-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classWithoutSuperClassAST class
//--------------------------------------------------------------------------------------------------

class cPtr_classWithoutSuperClassAST : public cPtr_declarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classWithoutSuperClassAST_init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler) ;


//--- Extension method buildGraph
  public: virtual void method_buildGraph (class GGS_inheritanceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (class GGS_string & arg_ioCodeToGenerate,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mClassName ;


//--- Default constructor
  public: cPtr_classWithoutSuperClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classWithoutSuperClassAST (const GGS_lstring & in_mClassName,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;


//----------------------------------------------------------------------------------------------------------------------

#endif

