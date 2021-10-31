#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateGetterCallInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateGetterCallInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

  public: GALGAS_templateGetterCallInExpressionAST_2D_weak & operator = (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateGetterCallInExpressionAST bang_templateGetterCallInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateGetterCallInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateGetterCallInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateGetterCallInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateConstructorAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateConstructorAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateConstructorAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateConstructorAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateConstructorAST_2D_weak (const class GALGAS_templateConstructorAST & inSource) ;

  public: GALGAS_templateConstructorAST_2D_weak & operator = (const class GALGAS_templateConstructorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateConstructorAST bang_templateConstructorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateConstructorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateConstructorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateConstructorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateConstructorAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFileWrapperTemplateCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateFileWrapperTemplateCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateFileWrapperTemplateCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak (const class GALGAS_templateFileWrapperTemplateCallAST & inSource) ;

  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak & operator = (const class GALGAS_templateFileWrapperTemplateCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFileWrapperTemplateCallAST bang_templateFileWrapperTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFileWrapperTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFileWrapperTemplateCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFileWrapperTemplateCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExtensionTemplateCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateExtensionTemplateCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateExtensionTemplateCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateExtensionTemplateCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateExtensionTemplateCallAST_2D_weak (const class GALGAS_templateExtensionTemplateCallAST & inSource) ;

  public: GALGAS_templateExtensionTemplateCallAST_2D_weak & operator = (const class GALGAS_templateExtensionTemplateCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateExtensionTemplateCallAST bang_templateExtensionTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExtensionTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExtensionTemplateCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateExtensionTemplateCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralStringExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralStringExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralStringExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralStringExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralStringExpressionAST_2D_weak (const class GALGAS_templateLiteralStringExpressionAST & inSource) ;

  public: GALGAS_templateLiteralStringExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralStringExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralStringExpressionAST bang_templateLiteralStringExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralStringExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralStringExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structFieldAccessTemplateExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structFieldAccessTemplateExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (const class GALGAS_structFieldAccessTemplateExpressionAST & inSource) ;

  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & operator = (const class GALGAS_structFieldAccessTemplateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structFieldAccessTemplateExpressionAST bang_structFieldAccessTemplateExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structFieldAccessTemplateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessTemplateExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOptionAccessAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateOptionAccessAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateOptionAccessAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateOptionAccessAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateOptionAccessAST_2D_weak (const class GALGAS_templateOptionAccessAST & inSource) ;

  public: GALGAS_templateOptionAccessAST_2D_weak & operator = (const class GALGAS_templateOptionAccessAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateOptionAccessAST bang_templateOptionAccessAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOptionAccessAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateOptionAccessAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateOptionAccessAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateOptionAccessAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTestDynamicClassAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateTestDynamicClassAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateTestDynamicClassAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateTestDynamicClassAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateTestDynamicClassAST_2D_weak (const class GALGAS_templateTestDynamicClassAST & inSource) ;

  public: GALGAS_templateTestDynamicClassAST_2D_weak & operator = (const class GALGAS_templateTestDynamicClassAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateTestDynamicClassAST bang_templateTestDynamicClassAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTestDynamicClassAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateTestDynamicClassAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateTestDynamicClassAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFunctionCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateFunctionCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFunctionCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateFunctionCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFunctionCallAST_2D_weak (const class GALGAS_templateFunctionCallAST & inSource) ;

  public: GALGAS_templateFunctionCallAST_2D_weak & operator = (const class GALGAS_templateFunctionCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFunctionCallAST bang_templateFunctionCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFunctionCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFunctionCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFunctionCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFunctionCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVarInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateVarInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateVarInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateVarInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateVarInExpressionAST_2D_weak (const class GALGAS_templateVarInExpressionAST & inSource) ;

  public: GALGAS_templateVarInExpressionAST_2D_weak & operator = (const class GALGAS_templateVarInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateVarInExpressionAST bang_templateVarInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVarInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateVarInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateVarInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringAST (const class cPtr_templateInstructionStringAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringAST constructor_new (const class GALGAS_string & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringAST : public cPtr_templateInstructionAST {
//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionStringAST_2D_weak (const class GALGAS_templateInstructionStringAST & inSource) ;

  public: GALGAS_templateInstructionStringAST_2D_weak & operator = (const class GALGAS_templateInstructionStringAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionStringAST bang_templateInstructionStringAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionForeachAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachAST_2D_weak (const class GALGAS_templateInstructionForeachAST & inSource) ;

  public: GALGAS_templateInstructionForeachAST_2D_weak & operator = (const class GALGAS_templateInstructionForeachAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachAST bang_templateInstructionForeachAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GALGAS_templateExpressionAST & outArgument0,
                                       C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public: virtual void nt_factor_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GALGAS_templateExpressionAST & outArgument0,
                                   C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_ (GALGAS_templateExpressionListAST & outArgument0,
                                                         C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public: virtual void nt_primary_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GALGAS_templateExpressionAST & outArgument0,
                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_factor_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_ (GALGAS_templateExpressionAST & outArgument0,
                                               C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_term_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_ (GALGAS_templateExpressionAST & outArgument0,
                                             C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_expression_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_ (GALGAS_templateExpressionAST & outArgument0,
                                                 C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public: virtual void nt_switch_5F_case_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                           C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                  C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_templateInstructionListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_templateInstructionListAST & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public: virtual void nt_term_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GALGAS_templateExpressionAST & outArgument0,
                                 C_Lexique_galgasTemplateScanner * inCompiler) ;

  public: virtual int32_t select_templateSyntax_0 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_1 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_2 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_3 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_4 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_5 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_6 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_7 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_8 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_9 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_10 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_11 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_12 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_13 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_14 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_15 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_16 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_17 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_18 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_19 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_20 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_21 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_22 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_23 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_24 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_25 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_26 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_27 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_28 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_29 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_30 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_31 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_32 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_33 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_34 (C_Lexique_galgasTemplateScanner *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringForGeneration (const class cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

  public: GALGAS_templateInstructionStringForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalImplicitRuleAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

  public: GALGAS_lexicalImplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalImplicitRuleAST bang_lexicalImplicitRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterSetMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterSetMatchAST bang_lexicalCharacterSetMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterMatchAST bang_lexicalCharacterMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterIntervalMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterIntervalMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (const class GALGAS_lexicalCharacterIntervalMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterIntervalMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterIntervalMatchAST bang_lexicalCharacterIntervalMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalStringMatchAST_2D_weak (const class GALGAS_lexicalStringMatchAST & inSource) ;

  public: GALGAS_lexicalStringMatchAST_2D_weak & operator = (const class GALGAS_lexicalStringMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalStringMatchAST bang_lexicalStringMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringNotMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringNotMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalStringNotMatchAST_2D_weak (const class GALGAS_lexicalStringNotMatchAST & inSource) ;

  public: GALGAS_lexicalStringNotMatchAST_2D_weak & operator = (const class GALGAS_lexicalStringNotMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalStringNotMatchAST bang_lexicalStringNotMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSimpleSendInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSimpleSendInstructionAST_2D_weak : public GALGAS_lexicalInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSimpleSendInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSimpleSendInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalSimpleSendInstructionAST_2D_weak (const class GALGAS_lexicalSimpleSendInstructionAST & inSource) ;

  public: GALGAS_lexicalSimpleSendInstructionAST_2D_weak & operator = (const class GALGAS_lexicalSimpleSendInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalSimpleSendInstructionAST bang_lexicalSimpleSendInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSimpleSendInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSimpleSendInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSimpleSendInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendTerminalByDefaultAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendTerminalByDefaultAST_2D_weak : public GALGAS_lexicalSendDefaultActionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSendTerminalByDefaultAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (const class GALGAS_lexicalSendTerminalByDefaultAST & inSource) ;

  public: GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & operator = (const class GALGAS_lexicalSendTerminalByDefaultAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalSendTerminalByDefaultAST bang_lexicalSendTerminalByDefaultAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendTerminalByDefaultAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendTerminalByDefaultAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendTerminalByDefaultAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalErrorByDefaultAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorByDefaultAST_2D_weak : public GALGAS_lexicalSendDefaultActionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorByDefaultAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalErrorByDefaultAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalErrorByDefaultAST_2D_weak (const class GALGAS_lexicalErrorByDefaultAST & inSource) ;

  public: GALGAS_lexicalErrorByDefaultAST_2D_weak & operator = (const class GALGAS_lexicalErrorByDefaultAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalErrorByDefaultAST bang_lexicalErrorByDefaultAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorByDefaultAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorByDefaultAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorByDefaultAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorByDefaultAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineInstructionAST_2D_weak : public GALGAS_lexicalInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRoutineInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalRoutineInstructionAST_2D_weak (const class GALGAS_lexicalRoutineInstructionAST & inSource) ;

  public: GALGAS_lexicalRoutineInstructionAST_2D_weak & operator = (const class GALGAS_lexicalRoutineInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalRoutineInstructionAST bang_lexicalRoutineInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputOutputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak : public GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (const class GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) ;

  public: GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalAttributeInputOutputArgumentAST bang_lexicalAttributeInputOutputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeInputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalAttributeInputArgumentAST_2D_weak (const class GALGAS_lexicalAttributeInputArgumentAST & inSource) ;

  public: GALGAS_lexicalAttributeInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalAttributeInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalAttributeInputArgumentAST bang_lexicalAttributeInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterInputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterInputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterInputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterInputArgumentAST_2D_weak (const class GALGAS_lexicalCharacterInputArgumentAST & inSource) ;

  public: GALGAS_lexicalCharacterInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalCharacterInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterInputArgumentAST bang_lexicalCharacterInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalUnsignedInputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalUnsignedInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalUnsignedInputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (const class GALGAS_lexicalUnsignedInputArgumentAST & inSource) ;

  public: GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalUnsignedInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalUnsignedInputArgumentAST bang_lexicalUnsignedInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalUnsignedInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalUnsignedInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalUnsignedInputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ;

