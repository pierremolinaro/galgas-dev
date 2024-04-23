#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementForGeneration_2E_fixItReplace struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementForGeneration_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitElementForGeneration_2E_fixItReplace (const GALGAS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fixitElementForGeneration_2E_fixItReplace init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementForGeneration_2E_fixItReplace extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixitElementForGeneration_2E_fixItReplace class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitElementForGeneration_2E_fixItReplace class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementForGeneration_2E_fixItInsertBefore struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementForGeneration_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitElementForGeneration_2E_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fixitElementForGeneration_2E_fixItInsertBefore init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementForGeneration_2E_fixItInsertBefore extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixitElementForGeneration_2E_fixItInsertBefore class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitElementForGeneration_2E_fixItInsertBefore class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementForGeneration_2E_fixItInsertAfter struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementForGeneration_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitElementForGeneration_2E_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fixitElementForGeneration_2E_fixItInsertAfter init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementForGeneration_2E_fixItInsertAfter extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixitElementForGeneration_2E_fixItInsertAfter class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixitElementForGeneration_2E_fixItInsertAfter class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionKind_2E_letExp struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionKind_2E_letExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_constantName ;
  public: inline GALGAS_lstring readProperty_constantName (void) const {
    return mProperty_constantName ;
  }

  public: GALGAS_semanticExpressionAST mProperty_exp ;
  public: inline GALGAS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_location mProperty_endOfExp ;
  public: inline GALGAS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

  public: GALGAS_lstring mProperty_typeName ;
  public: inline GALGAS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifExpressionKind_2E_letExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantName = inValue ;
  }

  public: inline void setter_setExp (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

  public: inline void setter_setTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifExpressionKind_2E_letExp (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifExpressionKind_2E_letExp (const GALGAS_lstring & in_constantName,
                                             const GALGAS_semanticExpressionAST & in_exp,
                                             const GALGAS_location & in_endOfExp,
                                             const GALGAS_lstring & in_typeName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifExpressionKind_2E_letExp init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_location & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionKind_2E_letExp extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionKind_2E_letExp class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_location & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionKind_2E_letExp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionKind_2E_optionalMethodCall struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionKind_2E_optionalMethodCall : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_receiver ;
  public: inline GALGAS_semanticExpressionAST readProperty_receiver (void) const {
    return mProperty_receiver ;
  }

  public: GALGAS_lstring mProperty_optionalMethodName ;
  public: inline GALGAS_lstring readProperty_optionalMethodName (void) const {
    return mProperty_optionalMethodName ;
  }

  public: GALGAS_optionalMethodActualArgumentList mProperty_parameters ;
  public: inline GALGAS_optionalMethodActualArgumentList readProperty_parameters (void) const {
    return mProperty_parameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifExpressionKind_2E_optionalMethodCall (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReceiver (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_receiver = inValue ;
  }

  public: inline void setter_setOptionalMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionalMethodName = inValue ;
  }

  public: inline void setter_setParameters (const GALGAS_optionalMethodActualArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_parameters = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifExpressionKind_2E_optionalMethodCall (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifExpressionKind_2E_optionalMethodCall (const GALGAS_semanticExpressionAST & in_receiver,
                                                         const GALGAS_lstring & in_optionalMethodName,
                                                         const GALGAS_optionalMethodActualArgumentList & in_parameters) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifExpressionKind_2E_optionalMethodCall init_21__21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_optionalMethodActualArgumentList & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionKind_2E_optionalMethodCall extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionKind_2E_optionalMethodCall class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_optionalMethodActualArgumentList & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionKind_2E_optionalMethodCall class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_optionalMethodCall ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgument_2E_actualLetInput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgument_2E_actualLetInput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_typeName ;
  public: inline GALGAS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_lstring mProperty_constantName ;
  public: inline GALGAS_lstring readProperty_constantName (void) const {
    return mProperty_constantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualLetInput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgument_2E_actualLetInput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualLetInput (const GALGAS_lstring & in_typeName,
                                                                 const GALGAS_lstring & in_constantName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgument_2E_actualLetInput init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgument_2E_actualLetInput extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgument_2E_actualLetInput class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgument_2E_actualLetInput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgument_2E_actualLetInput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgument_2E_actualVarInput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgument_2E_actualVarInput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_typeName ;
  public: inline GALGAS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_lstring mProperty_variableName ;
  public: inline GALGAS_lstring readProperty_variableName (void) const {
    return mProperty_variableName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualVarInput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setVariableName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_variableName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgument_2E_actualVarInput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualVarInput (const GALGAS_lstring & in_typeName,
                                                                 const GALGAS_lstring & in_variableName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgument_2E_actualVarInput init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgument_2E_actualVarInput extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgument_2E_actualVarInput class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgument_2E_actualVarInput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgument_2E_actualVarInput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifTestForGeneration_2E_regular struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestForGeneration_2E_regular : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifTestForGeneration_2E_regular (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifTestForGeneration_2E_regular (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifTestForGeneration_2E_regular (const GALGAS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifTestForGeneration_2E_regular init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestForGeneration_2E_regular extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifTestForGeneration_2E_regular class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifTestForGeneration_2E_regular class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifTestForGeneration_2E_letExp struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestForGeneration_2E_letExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_targetVarCppName ;
  public: inline GALGAS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GALGAS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_testType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_testType (void) const {
    return mProperty_testType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifTestForGeneration_2E_letExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setExp (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

  public: inline void setter_setTestType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_testType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifTestForGeneration_2E_letExp (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifTestForGeneration_2E_letExp (const GALGAS_string & in_targetVarCppName,
                                                const GALGAS_semanticExpressionForGeneration & in_exp,
                                                const GALGAS_unifiedTypeMapEntry & in_targetType,
                                                const GALGAS_unifiedTypeMapEntry & in_testType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifTestForGeneration_2E_letExp init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestForGeneration_2E_letExp extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifTestForGeneration_2E_letExp class_func_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifTestForGeneration_2E_letExp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifTestForGeneration_2E_optionalExp struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestForGeneration_2E_optionalExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_targetVarCppName ;
  public: inline GALGAS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GALGAS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifTestForGeneration_2E_optionalExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setExp (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifTestForGeneration_2E_optionalExp (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifTestForGeneration_2E_optionalExp (const GALGAS_string & in_targetVarCppName,
                                                     const GALGAS_semanticExpressionForGeneration & in_exp,
                                                     const GALGAS_unifiedTypeMapEntry & in_targetType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifTestForGeneration_2E_optionalExp init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestForGeneration_2E_optionalExp extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifTestForGeneration_2E_optionalExp class_func_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifTestForGeneration_2E_optionalExp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifTestForGeneration_2E_optionalMethodCall struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifTestForGeneration_2E_optionalMethodCall : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_receiverExpression ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_receiverExpression (void) const {
    return mProperty_receiverExpression ;
  }

  public: GALGAS_lstring mProperty_optionalMethodName ;
  public: inline GALGAS_lstring readProperty_optionalMethodName (void) const {
    return mProperty_optionalMethodName ;
  }

  public: GALGAS_optionalMethodActualArgumentListForGeneration mProperty_parameters ;
  public: inline GALGAS_optionalMethodActualArgumentListForGeneration readProperty_parameters (void) const {
    return mProperty_parameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifTestForGeneration_2E_optionalMethodCall (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReceiverExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_receiverExpression = inValue ;
  }

  public: inline void setter_setOptionalMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionalMethodName = inValue ;
  }

  public: inline void setter_setParameters (const GALGAS_optionalMethodActualArgumentListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_parameters = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifTestForGeneration_2E_optionalMethodCall (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifTestForGeneration_2E_optionalMethodCall (const GALGAS_semanticExpressionForGeneration & in_receiverExpression,
                                                            const GALGAS_lstring & in_optionalMethodName,
                                                            const GALGAS_optionalMethodActualArgumentListForGeneration & in_parameters) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifTestForGeneration_2E_optionalMethodCall init_21__21__21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_optionalMethodActualArgumentListForGeneration & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifTestForGeneration_2E_optionalMethodCall extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifTestForGeneration_2E_optionalMethodCall class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_optionalMethodActualArgumentListForGeneration & inOperand2,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifTestForGeneration_2E_optionalMethodCall class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalMethodCall ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentForGeneration_2E_actualOutput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_expression ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_expression (void) const {
    return mProperty_expression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput (const GALGAS_semanticExpressionForGeneration & in_expression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                        class Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentForGeneration_2E_actualOutput ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                              Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GALGAS_lstringlist & ioArgument0,
                                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                       Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_primary_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                                      Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                                        Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public: virtual void nt_switch_5F_case_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                  Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_templateInstructionListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_templateInstructionListAST & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'term_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                        Lexique_galgasTemplateScanner * inCompiler) ;

  public: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_34 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_35 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_36 (Lexique_galgasTemplateScanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
